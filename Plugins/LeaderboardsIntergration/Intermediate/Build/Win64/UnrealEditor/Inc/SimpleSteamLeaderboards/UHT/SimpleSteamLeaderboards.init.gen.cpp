// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSteamLeaderboards_init() {}
	SIMPLESTEAMLEADERBOARDS_API UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature();
	SIMPLESTEAMLEADERBOARDS_API UFunction* Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleSteamLeaderboards;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleSteamLeaderboards()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleSteamLeaderboards.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleSteamLeaderboards_ResponseDelegatge__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleSteamLeaderboards",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB1717489,
				0x0CD5B5F7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleSteamLeaderboards.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleSteamLeaderboards.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleSteamLeaderboards(Z_Construct_UPackage__Script_SimpleSteamLeaderboards, TEXT("/Script/SimpleSteamLeaderboards"), Z_Registration_Info_UPackage__Script_SimpleSteamLeaderboards, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB1717489, 0x0CD5B5F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
