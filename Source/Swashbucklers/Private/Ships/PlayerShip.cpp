// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/PlayerShip.h"
#include "GameModes/SBGameMode.h"
#include "PlayerStates/CaptainState.h"

#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameFramework/GameStateBase.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

APlayerShip::APlayerShip()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(ShipMesh);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &APlayerShip::Move);
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Completed, this, &APlayerShip::HoistSails);
		EnhancedInputComponent->BindAction(TurnAction, ETriggerEvent::Triggered, this, &APlayerShip::Turn);
		EnhancedInputComponent->BindAction(TurnAction, ETriggerEvent::None, this, &APlayerShip::RightShip);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerShip::Look);
		EnhancedInputComponent->BindAction(FirePortCannonsAction, ETriggerEvent::Triggered, this, &APlayerShip::FirePortCannons);
		EnhancedInputComponent->BindAction(FireStarboardCannonsAction, ETriggerEvent::Triggered, this, &APlayerShip::FireStarboardCannons);
	}
}

void APlayerShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}

void APlayerShip::GetInputSubsytem()
{
	if (PlayerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerContext, 0);
		}
	}
}

void APlayerShip::Move(const FInputActionValue& Value)
{
	if (bIsDead) return;
	//CruisingSoundComponent->FadeIn(1.f);
	ServerDropSails();
	const FVector2D MovementVector = Value.Get<FVector2D>();
	const FRotator Rotation = GetActorRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, MovementVector.Y);

}

void APlayerShip::Turn(const FInputActionValue& Value)
{
	if (bIsDead) return;
	const FVector2D MovementVector = Value.Get<FVector2D>();
	const FRotator Rotation = GetActorRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	float RotationAngle = 70.f * DeltaSeconds * MovementVector.X / 2;
	FQuat RotationDelta(GetActorUpVector(), FMath::DegreesToRadians(RotationAngle));

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	//AddMovementInput(-ForwardDirection, MovementVector.X);
	AddActorWorldRotation(RotationDelta);

	if (MovementVector.X == 1)
	{
		FRotator RotationToSet = GetActorRotation();
		RotationToSet.Roll = TurnRollAmount;
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed));
	}
	else if (MovementVector.X == -1)
	{
		FRotator RotationToSet = GetActorRotation();
		RotationToSet.Roll = -TurnRollAmount;
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed));
	}
}

void APlayerShip::RightShip(const FInputActionValue& Value)
{
	FRotator RotationToSet = GetActorRotation();
	RotationToSet.Roll = 0.f;
	SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed / 2));
}

void APlayerShip::FirePortCannons()
{
	Super::FirePortCannons();

	if (bIsDead) return;

	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateAbility(PortCannonAbility);
		}
	}
	else
	{
		ServerFireCannons(PortCannonAbility);
	}
}

void APlayerShip::FireStarboardCannons()
{
	Super::FireStarboardCannons();

	if (bIsDead) return;
	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateAbility(StarboardCannonAbility);
		}
	}
	else
	{
		ServerFireCannons(StarboardCannonAbility);
	}
}

void APlayerShip::ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate)
{
	//Super::ServerFireCannons(CannonAbilityToActivate);
	if (bIsDead) return;
	CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;
	if (CaptainState)
	{
		CaptainState->ActivateAbility(CannonAbilityToActivate);
	}

}

void APlayerShip::Look(const FInputActionValue& Value)
{

	const FVector2D LookAxisVector = Value.Get<FVector2D>();


	if (PlayerController != nullptr)
	{
		SpringArm->AddLocalRotation(FRotator(LookAxisVector.Y, 0.f, 0.f));
		SpringArm->AddLocalRotation(FRotator(0.f, LookAxisVector.X, 0));
		SpringArm->SetRelativeRotation(FRotator(SpringArm->GetRelativeRotation().Pitch, SpringArm->GetRelativeRotation().Yaw, 0.f));
	}
}

void APlayerShip::HoistSails(const FInputActionValue& Value)
{
	if (bIsDead) return;
	/*if (CruisingSoundComponent->IsPlaying())
	{
		CruisingSoundComponent->FadeOut(1.f, 0.f);
	}*/

	//CruisingSoundComponent->
	ServerHoistSails();
}

void APlayerShip::ServerDropSails_Implementation()
{
	bOpenSails = true;
}

void APlayerShip::ServerHoistSails_Implementation()
{
	bOpenSails = false;
}

void APlayerShip::Die()
{
	Super::Die();

	GetWorldTimerManager().SetTimer(RespawnTimer, this, &APlayerShip::RequestRespawnFromServer, RespawnTime);
	FDetachmentTransformRules TransformRules(EDetachmentRule::KeepWorld, true);
	SpringArm->DetachFromComponent(TransformRules);

}

void APlayerShip::RequestRespawnFromServer()
{
	if (!HasAuthority()) return;

	ASBGameMode* GameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->RequestRespawn(this, this->Controller);
	}
}

void APlayerShip::ResetHealth()
{
	ACaptainState* CS = GetPlayerState<ACaptainState>();
	if (CS)
	{
		CS->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetBaseValue(ShipHealth);
	}
}

void APlayerShip::ServerResetHealth_Implementation()
{
	ACaptainState* CS = GetPlayerState<ACaptainState>();
	if (CS)
	{
		CS->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetBaseValue(ShipHealth);
	}
}


void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;
	GetInputSubsytem();
	CaptainState = GetCaptainState();
}

void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PollInit();
}

void APlayerShip::PollInit()
{
	if(CaptainState == nullptr)
	{
		CaptainState = GetCaptainState();
	}

	if (!bSailColorSet && CaptainState)
	{
		if (!HasAuthority())
		{
			//UE_LOG(LogTemp, Warning, TEXT("Called from client"))
		}
		SetSailColors(CaptainState->GetPlayerTeam());
	}
}

void APlayerShip::SetSailColors(ETeam PlayerTeam)
{
	TArray<UActorComponent*> Sails = GetComponentsByTag(UActorComponent::StaticClass(), "Sail");
	TArray<UActorComponent*> Flags = GetComponentsByTag(UActorComponent::StaticClass(), "Flag");

	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Called from auth"))
	}

	if (PlayerTeam == ETeam::ET_Pirate)
	{
		UE_LOG(LogTemp, Warning, TEXT("Set pirate material"))

		ShipMesh->SetMaterial(4, PirateMaterialSecondary);
		for (UActorComponent* Sail : Sails)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Sail);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PirateMaterial);
			}
		}

		for (UActorComponent* Flag : Flags)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Flag);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PirateFlag);
			}
		}
		bSailColorSet = true;
	}
	else if (PlayerTeam == ETeam::ET_Privateer)
	{
		UE_LOG(LogTemp, Warning, TEXT("Set Privateer material"))
		ShipMesh->SetMaterial(4, PrivateerMaterialSecondary);
		for (UActorComponent* Sail : Sails)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Sail);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PrivateerMaterial);
			}
		}

		for (UActorComponent* Flag : Flags)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Flag);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PrivateerFlag);
			}
		}
		bSailColorSet = true;
	}
}

void APlayerShip::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	ACaptainState* CS = GetPlayerState<ACaptainState>();
	if (CS)
	{
		AbilitySystemComponent = Cast<USBAbilitySystemComponent>(CS->GetAbilitySystemComponent());
		if (!HasAuthority())
		{
			ServerResetHealth();
		}
		else
		{
			ResetHealth();
		}

		CS->GetAbilitySystemComponent()->InitAbilityActorInfo(CS, this);
	}
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;
	AcquireCannonAbilities();
}

void APlayerShip::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	CaptainState = GetPlayerState<ACaptainState>();
	if (CaptainState)
	{
		AbilitySystemComponent = Cast<USBAbilitySystemComponent>(CaptainState->GetAbilitySystemComponent());
		CaptainState->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		if (!HasAuthority())
		{
			ServerResetHealth();
		}
		else
		{
			ResetHealth();
		}
		CaptainState->GetAbilitySystemComponent()->InitAbilityActorInfo(CaptainState, this);
	}
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;

	AcquireCannonAbilities();
}

void APlayerShip::BindAbilityComponentDelegates()
{
	Super::BindAbilityComponentDelegates();

	if (CaptainState)
	{
		CaptainState->GetAttributeSet()->OnHealthChange.AddDynamic(this, &APlayerShip::OnHealthChanged);
	}
}

ACaptainState* APlayerShip::GetCaptainState()
{
	//if (!HasAuthority())
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Called from client -- get cap state"))
	//}
	CaptainState = CaptainState == nullptr ? Cast<ACaptainState>(GetPlayerState()) : CaptainState;
	if (CaptainState)
	{
		CaptainState->GetAttributeSet()->OnHealthChange.AddDynamic(this, &APlayerShip::OnHealthChanged);
		return CaptainState;
		/*AcquireCannonAbilities();*/
	}
	else
	{
		return nullptr;
	}
}

//void APlayerShip::ServerGetCaptainState_Implementation()
//{
//	CaptainState = Cast<ACaptainState>(GetPlayerState());
//	if (CaptainState)
//	{
//		CaptainState->GetAttributeSet()->OnHealthChange.AddDynamic(this, &APlayerShip::OnHealthChanged);
//	}
//	return;
//}