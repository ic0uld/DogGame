// Copyright 2021 Artur 'NijoMeisteR' Dworaczek. All Rights Reserved.

#pragma once
#pragma warning(disable:4996)
#pragma warning(disable:4265)
#pragma warning(disable:4701)

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/Texture2D.h"
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT

#if USING_CODE_ANALYSIS
MSVC_PRAGMA(warning(push))
MSVC_PRAGMA(warning(disable : ALL_CODE_ANALYSIS_WARNINGS))
#endif

#include "OnlineSubsystemSteam.h"
#include <steam/steam_api.h>

#if USING_CODE_ANALYSIS
MSVC_PRAGMA(warning(pop))
#endif


#pragma pop_macro("ARRAY_COUNT")
#include "DownloadSteamLeaderboardEntries.generated.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
UENUM(BlueprintType)
enum class ELeaderboardDataRequestUE4 : uint8
{
	LDR_ELeaderboardDataRequestGlobal                UMETA(DisplayName = "Request Global"),
	LDR_ELeaderboardDataRequestGlobalAroundUser      UMETA(DisplayName = "Request Global Around User"),
	LDR_ELeaderboardDataRequestFriends               UMETA(DisplayName = "Request Friends"),
};

/////////////////////////////////////////////////////////////////////////////////////////////////////
USTRUCT(BlueprintType)
struct FLILeaderboardDataRequestUE4
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Simple Steam Leaderboards")
		int32 GlobalRank;
	UPROPERTY(BlueprintReadOnly, Category = "Simple Steam Leaderboards")
		UTexture2D* SteamAvatar;
	UPROPERTY(BlueprintReadOnly, Category = "Simple Steam Leaderboards")
		FString SteamID;
	UPROPERTY(BlueprintReadOnly, Category = "Simple Steam Leaderboards")
		FText Name;
	UPROPERTY(BlueprintReadOnly, Category = "Simple Steam Leaderboards")
		int32 Score;

	// Set
	void SetGlobalRank(const int32 NewGlobalRank) { GlobalRank = NewGlobalRank; }
	void SetSteamAvatar(UTexture2D* NewSteamAvatar) { SteamAvatar = NewSteamAvatar; }
	void SetSteamID(const FString NewSteamID) { SteamID = NewSteamID; }
	void SetName(const FText NewName) { Name = NewName; }
	void SetScore(const int32 NewScore) { Score = NewScore; }

	// Get
	int32 GetGlobalRank() { return GlobalRank; }
	UTexture2D* GetSteamAvatar() { return SteamAvatar; }
	FString GetSteamID() { return SteamID; }
	FText GetName() { return Name; }
	int32 GetScore() { return Score; }

	// Constructor
	FLILeaderboardDataRequestUE4()
	{
		GlobalRank = 0;
		SteamAvatar = NULL;
		SteamID = "";
		Name = FText::FromString(TEXT(""));
		Score = 0;
	}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseDelegatge, const TArray<FLILeaderboardDataRequestUE4>&, DownloadedEntries);

/////////////////////////////////////////////////////////////////////////////////////////////////////
UCLASS()
class SIMPLESTEAMLEADERBOARDS_API UDownloadSteamLeaderboardEntries : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FResponseDelegatge onSuccess;

	UPROPERTY(BlueprintAssignable)
		FResponseDelegatge onFailure;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Simple Steam Leaderboards")
		static UDownloadSteamLeaderboardEntries* DownloadLeaderboardEntries(FString SteamLeaderboardName, ELeaderboardDataRequestUE4 DataRequestType, int32 MaxAmountOfEntries = 10, int32 RangeStart = -5, int32 RangeEnd = 4);


	UPROPERTY()
		FString steamLeaderboardName;

	UPROPERTY()
		ELeaderboardDataRequestUE4 dataRequestType;

	UPROPERTY()
		int32 maxAmountOfEntries;

	UPROPERTY()
		int32 rangeStart;

	UPROPERTY()
		int32 rangeEnd;
private:
	virtual void Activate() override;

	void FindSteamLeaderboard();
	void OnSteamLeaderboardFound(LeaderboardFindResult_t* pCallback, bool bIOFailure);
	CCallResult<UDownloadSteamLeaderboardEntries, LeaderboardFindResult_t> m_callResultFindLeaderboard;

	SteamLeaderboard_t foundSteamLeaderboard;

	void DownloadSteamLeaderboardEntries();
	void OnDownloadedSteamLeaderboardEntries(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure);
	CCallResult<UDownloadSteamLeaderboardEntries, LeaderboardScoresDownloaded_t> m_callDownloadedSteamLeaderboardEntries;

	TArray<FLILeaderboardDataRequestUE4> DownloadedEntries;
};
