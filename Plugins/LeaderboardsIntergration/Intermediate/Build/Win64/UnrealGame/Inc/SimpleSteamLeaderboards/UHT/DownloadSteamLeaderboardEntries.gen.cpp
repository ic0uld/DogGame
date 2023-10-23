// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../SourcTree/DogsClub/Plugins/LeaderboardsIntergration/Source/SimpleSteamLeaderboards/Public/DownloadSteamLeaderboardEntries.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadSteamLeaderboardEntries() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SIMPLESTEAMLEADERBOARDS_API UClass* Z_Construct_UClass_UDownloadSteamLeaderboardEntries();
	SIMPLESTEAMLEADERBOARDS_API UClass* Z_Construct_UClass_UDownloadSteamLeaderboardEntries_NoRegister();
	SIMPLESTEAMLEADERBOARDS_API UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4();
	SIMPLESTEAMLEADERBOARDS_API UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature();
	SIMPLESTEAMLEADERBOARDS_API UScriptStruct* Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4();
	UPackage* Z_Construct_UPackage__Script_SimpleSteamLeaderboards();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4;
	static UEnum* ELeaderboardDataRequestUE4_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4, (UObject*)Z_Construct_UPackage__Script_SimpleSteamLeaderboards(), TEXT("ELeaderboardDataRequestUE4"));
		}
		return Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.OuterSingleton;
	}
	template<> SIMPLESTEAMLEADERBOARDS_API UEnum* StaticEnum<ELeaderboardDataRequestUE4>()
	{
		return ELeaderboardDataRequestUE4_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enumerators[] = {
		{ "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobal", (int64)ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobal },
		{ "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobalAroundUser", (int64)ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobalAroundUser },
		{ "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestFriends", (int64)ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestFriends },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LDR_ELeaderboardDataRequestFriends.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LDR_ELeaderboardDataRequestFriends.DisplayName", "Request Friends" },
		{ "LDR_ELeaderboardDataRequestFriends.Name", "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestFriends" },
		{ "LDR_ELeaderboardDataRequestGlobal.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LDR_ELeaderboardDataRequestGlobal.DisplayName", "Request Global" },
		{ "LDR_ELeaderboardDataRequestGlobal.Name", "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobal" },
		{ "LDR_ELeaderboardDataRequestGlobalAroundUser.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "LDR_ELeaderboardDataRequestGlobalAroundUser.DisplayName", "Request Global Around User" },
		{ "LDR_ELeaderboardDataRequestGlobalAroundUser.Name", "ELeaderboardDataRequestUE4::LDR_ELeaderboardDataRequestGlobalAroundUser" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
		nullptr,
		"ELeaderboardDataRequestUE4",
		"ELeaderboardDataRequestUE4",
		Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4()
	{
		if (!Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.InnerSingleton, Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4;
class UScriptStruct* FLILeaderboardDataRequestUE4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4, (UObject*)Z_Construct_UPackage__Script_SimpleSteamLeaderboards(), TEXT("LILeaderboardDataRequestUE4"));
	}
	return Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.OuterSingleton;
}
template<> SIMPLESTEAMLEADERBOARDS_API UScriptStruct* StaticStruct<FLILeaderboardDataRequestUE4>()
{
	return FLILeaderboardDataRequestUE4::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteamAvatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLILeaderboardDataRequestUE4>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_GlobalRank_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLILeaderboardDataRequestUE4, GlobalRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_GlobalRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_GlobalRank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamAvatar_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamAvatar = { "SteamAvatar", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLILeaderboardDataRequestUE4, SteamAvatar), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamAvatar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLILeaderboardDataRequestUE4, SteamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLILeaderboardDataRequestUE4, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Simple Steam Leaderboards" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLILeaderboardDataRequestUE4, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Score_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_GlobalRank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewProp_Score,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
		nullptr,
		&NewStructOps,
		"LILeaderboardDataRequestUE4",
		sizeof(FLILeaderboardDataRequestUE4),
		alignof(FLILeaderboardDataRequestUE4),
		Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4()
	{
		if (!Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.InnerSingleton, Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics
	{
		struct _Script_SimpleSteamLeaderboards_eventResponseDelegatge_Parms
		{
			TArray<FLILeaderboardDataRequestUE4> DownloadedEntries;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownloadedEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries_Inner = { "DownloadedEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4, METADATA_PARAMS(nullptr, 0) }; // 3070370621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries = { "DownloadedEntries", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SimpleSteamLeaderboards_eventResponseDelegatge_Parms, DownloadedEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries_MetaData)) }; // 3070370621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::NewProp_DownloadedEntries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards, nullptr, "ResponseDelegatge__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::_Script_SimpleSteamLeaderboards_eventResponseDelegatge_Parms), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponseDelegatge_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegatge, TArray<FLILeaderboardDataRequestUE4> const& DownloadedEntries)
{
	struct _Script_SimpleSteamLeaderboards_eventResponseDelegatge_Parms
	{
		TArray<FLILeaderboardDataRequestUE4> DownloadedEntries;
	};
	_Script_SimpleSteamLeaderboards_eventResponseDelegatge_Parms Parms;
	Parms.DownloadedEntries=DownloadedEntries;
	ResponseDelegatge.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDownloadSteamLeaderboardEntries::execDownloadLeaderboardEntries)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamLeaderboardName);
		P_GET_ENUM(ELeaderboardDataRequestUE4,Z_Param_DataRequestType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAmountOfEntries);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDownloadSteamLeaderboardEntries**)Z_Param__Result=UDownloadSteamLeaderboardEntries::DownloadLeaderboardEntries(Z_Param_SteamLeaderboardName,ELeaderboardDataRequestUE4(Z_Param_DataRequestType),Z_Param_MaxAmountOfEntries,Z_Param_RangeStart,Z_Param_RangeEnd);
		P_NATIVE_END;
	}
	void UDownloadSteamLeaderboardEntries::StaticRegisterNativesUDownloadSteamLeaderboardEntries()
	{
		UClass* Class = UDownloadSteamLeaderboardEntries::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadLeaderboardEntries", &UDownloadSteamLeaderboardEntries::execDownloadLeaderboardEntries },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics
	{
		struct DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms
		{
			FString SteamLeaderboardName;
			ELeaderboardDataRequestUE4 DataRequestType;
			int32 MaxAmountOfEntries;
			int32 RangeStart;
			int32 RangeEnd;
			UDownloadSteamLeaderboardEntries* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamLeaderboardName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataRequestType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataRequestType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmountOfEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboardName = { "SteamLeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, SteamLeaderboardName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_DataRequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_DataRequestType = { "DataRequestType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, DataRequestType), Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4, METADATA_PARAMS(nullptr, 0) }; // 662863595
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_MaxAmountOfEntries = { "MaxAmountOfEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, MaxAmountOfEntries), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms, ReturnValue), Z_Construct_UClass_UDownloadSteamLeaderboardEntries_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_DataRequestType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_DataRequestType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_MaxAmountOfEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Leaderboards" },
		{ "CPP_Default_MaxAmountOfEntries", "10" },
		{ "CPP_Default_RangeEnd", "4" },
		{ "CPP_Default_RangeStart", "-5" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDownloadSteamLeaderboardEntries, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::DownloadSteamLeaderboardEntries_eventDownloadLeaderboardEntries_Parms), Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDownloadSteamLeaderboardEntries);
	UClass* Z_Construct_UClass_UDownloadSteamLeaderboardEntries_NoRegister()
	{
		return UDownloadSteamLeaderboardEntries::StaticClass();
	}
	struct Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_dataRequestType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataRequestType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_dataRequestType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxAmountOfEntries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmountOfEntries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rangeStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rangeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rangeEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rangeEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleSteamLeaderboards,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDownloadSteamLeaderboardEntries_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 4006704533
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "DownloadSteamLeaderboardEntries.h" },
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, onSuccess), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onSuccess_MetaData)) }; // 4036014924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, onFailure), Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onFailure_MetaData)) }; // 4036014924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_steamLeaderboardName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_steamLeaderboardName = { "steamLeaderboardName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, steamLeaderboardName), METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_steamLeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_steamLeaderboardName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType = { "dataRequestType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, dataRequestType), Z_Construct_UEnum_SimpleSteamLeaderboards_ELeaderboardDataRequestUE4, METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType_MetaData)) }; // 662863595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_maxAmountOfEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_maxAmountOfEntries = { "maxAmountOfEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, maxAmountOfEntries), METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_maxAmountOfEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_maxAmountOfEntries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeStart = { "rangeStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, rangeStart), METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/DownloadSteamLeaderboardEntries.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeEnd = { "rangeEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDownloadSteamLeaderboardEntries, rangeEnd), METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_steamLeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_dataRequestType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_maxAmountOfEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::NewProp_rangeEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownloadSteamLeaderboardEntries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::ClassParams = {
		&UDownloadSteamLeaderboardEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDownloadSteamLeaderboardEntries()
	{
		if (!Z_Registration_Info_UClass_UDownloadSteamLeaderboardEntries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDownloadSteamLeaderboardEntries.OuterSingleton, Z_Construct_UClass_UDownloadSteamLeaderboardEntries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDownloadSteamLeaderboardEntries.OuterSingleton;
	}
	template<> SIMPLESTEAMLEADERBOARDS_API UClass* StaticClass<UDownloadSteamLeaderboardEntries>()
	{
		return UDownloadSteamLeaderboardEntries::StaticClass();
	}
	UDownloadSteamLeaderboardEntries::UDownloadSteamLeaderboardEntries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDownloadSteamLeaderboardEntries);
	UDownloadSteamLeaderboardEntries::~UDownloadSteamLeaderboardEntries() {}
	struct Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::EnumInfo[] = {
		{ ELeaderboardDataRequestUE4_StaticEnum, TEXT("ELeaderboardDataRequestUE4"), &Z_Registration_Info_UEnum_ELeaderboardDataRequestUE4, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 662863595U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ScriptStructInfo[] = {
		{ FLILeaderboardDataRequestUE4::StaticStruct, Z_Construct_UScriptStruct_FLILeaderboardDataRequestUE4_Statics::NewStructOps, TEXT("LILeaderboardDataRequestUE4"), &Z_Registration_Info_UScriptStruct_LILeaderboardDataRequestUE4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLILeaderboardDataRequestUE4), 3070370621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDownloadSteamLeaderboardEntries, UDownloadSteamLeaderboardEntries::StaticClass, TEXT("UDownloadSteamLeaderboardEntries"), &Z_Registration_Info_UClass_UDownloadSteamLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDownloadSteamLeaderboardEntries), 3011895961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_3327889035(TEXT("/Script/SimpleSteamLeaderboards"),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourcTree_DogsClub_Plugins_LeaderboardsIntergration_Source_SimpleSteamLeaderboards_Public_DownloadSteamLeaderboardEntries_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
