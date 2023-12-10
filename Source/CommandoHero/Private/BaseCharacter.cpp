// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "Camera/CameraComponent.h"
#include "CommandoHero/Data/CharacterDataAsset.h"
#include "Components/BaseCharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/SpringArmComponent.h"
#include "Gas/BaseAbilitySystemComponent.h"
#include "Gas/Attributes/BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBaseCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	XCharacterMovComp = Cast<UBaseCharacterMovementComponent>(GetCharacterMovement());

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	TurnRateGamepad = 50.f;

	//GAS

	AbilitySystemComponent = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxMoveSpeedAttribute()).AddUObject(this, &ABaseCharacter::OnMaxMovementSpeedChanged);
	
	AttributeSetBase = CreateDefaultSubobject<UBaseAttributeSet>(TEXT("AttributeSetBase"));
	
}

void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (IsValid(CharacterDataAsset))
	{
		SetCharacterData(CharacterDataAsset->CharacterData);
	}
}

void ABaseCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	if (!CrouchStateEffect.Get()) return;
	{
		if (AbilitySystemComponent)
		{
			FGameplayEffectContextHandle EffectContextHandle = AbilitySystemComponent->MakeEffectContext();
			
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(CrouchStateEffect, 1, EffectContextHandle);
			if (SpecHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGameplayEffectHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
				if (!ActiveGameplayEffectHandle.WasSuccessfullyApplied())
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to apply crouch effect! %s"), *GetNameSafe(CrouchStateEffect));
				}
			}
		}
	}
	
}

void ABaseCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	if (AbilitySystemComponent && CrouchStateEffect.Get())
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(CrouchStateEffect, AbilitySystemComponent);
	}
}

FCharacterData ABaseCharacter::GetCharacterData() const
{
	return CharacterData;
}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseCharacter, CharacterData);
}

void ABaseCharacter::SetCharacterData(const FCharacterData& InCharacterData)
{
	CharacterData = InCharacterData;

	InitFromCharacterData(CharacterData);
}



void ABaseCharacter::OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data)
{
	GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
}

void ABaseCharacter::OnHealthAttributeChanged(const FOnAttributeChangeData& Data)
{
	if (Data.NewValue <= 0 && Data.OldValue > 0)
	{
		ABaseCharacter* OtherCharacter = nullptr;

		if (Data.GEModData)
		{
			const FGameplayEffectContextHandle& EffectContext = Data.GEModData->EffectSpec.GetEffectContext();
			OtherCharacter = Cast<ABaseCharacter>(EffectContext.GetInstigator());
		}

		FGameplayEventData EventPayload;
		EventPayload.EventTag = ZeroHealthEventTag;

		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, ZeroHealthEventTag, EventPayload);
	}
}

void ABaseCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveActiveEffectsWithTags(InAirTags);
	}
}


void ABaseCharacter::OnRep_CharacterData()
{
	InitFromCharacterData(CharacterData, true);
}

void ABaseCharacter::InitFromCharacterData(const FCharacterData& InCharacterData, bool bFromReplicaton)
{


	
}


bool ABaseCharacter::ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect, FGameplayEffectContextHandle InEffectContext)
{
	if (!Effect.Get()) return false;

	FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(Effect, 1, InEffectContext);
	if (SpecHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

		return ActiveGEHandle.WasSuccessfullyApplied();
	}
	
	return false;
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ABaseCharacter::GiveAbility()
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		for (auto DefaultAbility : CharacterData.Abilities)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultAbility));
		}
	}
}

void ABaseCharacter::ApplyStartupEffect()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);
		
		for (auto CharacterEffect : CharacterData.Effects)
		{
			ApplyGameplayEffectToSelf(CharacterEffect, EffectContext);
		}
		
	}
}

void ABaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this,this);
	
	GiveAbility();
	ApplyStartupEffect();
}

void ABaseCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	AbilitySystemComponent->InitAbilityActorInfo(this,this);
	
}

void ABaseCharacter::PawnClientRestart()
{
	Super::PawnClientRestart();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings();

			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABaseCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABaseCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MoveForwardInputAction)
		{
			EnhancedInputComponent->BindAction(MoveForwardInputAction, ETriggerEvent::Triggered, this, &ABaseCharacter::OnMoveForwardAction);
		}
		if (MoveSideInputAction)
		{
			EnhancedInputComponent->BindAction(MoveSideInputAction, ETriggerEvent::Triggered, this, &ABaseCharacter::OnMoveSideAction);
		}
		if (TurnInputAction)
		{
			EnhancedInputComponent->BindAction(TurnInputAction, ETriggerEvent::Triggered, this, &ABaseCharacter::OnTurnAction);
		}
		if (LookUpInputAction)
		{
			EnhancedInputComponent->BindAction(LookUpInputAction, ETriggerEvent::Triggered, this, &ABaseCharacter::OnLookUpAction);
		}
		if (JumpInputAction)
		{
			EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Started, this, &ABaseCharacter::OnJumpActionStarted);
			EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Completed, this, &ABaseCharacter::OnJumpActionEnded);
		}
		if (CrouchInputAction)
		{
			EnhancedInputComponent->BindAction(CrouchInputAction, ETriggerEvent::Started, this, &ABaseCharacter::OnCrouchActionStarted);
			EnhancedInputComponent->BindAction(CrouchInputAction, ETriggerEvent::Completed, this, &ABaseCharacter::OnCrouchActionEnded);
		}
		if (SprintInputAction)
		{
			EnhancedInputComponent->BindAction(SprintInputAction, ETriggerEvent::Started, this, &ABaseCharacter::OnSprintActionStarted);
			EnhancedInputComponent->BindAction(SprintInputAction, ETriggerEvent::Completed, this, &ABaseCharacter::OnSprintActionEnded);
		}
		if (YelpAction)
		{
			EnhancedInputComponent->BindAction(YelpAction, ETriggerEvent::Started, this, &ABaseCharacter::OnYelpActionStarted);
		}

		if (PeeAction)
		{
			EnhancedInputComponent->BindAction(PeeAction, ETriggerEvent::Started, this, &ABaseCharacter::OnPeeActionStarted);
		}

		if (PawAction)
		{
			EnhancedInputComponent->BindAction(PawAction, ETriggerEvent::Started, this, &ABaseCharacter::OnPawActionStarted);
		}

		if (FartAction)
		{
			EnhancedInputComponent->BindAction(FartAction, ETriggerEvent::Started, this, &ABaseCharacter::OnFartAcationStarted);
		}
		

	}

}

void ABaseCharacter::OnMoveForwardAction(const FInputActionValue& Value)
{
	
	
}

void ABaseCharacter::OnMoveSideAction(const FInputActionValue& Value)
{
	
}

void ABaseCharacter::OnTurnAction(const FInputActionValue& Value)
{
			
AddControllerYawInput(Value.GetMagnitude() * TurnRateGamepad *  GetWorld()->GetDeltaSeconds());
			
}

void ABaseCharacter::OnLookUpAction(const FInputActionValue& Value)
{
AddControllerPitchInput(Value.GetMagnitude() * TurnRateGamepad *  GetWorld()->GetDeltaSeconds());
}

void ABaseCharacter::OnJumpActionStarted(const FInputActionValue& Value)
{
	XCharacterMovComp->TryTraversal(AbilitySystemComponent);
}

void ABaseCharacter::OnJumpActionEnded(const FInputActionValue& Value)
{
//StopJumping();
}

void ABaseCharacter::OnCrouchActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(CrouchTags, true);
	}
	
}

void ABaseCharacter::OnCrouchActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		FGameplayTagContainer* CrouchTagsPtr = &CrouchTags; // CrouchTags'i bir işaretçiye dönüştürme
		AbilitySystemComponent->CancelAbilities(CrouchTagsPtr);
	}
}

void ABaseCharacter::OnSprintActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(SprintTags, true);
	}
}

void ABaseCharacter::OnSprintActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		FGameplayTagContainer* SprintTagsPtr = &SprintTags; // CrouchTags'i bir işaretçiye dönüştürme
		AbilitySystemComponent->CancelAbilities(SprintTagsPtr);
	}
}

void ABaseCharacter::OnYelpActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(YelpTags, true);
	}
}

void ABaseCharacter::OnPeeActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(PeeTags, true);
	}
}

void ABaseCharacter::OnPawActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(PawTags, true);
	}
}

void ABaseCharacter::OnFartAcationStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(FartTags, true);
	}
}
 