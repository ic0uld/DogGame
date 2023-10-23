// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../SourcTree/DogsClub/Plugins/LeaderboardsIntergration/Source/SimpleSteamLeaderboards/Public/UploadScoreToSteamLeaderboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUploadScoreToSteamLeaderboard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLESTEAMLEADERBOARDS_API UClass* Z_Construct_UClass_UUploadScoreToSteamLeaderboard();
	SIMPLESTEAMLEADERBOARDS_API UClass* Z_Construct_UClass_UUploadScoreToSteamLeaderboard_NoRegister();
	SIMPLESTEAMLEADERBOARDS_API UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod();
	SIMPLESTEAMLEADERBOARDS_API UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4();
	SIMPLESTEAMLEADERBOARDS_API UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature();
	SIMPLESTEAMLEADERBOARDS_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult();
	UPackage* Z_Construct_UPackage__Script_SimpleSteamLeaderboards();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult;
class UScriptStruct* FSteamLeaderboardUploadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult, (UObject*)Z_Construct_UPackage__Script_SimpleSteamLeaderboards(), TEXT("SteamLeaderboardUploadResult"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.OuterSingleton;
}
template<> SIMPLESTEAMLEADERBOARDS_API UScriptStruct* StaticStruct<FSteamLeaderboardUploadResult>()
{
	return FSteamLeaderboardUploadResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[];
#endif
		static void NewProp_bScoreChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simple Steam Leaderboards" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardUploadResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FSteamLeaderboardUploadResult*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamLeaderboardUploadResult), &Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardUploadResult, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
	{
		((FSteamLeaderboardUploadResult*)Obj)->bScoreChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSteamLeaderboardUploadResult), &Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardUploadResult, GlobalRankNew), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankNew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardUploadResult, GlobalRankPrevious), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankPrevious_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_bScoreChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewProp_GlobalRankPrevious,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardUploadResult",
		sizeof(FSteamLeaderboardUploadResult),
		alignof(FSteamLeaderboardUploadResult),
		Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4;
	static UEnum* ELeaderboardUploadScoreMethodUE4_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4, (UObject*)Z_Construct_UPackage__Script_SimpleSteamLeaderboards(), TEXT("ELeaderboardUploadScoreMethodUE4"));
		}
		return Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.OuterSingleton;
	}
	template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<ELeaderboardUploadScoreMethodUE4>()
	{
		return ELeaderboardUploadScoreMethodUE4_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enumerators[] = {
		{ "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodNone", (int64)ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodNone },
		{ "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodKeepBest", (int64)ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodKeepBest },
		{ "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodForceUpdate", (int64)ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodForceUpdate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simple Steam Leaderboards" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LUSM_ELeaderboardUploadScoreMethodForceUpdate.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LUSM_ELeaderboardUploadScoreMethodForceUpdate.DisplayName", "Force Update" },
		{ "LUSM_ELeaderboardUploadScoreMethodForceUpdate.Name", "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodForceUpdate" },
		{ "LUSM_ELeaderboardUploadScoreMethodKeepBest.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LUSM_ELeaderboardUploadScoreMethodKeepBest.DisplayName", "Keep Best" },
		{ "LUSM_ELeaderboardUploadScoreMethodKeepBest.Name", "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodKeepBest" },
		{ "LUSM_ELeaderboardUploadScoreMethodNone.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LUSM_ELeaderboardUploadScoreMethodNone.DisplayName", "None" },
		{ "LUSM_ELeaderboardUploadScoreMethodNone.Name", "ELeaderboardUploadScoreMethodUE4::LUSM_ELeaderboardUploadScoreMethodNone" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
		nullptr,
		"ELeaderboardUploadScoreMethodUE4",
		"ELeaderboardUploadScoreMethodUE4",
		Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4()
	{
		if (!Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.InnerSingleton, Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod;
	static UEnum* EEasyLeaderboardUploadScoreMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod, (UObject*)Z_Construct_UPackage__Script_SimpleSteamLeaderboards(), TEXT("EEasyLeaderboardUploadScoreMethod"));
		}
		return Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.OuterSingleton;
	}
	template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<EEasyLeaderboardUploadScoreMethod>()
	{
		return EEasyLeaderboardUploadScoreMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enumerators[] = {
		{ "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodNone", (int64)EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodNone },
		{ "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodSubtract", (int64)EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodSubtract },
		{ "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodAdd", (int64)EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodAdd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simple Steam Leaderboards" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodAdd.DisplayName", "Add Onto Current Score" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodAdd.Name", "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodAdd" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodNone.DisplayName", "None" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodNone.Name", "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodNone" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodSubtract.DisplayName", "Remove From Current Score" },
		{ "ELUSM_EEasyLeaderboardUploadScoreMethodSubtract.Name", "EEasyLeaderboardUploadScoreMethod::ELUSM_EEasyLeaderboardUploadScoreMethodSubtract" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
		nullptr,
		"EEasyLeaderboardUploadScoreMethod",
		"EEasyLeaderboardUploadScoreMethod",
		Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod()
	{
		if (!Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.InnerSingleton, Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleSteamLeaderboards_eventResponseDelegate_Parms
		{
			FSteamLeaderboardUploadResult SteamUploadResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamUploadResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::NewProp_SteamUploadResult = { "SteamUploadResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SimpleSteamLeaderboards_eventResponseDelegate_Parms, SteamUploadResult), Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult, METADATA_PARAMS(nullptr, 0) }; // 211349858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::NewProp_SteamUploadResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards, nullptr, "ResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::_Script_SimpleSteamLeaderboards_eventResponseDelegate_Parms), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, FSteamLeaderboardUploadResult SteamUploadResult)
{
	struct _Script_SimpleSteamLeaderboards_eventResponseDelegate_Parms
	{
		FSteamLeaderboardUploadResult SteamUploadResult;
	};
	_Script_SimpleSteamLeaderboards_eventResponseDelegate_Parms Parms;
	Parms.SteamUploadResult=SteamUploadResult;
	ResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUploadScoreToSteamLeaderboard::execUploadScoreToSteamLeaderboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamLeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_ENUM(ELeaderboardUploadScoreMethodUE4,Z_Param_UploadMethod);
		P_GET_ENUM(EEasyLeaderboardUploadScoreMethod,Z_Param_EasyUploadScoreMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUploadScoreToSteamLeaderboard**)Z_Param__Result=UUploadScoreToSteamLeaderboard::UploadScoreToSteamLeaderboard(Z_Param_SteamLeaderboardName,Z_Param_Score,ELeaderboardUploadScoreMethodUE4(Z_Param_UploadMethod),EEasyLeaderboardUploadScoreMethod(Z_Param_EasyUploadScoreMethod));
		P_NATIVE_END;
	}
	void UUploadScoreToSteamLeaderboard::StaticRegisterNativesUUploadScoreToSteamLeaderboard()
	{
		UClass* Class = UUploadScoreToSteamLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UploadScoreToSteamLeaderboard", &UUploadScoreToSteamLeaderboard::execUploadScoreToSteamLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics
	{
		struct UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms
		{
			FString SteamLeaderboardName;
			int32 Score;
			ELeaderboardUploadScoreMethodUE4 UploadMethod;
			EEasyLeaderboardUploadScoreMethod EasyUploadScoreMethod;
			UUploadScoreToSteamLeaderboard* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamLeaderboardName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UploadMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UploadMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EasyUploadScoreMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EasyUploadScoreMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_SteamLeaderboardName = { "SteamLeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms, SteamLeaderboardName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_UploadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_UploadMethod = { "UploadMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms, UploadMethod), Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4, METADATA_PARAMS(nullptr, 0) }; // 759127957
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_EasyUploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_EasyUploadScoreMethod = { "EasyUploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms, EasyUploadScoreMethod), Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod, METADATA_PARAMS(nullptr, 0) }; // 1767187331
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UUploadScoreToSteamLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_SteamLeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_UploadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_UploadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_EasyUploadScoreMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_EasyUploadScoreMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUploadScoreToSteamLeaderboard, nullptr, "UploadScoreToSteamLeaderboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::UploadScoreToSteamLeaderboard_eventUploadScoreToSteamLeaderboard_Parms), Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUploadScoreToSteamLeaderboard);
	UClass* Z_Construct_UClass_UUploadScoreToSteamLeaderboard_NoRegister()
	{
		return UUploadScoreToSteamLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steamLeaderboardName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_steamLeaderboardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
		static const UECodeGen_Private::FBytePropertyParams NewProp_uploadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uploadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_uploadMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_easyUploadScoreMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_easyUploadScoreMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_easyUploadScoreMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUploadScoreToSteamLeaderboard_UploadScoreToSteamLeaderboard, "UploadScoreToSteamLeaderboard" }, // 3032541345
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "UploadScoreToSteamLeaderboard.h" },
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, onSuccess), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onSuccess_MetaData)) }; // 229926825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, onFailure), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onFailure_MetaData)) }; // 229926825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_steamLeaderboardName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_steamLeaderboardName = { "steamLeaderboardName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, steamLeaderboardName), METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_steamLeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_steamLeaderboardName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_score_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, score), METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_score_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod = { "uploadMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, uploadMethod), Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardUploadScoreMethodUE4, METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod_MetaData)) }; // 759127957
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod = { "easyUploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, easyUploadScoreMethod), Z_Construct_UEnum_SimpleSteamLeaderboards_EEasyLeaderboardUploadScoreMethod, METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod_MetaData)) }; // 1767187331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_result_MetaData[] = {
		{ "ModuleRelativePath", "Public/UploadScoreToSteamLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUploadScoreToSteamLeaderboard, result), Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult, METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_result_MetaData)) }; // 211349858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_steamLeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_uploadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_easyUploadScoreMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::NewProp_result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUploadScoreToSteamLeaderboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::ClassParams = {
		&UUploadScoreToSteamLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUploadScoreToSteamLeaderboard()
	{
		if (!Z_Registration_Info_UClass_UUploadScoreToSteamLeaderboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUploadScoreToSteamLeaderboard.OuterSingleton, Z_Construct_UClass_UUploadScoreToSteamLeaderboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUploadScoreToSteamLeaderboard.OuterSingleton;
	}
	template<> SIMPLESTEAMLEADERBOARDS_API UClass* StaticClass<UUploadScoreToSteamLeaderboard>()
	{
		return UUploadScoreToSteamLeaderboard::StaticClass();
	}
	UUploadScoreToSteamLeaderboard::UUploadScoreToSteamLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUploadScoreToSteamLeaderboard);
	UUploadScoreToSteamLeaderboard::~UUploadScoreToSteamLeaderboard() {}
	struct Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::EnumInfo[] = {
		{ ELeaderboardUploadScoreMethodUE4_StaticEnum, TEXT("ELeaderboardUploadScoreMethodUE4"), &Z_Registration_Info_UEnum_ELeaderboardUploadScoreMethodUE4, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 759127957U) },
		{ EEasyLeaderboardUploadScoreMethod_StaticEnum, TEXT("EEasyLeaderboardUploadScoreMethod"), &Z_Registration_Info_UEnum_EEasyLeaderboardUploadScoreMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1767187331U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ScriptStructInfo[] = {
		{ FSteamLeaderboardUploadResult::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardUploadResult_Statics::NewStructOps, TEXT("SteamLeaderboardUploadResult"), &Z_Registration_Info_UScriptStruct_SteamLeaderboardUploadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardUploadResult), 211349858U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUploadScoreToSteamLeaderboard, UUploadScoreToSteamLeaderboard::StaticClass, TEXT("UUploadScoreToSteamLeaderboard"), &Z_Registration_Info_UClass_UUploadScoreToSteamLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUploadScoreToSteamLeaderboard), 3224074543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_2874132408(TEXT("/Script/SimpleSteamLeaderboards"),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_UploadScoreToSteamLeaderboard_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
