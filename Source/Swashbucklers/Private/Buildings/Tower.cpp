// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildings/Tower.h"
#include "Components/SphereComponent.h"
#include "Weapons/Projectiles/Projectile.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "Components/SBAbilitySystemComponent.h"
#include "Interfaces/HitInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

ATower::ATower()
{
	TurretBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBaseMesh"));
	TurretBaseMesh->SetupAttachment(BuildingMesh);

	TurretCannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretCannonMesh"));
	TurretCannonMesh->SetupAttachment(TurretBaseMesh);

	AggroComponent = CreateDefaultSubobject<USphereComponent>(TEXT("AggroComponent"));
	AggroComponent->SetupAttachment(GetRootComponent());

	bReplicates = true;
	PrimaryActorTick.bCanEverTick = true;
}


void ATower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATower, TurretBaseMeshRotation);
	DOREPLIFETIME(ATower, TurretCannonMeshRotation);
}

void ATower::FireTowerCannon()
{
	if (TurretCannonMesh)
	{
		FTransform MuzzleTransform = TurretCannonMesh->GetSocketTransform(FName("MuzzleSocket"));

		TurretFireEffects();

		if (HasAuthority())
		{
			if (GetWorld() && CannonballClass)
			{
				AProjectile* Cannonball = GetWorld()->SpawnActor<AProjectile>(CannonballClass, MuzzleTransform.GetLocation(), MuzzleTransform.GetRotation().Rotator());
				if (Cannonball && TowerCannonGEHandle.IsValid())
				{
					Cannonball->SetOwner(this);
					Cannonball->SetPlayerPawn(this);
					Cannonball->AbilityHandle = TowerCannonGEHandle;


					Cannonball->SetStencilValueOfCannonball(GetBuildingTeam());
					
				}
			}
		}
	}
}

void ATower::TurretFireEffects()
{
	FTransform MuzzleTransform = TurretCannonMesh->GetSocketTransform(FName("MuzzleSocket"));

	if (HasAuthority())
	{
		ServerTurretCannonFireEffects(MuzzleTransform);
	}
}

void ATower::Die(AActor* InstigatorActor)
{
	Super::Die(InstigatorActor);

	BuildingMesh->SetSimulatePhysics(true);
	TurretBaseMesh->SetSimulatePhysics(true);
	TurretCannonMesh->SetSimulatePhysics(true);
}

void ATower::FireTimerFinished()
{
	bFireTimerFinished = true;
}

void ATower::ServerTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{
	MulticastTurretCannonFireEffects(TransformToSpawnAt);
}

void ATower::MulticastTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{

	if (CannonFireSystem)
	{
		FRotator RotationToSpawn = GetActorRightVector().Rotation();
		RotationToSpawn.Roll = 270.f;
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonFireSystem, TurretCannonMesh, FName("MuzzleSocket"), FVector::ZeroVector, RotationToSpawn, EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonSmokeSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonSmokeSystem, TurretCannonMesh, FName("MuzzleSocket"), FVector::ZeroVector, -1 * GetActorRightVector().Rotation(), EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonFireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CannonFireSound, TransformToSpawnAt.GetLocation());
	}

}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DeltaSeconds = DeltaTime;

	if (TargetToAttack)
	{
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(TurretCannonMesh->GetComponentLocation(), TargetToAttack->GetActorLocation());

		HandleCannonFiring(LookAtRotation);

		if (TurretBaseMesh)
		{
			RotateTurret(LookAtRotation, DeltaTime);
		}

		if (TurretCannonMesh)
		{
			RotateCannonMesh(LookAtRotation);
		}
	}
}

void ATower::RotateCannonMesh(FRotator LookAtRotation)
{
	FRotator NewCannonBaseRotation = LookAtRotation;
	NewCannonBaseRotation.Roll = 0.f;
	NewCannonBaseRotation.Yaw = 0.f;
	NewCannonBaseRotation.Pitch += 5.f;
	NewCannonBaseRotation.Pitch = FMath::Clamp(NewCannonBaseRotation.Pitch, -27.f, 12.f);
	TurretCannonMesh->SetRelativeRotation(NewCannonBaseRotation);
	TurretCannonMeshRotation = TurretCannonMesh->GetRelativeRotation();
}


void ATower::RotateTurret(FRotator LookAtRotation, float DeltaTime)
{
	FRotator NewTurretBaseRotation = LookAtRotation;
	NewTurretBaseRotation.Roll = 0.f;
	NewTurretBaseRotation.Pitch = 0.f;
	TurretBaseMesh->SetRelativeRotation(FMath::RInterpTo(TurretBaseMesh->GetComponentRotation(), NewTurretBaseRotation, DeltaTime, TurretRotationSpeed));
	TurretBaseMeshRotation = TurretBaseMesh->GetRelativeRotation();
}

void ATower::HandleCannonFiring(FRotator& LookAtRotation)
{
	bool bShouldFire = HasAuthority() &&
		LookAtRotation.Yaw - TurretBaseMeshRotation.Yaw >= -10.f &&
		LookAtRotation.Yaw - TurretBaseMeshRotation.Yaw <= 10.f &&
		bFireTimerFinished == true &&
		bIsDead != true;

	if (bShouldFire)
	{
		AbilityComponent->TryActivateAbilityByClass(TowerCannonAbility);
		bFireTimerFinished = false;
		GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ATower::FireTimerFinished, CannonFireRate);
	}
}

void ATower::OnRep_RotateCannonMesh()
{
	TurretCannonMesh->SetRelativeRotation(TurretCannonMeshRotation);
}

void ATower::OnRep_RotateTurret()
{
	TurretBaseMesh->SetRelativeRotation(TurretBaseMeshRotation);
}


void ATower::BeginPlay() 
{
	Super::BeginPlay();
	AcquireTowerCannonAbility();
	AggroComponent->OnComponentBeginOverlap.AddDynamic(this, &ATower::InAggroRange); 
	AggroComponent->OnComponentEndOverlap.AddDynamic(this, &ATower::OutAggroRange);


}


void ATower::AcquireTowerCannonAbility()
{
	// Grant abilities, but only on the server	
	if (bAcquiredTowerCannonAbility == false)
	{
		if (GetLocalRole() != ROLE_Authority || AbilityComponent == nullptr || AbilityComponent->bCharacterAbilitiesGiven)
		{
			return;
		}
		AbilityComponent->InitAbilityActorInfo(this, this);

		AbilityComponent->GiveAbility(FGameplayAbilitySpec(TowerCannonAbility, 1, 1, this));

		AbilityComponent->bCharacterAbilitiesGiven = true;

		bAcquiredTowerCannonAbility = true;
	}
}


void ATower::InAggroRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (TargetToAttack == nullptr)
	{
		IHitInterface* ActorImplementsInterface = Cast<IHitInterface>(OtherActor);

		if ((ActorImplementsInterface && ActorImplementsInterface->GetHitActorTeam() != GetBuildingTeam() && ActorImplementsInterface->GetHitActorTeam() != ETeam::ET_NoTeam )|| (ActorImplementsInterface && ActorImplementsInterface->IsAI() && ActorImplementsInterface->GetHitActorTeam() == ETeam::ET_NoTeam))
		{
			TargetToAttack = OtherActor;
		}
	}
} 

void ATower::OutAggroRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == TargetToAttack)
	{
		TargetToAttack = nullptr;
	}
}
