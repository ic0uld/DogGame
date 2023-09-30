// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALSREPLICATED_ALSCharacterMovementComponent_generated_h
#error "ALSCharacterMovementComponent.generated.h already included, missing '#pragma once' in ALSCharacterMovementComponent.h"
#endif
#define ALSREPLICATED_ALSCharacterMovementComponent_generated_h

#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_SPARSE_DATA
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_RPC_WRAPPERS \
	virtual void Server_BrakingFricktionFactor_Implementation(float Braking_FricktionFactor); \
	virtual void Server_GroundFriction_Implementation(float Ground_Friction); \
	virtual void Server_BrakingDecelerationWalking_Implementation(float Braking_DecelerationWalking); \
	virtual void Server_MaxAcceleration_Implementation(float Max_Acceleration); \
	virtual void Server_MaxWalkSpeedCrounched_Implementation(float Max_WalkSpeedCrounched); \
	virtual void Server_MaxWalkSpeed_Implementation(float Max_WalkSpeed); \
 \
	DECLARE_FUNCTION(execServer_BrakingFricktionFactor); \
	DECLARE_FUNCTION(execServer_GroundFriction); \
	DECLARE_FUNCTION(execServer_BrakingDecelerationWalking); \
	DECLARE_FUNCTION(execServer_MaxAcceleration); \
	DECLARE_FUNCTION(execServer_MaxWalkSpeedCrounched); \
	DECLARE_FUNCTION(execServer_MaxWalkSpeed); \
	DECLARE_FUNCTION(execSetBrakingFricktionFactor); \
	DECLARE_FUNCTION(execSetGroundFriction); \
	DECLARE_FUNCTION(execSetBrakingDecelerationWalking); \
	DECLARE_FUNCTION(execSetMaxAcceleration); \
	DECLARE_FUNCTION(execSetMaxWalkSpeedCrounched); \
	DECLARE_FUNCTION(execSetMaxWalkSpeed);


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_BrakingFricktionFactor_Implementation(float Braking_FricktionFactor); \
	virtual void Server_GroundFriction_Implementation(float Ground_Friction); \
	virtual void Server_BrakingDecelerationWalking_Implementation(float Braking_DecelerationWalking); \
	virtual void Server_MaxAcceleration_Implementation(float Max_Acceleration); \
	virtual void Server_MaxWalkSpeedCrounched_Implementation(float Max_WalkSpeedCrounched); \
	virtual void Server_MaxWalkSpeed_Implementation(float Max_WalkSpeed); \
 \
	DECLARE_FUNCTION(execServer_BrakingFricktionFactor); \
	DECLARE_FUNCTION(execServer_GroundFriction); \
	DECLARE_FUNCTION(execServer_BrakingDecelerationWalking); \
	DECLARE_FUNCTION(execServer_MaxAcceleration); \
	DECLARE_FUNCTION(execServer_MaxWalkSpeedCrounched); \
	DECLARE_FUNCTION(execServer_MaxWalkSpeed); \
	DECLARE_FUNCTION(execSetBrakingFricktionFactor); \
	DECLARE_FUNCTION(execSetGroundFriction); \
	DECLARE_FUNCTION(execSetBrakingDecelerationWalking); \
	DECLARE_FUNCTION(execSetMaxAcceleration); \
	DECLARE_FUNCTION(execSetMaxWalkSpeedCrounched); \
	DECLARE_FUNCTION(execSetMaxWalkSpeed);


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_EVENT_PARMS \
	struct ALSCharacterMovementComponent_eventServer_BrakingDecelerationWalking_Parms \
	{ \
		float Braking_DecelerationWalking; \
	}; \
	struct ALSCharacterMovementComponent_eventServer_BrakingFricktionFactor_Parms \
	{ \
		float Braking_FricktionFactor; \
	}; \
	struct ALSCharacterMovementComponent_eventServer_GroundFriction_Parms \
	{ \
		float Ground_Friction; \
	}; \
	struct ALSCharacterMovementComponent_eventServer_MaxAcceleration_Parms \
	{ \
		float Max_Acceleration; \
	}; \
	struct ALSCharacterMovementComponent_eventServer_MaxWalkSpeed_Parms \
	{ \
		float Max_WalkSpeed; \
	}; \
	struct ALSCharacterMovementComponent_eventServer_MaxWalkSpeedCrounched_Parms \
	{ \
		float Max_WalkSpeedCrounched; \
	};


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_CALLBACK_WRAPPERS
#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UALSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UALSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSReplicated"), NO_API) \
	DECLARE_SERIALIZER(UALSCharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NewMaxWalkSpeed=NETFIELD_REP_START, \
		NewMaxWalkSpeedCrounched, \
		NewMaxAcceleration, \
		NewBrakingDecelerationWalking, \
		NewGroundFriction, \
		NewBrakingFricktionFactor, \
		NETFIELD_REP_END=NewBrakingFricktionFactor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUALSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UALSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UALSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSReplicated"), NO_API) \
	DECLARE_SERIALIZER(UALSCharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NewMaxWalkSpeed=NETFIELD_REP_START, \
		NewMaxWalkSpeedCrounched, \
		NewMaxAcceleration, \
		NewBrakingDecelerationWalking, \
		NewGroundFriction, \
		NewBrakingFricktionFactor, \
		NETFIELD_REP_END=NewBrakingFricktionFactor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UALSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSCharacterMovementComponent(UALSCharacterMovementComponent&&); \
	NO_API UALSCharacterMovementComponent(const UALSCharacterMovementComponent&); \
public:


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UALSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UALSCharacterMovementComponent(UALSCharacterMovementComponent&&); \
	NO_API UALSCharacterMovementComponent(const UALSCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALSCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALSCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALSCharacterMovementComponent)


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NewMaxWalkSpeed() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__NewMaxWalkSpeedCrounched() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxWalkSpeedCrounched); } \
	FORCEINLINE static uint32 __PPO__NewMaxAcceleration() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewMaxAcceleration); } \
	FORCEINLINE static uint32 __PPO__NewBrakingDecelerationWalking() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewBrakingDecelerationWalking); } \
	FORCEINLINE static uint32 __PPO__NewGroundFriction() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewGroundFriction); } \
	FORCEINLINE static uint32 __PPO__NewBrakingFricktionFactor() { return STRUCT_OFFSET(UALSCharacterMovementComponent, NewBrakingFricktionFactor); }


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_13_PROLOG \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_EVENT_PARMS


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_SPARSE_DATA \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_RPC_WRAPPERS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_CALLBACK_WRAPPERS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_INCLASS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_SPARSE_DATA \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_CALLBACK_WRAPPERS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
	ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSREPLICATED_API UClass* StaticClass<class UALSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALS4_Plugins_ALSReplicated_Source_ALSReplicated_Public_ALSCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
