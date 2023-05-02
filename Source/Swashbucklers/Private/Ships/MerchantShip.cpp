// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/MerchantShip.h"
#include "GameModes/SBGameMode.h"
#include "AI/NavCheckPoints.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "HUD/HealthbarComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"

void AMerchantShip::BeginPlay()
{
	APawn::BeginPlay();

	if (AttributeSet)
	{
		AttributeSet->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
		AttributeSet->MaxHealth.SetCurrentValue(ShipHealth);
		AttributeSet->MaxHealth.SetBaseValue(ShipHealth);
		AttributeSet->Health.SetCurrentValue(ShipHealth);
		AttributeSet->Health.SetBaseValue(ShipHealth);
	}

	if (HealthbarComponent)
	{
		HealthbarComponent->SetRenderOpacity(0.f);
	}
	InitializeEnemy();
	bIsDead = false;
	//BuoyancyComponent->BuoyancyData.MaxBuoyantForce = StealthBuoyancy;

	if (ShipMesh)
	{
		ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &AMerchantShip::ShipBeginOverlap);
	}


	UGameplayStatics::GetAllActorsOfClass(this, ANavCheckPoints::StaticClass(), NavPoints); 
	for (AActor* Navpoint : NavPoints)
	{
		UE_LOG(LogTemp, Warning, TEXT("Nav point found"))
	}
	FindNextCheckpoint();

}

void AMerchantShip::ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->Tags.Contains("PrivateerGoal"))
	{
		if (AITeam == ETeam::ET_Privateer)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Privateer, ReturnToBaseBounty);
		}
		Destroy();
		TreasureResolved();
	}

	if (OtherActor->Tags.Contains("PirateGoal"))
	{
		if (AITeam == ETeam::ET_Pirate)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Pirate, ReturnToBaseBounty);
		}
		Destroy();
		TreasureResolved();
	}
}

void AMerchantShip::TreasureResolved()
{
	ASBGameMode* GameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	UE_LOG(LogTemp, Warning, TEXT("Treasure Resolved"))

		if (GameMode)
		{
			GameMode->TreasureResolved();
		}
}

void AMerchantShip::Die(AActor* InstigatorActor)
{

	if (AITeam == ETeam::ET_Pirate)
	{
		AttributeSet->SendPOEToTeam(ETeam::ET_Privateer, MerchantShipBounty);
	}

	if (AITeam == ETeam::ET_Privateer)
	{
		AttributeSet->SendPOEToTeam(ETeam::ET_Pirate, MerchantShipBounty);
	}

	Super::Die(InstigatorActor);

	GetWorldTimerManager().SetTimer(DestroyTimer, this, &AMerchantShip::DestroyTimerFinished, 5.f);
}

void AMerchantShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTargetNavPoint && !GetWorldTimerManager().IsTimerActive(CourseCorrectionTimer))
	{
		GetWorldTimerManager().SetTimer(CourseCorrectionTimer, this, &AMerchantShip::CourseCorrectionTimerFinished, 5.f);
	}

	if (CurrentTargetNavPoint && GetDistanceTo(CurrentTargetNavPoint) < 1000.f)
	{
		FindNextCheckpoint();
	}
}

void AMerchantShip::CourseCorrectionTimerFinished()
{
	if (CurrentTargetNavPoint)
	{
		FRotator RotationToSet = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTargetNavPoint->GetActorLocation());
		RotationToSet.Pitch = GetActorRotation().Pitch;
		RotationToSet.Roll = GetActorRotation().Roll;
		SetActorRotation(RotationToSet);
	}

	if (AIController && CurrentTarget && (AIController->GetMoveStatus() == EPathFollowingStatus::Waiting || AIController->GetMoveStatus() == EPathFollowingStatus::Paused || AIController->GetMoveStatus() == EPathFollowingStatus::Idle))
	{
		FindNextCheckpoint();
	}
}


void AMerchantShip::DestroyTimerFinished()
{
	TreasureResolved();

	Destroy();
}

void AMerchantShip::FindNextCheckpoint()
{
	UE_LOG(LogTemp, Warning, TEXT("Find next checkpoint enter"))

	if (NavPoints.IsEmpty() || !CurrentTarget) return;
	UE_LOG(LogTemp, Warning, TEXT("Find next checkpoint"))

	TArray<AActor*> ReachableNavPoints;
	UWorld* World = GetWorld();
	ECollisionChannel::ECC_WorldStatic;
		
	if (World)
	{
		for (AActor* NavPoint : NavPoints)
		{
			FHitResult Hit;
			World->LineTraceSingleByChannel(Hit, GetActorLocation(), NavPoint->GetActorLocation(), ECollisionChannel::ECC_GameTraceChannel3);

								
			if (Hit.GetActor() == NavPoint)
			{
				ReachableNavPoints.Add(NavPoint);
			}
		}

		if (!ReachableNavPoints.IsEmpty())
		{
			double ClosestNavPoint = 100000000.f;
			for (AActor* NavPoint : ReachableNavPoints)
			{
				if (CurrentTarget && NavPoint != CurrentTargetNavPoint)
				{
					double DistNavToTarget = CurrentTarget->GetDistanceTo(NavPoint);
					if (DistNavToTarget < ClosestNavPoint)
					{
						ClosestNavPoint = DistNavToTarget;
						CurrentTargetNavPoint = NavPoint;
						MoveToLocation(NavPoint->GetActorLocation());
					}
				}
			}
		}
	}

}

