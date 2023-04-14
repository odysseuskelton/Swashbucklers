// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/ArtilleryShip.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Weapons/Projectiles/Projectile.h"
#include "PlayerStates/CaptainState.h"

AArtilleryShip::AArtilleryShip()
{
	ArtilleryTurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	ArtilleryTurretMesh->SetupAttachment(GetRootComponent());

	ArtilleryCannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretCannonMesh"));
	ArtilleryCannonMesh->SetupAttachment(ArtilleryTurretMesh);
}

void AArtilleryShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (PlayerController)
	//{
	//	FVector WorldLocation;
	//	FVector WorldDirection;

	//	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

	//	if (GetWorld() && bAimingCannon)
	//	{
	//		FVector End = WorldLocation + (WorldDirection * 30000);


	//		FHitResult HitResult;
	//		PlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel2, false, HitResult);

	//		if (ArtilleryCannonMesh && ArtilleryTurretMesh && HitResult.GetActor())
	//		{

	//			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), HitResult.ImpactPoint);
	//			RotateTurret(LookAtRotation, DeltaTime);
	//			if ((LookAtRotation - ArtilleryTurretMesh->GetRelativeRotation()).IsNearlyZero()) return;
	//			RotateCannonMesh(LookAtRotation);
	//		}
	//
	//		//UKismetSystemLibrary::LineTraceSingle(this, WorldLocation, End, TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForOneFrame, HitResult, true);
	//		////DrawDebugSphere(GetWorld(), End, 1500, 12, FColor::Red);
	//		//if (HitResult.GetActor())
	//		//{
	//		//	UE_LOG(LogTemp, Warning, TEXT("%s"), *HitResult.GetActor()->GetName())
	//		//}
	//	}
	//	else if (!bAimingCannon && !ArtilleryTurretMesh->GetRelativeRotation().IsNearlyZero() || !ArtilleryCannonMesh->GetRelativeRotation().IsNearlyZero())
	//	{
	//		ArtilleryTurretMesh->SetRelativeRotation(FMath::RInterpTo(ArtilleryTurretMesh->GetRelativeRotation(), FRotator::ZeroRotator, DeltaTime, 3.f));
	//		ArtilleryCannonMesh->SetRelativeRotation(FMath::RInterpTo(ArtilleryCannonMesh->GetRelativeRotation(), FRotator(15.f, 0.f, 0.f), DeltaTime, 3.f));
	//	}
	//}
}

void AArtilleryShip::RotateCannonMesh(FRotator LookAtRotation)
{
	FRotator NewCannonBaseRotation = LookAtRotation;
	NewCannonBaseRotation.Roll = 0.f;
	NewCannonBaseRotation.Yaw = 0.f;
	NewCannonBaseRotation.Pitch += 30.f;
	NewCannonBaseRotation.Pitch = FMath::Clamp(NewCannonBaseRotation.Pitch, -4.f, 60.f);
	ArtilleryCannonMesh->SetRelativeRotation(NewCannonBaseRotation);
}

void AArtilleryShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AArtilleryShip::RotateTurret(FRotator LookAtRotation, float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("Look at rotation : %s"), *LookAtRotation.ToString())
	FRotator NewTurretBaseRotation = LookAtRotation;
	NewTurretBaseRotation.Roll = ArtilleryTurretMesh->GetRelativeRotation().Roll;
	NewTurretBaseRotation.Pitch = ArtilleryTurretMesh->GetRelativeRotation().Pitch;
	//ArtilleryTurretMesh->SetRelativeRotation(NewTurretBaseRotation);
	ArtilleryTurretMesh->SetRelativeRotation(FMath::RInterpTo(ArtilleryTurretMesh->GetRelativeRotation(), NewTurretBaseRotation, DeltaTime, 10.f));
	//TurretBaseMeshRotation = TurretBaseMesh->GetRelativeRotation();
}

void AArtilleryShip::BeginPlay()
{
	Super::BeginPlay();

}

void AArtilleryShip::Look(const FInputActionValue& Value)
{
	Super::Look(Value);
}


void AArtilleryShip::FireStarboardCannons()
{
	Super::FireStarboardCannons();

	/*if (bAimingCannon == true)
	{
		if (PlayerController)
		{
			PlayerController->bShowMouseCursor = false;
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
		}
		bAimingCannon = false;
	}
	else
	{
		if (PlayerController)
		{
			PlayerController->bShowMouseCursor = true;

		}
		bAimingCannon = true;
	}*/
}

void AArtilleryShip::FireAuxiliaryCannons()
{
	Super::FireAuxiliaryCannons();

	if (bIsDead) return;

	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateAbility(AuxiliaryCannonAbility);
		}
	}
	else
	{
		ServerFireArtillery(AuxiliaryCannonAbility);
	}
}

void AArtilleryShip::FireArtilleryCannon()
{
	if (GetOwner()->HasAuthority())
	{
		if (GetWorld() && ArtilleryProjectileClass)
		{
			FTransform MuzzleTransform = ArtilleryCannonMesh->GetSocketTransform(FName("MuzzleSocket"));

			AProjectile* ArtilleryProjectile = GetWorld()->SpawnActor<AProjectile>(ArtilleryProjectileClass, MuzzleTransform.GetLocation(), MuzzleTransform.GetRotation().Rotator());
			if (ArtilleryProjectile && ArtilleryGEHandle.IsValid())
			{
				ArtilleryProjectile->SetOwner(this);
				ArtilleryProjectile->SetPlayerPawn(this);
				ArtilleryProjectile->AbilityHandle = ArtilleryGEHandle;
				IHitInterface* OwnerHitInterface = Cast<IHitInterface>(this);
				if (OwnerHitInterface)
				{
					ArtilleryProjectile->SetStencilValueOfCannonball(OwnerHitInterface->GetHitActorTeam());
				}
			}
		}
	}
}

//void AArtilleryShip::ReleasePortCannons()
//{
//	//I shouldnt need this...
//	if (CaptainState)
//	{
//		CaptainState->SendLocalInputToASC(false, 1);
//	}
//}
//
//void AArtilleryShip::ReleaseStarboardCannons()
//{
//	//I shouldnt need this...
//	if (CaptainState)
//	{
//		CaptainState->SendLocalInputToASC(false, 2);
//	}
//}

void AArtilleryShip::MouseWheel(const FInputActionValue& Value)
{
	float RotationToAdd = Value.Get<FVector2D>().X * MouseWheelMultiplier;
	if (ArtilleryCannonMesh)
	{
		FRotator NewRotation = ArtilleryCannonMesh->GetRelativeRotation();
		NewRotation.Pitch += (RotationToAdd * MouseWheelMultiplier);
		if (NewRotation.Pitch < 0.f)
		{
			NewRotation.Pitch -= 3.f;
		}
		else if (NewRotation.Pitch > 0.f)
		{
			NewRotation.Pitch += 3.f;
		}
		NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch, -5.f, 90.f);
		ArtilleryCannonMesh->SetRelativeRotation(FMath::RInterpTo(ArtilleryCannonMesh->GetRelativeRotation(), NewRotation, DeltaSeconds, 4.f));
	}
}

void AArtilleryShip::ServerFireArtillery_Implementation(TSubclassOf<USBGameplayAbility> AbilityToFire)
{
	if (CaptainState)
	{
		if (bIsDead) return;
		CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;
		if (CaptainState)
		{
			CaptainState->ActivateAbility(AuxiliaryCannonAbility);
		}
	}
}
