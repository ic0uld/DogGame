// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CommandoHero/Data/CharaterAnimDataAsset.h"
#include "BaseAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class COMMANDOHERO_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta= (BlueprintThreadSafe))
	class UBlendSpace* GetLocomotionBlendSpace() const;

	UFUNCTION(BlueprintCallable, meta= (BlueprintThreadSafe))
	class UAnimSequenceBase* GetIdleAnimationAsset() const;

	UFUNCTION(BlueprintCallable, meta= (BlueprintThreadSafe))
	class UBlendSpace* GetCrouchLocomotionBlendSpace() const;

	UFUNCTION(BlueprintCallable, meta= (BlueprintThreadSafe))
	class UAnimSequenceBase* GetCrouchIdleAnimationAsset() const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category= "Animation")
	class UCharaterAnimDataAsset* DefaultCharacterAnimDataAsset;
	
};
