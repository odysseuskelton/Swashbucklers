// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/PlayerShip.h"
#include "GameModes/SBGameMode.h"
#include "PlayerStates/CaptainState.h"
#include "Weapons/Cannon.h"
#include "Interfaces/InteractableInterface.h"

#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameFramework/GameStateBase.h"

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
	if (InstigatorCS)
	{
		InstigatorCS->GetAttributeSet()->CollectBounty(this, CaptainState->GetAttributeSet()->Bounty.GetCurrentValue());
	}

	if (CaptainState)
	{
		CaptainState->RemoveActiveEffects();
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
	DefaultSpeed = PawnMovement->MaxSpeed;
	DefaultAcceleration = PawnMovement->Acceleration;

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
	PollInit();
	NormalizeCannonRotation(DeltaTime);
	TraceForPlayerNameplates();

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
		/*if (!IsLocallyControlled())
		{
			UE_LOG(LogTemp, Warning, TEXT("Notlocally controlled!!!!..."))
		}
		if (!PlayerController)
		{
			UE_LOG(LogTemp, Warning, TEXT("Player controller invalid...!!!!..."))
		}
		if (!InteractableInterface)
		{
			UE_LOG(LogTemp, Warning, TEXT("interactableinterface invalid...!!!!..."))
		}*/
		if (InteractableInterface == nullptr || !IsLocallyControlled() || !PlayerController) return;
		InteractableInterface->BeginInteraction(PlayerController);
	}
	else
	{
		//if (InteractableInterface == nullptr) return;
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
	if (!ScriptInterface) return;

	ScriptInterface->BeginInteraction(PlayerController);
	
}

void APlayerShip::EndInteract(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (InteractableInterface == nullptr || !IsLocallyControlled() || !PlayerController) return;

	IInteractableInterface* InterfaceToStopInteracting = Cast<IInteractableInterface>(OtherActor);

	if (InterfaceToStopInteracting == InteractableInterface)
	{
		InteractableInterface->EndInteraction(PlayerController);
		InteractableInterface = nullptr;
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
		CaptainState->GetAttributeSet()->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
		CaptainState->GetAttributeSet()->OnManaChange.AddUniqueDynamic(this, &APlayerShip::OnManaChanged);
		CaptainState->GetAttributeSet()->OnSpeedChange.AddUniqueDynamic(this, &APlayerShip::OnSpeedChanged);
		CaptainState->GetAttributeSet()->OnBountyChange.AddUniqueDynamic(this, &APlayerShip::OnBountyChange);
		CaptainState->GetAttributeSet()->OnPiecesOfEightChange.AddUniqueDynamic(this, &APlayerShip::OnPiecesOfEightChange);
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