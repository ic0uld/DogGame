// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BaseCharacterMovementComponent.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS()
class COMMANDOHERO_API UBaseCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
	public:

	bool TryTraversal(UAbilitySystemComponent* ASC);

protected:

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UGameplayAbility>> TraversalAbilitiesOrdered;
	
	
};
