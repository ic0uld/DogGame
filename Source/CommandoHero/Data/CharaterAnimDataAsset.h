// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassTypes.h"
#include "Engine/DataAsset.h"
#include "CharaterAnimDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class COMMANDOHERO_API UCharaterAnimDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly)
	FCharacterAnimationData CharacterAnimationData;
	
};
