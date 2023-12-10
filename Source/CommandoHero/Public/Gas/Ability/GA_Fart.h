// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Actors/BasePorjectile.h"
#include "Gas/Ability/BaseGameplayAbility.h"
#include "GA_Fart.generated.h"

class UAbilityTask_PlayMontageAndWait;

UCLASS()
class COMMANDOHERO_API UGA_Fart : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_Fart();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<ABasePorjectile> ProjectileClass;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<UGameplayEffect> DamageGameplayEffect;


protected:

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* FartMontage = nullptr;
	
	UPROPERTY()
	UAbilityTask_PlayMontageAndWait* MontageTask = nullptr;
	
	UPROPERTY()
	UAbilityTask_WaitGameplayEvent* Recieded = nullptr;
	
	UFUNCTION(BlueprintCallable)
	void EventReceived();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Range;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Damage;
};
