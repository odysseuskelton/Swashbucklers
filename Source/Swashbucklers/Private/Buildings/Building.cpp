// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildings/Building.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "HUD/HealthbarComponent.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameStates/SBGameState.h"

#include "Kismet/KismetMathLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

ABuilding::ABuilding(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMesh"));
	SetRootComponent(BuildingMesh);

	HealthbarComponent = CreateDefaultSubobject<UHealthbarComponent>(TEXT("Healthbar"));
	HealthbarComponent->SetupAttachment(BuildingMesh);
	HealthbarComponent->SetVisibility(false);

	AbilityComponent = CreateDefaultSubobject<USBAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<USBAttributeSet>("AttributeSetBaseComp");
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
}

void ABuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABuilding, Team);
	DOREPLIFETIME(ABuilding, BuildingType);
	DOREPLIFETIME(ABuilding, bIsDead);
	DOREPLIFETIME(ABuilding, StartingBuildingHealth);
}

void ABuilding::BeginPlay()
{
	Super::BeginPlay();
	
	if (AttributeSet)
	{
		AttributeSet->OnHealthChange.AddDynamic(this, &ABuilding::OnBuildingHealthChange);
		if (HealthbarComponent)
		{
			HealthbarComponent->SetRenderOpacity(0.f);
		}

		AttributeSet->MaxHealth = StartingBuildingHealth;
		AttributeSet->Health = StartingBuildingHealth;
		AbilityComponent->SetNumericAttributeBase(USBAttributeSet::GetHealthAttribute(), StartingBuildingHealth);

		//AttributeSet->Health = BuildingHealth;
		//AttributeSet->Health.SetCurrentValue(BuildingHealth);
		//AttributeSet->Health.SetBaseValue(BuildingHealth);
	}

}

void ABuilding::OnBuildingHealthChange(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!HasAuthority()) return;

	MulticastOnBuildingHealthChange(Health, MaxHealth, InstigatorActor);
	
}

void ABuilding::MulticastOnBuildingHealthChange_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	HealthbarComponent->SetRenderOpacity(100.f);

	GetWorldTimerManager().SetTimer(HealthbarTimer, this, &ABuilding::HealthbarTimerFinished, 4.f);

	if (BuildingHitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, BuildingHitSound, GetActorLocation());
	}

	if (HealthbarComponent)
	{
		HealthbarComponent->SetHealthPercent(Health / MaxHealth);
	}

	if (Health / MaxHealth < .5f && bMinorDamage == false)
	{
		SpawnDamageSystem(2);
		bMinorDamage = true;
	}

	if (Health / MaxHealth < .25f && bMajorDamage == false)
	{
		SpawnDamageSystem(2);
		bMajorDamage = true;
	}

	if (Health <= 0 && !bIsDead)
	{
		Die();
	}
}

void ABuilding::SpawnDamageSystem(uint16 NumberOfSystemsToSpawn)
{

	for (int16 i = 0; i <= NumberOfSystemsToSpawn; ++i)
	{
		FVector BuildingMeshLocation = BuildingMesh->GetRelativeLocation();

		FVector LocationToSpawn = UKismetMathLibrary::RandomPointInBoundingBox(BuildingMeshLocation, FVector(250.f, 250.f, 250.f));

		if (BuildingDamageSystem)
		{
			UNiagaraFunctionLibrary::SpawnSystemAttached(BuildingDamageSystem, BuildingMesh, FName(""), LocationToSpawn, FRotator::ZeroRotator, EAttachLocation::KeepWorldPosition, true, true);
		}

	}
}

void ABuilding::Die()
{
	if (bIsDead) return;
	bIsDead = true;
	FVector LocationToSpawn = GetActorLocation();
	LocationToSpawn.Z += 200.f;

	if (BuildingDeathSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, BuildingDeathSystem, GetActorLocation());
	}
	if (BuildingDeathSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, BuildingDeathSound, GetActorLocation());
	}

	if (BuildingType == EBuildingType::EBT_PirateHideout || BuildingType == EBuildingType::EBT_PrivateerHQ)
	{
		SpawnDestructible();
		BuildingMesh->DestroyComponent();
	}

	UWorld* World = GetWorld();
	if (World && HasAuthority())
	{
		ASBGameState* SBGameState = World->GetGameState<ASBGameState>();
		if (SBGameState)
		{
			SBGameState->BuildingDestroyed(BuildingType, this);
		}
		GetWorldTimerManager().SetTimer(DeathTimer, this, &ABuilding::DeathTimerFinished, DeathTimerDelay);
	}

}

void ABuilding::DeathTimerFinished()
{
	Destroy();
}

void ABuilding::HealthbarTimerFinished()
{
	HealthbarComponent->SetRenderOpacity(0.f);
}

void ABuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UAbilitySystemComponent* ABuilding::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}

AActor* ABuilding::GetActorWithAbilityComponent()
{
	return this;
}

ETeam ABuilding::GetHitActorTeam()
{
	return Team;
}

