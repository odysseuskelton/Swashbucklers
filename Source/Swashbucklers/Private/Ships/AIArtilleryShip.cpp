// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/AIArtilleryShip.h"
#include "SenseReceiverComponent.h"
#include "Interfaces/HitInterface.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"
#include "Weapons/Projectiles/Projectile.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameModes/SBGameMode.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "AIController.h"


AAIArtilleryShip::AAIArtilleryShip()
{
	TurretBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBaseMesh"));
	TurretBaseMesh->SetupAttachment(GetRootComponent());

	TurretCannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretCannonMesh"));
	TurretCannonMesh->SetupAttachment(TurretBaseMesh);

}

void AAIArtilleryShip::BeginPlay()
{
	AbilitySystemComponent = Cast<USBAbilitySystemComponent>(AbilityComponent);


	Super::BeginPlay();
	if (Sensor)
	{
		//Sensor->OnNewSense.AddDynamic(this, &AAIArtilleryShip::OnNewSense);
		Sensor->OnCurrentSense.AddDynamic(this, &AAIArtilleryShip::OnCurrentSense);
		Sensor->OnForgetSense.AddDynamic(this, &AAIArtilleryShip::OnLostSense);
	}

	if (AIController)
	{
		AIController->ReceiveMoveCompleted.AddDynamic(this, &AAIArtilleryShip::OnMoveCompleted);
	}

	AcquireCannonAbilities();
}

void AAIArtilleryShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (AIState == EAIState::EAI_Dead || !HasAuthority()) return;

	if (!CurrentTarget && AIState != EAIState::EAI_Patrolling)
	{
		ResumePath();
	}

	OpenCloseSails();

	HandleShipRotation(DeltaTime);

	//if (StoredTargetInterface && StoredTargetInterface->IsHitActorDead())
	//{
	//	AcquireNewTarget();
	//}
	if (AIState == EAIState::EAI_Patrolling || AIState == EAIState::EAI_Repositioning) return;

	if (CurrentTarget && GetDistanceTo(CurrentTarget) < AttackAcceptanceRadius &&  AIState == EAIState::EAI_Chasing && AIState != EAIState::EAI_Repositioning)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Reposition in tick!"))

		Reposition();
		return;
	}
	else if(CurrentTarget && AIState == EAIState::EAI_Aggroed && GetDistanceTo(CurrentTarget) > FiringDistance && GetDistanceTo(CurrentTarget) < MaxAggroRange && AIState != EAIState::EAI_Chasing)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Chase target in tick!"))
		ChaseTarget();
		return;
	}


	/*if (!CurrentTarget && !CurrentlyDetectedActors.IsEmpty())
	{
		AcquireNewTarget();
	}*/

	/*else
	{
		CurrentTarget = nullptr;
		if (GetWorldTimerManager().IsTimerActive(AttackTimer))
		{
			GetWorldTimerManager().ClearTimer(AttackTimer);
		}
		AIState = EAIState::EAI_Patrolling;
	}*/
}

void AAIArtilleryShip::ChaseTarget()
{
	if (!HasAuthority()) return;

	if (AIState == EAIState::EAI_Repositioning || AIState == EAIState::EAI_Chasing || AIState == EAIState::EAI_Dead) return;
	MoveToLocation(CurrentTarget->GetActorLocation(), 100.f);
	AIState = EAIState::EAI_Chasing;
	return;
}

void AAIArtilleryShip::Reposition()
{
	if (!HasAuthority()) return;

	if(GetWorldTimerManager().IsTimerActive(AttackTimer))
	{
		GetWorldTimerManager().ClearTimer(AttackTimer);
	}

	AIState = EAIState::EAI_Repositioning;

	int32 Selection = UKismetMathLibrary::RandomIntegerInRange(0, 3);
	float RandomXOffset = 0.f;
	float RandomYOffset = 0.f;
	if (Selection == 0)
	{
		RandomXOffset = UKismetMathLibrary::RandomFloatInRange(MinRepositionDistance, MaxRepositionDistance);
		RandomYOffset = UKismetMathLibrary::RandomFloatInRange(MinRepositionDistance, MaxRepositionDistance);
	}
	else if (Selection == 1)
	{
		RandomXOffset = UKismetMathLibrary::RandomFloatInRange(-MinRepositionDistance, -MaxRepositionDistance);
		RandomYOffset = UKismetMathLibrary::RandomFloatInRange(-MinRepositionDistance, -MaxRepositionDistance);
	}
	else if (Selection == 2)
	{
		RandomXOffset = UKismetMathLibrary::RandomFloatInRange(MinRepositionDistance, MaxRepositionDistance);
		RandomYOffset = UKismetMathLibrary::RandomFloatInRange(-MinRepositionDistance, -MaxRepositionDistance);
	}
	else if (Selection == 3)
	{
		RandomXOffset = UKismetMathLibrary::RandomFloatInRange(-MinRepositionDistance, -MaxRepositionDistance);
		RandomYOffset = UKismetMathLibrary::RandomFloatInRange(MinRepositionDistance, MaxRepositionDistance);
	}

	//UE_LOG(LogTemp, Warning, TEXT("Selection %d  -  X: %f, Y: %f"), Selection, RandomXOffset, RandomYOffset)
	FVector OffsetLocation = GetActorLocation();
	OffsetLocation.X += RandomXOffset;
	OffsetLocation.Y += RandomYOffset;
	OffsetLocation.Z = FMath::Clamp(OffsetLocation.Z, -100.f, 300.f);
	TargetLocation = OffsetLocation;
	MoveToLocation(TargetLocation, 1000.f);
}

void AAIArtilleryShip::HandleShipRotation(float DeltaTime)
{
	if (!HasAuthority()) return;
	if (TargetLocation != FVector::ZeroVector && AIState != EAIState::EAI_Attacking)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Rotate"))
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetLocation);
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 2.f));
	}
	else if (AIState == EAIState::EAI_Attacking && CurrentTarget)
	{
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTarget->GetActorLocation());
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 2.f));
		RotateArtilleryCannon(LookAtRotation);
	}
}

void AAIArtilleryShip::RotateArtilleryCannon(FRotator& LookAtRotation)
{
	if (!HasAuthority()) return;
	if (TurretCannonMesh && CurrentTarget)
	{
		LookAtRotation.Roll = 0.f;
		LookAtRotation.Yaw = 0.f;
		LookAtRotation.Pitch += GetDistanceTo(CurrentTarget) * CannonDistanceMultiplier;
		TurretCannonMesh->SetRelativeRotation(LookAtRotation);
	}
}

void AAIArtilleryShip::OpenCloseSails()
{
	if (ShipIsIdle())
	{
		bOpenSails = false;
	}
	else
	{
		bOpenSails = true;
	}
}

void AAIArtilleryShip::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	if (!HasAuthority()) return;
	//UE_LOG(LogTemp, Warning, TEXT("Reach target..."))

	if (AIState != EAIState::EAI_Repositioning) return;

	if (AIState == EAIState::EAI_Repositioning)
	{
		
		if (AIController)
		{
			AIController->StopMovement();
		}
		//UE_LOG(LogTemp, Warning, TEXT("Set attack timer..."))

		GetWorldTimerManager().SetTimer(AttackTimer, this, &AAIArtilleryShip::Attack, AttackDelay);
		return;
		
		
	}

}

bool AAIArtilleryShip::CurrentTargetInRange()
{
	if (!HasAuthority()) return false;
	if (AIState == EAIState::EAI_Dead) return false;

	if (!CurrentTarget || !StoredTargetInterface || StoredTargetInterface->IsHitActorDead()) return false;

	if (GetDistanceTo(CurrentTarget) < MaxAggroRange)
	{
		return true;
	}
	else
	{

		return false;
	}
}

void AAIArtilleryShip::Attack()
{
	if (!HasAuthority()) return;
	if (AIState == EAIState::EAI_Dead) return;

	if (!CurrentTarget || !StoredTargetInterface || StoredTargetInterface->IsHitActorDead() || (CurrentTarget && GetDistanceTo(CurrentTarget) > MaxAggroRange))
	{
		ResumePath();
		return;
	}

	if (AuxiliaryCannonAbility && AbilityComponent)
	{
		AbilityComponent->TryActivateAbilityByClass(AuxiliaryCannonAbility);
	}
	AIState = EAIState::EAI_Attacking;
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AAIArtilleryShip::Attack, AttackDelay);
}

void AAIArtilleryShip::OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus)
{
	if (!HasAuthority()) return;
	if (AIState == EAIState::EAI_Dead || !bNeedsNewTargets) return;


	if (CurrentTarget)
	{
		CurrentTarget = nullptr;
	}

	if (StoredTargetInterface)
	{
		StoredTargetInterface = nullptr;
	}

	if (GetWorldTimerManager().IsTimerActive(AttackTimer))
	{
		GetWorldTimerManager().ClearTimer(AttackTimer);
	}

	if (SensorPtr)
	{
		TArray<AActor*> OutActors = SensorPtr->GetSensedActorsByClass(ActorClassToDetect, ESensorArrayByType::SenseCurrent, 1);

		for (int32 i = 0; i < OutActors.Num() ; ++i)
		{
			if (OutActors.IsValidIndex(i))
			{
				if (!OutActors[i]) continue;
				IHitInterface* HitInterface = Cast<IHitInterface>(OutActors[i]);

				if (HitInterface)
				{
					if (OutActors[i] && HitInterface->GetHitActorTeam() != AITeam)
					{
						StoredTargetInterface = HitInterface;
						CurrentTarget = OutActors[i];
						bNeedsNewTargets = false;
						CurrentlyDetectedActors.Empty();
						ChaseTarget();
						return;
					}

				}
				else if (HitInterface)
				{
					if (OutActors[i] && HitInterface->GetHitActorTeam() != AITeam)
					{
						ActorsToIgnore.Add(OutActors[i]);
					}
				}
			}
			
		}


	}

}

void AAIArtilleryShip::OnLostSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus)
{
	
}


void AAIArtilleryShip::AcquireNewTarget()
{
	//bNeedsNewTargets = true;
	//if (AIState == EAIState::EAI_Dead) return;


	/*for (int32 i = 0; i < CurrentlyDetectedActors.Num() - 1; i++)
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(CurrentlyDetectedActors[i]);

		if (CurrentlyDetectedActors.IsValidIndex(i))
		{
			if (HitInterface)
			{
				if (HitInterface->IsHitActorDead() || HitInterface->GetHitActorTeam() == AITeam)
				{
					CurrentlyDetectedActors.Remove(CurrentlyDetectedActors[i]);
					continue;
				}
			}
			else
			{
				CurrentlyDetectedActors.Remove(CurrentlyDetectedActors[i]);
				continue;
			}
		}
	}*/


	/*if (CurrentTarget)
	{
		if (CurrentlyDetectedActors.Contains(CurrentTarget))
		{
			CurrentlyDetectedActors.Remove(CurrentTarget);
		}
		CurrentTarget = nullptr;
	}

	if (StoredTargetInterface)
	{
		StoredTargetInterface = nullptr;
	}

	

	for (AActor* Actor : CurrentlyDetectedActors)
	{
		if (!Actor) continue;
		IHitInterface* HitInterface = Cast<IHitInterface>(Actor);

		if (HitInterface)
		{
			if (Actor && HitInterface->GetHitActorTeam() != AITeam)
			{
				StoredTargetInterface = HitInterface;
				CurrentTarget = Actor;
				bNeedsNewTargets = false;
				CurrentlyDetectedActors.Empty();

				AIState = EAIState::EAI_Aggroed;
			}
			
		}
		else if (HitInterface)
		{
			if (Actor && HitInterface->GetHitActorTeam() != AITeam)
			{
				ActorsToIgnore.Add(Actor);
			}
		}
	}*/

	//if (!CurrentTarget)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Resume path..."))

	//	ResumePath();
	//}
}


void AAIArtilleryShip::FireArtilleryCannon()
{
	if (!HasAuthority()) return;
	if (AIState == EAIState::EAI_Dead) return;
	if (GetOwner()->HasAuthority())
	{
		if (GetWorld() && ArtilleryProjectileClass)
		{
			FTransform MuzzleTransform = TurretCannonMesh->GetSocketTransform(FName("MuzzleSocket"));

			AProjectile* ArtilleryProjectile = GetWorld()->SpawnActor<AProjectile>(ArtilleryProjectileClass, MuzzleTransform.GetLocation(), MuzzleTransform.GetRotation().Rotator());
			if (ArtilleryProjectile && ArtilleryGEHandle.IsValid())
			{
				ArtilleryProjectile->SetOwner(this);
				ArtilleryProjectile->SetPlayerPawn(this);
				ArtilleryProjectile->AbilityHandle = ArtilleryGEHandle;
				ArtilleryProjectile->SetStencilValueOfCannonball(AITeam);
				
			}
		}
	}
}

void AAIArtilleryShip::ResumePath()
{
	if (!HasAuthority()) return;
	if (GetWorldTimerManager().IsTimerActive(AttackTimer))
	{
		GetWorldTimerManager().ClearTimer(AttackTimer);
	}

	AIState = EAIState::EAI_Patrolling;
	bNeedsNewTargets = true;

	ASBGameMode* SBGameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	if (AITeam == ETeam::ET_Pirate)
	{
		if (SBGameMode && SBGameMode->PrivateerGoal)
		{
			TargetLocation = SBGameMode->PrivateerGoal->GetActorLocation();
			MoveToLocation(SBGameMode->PrivateerGoal->GetActorLocation(), 0.f);
		}
	}
	else if (AITeam == ETeam::ET_Privateer)
	{
		if (SBGameMode && SBGameMode->PirateGoal)
		{
			TargetLocation = SBGameMode->PirateGoal->GetActorLocation();
			MoveToLocation(SBGameMode->PirateGoal->GetActorLocation(), 0.f);
		}
	}

}

void AAIArtilleryShip::Die(AActor* InstigatorActor)
{
	Super::Die(InstigatorActor);

	if (InstigatorActor)
	{
		ICaptainStateInterface* CaptainStateInterface = Cast<ICaptainStateInterface>(InstigatorActor);
		if (CaptainStateInterface)
		{
			CaptainStateInterface->GetPlayerAttributeSet()->CollectBounty(this, AIBounty); 
		}
	}
}