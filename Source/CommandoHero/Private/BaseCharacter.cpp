// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"


ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer)
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
}

void ABaseCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

void ABaseCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

bool ABaseCharacter::ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect,
	FGameplayEffectContextHandle InEffectContext)
{
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
}

void ABaseCharacter::GiveAbility()
{
}

void ABaseCharacter::ApplyStartupEffect()
{
}

void ABaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void ABaseCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void ABaseCharacter::PawnClientRestart()
{
	Super::PawnClientRestart();
}

void ABaseCharacter::OnMoveForwardAction(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnMoveSideAction(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnTurnAction(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnLookUpAction(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnJumpActionStarted(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnJumpActionEnded(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnCrouchActionStarted(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnCrouchActionEnded(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnSprintActionStarted(const FInputActionValue& Value)
{
}

void ABaseCharacter::OnSprintActionEnded(const FInputActionValue& Value)
{
}

FCharacterData ABaseCharacter::GetCharacterData() const
{
}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ABaseCharacter::SetCharacterData(const FCharacterData& InCharacterData)
{
}

UXFootStepsComponent* ABaseCharacter::GetFootStepComponent() const
{
}

void ABaseCharacter::OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data)
{
}

void ABaseCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
}

void ABaseCharacter::OnRep_CharacterData()
{
}

void ABaseCharacter::InitFromCharacterData(const FCharacterData& InCharacterData, bool bFromReplicaton)
{
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

