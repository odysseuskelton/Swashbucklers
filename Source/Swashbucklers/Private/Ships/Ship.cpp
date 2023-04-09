// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/Ship.h"

#include "GameplayAbilities/SBGameplayAbility.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"

#include "GameFramework/GameStateBase.h"
#include "PlayerStates/CaptainState.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "Components/AudioComponent.h"
#include "BuoyancyComponent.h"

#include "HUD/HealthbarComponent.h"

#include "Weapons/Cannon.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"


AShip::AShip()
{
	PrimaryActorTick.bCanEverTick = true;
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	SetRootComponent(ShipMesh);

	HealthbarComponent = CreateDefaultSubobject<UHealthbarComponent>(TEXT("Healthbar"));
	HealthbarComponent->SetupAttachment(ShipMesh);

	CruisingSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	CruisingSoundComponent->SetupAttachment(ShipMesh);
	CruisingSoundComponent->Stop();

	BuoyancyComponent = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("BuoyancyComp"));

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
}

void AShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AShip, StarboardCannons);
	DOREPLIFETIME(AShip, PortCannons);
	DOREPLIFETIME(AShip, bOpenSails);
	DOREPLIFETIME(AShip, bIsDead);
}

void AShip::BeginPlay()
{
	Super::BeginPlay();
	if (HealthbarComponent)
	{
		HealthbarComponent->SetRenderOpacity(0.f);
	}
	SpawnCannons();
	AcquireCannonAbilities();
	BindAbilityComponentDelegates();
	bIsDead = false;
	//BuoyancyComponent->BuoyancyData.MaxBuoyantForce = StealthBuoyancy;

}

void AShip::BindAbilityComponentDelegates()
{

}

void AShip::OnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!HasAuthority()) return;
	MulticastOnHealthChanged(Health, MaxHealth, InstigatorActor);
}

void AShip::HealthbarTimerFinished()
{
	HealthbarComponent->SetRenderOpacity(0.f);
}

void AShip::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!IsLocallyControlled())
	{
		HealthbarComponent->SetRenderOpacity(100.f);
	}
	GetWorldTimerManager().SetTimer(HealthbarTimer, this, &AShip::HealthbarTimerFinished, 4.f);

	if (HealthbarComponent)
	{
		HealthbarComponent->SetHealthPercent(Health / MaxHealth);
	}

	if (Health/MaxHealth < .5f && bMinorDamage == false)
	{
		SpawnShipDamageSystems(2);
		bMinorDamage = true;
	}

	if (Health / MaxHealth < .25f && bMajorDamage == false)
	{
		SpawnShipDamageSystems(2);
		bMajorDamage = true;
	}

	if (Health <= 0 && !bIsDead)
	{
		Die(InstigatorActor);
	}
}

void AShip::SpawnShipDamageSystems(uint16 NumberOfSystemsToSpawn)
{

	for (int16 i = 0; i <= NumberOfSystemsToSpawn; ++i)
	{
		FVector ShipMeshLocation = ShipMesh->GetRelativeLocation();
		ShipMeshLocation.X -= 100.f;
		ShipMeshLocation.Z += 325.f;
		FVector LocationToSpawn = UKismetMathLibrary::RandomPointInBoundingBox(ShipMeshLocation, FVector(1000.f, 300.f, 350.f));

		if (ShipDamagedSystem)
		{
			UNiagaraFunctionLibrary::SpawnSystemAttached(ShipDamagedSystem, ShipMesh, FName(""), LocationToSpawn, FRotator::ZeroRotator, EAttachLocation::KeepWorldPosition, true, true);
		}
	}
}

void AShip::Die(AActor* InstigatorActor)
{
	bIsDead = true;

	if (BuoyancyComponent)
	{
		BuoyancyComponent->DestroyComponent();
	}

	CleanupCannons(RespawnTime);

	if (ShipDeathSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ShipDeathSystem, ShipMesh->GetComponentLocation());
	}
	if (ShipDeathSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ShipDeathSound, ShipMesh->GetComponentLocation());
	}
}

void AShip::CleanupCannons(float CannonDespawnTime)
{
	for (ACannon* Cannon : PortCannons)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cleanup Port Cannons.... %f"), CannonDespawnTime)
		Cannon->SetLifeSpan(CannonDespawnTime);
	}
	for (ACannon* Cannon : StarboardCannons)
	{
		Cannon->SetLifeSpan(CannonDespawnTime);
	}
}

void AShip::AcquireCannonAbilities()
{
	// Grant abilities, but only on the server	
	if (bAcquiredCannonAbilities == false)
	{
		if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || AbilitySystemComponent->bCharacterAbilitiesGiven)
		{
			return;
		}

		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PortCannonAbility, 1, 1, this));
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StarboardCannonAbility, 1, 1, this));

		AbilitySystemComponent->bCharacterAbilitiesGiven = true;

		bAcquiredCannonAbilities = true;
	}
}

void AShip::SpawnCannons()
{
	if (!HasAuthority()) return;

	HandleCannonSpawning(PortCannonSlots, FString("LCannon"));

	HandleCannonSpawning(StarboardCannonSlots, FString("RCannon"));
}

void AShip::HandleCannonSpawning(int32 CannonSlots, FString CannonAttachString)
{
	for (int32 i = 1; i <= CannonSlots; i++)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = this;
		ACannon* CannonToSpawn = GetWorld()->SpawnActor<ACannon>(CannonClass, SpawnParams);
		FAttachmentTransformRules TransformRules(EAttachmentRule::KeepRelative, false);
		FString TempCannonAttachStr = CannonAttachString;
		TempCannonAttachStr.AppendInt(i);
		FName AttachName = FName(*TempCannonAttachStr);
		if (CannonToSpawn)
		{
			CannonToSpawn->AttachToComponent(ShipMesh, TransformRules, AttachName);
			CannonToSpawn->SocketName = FName(*TempCannonAttachStr);
			CannonToSpawn->StartingRotation = ShipMesh->GetSocketRotation(CannonToSpawn->SocketName);
			if (CannonAttachString == FString("LCannon"))
			{
				PortCannons.Add(CannonToSpawn);
			}
			else if (CannonAttachString == FString("RCannon"))
			{
				StarboardCannons.Add(CannonToSpawn);
			}
		}
	}
}

void AShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bIsDead)
	{
		FRotator TargetRotation = ShipMesh->GetRelativeRotation();
		TargetRotation.Pitch = 90.f;

		ShipMesh->SetRelativeRotation(FMath::RInterpTo(GetActorRotation(), TargetRotation, DeltaTime, SinkingRate));
		return;
	}
	/*if (ShipMesh->GetComponentRotation().Roll > 5.f || ShipMesh->GetComponentRotation().Roll < -5.f)
	{
		ShipMesh->SetWorldRotation(FMath::RInterpTo(GetActorRotation(), FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw, 0.f), DeltaTime, 3.f));
	}*/
	DeltaSeconds = DeltaTime;
}

AActor* AShip::GetActorWithAbilityComponent()
{
	return nullptr;
}

ETeam AShip::GetHitActorTeam()
{
	return ETeam();
}


void AShip::FirePortCannons()
{
	if (bIsDead) return;

	
}

void AShip::FireStarboardCannons()
{

	if (bIsDead) return;

	
}

void AShip::ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate)
{
	if (!CannonAbilityToActivate) return;
	
}

