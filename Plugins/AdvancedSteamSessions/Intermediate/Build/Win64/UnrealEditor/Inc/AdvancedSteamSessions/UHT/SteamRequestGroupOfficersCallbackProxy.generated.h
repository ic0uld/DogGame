// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRequestGroupOfficersCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamRequestGroupOfficersCallbackProxy;
struct FBPSteamGroupOfficer;
struct FBPUniqueNetId;
#ifdef ADVANCEDSTEAMSESSIONS_SteamRequestGroupOfficersCallbackProxy_generated_h
#error "SteamRequestGroupOfficersCallbackProxy.generated.h already included, missing '#pragma once' in SteamRequestGroupOfficersCallbackProxy.h"
#endif
#define ADVANCEDSTEAMSESSIONS_SteamRequestGroupOfficersCallbackProxy_generated_h

#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPSteamGroupOfficer_Statics; \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<struct FBPSteamGroupOfficer>();

#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_63_DELEGATE \
ADVANCEDSTEAMSESSIONS_API void FBlueprintGroupOfficerDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGroupOfficerDetailsDelegate, TArray<FBPSteamGroupOfficer> const& OfficerList);


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_SPARSE_DATA
#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSteamGroupOfficerList);


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSteamGroupOfficerList);


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_ACCESSORS
#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy(); \
	friend struct Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USteamRequestGroupOfficersCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamRequestGroupOfficersCallbackProxy)


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy(); \
	friend struct Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USteamRequestGroupOfficersCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamRequestGroupOfficersCallbackProxy)


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequestGroupOfficersCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamRequestGroupOfficersCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequestGroupOfficersCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(USteamRequestGroupOfficersCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const USteamRequestGroupOfficersCallbackProxy&); \
public:


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(USteamRequestGroupOfficersCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamRequestGroupOfficersCallbackProxy(const USteamRequestGroupOfficersCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamRequestGroupOfficersCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequestGroupOfficersCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequestGroupOfficersCallbackProxy)


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_65_PROLOG
#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_RPC_WRAPPERS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_ACCESSORS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_INCLASS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_ACCESSORS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_INCLASS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamRequestGroupOfficersCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<class USteamRequestGroupOfficersCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Montee_SourceTree_Plugins_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamRequestGroupOfficersCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
