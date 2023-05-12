// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/PlayerShip.h"
#include "GameModes/SBGameMode.h"
#include "PlayerStates/CaptainState.h"
#include "Weapons/Cannon.h"
#include "Interfaces/InteractableInterface.h"
#include "CapturePoints/CapturePoint.h"

#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameStates/SBGameState.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "HUD/PlayerNameplateComponent.h"
#include "HUD/Actors/BountyActor.h"
#include "HUD/CaptainHUD.h"

#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Engine/CollisionProfile.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

APlayerShip::APlayerShip()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(ShipMesh);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	PlayerNameplateComponent = CreateDefaultSubobject<UPlayerNameplateComponent>(TEXT("PlayerNameplate"));
	PlayerNameplateComponent->SetupAttachment(ShipMesh);

	CaptainMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CaptainMesh"));
	CaptainMesh->SetupAttachment(GetRootComponent());
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
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &APlayerShip::StartInteracting);
		EnhancedInputComponent->BindAction(MouseWheelAction, ETriggerEvent::Triggered, this, &APlayerShip::MouseWheel);
		EnhancedInputComponent->BindAction(FirePortCannonsAction, ETriggerEvent::Triggered, this, &APlayerShip::FirePortCannons);
		EnhancedInputComponent->BindAction(FireStarboardCannonsAction, ETriggerEvent::Triggered, this, &APlayerShip::FireStarboardCannons);
		EnhancedInputComponent->BindAction(FireAuxiliaryCannonsAction, ETriggerEvent::Triggered, this, &APlayerShip::FireAuxiliaryCannons);
		EnhancedInputComponent->BindAction(AuxiliaryCannonsReleasedAction, ETriggerEvent::Triggered, this, &APlayerShip::ReleaseAuxiliaryCannons);
		EnhancedInputComponent->BindAction(PortCannonsReleasedAction, ETriggerEvent::Triggered, this, &APlayerShip::ReleasePortCannons);
		EnhancedInputComponent->BindAction(StarboardCannonsReleasedAction, ETriggerEvent::Triggered, this, &APlayerShip::ReleaseStarboardCannons);

		EnhancedInputComponent->BindAction(Slot1Action, ETriggerEvent::Triggered, this, &APlayerShip::ActivateSlot1Action);
		EnhancedInputComponent->BindAction(Slot2Action, ETriggerEvent::Triggered, this, &APlayerShip::ActivateSlot2Action);
		EnhancedInputComponent->BindAction(Slot3Action, ETriggerEvent::Triggered, this, &APlayerShip::ActivateSlot3Action);
		EnhancedInputComponent->BindAction(Slot4Action, ETriggerEvent::Triggered, this, &APlayerShip::ActivateSlot4Action);
	}
}

void APlayerShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerShip, StarboardCannonRotation);
	DOREPLIFETIME(APlayerShip, PortCannonRotation);
	DOREPLIFETIME(APlayerShip, bTurningLeft);
	DOREPLIFETIME(APlayerShip, bTurningRight);

}

void APlayerShip::GetInputSubsytem()
{
	if (PlayerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerContext, 0);
			bPlayerInputSet = true;
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
	AddMovementInput(ForwardDirection, MovementVector.Y, true);

}

void APlayerShip::Turn(const FInputActionValue& Value)
{
	if (bIsDead) return;
	const FVector2D MovementVector = Value.Get<FVector2D>();
	const FRotator Rotation = GetActorRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	float RotationAngle = RotationMultiplier * DeltaSeconds * MovementVector.X / 2;
	FQuat RotationDelta(GetActorUpVector(), FMath::DegreesToRadians(RotationAngle));

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	//AddMovementInput(-ForwardDirection, MovementVector.X);
	AddActorWorldRotation(RotationDelta);

	if (MovementVector.X == 1)
	{
		bTurningLeft = false;
		bTurningRight = true;
		if (GetLocalRole() != ENetRole::ROLE_Authority)
		{
			ServerCaptainTurn(bTurningLeft, bTurningRight);
		}

		FRotator RotationToSet = GetActorRotation();
		RotationToSet.Roll = TurnRollAmount;
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed));
		if (RudderMesh)
		{
			RudderMesh->SetRelativeRotation(FMath::RInterpTo(RudderMesh->GetRelativeRotation(), FRotator(0.f,-70.f,0.f), DeltaSeconds, RudderTurnSpeed));
		}

	}
	else if (MovementVector.X == -1)
	{
		bTurningRight = false;
		bTurningLeft = true;
		if (GetLocalRole() != ENetRole::ROLE_Authority)
		{
			ServerCaptainTurn(bTurningLeft, bTurningRight);
		}
		FRotator RotationToSet = GetActorRotation();
		RotationToSet.Roll = -TurnRollAmount;
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed));
		if (RudderMesh)
		{
			RudderMesh->SetRelativeRotation(FMath::RInterpTo(RudderMesh->GetRelativeRotation(), FRotator(0.f, 70.f, 0.f), DeltaSeconds, RudderTurnSpeed));
		}
	}

}

void APlayerShip::RightShip(const FInputActionValue& Value)
{
	bTurningLeft = false;
	bTurningRight = false;

	if (GetLocalRole() != ENetRole::ROLE_Authority)
	{
		ServerCaptainTurn(bTurningLeft, bTurningRight);
	}
	if (RudderMesh)
	{
		RudderMesh->SetRelativeRotation(FMath::RInterpTo(RudderMesh->GetRelativeRotation(), FRotator::ZeroRotator, DeltaSeconds, RudderTurnSpeed));
	}

	FRotator RotationToSet = GetActorRotation();
	RotationToSet.Pitch = FMath::Clamp(GetActorRotation().Pitch, -15.f, 15.f);
	RotationToSet.Roll = 0.f;
	SetActorRotation(FMath::RInterpTo(GetActorRotation(), RotationToSet, DeltaSeconds, StrafeSpeed / 2));

}


void APlayerShip::ServerCaptainTurn_Implementation(bool bNewLeft, bool bNewRight)
{
	bTurningLeft = bNewLeft;
	bTurningRight = bNewRight;
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

void APlayerShip::ReleasePortCannons()
{
	if (CaptainState)
	{
		CaptainState->SendLocalInputToASC(false, 1);
	}
}

void APlayerShip::ReleaseStarboardCannons()
{
	if (CaptainState)
	{
		CaptainState->SendLocalInputToASC(false, 2);
	}
}

void APlayerShip::FireAuxiliaryCannons()
{
	if (CaptainState && AuxiliaryCannonAbility)
	{
		if (HasAuthority())
		{
			if (bIsDead) return;
			CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;

			if (CaptainState)
			{
				CaptainState->ActivateAbility(AuxiliaryCannonAbility);
			}
			if (StoreShipName == FName("Turtle Ship"))
			{
				bAuxiliaryCannonsActive = true;
				GetWorldTimerManager().SetTimer(AuxCannonTimer, this, &APlayerShip::AuxiliaryCannonActive, .5f);
			}
		}
		else
		{
			ServerFireAuxiliary(PortCannonAbility);
		}
	}

}

void APlayerShip::ServerFireAuxiliary_Implementation(TSubclassOf<USBGameplayAbility> AuxAbilityToActivate)
{
	if (bIsDead) return;
	CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;

	if (CaptainState)
	{
		CaptainState->ActivateAbility(AuxiliaryCannonAbility);
	}
	if (StoreShipName == FName("Turtle Ship"))
	{
		bAuxiliaryCannonsActive = true;
		GetWorldTimerManager().SetTimer(AuxCannonTimer, this, &APlayerShip::AuxiliaryCannonActive, .5f);
	}

}

void APlayerShip::ReleaseAuxiliaryCannons()
{
	if (CaptainState && HasAuthority())
	{
		CaptainState->SendLocalInputToASC(false, 3);
		bAuxiliaryCannonsActive = false;
		GetWorldTimerManager().ClearTimer(AuxCannonTimer);
	}
	else
	{
		ServerReleaseAuxiliarycannons();
	}
}

void APlayerShip::ServerReleaseAuxiliarycannons_Implementation()
{
	CaptainState->SendLocalInputToASC(false, 3);
	bAuxiliaryCannonsActive = false;
	GetWorldTimerManager().ClearTimer(AuxCannonTimer);

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

void APlayerShip::ActivateSlot1Action() 
{
	if (bIsDead) return;
	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateSlotAbility(EAbilitySlot::EAS_Slot1);
		}
	}
	else
	{
		ServerActivateSlotAction(EAbilitySlot::EAS_Slot1);
	}
}

void APlayerShip::ActivateSlot2Action()
{
	if (bIsDead) return;
	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateSlotAbility(EAbilitySlot::EAS_Slot2);
		}
	}
	else
	{
		ServerActivateSlotAction(EAbilitySlot::EAS_Slot2);
	}
}

void APlayerShip::ActivateSlot3Action()
{
	if (bIsDead) return;
	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateSlotAbility(EAbilitySlot::EAS_Slot3);
		}
	}
	else
	{
		ServerActivateSlotAction(EAbilitySlot::EAS_Slot3);
	}
}

void APlayerShip::ActivateSlot4Action()
{
	if (bIsDead) return;
	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateSlotAbility(EAbilitySlot::EAS_Slot4);
		}
	}
	else
	{
		ServerActivateSlotAction(EAbilitySlot::EAS_Slot4);
	}
}

void APlayerShip::ServerActivateSlotAction_Implementation(EAbilitySlot AbilitySlotToActivate)
{
	if (bIsDead) return;
	CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;
	if (CaptainState)
	{
		CaptainState->ActivateSlotAbility(AbilitySlotToActivate);
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

void APlayerShip::MouseWheel(const FInputActionValue& Value)
{
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

void APlayerShip::Die(AActor* InstigatorActor)
{
	Super::Die(InstigatorActor);


	GetWorldTimerManager().SetTimer(RespawnTimer, this, &APlayerShip::RequestRespawnFromServer, RespawnTime);
	FDetachmentTransformRules TransformRules(EDetachmentRule::KeepWorld, true);
	SpringArm->DetachFromComponent(TransformRules);

	ACaptainState* InstigatorCS = Cast<ACaptainState>(InstigatorActor);

	if (CaptainState)
	{
		CaptainState->RemoveActiveEffects();
	}


	if (InstigatorCS && CaptainState)
	{
		InstigatorCS->GetAttributeSet()->CollectBounty(this, CaptainState->GetAttributeSet()->Bounty.GetCurrentValue());

		ASBGameState* GameState = GetWorld()->GetGameState<ASBGameState>();
		if (GameState)
		{
			GameState->PlayerKilled(CaptainState, InstigatorCS);
		}
	}

	if (CaptainState && CaptainState->CurrentShip != CaptainState->DefaultShip)
	{
		CaptainState->OwnedShips.Remove(CaptainState->CurrentShip);
		CaptainState->CurrentShip = CaptainState->DefaultShip;
	}
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
		CS->GetAttributeSet()->MaxHealth.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->MaxHealth.SetBaseValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetBaseValue(ShipHealth);
		CS->GetAttributeSet()->MaxMana.SetBaseValue(100.f);
		CS->GetAttributeSet()->MaxMana.SetCurrentValue(100.f);
		CS->GetAttributeSet()->Mana.SetBaseValue(100.f);
		CS->GetAttributeSet()->Mana.SetCurrentValue(100.f);
		InitializeOverlays();
	}
}

void APlayerShip::ServerResetHealth_Implementation()
{
	ACaptainState* CS = GetPlayerState<ACaptainState>();
	if (CS)
	{
		CS->GetAttributeSet()->MaxHealth.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->MaxHealth.SetBaseValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		CS->GetAttributeSet()->Health.SetBaseValue(ShipHealth);
		CS->GetAttributeSet()->MaxMana.SetBaseValue(100.f);
		CS->GetAttributeSet()->MaxMana.SetCurrentValue(100.f);
		CS->GetAttributeSet()->Mana.SetBaseValue(100.f);
		CS->GetAttributeSet()->Mana.SetCurrentValue(100.f);
	}
}


void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;
	GetInputSubsytem();
	CaptainState = GetCaptainState();
	SetPlayerNameplate(CaptainState);
	InitializeOverlays();
	if (PawnMovement)
	{
		DefaultSpeed = PawnMovement->MaxSpeed;
		DefaultAcceleration = PawnMovement->Acceleration;
	}
	AcquireCannonAbilities();

}

void APlayerShip::SetSailColors(ETeam TeamToSet)
{
	Super::SetSailColors(TeamToSet);

	if (TeamToSet == ETeam::ET_Pirate && CaptainMesh)
	{
		CaptainMesh->SetMaterial(0, PirateCaptainMaterial);
	}
	else if (TeamToSet == ETeam::ET_Privateer && CaptainMesh)
	{
		CaptainMesh->SetMaterial(0, PrivateerCaptainMaterial);
	}
}

void APlayerShip::InitializeOverlays()
{
	if (!IsLocallyControlled()) return;
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(GetController()) : PlayerController;

	if (PlayerController)
	{
		CaptainHUD = Cast<ACaptainHUD>(PlayerController->GetHUD());
		if (CaptainState && CaptainHUD)
		{
			USBAttributeSet* AttSet = CaptainState->GetAttributeSet();
			CaptainHUD->SetHUDHealth(AttSet->Health.GetCurrentValue(), AttSet->MaxHealth.GetCurrentValue());
			CaptainHUD->SetHUDMana(AttSet->Mana.GetCurrentValue(), AttSet->MaxMana.GetCurrentValue());
		}
	}
}

void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TraceForPlayerNameplates();
	PollInit();
	if (bIsDead) return;
	NormalizeCannonRotation(DeltaTime);


}

void APlayerShip::TraceForPlayerNameplates()
{
	if (IsLocallyControlled())
	{
		FVector Start = GetActorLocation();
		FVector End = GetActorRotation().Vector() * 23000.f + GetActorLocation();
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(this);
		TArray<FHitResult> OutHits;
		ETraceTypeQuery TypeQuery = UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1);
		UKismetSystemLibrary::SphereTraceMulti(this, Start, End, 7000, TypeQuery, false, ActorsToIgnore, EDrawDebugTrace::None, OutHits, true);

		for (FHitResult Hit : OutHits)
		{
			if (Hit.GetActor())
			{
				IPlayerInterface* PlayerHit = Cast<IPlayerInterface>(Hit.GetActor());
				if (PlayerHit && PlayerHit != this)
				{
					PlayerHit->GetPlayerNameplate()->SetNameplateVisibility(true);
					return;
				}
				ACapturePoint* CapturePoint = Cast<ACapturePoint>(Hit.GetActor());
				if (CapturePoint)
				{
					CapturePoint->SetProgressBarVisibility(true);
				}

			}
		}
	}
}

void APlayerShip::PollInit()
{
	if(CaptainState == nullptr)
	{
		CaptainState = GetCaptainState();
	}

	if (CaptainHUD == nullptr && PlayerController)
	{
		CaptainHUD = Cast<ACaptainHUD>(PlayerController->GetHUD());
	}

	if (!bSailColorSet && CaptainState && CaptainState->GetPlayerTeam() != ETeam::ET_NoTeam)
	{
		SetSailColors(CaptainState->GetPlayerTeam());
		if (PlayerNameplateComponent)
		{
			PlayerNameplateComponent->SetPlayerNameTeamColor(CaptainState->GetPlayerTeam());
		}
	}

	if (!bPlayerInputSet)
	{
		GetInputSubsytem();
	}
}

void APlayerShip::NormalizeCannonRotation(float DeltaTime)
{
	if (!HasAuthority()) return;
	PortCannonRotationCalc(DeltaTime);
	StarboardCannonRotationCalc(DeltaTime);
}

void APlayerShip::AuxiliaryCannonActive()
{
	if (!HasAuthority() || !bAuxiliaryCannonsActive) return;

	FTransform MuzzleTransform = ShipMesh->GetSocketTransform(FName("AuxiliaryCannonSocket"));

	FVector End = GetActorRotation().Vector() * 4000.f + GetActorLocation();
	TArray<AActor*>ActorsToIgnore;
	TArray<FHitResult> HitActors;
	ActorsToIgnore.Add(this);

	UKismetSystemLibrary::SphereTraceMulti(this, MuzzleTransform.GetLocation(), End, 450, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForOneFrame, HitActors, true);
	//DrawDebugSphere(GetWorld(), MuzzleTransform.GetLocation(), 130, 12, FColor::Red);
	for(FHitResult Hit : HitActors)
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(this);
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor && AuxilaryCannonGEHandle.IsValid())
			{

				FGameplayAbilityTargetDataHandle TargetHandle = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(HitActor);
				if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
				{
					ApplyGESpecHandleToTargetData(AuxilaryCannonGEHandle, TargetHandle);
				}
			}
		}
	}
	HitActors.Empty();

	if (bAuxiliaryCannonsActive)
	{
		GetWorldTimerManager().SetTimer(AuxCannonTimer, this, &APlayerShip::AuxiliaryCannonActive , .5f);
	}
}

void APlayerShip::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}


UPlayerNameplateComponent* APlayerShip::GetPlayerNameplate()
{
	if (PlayerNameplateComponent && CaptainState && CaptainState->GetAttributeSet())
	{
		PlayerNameplateComponent->SetPlayerBounty(CaptainState->GetAttributeSet()->GetBounty());
	}
	GetWorldTimerManager().SetTimer(NameplateVisibilityTimer, this, &APlayerShip::NameplateVisibilityTimerFinished, 5.f);
	return PlayerNameplateComponent;
}

void APlayerShip::NameplateVisibilityTimerFinished()
{
	GetPlayerNameplate()->SetNameplateVisibility(false);
}


void APlayerShip::StarboardCannonRotationCalc(float DeltaTime)
{
	if (!HasAuthority()) return;
	if (ShipMesh->GetComponentRotation().Roll > BeginCannonCorrectionAngle)
	{
		for (ACannon* Cannon : StarboardCannons)
		{
			FRotator TargetRotation = Cannon->GetActorRotation();
			TargetRotation.Pitch = CannonCorrectionAngle;
			Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), TargetRotation, DeltaTime, CannonCorrectionSpeed));
			StarboardCannonRotation = Cannon->GetActorRotation();
		}
	}
	else
	{
		for (ACannon* Cannon : StarboardCannons)
		{
			if (ShipMesh && Cannon)
			{
				FRotator TargetRotation = ShipMesh->GetSocketRotation(Cannon->SocketName);
			//TargetRotation.Pitch = ShipMesh->GetSocketRotation(Cannon->SocketName).Pitch;
				Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), TargetRotation, DeltaTime, CannonCorrectionSpeed));
				StarboardCannonRotation = Cannon->GetActorRotation();
			}
		}
	}
}

void APlayerShip::PortCannonRotationCalc(float DeltaTime)
{
	if (!HasAuthority()) return;
	if (ShipMesh->GetComponentRotation().Roll < -BeginCannonCorrectionAngle)
	{
		for (ACannon* Cannon : PortCannons)
		{
			FRotator TargetRotation = Cannon->GetActorRotation();
			TargetRotation.Pitch = CannonCorrectionAngle;
			Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), TargetRotation, DeltaTime, CannonCorrectionSpeed));
			PortCannonRotation = Cannon->GetActorRotation();
		}
	}
	else
	{
		for (ACannon* Cannon : PortCannons)
		{
			if (ShipMesh && Cannon)
			{
				FRotator TargetRotation = ShipMesh->GetSocketRotation(Cannon->SocketName);
				//TargetRotation.Pitch = ShipMesh->GetSocketRotation(Cannon->SocketName).Pitch;
				Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), TargetRotation, DeltaTime, CannonCorrectionSpeed));
				PortCannonRotation = Cannon->GetActorRotation();
			}
		}
	}
}

void APlayerShip::OnRep_StarboardCannonRotationCalc()
{

	for (ACannon* Cannon : StarboardCannons)
	{
		if (Cannon)
		{
			Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), StarboardCannonRotation, DeltaSeconds, CannonCorrectionSpeed));
		}
	}

}

void APlayerShip::OnRep_PortCannonRotationCalc()
{

	for (ACannon* Cannon : PortCannons)
	{
		if (Cannon)
		{
			Cannon->SetActorRotation(FMath::RInterpTo(Cannon->GetActorRotation(), PortCannonRotation, DeltaSeconds, CannonCorrectionSpeed));
		}
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
		CS->ApplyRegenEffects();
		SetPlayerNameplate(CS);
	}
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;
	AcquireCannonAbilities();
}

void APlayerShip::SetPlayerNameplate(ACaptainState* CS)
{
	if (PlayerNameplateComponent)
	{
		if (CS)
		{
			FName PlayerName = FName(*CS->GetPlayerName());
			PlayerNameplateComponent->SetPlayerName(PlayerName);

			PlayerNameplateComponent->SetPlayerBounty(CS->GetAttributeSet()->Bounty.GetCurrentValue());
		}
	}
}

void APlayerShip::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	CaptainState = GetPlayerState<ACaptainState>();
	if (CaptainState)
	{
		BindAbilityComponentDelegates();
		BindInteractionDelegates();
		AbilitySystemComponent = Cast<USBAbilitySystemComponent>(CaptainState->GetAbilitySystemComponent());
		CaptainState->GetAttributeSet()->Health.SetCurrentValue(ShipHealth);
		CaptainState->GetAttributeSet()->Mana.SetCurrentValue(100);
		InitializeOverlays();
		if (!HasAuthority())
		{
			ServerResetHealth();
		}
		else
		{
			ResetHealth();
		}
		CaptainState->GetAbilitySystemComponent()->InitAbilityActorInfo(CaptainState, this);
		SetPlayerNameplate(CaptainState);


		CaptainState->ApplyRegenEffects();

	}
	PlayerController = PlayerController == nullptr ? Cast<APlayerController>(Controller) : PlayerController;
	AcquireCannonAbilities();
}

void APlayerShip::BindAbilityComponentDelegates()
{
	if (CaptainState)
	{
		CaptainState->GetAttributeSet()->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
		CaptainState->GetAttributeSet()->OnManaChange.AddUniqueDynamic(this, &APlayerShip::OnManaChanged);
		CaptainState->GetAttributeSet()->OnSpeedChange.AddUniqueDynamic(this, &APlayerShip::OnSpeedChanged);
		CaptainState->GetAttributeSet()->OnBountyChange.AddUniqueDynamic(this, &APlayerShip::OnBountyChange);
		CaptainState->GetAttributeSet()->OnPiecesOfEightChange.AddUniqueDynamic(this, &APlayerShip::OnPiecesOfEightChange);
		CaptainState->GetAttributeSet()->OnPlayerKillChange.AddUniqueDynamic(this, &APlayerShip::OnPlayerKillChange);
		CaptainState->GetAttributeSet()->OnTowerKillChange.AddUniqueDynamic(this, &APlayerShip::OnTowerKillChange);
		CaptainState->GetAttributeSet()->OnCaptureChange.AddUniqueDynamic(this, &APlayerShip::OnCaptureChange);
	}
}

void APlayerShip::BindInteractionDelegates()
{
	ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &APlayerShip::CanInteract);
	ShipMesh->OnComponentEndOverlap.AddDynamic(this, &APlayerShip::EndInteract);
}

void APlayerShip::CanInteract(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetOwner() == this) return;

	if (HasAuthority())
	{
		InteractableInterface = Cast<IInteractableInterface>(OtherActor);

	}
}

void APlayerShip::StartInteracting()
{
	if (HasAuthority())
	{
		if (InteractableInterface == nullptr || !IsLocallyControlled() || !PlayerController) return;
		InteractableInterface->BeginInteraction(PlayerController);
	}
	else
	{
		if (InteractableInterface == nullptr) return;
		ServerStartInteracting(PlayerController);
	}
}

void APlayerShip::ServerStartInteracting_Implementation(APlayerController* ClientPlayerController)
{
	TScriptInterface<IInteractableInterface> ScriptInterface = Cast<UObject>(InteractableInterface);
	ClientStartInteracting(ScriptInterface);
}

void APlayerShip::ClientStartInteracting_Implementation(const TScriptInterface<IInteractableInterface> & ScriptInterface)
{
	if (!ScriptInterface || !PlayerController) return;

	ScriptInterface->BeginInteraction(PlayerController);
	
}

void APlayerShip::EndInteract(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	IInteractableInterface* InterfaceToStopInteracting = Cast<IInteractableInterface>(OtherActor);

	if (InterfaceToStopInteracting == InteractableInterface)
	{
		HandleEndInteract();
	}
}

void APlayerShip::HandleEndInteract()
{
	if (InteractableInterface == nullptr || !IsLocallyControlled() || !PlayerController) return;

	InteractableInterface->EndInteraction(PlayerController);
	
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

		CaptainState->GetAttributeSet()->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
		CaptainState->GetAttributeSet()->OnManaChange.AddUniqueDynamic(this, &APlayerShip::OnManaChanged);
		CaptainState->GetAttributeSet()->OnSpeedChange.AddUniqueDynamic(this, &APlayerShip::OnSpeedChanged);
		CaptainState->GetAttributeSet()->OnBountyChange.AddUniqueDynamic(this, &APlayerShip::OnBountyChange);
		CaptainState->GetAttributeSet()->OnPiecesOfEightChange.AddUniqueDynamic(this, &APlayerShip::OnPiecesOfEightChange);
		CaptainState->GetAttributeSet()->OnPlayerKillChange.AddUniqueDynamic(this, &APlayerShip::OnPlayerKillChange);
		CaptainState->GetAttributeSet()->OnTowerKillChange.AddUniqueDynamic(this, &APlayerShip::OnTowerKillChange);
		CaptainState->GetAttributeSet()->OnCaptureChange.AddUniqueDynamic(this, &APlayerShip::OnCaptureChange);

		return CaptainState;
		/*AcquireCannonAbilities();*/
	}
	else
	{
		return nullptr;
	}

}


void APlayerShip::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	Super::MulticastOnHealthChanged_Implementation(Health, MaxHealth, InstigatorActor);


	if (CaptainHUD && IsLocallyControlled())
	{
		CaptainHUD->SetHUDHealth(Health, MaxHealth);
	}

}

void APlayerShip::OnManaChanged(float Mana, float MaxMana)
{
	if (CaptainHUD && IsLocallyControlled())
	{
		CaptainHUD->SetHUDMana(Mana, MaxMana);
	}
}

void APlayerShip::OnSpeedChanged(float AttributeSpeed)
{
	if (!HasAuthority()) return;

	float NewSpeed = DefaultSpeed;
	float NewAcceleration = DefaultAcceleration;
	if (AttributeSpeed == 0)
	{
		PawnMovement->MaxSpeed = NewSpeed;
		PawnMovement->Acceleration = NewAcceleration;
	}
	else
	{
		NewSpeed += AttributeSpeed;
		NewAcceleration += AttributeSpeed / 2;
		PawnMovement->MaxSpeed = NewSpeed;
		PawnMovement->Acceleration = NewAcceleration;
	}

	ClientOnSpeedChanged(NewSpeed, NewAcceleration);
}

void APlayerShip::ClientOnSpeedChanged_Implementation(float NewSpeed, float NewAcceleration)
{
	PawnMovement->MaxSpeed = NewSpeed;
	PawnMovement->Acceleration = NewAcceleration;
}

void APlayerShip::MulticastOnSpeedChanged_Implementation(float Speed)
{
	if (PawnMovement)
	{
		PawnMovement->MaxSpeed = PawnMovement->GetMaxSpeed() + Speed;
	}
}


void APlayerShip::OnBountyChange(int32 Bounty, AActor* DestroyedActor)
{
	if (!IsLocallyControlled()) return;
	
	if (PlayerNameplateComponent)
	{
		PlayerNameplateComponent->SetPlayerBounty(Bounty);
	}

	/*if (HasAuthority())
	{
		MulticastPlayerBountyChanged(CaptainState);
	}
	else
	{*/
		ServerPlayerBountyChange(CaptainState, Bounty);
	//}
}

void APlayerShip::ServerPlayerBountyChange_Implementation(ACaptainState* CaptainStateBountyChange,int32 Bounty)
{
	MulticastPlayerBountyChanged(CaptainStateBountyChange, Bounty);
}

void APlayerShip::MulticastPlayerBountyChanged_Implementation(ACaptainState* CaptainStateBountyChange,int32 Bounty)
{
	ASBGameState* GameState = GetWorld()->GetGameState<ASBGameState>();
	if (GameState)
	{
		GameState->PlayerBountyChanged(CaptainState, Bounty);
	}
}

void APlayerShip::OnPlayerKillChange(int32 PlayerKills)
{

	if (!IsLocallyControlled()) return;
	
	ServerPlayerKillChange(CaptainState, PlayerKills);
}

void APlayerShip::ServerPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills)
{
	MulticastPlayerKillChange(CaptainStatePlayerKillChange, PlayerKills);
}

void APlayerShip::MulticastPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills)
{
	ASBGameState* GameState = GetWorld()->GetGameState<ASBGameState>();
	if (GameState)
	{
		GameState->UpdatePlayerKills(CaptainState, PlayerKills);
	}
}

void APlayerShip::OnTowerKillChange(int32 TowerKills)
{
	if (!IsLocallyControlled()) return;

	ServerTowerKillChange(CaptainState, TowerKills);
}

void APlayerShip::ServerTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills)
{
	MulticastTowerKillChange(CaptainStateTowerKillChange, TowerKills);
}

void APlayerShip::MulticastTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills)
{
	ASBGameState* GameState = GetWorld()->GetGameState<ASBGameState>();
	if (GameState)
	{
		GameState->UpdateTowerKills(CaptainState, TowerKills);
	}
}

void APlayerShip::OnCaptureChange(int32 Captures)
{

	ServerCaptureChange(CaptainState, Captures);
}

void APlayerShip::ServerCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures)
{

	MulticastCaptureChange(CaptainStateCaptureChange, Captures);
}

void APlayerShip::MulticastCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures)
{
	ASBGameState* GameState = GetWorld()->GetGameState<ASBGameState>();
	if (GameState)
	{
		GameState->UpdateCaptures(CaptainState, Captures);
	}
}


void APlayerShip::OnPiecesOfEightChange(int32 PiecesOfEight, AActor* DestroyedActor, int32 Bounty)
{
	if (!IsLocallyControlled()) return;

	if (CaptainHUD)
	{
		CaptainHUD->SetHUDPoE(PiecesOfEight);
	}

	if (DestroyedActor && BountyWidgetClass)
	{
		if (PlayerController)
		{
			ABountyActor* BountyWidget = GetWorld()->SpawnActor<ABountyActor>(BountyWidgetClass, DestroyedActor->GetActorLocation(), FRotator::ZeroRotator);
			if (BountyWidget)
			{
				BountyWidget->SetGoldPickupText(Bounty);
			}
		}
	}
}

AActor* APlayerShip::GetActorWithAbilityComponent()
{
	return GetCaptainState();
	//CaptainState = CaptainState == nullptr ? GetPlayerState<ACaptainState>() : CaptainState;
	//if (CaptainState) 
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("cast success!..."))

	//	return CaptainState;
	//}
	//else
	//{
	//	return nullptr;
	//}
}

ETeam APlayerShip::GetHitActorTeam()
{
	CaptainState = CaptainState == nullptr ? GetPlayerState<ACaptainState>() : CaptainState;
	if (CaptainState)
	{
		return CaptainState->GetPlayerTeam();
	}
	else
	{
		return ETeam();
	}
}

UAbilitySystemComponent* APlayerShip::GetAbilitySystemComponent() const
{
	if (CaptainState)
	{
		return CaptainState->GetAbilitySystemComponent();
	}
	return nullptr;
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