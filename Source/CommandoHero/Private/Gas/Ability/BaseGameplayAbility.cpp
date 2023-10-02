// Fill out your copyright notice in the Description page of Project Settings.


#include "Gas/Ability/BaseGameplayAbility.h"

#include "AbilitySystemComponent.h"

void UBaseGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                           const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                           const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	FGameplayEffectContextHandle EffectContextHandle = ActorInfo->AbilitySystemComponent->MakeEffectContext();

	for (auto GameplayEffect : OngoingEffectToJustApplyOnStart)
	{
		if (!GameplayEffect.Get()) continue;
		{
			if (UAbilitySystemComponent* AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get())
			{
				FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContextHandle);
				if (SpecHandle.IsValid())
				{
					FActiveGameplayEffectHandle ActiveGameplayEffectHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
					if (!ActiveGameplayEffectHandle.WasSuccessfullyApplied())
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to apply startup effect! %s"), *GetNameSafe(GameplayEffect));
					}
				}
			}
		}
	}

	if (IsInstantiated())
	{
		for (auto GameplayEffect : OngoingEffectToRemoveOnEnd)
		{
			if (!GameplayEffect.Get()) continue;
			{
				if (UAbilitySystemComponent* AbilitySystemComponent = ActorInfo->AbilitySystemComponent.Get())
				{
					FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, 1, EffectContextHandle);
					if (SpecHandle.IsValid())
					{
						FActiveGameplayEffectHandle ActiveGameplayEffectHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
						if (!ActiveGameplayEffectHandle.WasSuccessfullyApplied())
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to apply apply effect! %s"), *GetNameSafe(GameplayEffect));
						}
						else
						{
							RemoveOnEndEffectHandle.Add(ActiveGameplayEffectHandle);
						}
					}
				}
			}
		}
	}
	
}

void UBaseGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	if (IsInstantiated())
	{
		for (FActiveGameplayEffectHandle ActiveGameplayEffectHandle : RemoveOnEndEffectHandle)
		{
			if (ActiveGameplayEffectHandle.IsValid())
			{
				ActorInfo->AbilitySystemComponent->RemoveActiveGameplayEffect(ActiveGameplayEffectHandle);
			}
		}
		RemoveOnEndEffectHandle.Empty();
	}
	
	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
