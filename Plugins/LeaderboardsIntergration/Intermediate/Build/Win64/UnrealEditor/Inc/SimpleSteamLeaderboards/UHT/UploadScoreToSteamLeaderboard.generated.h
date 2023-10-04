// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UploadScoreToSteamLeaderboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUploadScoreToSteamLeaderboard;
enum class EEasyLeaderboardUploadScoreMethod : uint8;
enum class ELeaderboardUploadScoreMethodUE4 : uint8;
struct FSteamLeaderboardUploadResult;
#ifdef SIMPLESTEAMLEADERBOARDS_UploadScoreToSteamLeaderboard_generated_h
#error "UploadScoreToSteamLeaderboard.generated.h already included, missing '#pragma once' in UploadScoreToSteamLeaderboard.h"
#endif
#define SIMPLESTEAMLEADERBOARDS_UploadScoreToSteamLeaderboard_generated_h

#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics; \
	SIMPLESTEAMLEADERBOARDS_API static class UScriptStruct* StaticStruct();


template<> SIMPLESTEAMLEADERBOARDS_API UScriptStruct* StaticStruct<struct FSteamLeaderboardUploadResult>();

#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_61_DELEGATE \
SIMPLESTEAMLEADERBOARDS_API void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, FSteamLeaderboardUploadResult SteamUploadResult);


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_SPARSE_DATA
#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadScoreToSteamLeaderboard);


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadScoreToSteamLeaderboard);


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_ACCESSORS
#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUploadScoreToSteamLeaderboard(); \
	friend struct Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics; \
public: \
	DECLARE_CLASS(UUploadScoreToSteamLeaderboard, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSteamLeaderboards"), NO_API) \
	DECLARE_SERIALIZER(UUploadScoreToSteamLeaderboard)


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUUploadScoreToSteamLeaderboard(); \
	friend struct Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics; \
public: \
	DECLARE_CLASS(UUploadScoreToSteamLeaderboard, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSteamLeaderboards"), NO_API) \
	DECLARE_SERIALIZER(UUploadScoreToSteamLeaderboard)


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUploadScoreToSteamLeaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUploadScoreToSteamLeaderboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUploadScoreToSteamLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUploadScoreToSteamLeaderboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUploadScoreToSteamLeaderboard(UUploadScoreToSteamLeaderboard&&); \
	NO_API UUploadScoreToSteamLeaderboard(const UUploadScoreToSteamLeaderboard&); \
public: \
	NO_API virtual ~UUploadScoreToSteamLeaderboard();


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUploadScoreToSteamLeaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUploadScoreToSteamLeaderboard(UUploadScoreToSteamLeaderboard&&); \
	NO_API UUploadScoreToSteamLeaderboard(const UUploadScoreToSteamLeaderboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUploadScoreToSteamLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUploadScoreToSteamLeaderboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUploadScoreToSteamLeaderboard) \
	NO_API virtual ~UUploadScoreToSteamLeaderboard();


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_64_PROLOG
#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_SPARSE_DATA \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_RPC_WRAPPERS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_ACCESSORS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_INCLASS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_SPARSE_DATA \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_ACCESSORS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_INCLASS_NO_PURE_DECLS \
	FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESTEAMLEADERBOARDS_API UClass* StaticClass<class UUploadScoreToSteamLeaderboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h


#define FOREACH_ENUM_ELEADERBOARDUPLOADSCOREMETHODUE4(op) \
	op(ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodNone) \
	op(ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodKeepBest) \
	op(ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodForceUpdate) 

enum class ELeaderboardUploadScoreMethodUE4 : uint8;
template<> struct TIsUEnumClass<ELeaderboardUploadScoreMethodUE4> { enum { Value = true }; };
template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<ELeaderboardUploadScoreMethodUE4>();

#define FOREACH_ENUM_EEASYLEADERBOARDUPLOADSCOREMETHOD(op) \
	op(EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodNone) \
	op(EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodSubtract) \
	op(EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodAdd) 

enum class EEasyLeaderboardUploadScoreMethod : uint8;
template<> struct TIsUEnumClass<EEasyLeaderboardUploadScoreMethod> { enum { Value = true }; };
template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<EEasyLeaderboardUploadScoreMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
