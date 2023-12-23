// Fill out your copyright notice in the Description page of Project Settings.


#include "Gas/Ability/GA_PawAction.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

UGA_PawAction::UGA_PawAction()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;

	PawMontage = nullptr; // Set your default montage here

	// Set the default push force
	PushForce = 1000.0f;

	Radius = 20.0f;
	
}

void UGA_PawAction::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (ActorInfo)
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		}


		MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, PawMontage);

		//MontageTask->OnBlendOut.AddDynamic(this, &UGA_PawAction::EventReceived);
		MontageTask->OnCompleted.AddDynamic(this, &UGA_PawAction::K2_EndAbility);
		MontageTask->OnInterrupted.AddDynamic(this, &UGA_PawAction::K2_EndAbility);
		MontageTask->OnCancelled.AddDynamic(this, &UGA_PawAction::K2_EndAbility);
		//MontageTask->WaitGameplayEvent.AddDynamic(this, &UGA_PawAction::EventReceived);
		MontageTask->ReadyForActivation();
		

	}
	
}

void UGA_PawAction::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}


/*
void UGA_PawAction::EventReceived()
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
		// Apply force to the target actor (opponent)
		TArray<FOverlapResult> Overlaps;
		FCollisionQueryParams CollisionParams;

		// Set up the collision parameters
		CollisionParams.AddIgnoredActor(SourceActor);
		CollisionParams.bTraceComplex = true;

		// Perform the overlap check
		bool bOverlap = GetWorld()->OverlapMultiByObjectType(Overlaps, SourceCharacter->GetMesh()->GetSocketLocation(FName("foot_f_R")), FQuat::Identity, FCollisionObjectQueryParams(ECC_Pawn), FCollisionShape::MakeSphere(Radius), CollisionParams);

		if (bOverlap)
		{
			DrawDebugSphere(GetWorld(), SourceCharacter->GetMesh()->GetSocketLocation(FName("foot_f_R")), Radius, 16, FColor::Green, false, 2.0f);
		}
		
		// Apply force to each hit actor
		for (const FOverlapResult& Overlap : Overlaps)
		{
			ACharacter* TargetCharacter = Cast<ACharacter>(Overlap.GetActor());
			if (TargetCharacter)
			{
				FVector ForceDirection = TargetCharacter->GetActorLocation() - SourceActor->GetActorLocation();
				ForceDirection.Normalize();
				
				// Apply force to the target character
				TargetCharacter->LaunchCharacter(ForceDirection * PushForce, false, false);
			}
		}
	}
}
*/