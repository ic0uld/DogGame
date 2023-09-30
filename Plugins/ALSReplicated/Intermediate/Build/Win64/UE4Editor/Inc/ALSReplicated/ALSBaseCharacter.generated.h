// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALSREPLICATED_ALSBaseCharacter_generated_h
#error "ALSBaseCharacter.generated.h already included, missing '#pragma once' in ALSBaseCharacter.h"
#endif
#define ALSREPLICATED_ALSBaseCharacter_generated_h

#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_SPARSE_DATA
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_RPC_WRAPPERS
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALSBaseCharacter(); \
	friend struct Z_Construct_UClass_AALSBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AALSBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSReplicated"), NO_API) \
	DECLARE_SERIALIZER(AALSBaseCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ControlRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=ControlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAALSBaseCharacter(); \
	friend struct Z_Construct_UClass_AALSBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AALSBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSReplicated"), NO_API) \
	DECLARE_SERIALIZER(AALSBaseCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ControlRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=ControlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AALSBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AALSBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALSBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALSBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALSBaseCharacter(AALSBaseCharacter&&); \
	NO_API AALSBaseCharacter(const AALSBaseCharacter&); \
public:


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALSBaseCharacter(AALSBaseCharacter&&); \
	NO_API AALSBaseCharacter(const AALSBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALSBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALSBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AALSBaseCharacter)


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_13_PROLOG
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_SPARSE_DATA \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_RPC_WRAPPERS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_INCLASS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_SPARSE_DATA \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSREPLICATED_API UClass* StaticClass<class AALSBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
