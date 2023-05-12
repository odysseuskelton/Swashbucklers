// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/DeployableShip.h"
#include "Weapons/TripleCannon.h"
#include "Kismet/KismetMathLibrary.h"
#include "SenseReceiverComponent.h"
#include "Components/SBAbilitySystemComponent.h"
#include "PlayerStates/CaptainState.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/HitInterface.h"
#include "GameplayAbilities/SBAttributeSet.h"

#include "Sensors/SensorBase.h"


ADeployableShip::ADeployableShip()
{
	TurretBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBase"));
	TurretBase->SetupAttachment(GetRootComponent());


}

void ADeployableShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{

	DOREPLIFETIME(ADeployableShip, CurrentRotation);
	DOREPLIFETIME(ADeployableShip, OwningCaptState);
}

void ADeployableShip::BeginPlay()
{
	SpawnTripleCannons();
	//SetCannonTeamColors();

	
	if (Sensor)
	{
		Sensor->OnCurrentSense.AddDynamic(this, &ADeployableShip::OnCurrentSense);
		
	}

	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(LifeSpanTimer, this, &ADeployableShip::LifespanTimerFinished, DeployableShipLifeTime);
}

void ADeployableShip::LifespanTimerFinished()
{
	StopCannonFire();
	Die(this);
}


void ADeployableShip::SetTeam(ETeam TeamToSet)
{

	AITeam = TeamToSet;

	if (ShipMesh && TeamToSet == ETeam::ET_Pirate)
	{
		ShipMesh->SetMaterial(2, PirateMaterial);
		TurretBase->SetMaterial(2, PirateMaterial);
		MulticastSetMaterial(TeamToSet);
	}
	else if (ShipMesh && TeamToSet == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(2, PrivateerMaterial);
		TurretBase->SetMaterial(2, PrivateerMaterial);
		MulticastSetMaterial(TeamToSet);

	}

	TArray<AActor*> OutActors;
	

	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UHitInterface::StaticClass(), OutActors);

	

	//SetCannonTeamColors();
}

void ADeployableShip::MulticastSetMaterial_Implementation(ETeam TeamOfOwner)
{

	if (ShipMesh && TeamOfOwner == ETeam::ET_Pirate)
	{
		ShipMesh->SetMaterial(2, PirateMaterial);
		TurretBase->SetMaterial(2, PirateMaterial);
	}
	else if (ShipMesh && TeamOfOwner == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(2, PrivateerMaterial);
		TurretBase->SetMaterial(2, PrivateerMaterial);

	}
}

void ADeployableShip::OnRep_SetTeam()
{
	if (ShipMesh && AITeam == ETeam::ET_Pirate)
	{
		ShipMesh->SetMaterial(2, PirateMaterial);
		TurretBase->SetMaterial(2, PirateMaterial);
		bDeployableShipTeamSet = true;
	}
	else if (ShipMesh && AITeam == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(2, PrivateerMaterial);
		TurretBase->SetMaterial(2, PrivateerMaterial);
		bDeployableShipTeamSet = true;
	}
}

void ADeployableShip::SpawnTripleCannons()
{
	if (!TripleCannonClass) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	MainWeapon = GetWorld()->SpawnActor<ATripleCannon>(TripleCannonClass, SpawnParams);
	SecondaryWeapon = GetWorld()->SpawnActor<ATripleCannon>(TripleCannonClass, SpawnParams);

	FAttachmentTransformRules TransformRules(EAttachmentRule::KeepRelative, false);

	FName MainWeaponAttachName = FName("MainWeaponSocket");
	FName SecondaryWeaponAttachName = FName("SecondaryWeaponSocket");

	if (MainWeapon)
	{
		MainWeapon->AttachToComponent(TurretBase, TransformRules, MainWeaponAttachName);
		MainWeapon->SetOwner(this);
	}

	if (SecondaryWeapon)
	{
		SecondaryWeapon->AttachToComponent(TurretBase, TransformRules, SecondaryWeaponAttachName);
		MainWeapon->SetOwner(this);
	}
}

void ADeployableShip::SetCannonTeamColors()
{
	/*if (AITeam == ETeam::ET_Pirate)
	{
		if (MainWeapon)
		{

			UE_LOG(LogTemp, Warning, TEXT("Set Material on Main Cannons"))
			MainWeapon->GetTripleCannonMesh()->SetMaterial(1, PirateMaterial);
		}
		if (SecondaryWeapon)
		{
			SecondaryWeapon->GetTripleCannonMesh()->SetMaterial(1, PirateMaterial);
		}
	}

	if (AITeam == ETeam::ET_Privateer)
	{
		if (MainWeapon)
		{
			MainWeapon->GetTripleCannonMesh()->SetMaterial(1, PrivateerMaterial);
		}
		if (SecondaryWeapon)
		{
			SecondaryWeapon->GetTripleCannonMesh()->SetMaterial(1, PrivateerMaterial);
		}
	}*/
}

void ADeployableShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsDead) return;


	if(!bDeployableShipTeamSet && OwningCaptState)
	{
		SetTeam(OwningCaptState->GetPlayerTeam());
	}

	if (CurrentTarget && TurretBase && GetDistanceTo(CurrentTarget) < MaxAggroDistance && StoredHitInterface && !StoredHitInterface->IsHitActorDead())
	{
		//FVector TurretLocation = GetActorLocation();
		//TurretLocation.Z += 1000.f;

		FRotator RotationToSet = UKismetMathLibrary::FindLookAtRotation(TurretBase->GetComponentLocation(), CurrentTarget->GetActorLocation());
		RotationToSet.Roll = 0.f;
		RotationToSet.Pitch = 0.f;


		FRotator RelativeRotationClamp = FRotator::ZeroRotator;
		RelativeRotationClamp.Pitch = ShipMesh->GetComponentRotation().Pitch;
		RelativeRotationClamp.Roll = ShipMesh->GetComponentRotation().Roll;
		RelativeRotationClamp.Yaw = TurretBase->GetRelativeRotation().Yaw;

		TurretBase->SetRelativeRotation(RelativeRotationClamp);

		TurretBase->SetWorldRotation(FMath::RInterpConstantTo(TurretBase->GetComponentRotation(), RotationToSet, DeltaTime, 1000.f));
		CurrentRotation = TurretBase->GetRelativeRotation();

		if (bIsFiring == false)
		{
			//TurretBase->SetRelativeRotation(RotationToSet);
			FireCannons();
		}
	}

	if ((CurrentTarget && GetDistanceTo(CurrentTarget) > MaxAggroDistance) || (StoredHitInterface && StoredHitInterface->IsHitActorDead()))
	{

		CurrentTarget = nullptr;
		StoredHitInterface = nullptr;
		StopCannonFire();
		bNeedsNewTarget = true;
	}
}


void ADeployableShip::OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus)
{
	if (!HasAuthority() || bIsDead) return;
	if (AIState == EAIState::EAI_Dead || !bNeedsNewTarget) return;

	if (CurrentTarget)
	{
		CurrentTarget = nullptr;
	}

	if (StoredHitInterface)
	{
		StoredHitInterface = nullptr;
	}


	if (SensorPtr)
	{
		TArray<AActor*> OutActors = SensorPtr->GetSensedActorsByClass(ActorClassToDetect, ESensorArrayByType::SenseCurrent, 1);

		for (int32 i = 0; i < OutActors.Num(); ++i)
		{

			if (OutActors.IsValidIndex(i))
			{
				if (!OutActors[i]) continue;
				IHitInterface* HitInterface = Cast<IHitInterface>(OutActors[i]);

				if (HitInterface)
				{
					if (OutActors[i] && HitInterface->GetHitActorTeam() != AITeam && !HitInterface->IsHitActorDead())
					{
						StoredHitInterface = HitInterface;
						CurrentTarget = OutActors[i];
						bNeedsNewTarget = false;
						return;
					}

				}
			}

		}


	}
}

void ADeployableShip::FireCannons()
{
	if (bIsDead) return;
	bIsFiring = true;
	if (MainWeapon)
	{
		FGameplayEffectContextHandle ContextHandle;
		if (OwningCaptState)
		{
			ContextHandle.AddInstigator(OwningCaptState, OwningCaptState);
		}
		FGameplayEffectSpecHandle NewCannonGEHandle = AbilityComponent->MakeOutgoingSpec(CannonDamageEffectClass, 0, ContextHandle);
		MainWeapon->CannonGEHandle = NewCannonGEHandle;
		MainWeapon->BeginFire();
	}


	GetWorldTimerManager().SetTimer(FireOffsetTimer, this, &ADeployableShip::FireSecondaryCannon, FireOffset);

}

void ADeployableShip::OnRep_TurretRotation()
{
	TurretBase->SetRelativeRotation(CurrentRotation);
}

void ADeployableShip::FireSecondaryCannon()
{
	if (bIsDead) return;
	if (SecondaryWeapon)
	{
		FGameplayEffectContextHandle ContextHandle;
		ContextHandle.AddInstigator(this, this);
		FGameplayEffectSpecHandle NewCannonGEHandle = AbilityComponent->MakeOutgoingSpec(CannonDamageEffectClass, 0, ContextHandle);
		SecondaryWeapon->CannonGEHandle = NewCannonGEHandle;
		SecondaryWeapon->BeginFire();
	}
}


void ADeployableShip::StopCannonFire()
{
	bIsFiring = false;
	if (MainWeapon)
	{
		MainWeapon->EndFire();
	}

	if (SecondaryWeapon)
	{
		SecondaryWeapon->EndFire();
	}
}

void ADeployableShip::Die(AActor* InstigatorActor)
{
	Super::Die(InstigatorActor);

	StopCannonFire();
}