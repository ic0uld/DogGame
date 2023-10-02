// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/BaseCharacterMovementComponent.h"


#include "AbilitySystemComponent.h"

static TAutoConsoleVariable<int32> CVarShowTravelsal(
	TEXT("ShowDebugTravelsal"),
	0,
	TEXT("Draws debug info about traversal")
	TEXT(" 0: off/n")
	TEXT(" 1:on/n"),
	ECVF_Cheat
	);


bool UBaseCharacterMovementComponent::TryTraversal(UAbilitySystemComponent* ASC)
{
	for (TSubclassOf<UGameplayAbility> AbilityClass : TraversalAbilitiesOrdered)
	{
		if (ASC->TryActivateAbilityByClass(AbilityClass, true))
		{
			FGameplayAbilitySpec* Spec;
			Spec = ASC->FindAbilitySpecFromClass(AbilityClass);
			if (Spec && Spec->IsActive())
			{
				UE_LOG(LogTemp, Warning, TEXT("Traversal ability activated successfully."));
				return true;
			}
		}	
	}
	return false;
}
