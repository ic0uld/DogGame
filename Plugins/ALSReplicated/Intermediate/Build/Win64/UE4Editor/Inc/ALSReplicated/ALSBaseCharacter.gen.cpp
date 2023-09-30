// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSReplicated/Public/ALSBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSBaseCharacter() {}
// Cross Module References
	ALSREPLICATED_API UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister();
	ALSREPLICATED_API UClass* Z_Construct_UClass_AALSBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ALSReplicated();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ALSREPLICATED_API UClass* Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister();
// End Cross Module References
	void AALSBaseCharacter::StaticRegisterNativesAALSBaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_AALSBaseCharacter_NoRegister()
	{
		return AALSBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AALSBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALSCharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ALSCharacterMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALSBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSReplicated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ALSBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "ALS || Rotation" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AALSBaseCharacter, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData[] = {
		{ "Category", "ALS || Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALSBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement = { "ALSCharacterMovement", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AALSBaseCharacter, ALSCharacterMovement), Z_Construct_UClass_UALSCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALSBaseCharacter_Statics::NewProp_ALSCharacterMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALSBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALSBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams = {
		&AALSBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AALSBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AALSBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AALSBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AALSBaseCharacter, 2186900945);
	template<> ALSREPLICATED_API UClass* StaticClass<AALSBaseCharacter>()
	{
		return AALSBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AALSBaseCharacter(Z_Construct_UClass_AALSBaseCharacter, &AALSBaseCharacter::StaticClass, TEXT("/Script/ALSReplicated"), TEXT("AALSBaseCharacter"), false, nullptr, nullptr, nullptr);

	void AALSBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ControlRotation(TEXT("ControlRotation"));

		const bool bIsValid = true
			&& Name_ControlRotation == ClassReps[(int32)ENetFields_Private::ControlRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AALSBaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALSBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
