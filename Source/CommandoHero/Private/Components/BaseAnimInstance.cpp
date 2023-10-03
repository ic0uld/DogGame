// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/BaseAnimInstance.h"
#include "ClassTypes.h"
#include "Animation/BlendSpace.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimSequence.h"
#include "CommandoHero/Data/CharaterAnimDataAsset.h"

/*
UBlendSpace* UBaseAnimInstance::GetLocomotionBlendSpace() const
{
	if (ABaseCharacter* ActionShooterCharacter = Cast<ABaseCharacter>(GetOwningActor()))
	{
		FCharacterData Data = ActionShooterCharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{  
			return Data.CharacterAnimDataAsset->CharacterAnimationData.MovementBS;
		}
	}

	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.MovementBS : nullptr;
	
}

UAnimSequenceBase* UBaseAnimInstance::GetIdleAnimationAsset() const
{
	if (ABaseCharacter* ActionShooterCharacter = Cast<ABaseCharacter>(GetOwningActor()))
	{
		FCharacterData Data = ActionShooterCharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharacterAnimationData.IdleAnimationAsset;
		}
	}

	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.IdleAnimationAsset: nullptr;
}

UBlendSpace* UBaseAnimInstance::GetCrouchLocomotionBlendSpace() const
{

	if (ABaseCharacter* ActionShooterCharacter = Cast<ABaseCharacter>(GetOwningActor()))
	{
		FCharacterData Data = ActionShooterCharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{  
			return Data.CharacterAnimDataAsset->CharacterAnimationData.CrouchMovementBS;
		}
	}

	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.CrouchMovementBS : nullptr;
	
}

UAnimSequenceBase* UBaseAnimInstance::GetCrouchIdleAnimationAsset() const
{

	if (ABaseCharacter* ActionShooterCharacter = Cast<ABaseCharacter>(GetOwningActor()))
	{
		FCharacterData Data = ActionShooterCharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharacterAnimationData.CrouchIdleAnimationAsset;
		}
	}

	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharacterAnimationData.CrouchIdleAnimationAsset: nullptr;
	
}
*/