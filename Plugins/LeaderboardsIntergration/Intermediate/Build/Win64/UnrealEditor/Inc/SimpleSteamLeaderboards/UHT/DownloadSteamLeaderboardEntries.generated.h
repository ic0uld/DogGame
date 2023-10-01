// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DownloadSteamLeaderboardEntries.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDownloadSteamLeaderboardEntries;
enum class ELeaderboardDataRequestUE4 : uint8;
struct FLILeaderboardDataRequestUE4;
#ifdef SIMPLESTEAMLEADERBOARDS_DownloadSteamLeaderboardEntries_generated_h
#error "DownloadSteamLeaderboardEntries.generated.h already included, missing '#pragma once' in DownloadSteamLeaderboardEntries.h"
#endif
#define SIMPLESTEAMLEADERBOARDS_DownloadSteamLeaderboardEntries_generated_h

#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics; \
	SIMPLESTEAMLEADERBOARDS_API static class UScriptStruct* StaticStruct();


template<> SIMPLESTEAMLEADERBOARDS_API UScriptStruct* StaticStruct<struct FLILeaderboardDataRequestUE4>();

#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_81_DELEGATE \
SIMPLESTEAMLEADERBOARDS_API void FResponseDelegatge_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegatge, TArray<FLILeaderboardDataRequestUE4> const& DownloadedEntries);


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_SPARSE_DATA
#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries);


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries);


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_ACCESSORS
#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDownloadSteamLeaderboardEntries(); \
	friend struct Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics; \
public: \
	DECLARE_CLASS(UDownloadSteamLeaderboardEntries, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSteamLeaderboards"), NO_API) \
	DECLARE_SERIALIZER(UDownloadSteamLeaderboardEntries)


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUDownloadSteamLeaderboardEntries(); \
	friend struct Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics; \
public: \
	DECLARE_CLASS(UDownloadSteamLeaderboardEntries, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleSteamLeaderboards"), NO_API) \
	DECLARE_SERIALIZER(UDownloadSteamLeaderboardEntries)


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadSteamLeaderboardEntries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadSteamLeaderboardEntries) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadSteamLeaderboardEntries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadSteamLeaderboardEntries); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadSteamLeaderboardEntries(UDownloadSteamLeaderboardEntries&&); \
	NO_API UDownloadSteamLeaderboardEntries(const UDownloadSteamLeaderboardEntries&); \
public: \
	NO_API virtual ~UDownloadSteamLeaderboardEntries();


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDownloadSteamLeaderboardEntries(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDownloadSteamLeaderboardEntries(UDownloadSteamLeaderboardEntries&&); \
	NO_API UDownloadSteamLeaderboardEntries(const UDownloadSteamLeaderboardEntries&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDownloadSteamLeaderboardEntries); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDownloadSteamLeaderboardEntries); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDownloadSteamLeaderboardEntries) \
	NO_API virtual ~UDownloadSteamLeaderboardEntries();


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_84_PROLOG
#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_RPC_WRAPPERS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_ACCESSORS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_INCLASS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_ACCESSORS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_INCLASS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLESTEAMLEADERBOARDS_API UClass* StaticClass<class UDownloadSteamLeaderboardEntries>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Montee_SourceTree_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h


#define FOREACH_ENUM_ELEADERBOARDDATAREQUESTUE4(op) \
	op(ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobal) \
	op(ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobalAroundUser) \
	op(ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestFriends) 

enum class ELeaderboardDataRequestUE4 : uint8;
template<> struct TIsUEnumClass<ELeaderboardDataRequestUE4> { enum { Value = true }; };
template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<ELeaderboardDataRequestUE4>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
