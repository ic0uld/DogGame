// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
class USteamCoreSteamPartiesAsyncActionCreateBeacon;
class USteamCoreSteamPartiesAsyncActionJoinParty;
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FPartyBeaconID;
struct FSteamPartyBeaconLocation;
#ifdef STEAMCORE_SteamPartiesAsyncActions_generated_h
#error "SteamPartiesAsyncActions.generated.h already included, missing '#pragma once' in SteamPartiesAsyncActions.h"
#endif
#define STEAMCORE_SteamPartiesAsyncActions_generated_h

#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_SPARSE_DATA
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ACCESSORS
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionJoinParty)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionJoinParty)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionJoinParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionJoinParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(USteamCoreSteamPartiesAsyncActionJoinParty&&); \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const USteamCoreSteamPartiesAsyncActionJoinParty&); \
public: \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionJoinParty();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(USteamCoreSteamPartiesAsyncActionJoinParty&&); \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const USteamCoreSteamPartiesAsyncActionJoinParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionJoinParty) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionJoinParty();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_24_PROLOG
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionJoinParty>();

#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_SPARSE_DATA
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ACCESSORS
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionCreateBeacon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionCreateBeacon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(USteamCoreSteamPartiesAsyncActionCreateBeacon&&); \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const USteamCoreSteamPartiesAsyncActionCreateBeacon&); \
public: \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionCreateBeacon();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(USteamCoreSteamPartiesAsyncActionCreateBeacon&&); \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const USteamCoreSteamPartiesAsyncActionCreateBeacon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionCreateBeacon) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionCreateBeacon();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_50_PROLOG
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionCreateBeacon>();

#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_SPARSE_DATA
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ACCESSORS
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&&); \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&); \
public: \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&&); \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_81_PROLOG
#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_SPARSE_DATA \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ACCESSORS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
	FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Montee_SourceTree_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
