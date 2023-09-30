// Copyright 2021 Artur 'NijoMeisteR' Dworaczek. All Rights Reserved.

#include "DownloadSteamLeaderboardEntries.h"
#include "Engine.h"
#include <algorithm>
#include <string>

static UTexture2D* ConvertToTexture2D(BYTE* data, int width, int height)
{
	UTexture2D* icon = UTexture2D::CreateTransient(width, height, PF_R8G8B8A8);

	uint8* MipData = (uint8*)icon->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(MipData, (void*)data, width * height * 4);

	icon->PlatformData->Mips[0].BulkData.Unlock();
	icon->NeverStream = true;
	icon->UpdateResource();

	return icon;
}

UDownloadSteamLeaderboardEntries* UDownloadSteamLeaderboardEntries::DownloadLeaderboardEntries(FString SteamLeaderboardName, ELeaderboardDataRequestUE4 DataRequestType, int32 MaxAmountOfEntries, int32 RangeStart, int32 RangeEnd)
{
	UDownloadSteamLeaderboardEntries* selfRef = NewObject<UDownloadSteamLeaderboardEntries>();

	selfRef->steamLeaderboardName = SteamLeaderboardName;
	selfRef->dataRequestType = DataRequestType;
	selfRef->maxAmountOfEntries = MaxAmountOfEntries;
	selfRef->rangeStart = RangeStart;
	selfRef->rangeEnd = RangeEnd;

	return selfRef;
}

void UDownloadSteamLeaderboardEntries::Activate()
{
	if (SteamAPI_Init() && SteamUser()->BLoggedOn())
	{
		FindSteamLeaderboard();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to initialize the Steam API!"));

		onFailure.Broadcast(DownloadedEntries);
		RemoveFromRoot();
	}
}

void UDownloadSteamLeaderboardEntries::FindSteamLeaderboard()
{
	const char* LeaderboardNameChar = TCHAR_TO_ANSI(*steamLeaderboardName);
	SteamAPICall_t FoundLeaderboard = SteamUserStats()->FindLeaderboard(LeaderboardNameChar);

	m_callResultFindLeaderboard.Set(FoundLeaderboard, this, &UDownloadSteamLeaderboardEntries::OnSteamLeaderboardFound);
}

void UDownloadSteamLeaderboardEntries::OnSteamLeaderboardFound(LeaderboardFindResult_t* pCallback, bool bIOFailure)
{
	if (!bIOFailure) 
	{
		foundSteamLeaderboard = pCallback->m_hSteamLeaderboard;

		if (foundSteamLeaderboard != 0) 
		{
			DownloadSteamLeaderboardEntries();
		} 
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to find table! (Table ID = 0)"));

			onFailure.Broadcast(DownloadedEntries);
			RemoveFromRoot();
		}
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IO Failure! (Failed to find leaderboard)"));

		onFailure.Broadcast(DownloadedEntries);
		RemoveFromRoot();
	}
}

void UDownloadSteamLeaderboardEntries::DownloadSteamLeaderboardEntries()
{
	if (foundSteamLeaderboard != 0)
	{
		ELeaderboardDataRequest DataRequest;
		switch (dataRequestType)
		{
			case ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobal:
				DataRequest = ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobal;
				break;

			case ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobalAroundUser:
				DataRequest = ELeaderboardDataRequest::k_ELeaderboardDataRequestGlobalAroundUser;
				break;

			case ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestFriends:
				DataRequest = ELeaderboardDataRequest::k_ELeaderboardDataRequestFriends;
				break;
		}

		SteamAPICall_t hSteamAPICall = SteamUserStats()->DownloadLeaderboardEntries(foundSteamLeaderboard, DataRequest, rangeStart, rangeEnd);
		m_callDownloadedSteamLeaderboardEntries.Set(hSteamAPICall, this, &UDownloadSteamLeaderboardEntries::OnDownloadedSteamLeaderboardEntries);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to find leaderboard! (Leaderboard ID = 0)"));

		onFailure.Broadcast(DownloadedEntries);
		RemoveFromRoot();
	}
}

void UDownloadSteamLeaderboardEntries::OnDownloadedSteamLeaderboardEntries(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure)
{
	if (!bIOFailure)
	{
		FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get());
		SteamLeaderboardEntries_t Entries = pCallback->m_hSteamLeaderboardEntries;

		maxAmountOfEntries = std::min(pCallback->m_cEntryCount, maxAmountOfEntries);

		SteamSubsystem->ExecuteNextTick([Entries, this] {
			LeaderboardEntry_t SteamLeaderboardEntry;

			for (int index = 0; index < maxAmountOfEntries; index++)
			{
				SteamUserStats()->GetDownloadedLeaderboardEntry(Entries, index, &SteamLeaderboardEntry, NULL, 0);

				FLILeaderboardDataRequestUE4 Entry;
				Entry.SetGlobalRank(SteamLeaderboardEntry.m_nGlobalRank);
				Entry.SetSteamID(ANSI_TO_TCHAR(std::to_string(SteamLeaderboardEntry.m_steamIDUser.ConvertToUint64()).c_str()));
				Entry.SetName(FText::FromString(UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(SteamLeaderboardEntry.m_steamIDUser))));
				Entry.SetScore(SteamLeaderboardEntry.m_nScore);

				// Fetch and Convert Steam Avatar to Texture2D.
				int SteamAvatar = SteamFriends()->GetLargeFriendAvatar(SteamLeaderboardEntry.m_steamIDUser);
				while (SteamAvatar == -1 && SteamAvatar != 0) {
					SteamAvatar = SteamFriends()->GetLargeFriendAvatar(SteamLeaderboardEntry.m_steamIDUser);
				}

				if (SteamAvatar != 0)
				{
					uint32 achievementIconWidth, achievementIconHeight;
					SteamUtils()->GetImageSize(SteamAvatar, &achievementIconWidth, &achievementIconHeight);

					const int iconSizeinBytes = achievementIconWidth * achievementIconHeight * 4;
					BYTE* iconBuffer = new BYTE[iconSizeinBytes];
					SteamUtils()->GetImageRGBA(SteamAvatar, (uint8*)iconBuffer, iconSizeinBytes);

					Entry.SetSteamAvatar(ConvertToTexture2D(iconBuffer, achievementIconWidth, achievementIconHeight));
				}

				DownloadedEntries.Add(Entry);
			}

			onSuccess.Broadcast(DownloadedEntries);
		});
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("IO Failure! (Failed to download leaderboard entries)"));

		onFailure.Broadcast(DownloadedEntries);
	}

	RemoveFromRoot();
}
