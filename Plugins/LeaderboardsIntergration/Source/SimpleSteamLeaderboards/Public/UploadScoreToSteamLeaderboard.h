// Copyright 2021 Artur 'NijoMeisteR' Dworaczek. All Rights Reserved.

#pragma once
#pragma warning(disable:4996)
#pragma warning(disable:4265)
#pragma warning(disable:4701)

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnlineSubsystemSteam.h"
#include <steam/steam_api.h>
#include "UploadScoreToSteamLeaderboard.generated.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
USTRUCT(BlueprintType, Category = "Simple Steam Leaderboards")
struct FSteamLeaderboardUploadResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simple Steam Leaderboards")
		bool Success;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simple Steam Leaderboards")
		int32 Score;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simple Steam Leaderboards")
		bool bScoreChanged;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simple Steam Leaderboards")
		int32 GlobalRankNew;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Simple Steam Leaderboards")
		int32 GlobalRankPrevious;

	// Constructor
	FSteamLeaderboardUploadResult()
	{
		Success = false;
		Score = 0;
		bScoreChanged = false;
		GlobalRankNew = 0;
		GlobalRankPrevious = 0;
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
UENUM(BlueprintType, Category = "Simple Steam Leaderboards")
enum class ELeaderboardUploadScoreMethodUE4 : uint8
{
	LUSM_ELeaderboardUploadScoreMethodNone             UMETA(DisplayName = "None"),
	LUSM_ELeaderboardUploadScoreMethodKeepBest         UMETA(DisplayName = "Keep Best"),
	LUSM_ELeaderboardUploadScoreMethodForceUpdate      UMETA(DisplayName = "Force Update"),
};

UENUM(BlueprintType, Category = "Simple Steam Leaderboards")
enum class EEasyLeaderboardUploadScoreMethod : uint8
{
	ELUSM_EEasyLeaderboardUploadScoreMethodNone         UMETA(DisplayName = "None"),
	ELUSM_EEasyLeaderboardUploadScoreMethodSubtract     UMETA(DisplayName = "Remove From Current Score"),
	ELUSM_EEasyLeaderboardUploadScoreMethodAdd          UMETA(DisplayName = "Add Onto Current Score"),
};

/////////////////////////////////////////////////////////////////////////////////////////////////////
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseDelegate, FSteamLeaderboardUploadResult, SteamUploadResult);

/////////////////////////////////////////////////////////////////////////////////////////////////////
UCLASS()
class SIMPLESTEAMLEADERBOARDS_API UUploadScoreToSteamLeaderboard : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
		FResponseDelegate onSuccess;

	UPROPERTY(BlueprintAssignable)
		FResponseDelegate onFailure;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Simple Steam Leaderboards")
		static UUploadScoreToSteamLeaderboard* UploadScoreToSteamLeaderboard(FString SteamLeaderboardName, int32 Score, ELeaderboardUploadScoreMethodUE4 UploadMethod, EEasyLeaderboardUploadScoreMethod EasyUploadScoreMethod);


	UPROPERTY()
		FString steamLeaderboardName;

	UPROPERTY()
		int32 score;

	UPROPERTY()
		ELeaderboardUploadScoreMethodUE4 uploadMethod;

	UPROPERTY()
		EEasyLeaderboardUploadScoreMethod easyUploadScoreMethod;
	
	UPROPERTY()
		FSteamLeaderboardUploadResult result;

private:
	virtual void Activate() override;

	void FindSteamLeaderboard();
	void OnSteamLeaderboardFound(LeaderboardFindResult_t* pCallback, bool bIOFailure);
	CCallResult<UUploadScoreToSteamLeaderboard, LeaderboardFindResult_t> m_callResultFindLeaderboard;

	SteamLeaderboard_t foundSteamLeaderboard;

	void UploadScoreToSteamLeaderboard();
	void OnSteamLeaderboardScoreUploaded(LeaderboardScoreUploaded_t* pCallback, bool bIOFailure);
	CCallResult<UUploadScoreToSteamLeaderboard, LeaderboardScoreUploaded_t> m_callSteamLeaderboardScoreUploaded;

	void DownloadSteamLeaderboardPersonalScore();
	void OnDownloadedSteamLeaderboardPersonalScore(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure);
	CCallResult<UUploadScoreToSteamLeaderboard, LeaderboardScoresDownloaded_t> m_callDownloadedSteamLeaderboardEntries;
};
