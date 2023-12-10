// Fill out your copyright notice in the Description page of Project Settings.


#include "Gas/Ability/GA_Fart.h"

#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

UGA_Fart::UGA_Fart()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;

	FartMontage = nullptr; // Set your default montage here

	Range = 1000.0f;
	Damage = 12.0f;
}

void UGA_Fart::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (ActorInfo)
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		}


		MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, FartMontage);
		
		MontageTask->OnCompleted.AddDynamic(this, &UGA_Fart::K2_EndAbility);
		MontageTask->OnInterrupted.AddDynamic(this, &UGA_Fart::K2_EndAbility);
		MontageTask->OnCancelled.AddDynamic(this, &UGA_Fart::K2_EndAbility);
		
		MontageTask->ReadyForActivation();
		
		/*
		Recieded = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, FGameplayTag::RequestGameplayTag(FName("Data.Damage")), nullptr,  true);
		Recieded->EventReceived.AddDynamic(this, &UGA_Fart::K2_EndAbility);*/

		
	}
	
}

void UGA_Fart::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGA_Fart::EventReceived()
{
	if (GEngine)

	{
	// Mesajı görüntülemek için GEngine kullanın
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Paw Recieved"));
	}
		
	// Get the source actor (the character using the ability)
	AActor* SourceActor = GetOwningActorFromActorInfo();
	ABaseCharacter* SourceCharacter = Cast<ABaseCharacter>(SourceActor);
		
	// Check if the source actor is valid
	if (SourceCharacter)
	{
		

			FVector Start = SourceCharacter->GetMesh()->GetSocketLocation(FName("Muzzle"));
			FVector End = -SourceCharacter->GetActorForwardVector() * Range;
			FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(Start, End);

			FGameplayEffectSpecHandle DamageEffectSpecHandle = MakeOutgoingGameplayEffectSpec(DamageGameplayEffect, GetAbilityLevel());
		
			// Pass the damage to the Damage Execution Calculation through a SetByCaller value on the GameplayEffectSpec
			DamageEffectSpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), Damage);

			FTransform MuzzleTransform = SourceCharacter->GetMesh()->GetSocketTransform(FName("Muzzle"));
			MuzzleTransform.SetRotation(Rotation.Quaternion());
			MuzzleTransform.SetScale3D(FVector(1.0f));

			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		

			ABasePorjectile* Projectile = GetWorld()->SpawnActorDeferred<ABasePorjectile>(ProjectileClass, MuzzleTransform, GetOwningActorFromActorInfo(),
				SourceCharacter, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
			Projectile->DamageEffectSpecHandle = DamageEffectSpecHandle;
			Projectile->Range = Range;
			Projectile->FinishSpawning(MuzzleTransform);
			
			DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 5.0f, 0, 1.0f);

		if (GEngine)

		{
			// Mesajı görüntülemek için GEngine kullanın
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Spawned"));
		}
		
	}
}
