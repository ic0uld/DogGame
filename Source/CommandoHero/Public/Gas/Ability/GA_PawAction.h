// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gas/Ability/BaseGameplayAbility.h"
#include "GA_PawAction.generated.h"

class UAbilityTask_PlayMontageAndWait;

UCLASS()
class COMMANDOHERO_API UGA_PawAction : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_PawAction();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;




protected:

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* PawMontage = nullptr;
	
	UPROPERTY()
	UAbilityTask_PlayMontageAndWait* MontageTask = nullptr;

	/*UFUNCTION()
	void EventReceived();*/
	
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	float PushForce;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	float Radius;
};
