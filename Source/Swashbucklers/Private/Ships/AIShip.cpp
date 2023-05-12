// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/AIShip.h"
#include "Engine/EngineTypes.h"
#include "HUD/HealthbarComponent.h"
#include "AITypes.h"
#include "AIController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "SenseReceiverComponent.h"
#include "SenseStimulusComponent.h"

#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "TimerManager.h"

AAIShip::AAIShip()
{

	AbilityComponent = CreateDefaultSubobject<USBAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USBAttributeSet>("AttributeSetBaseComp");
	UE_LOG(LogTemp, Warning, TEXT("Construct ai ship"))

	Sensor = CreateDefaultSubobject<USenseReceiverComponent>(TEXT("Sensor"));
	Sensor->SetupAttachment(GetRootComponent());

	PrimaryActorTick.bCanEverTick = true;
}

void AAIShip::BeginPlay()
{
	Super::BeginPlay();
	InitializeEnemy();

	UE_LOG(LogTemp, Warning, TEXT("AI Ship begin play"))
	if (AttributeSet)
	{
		UE_LOG(LogTemp, Warning, TEXT("Att set valid on Ship begin play"))

		AttributeSet->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
		AttributeSet->MaxHealth.SetCurrentValue(ShipHealth);
		AttributeSet->MaxHealth.SetBaseValue(ShipHealth);
		AttributeSet->Health.SetCurrentValue(ShipHealth);
		AttributeSet->Health.SetBaseValue(ShipHealth);
	}

	
}

void AAIShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAIShip, AITeam);

}

void AAIShip::Die(AActor* InstigatorActor)
{
	Super::Die(InstigatorActor);

	AIState = EAIState::EAI_Dead;

	SetLifeSpan(7.f);

	bIsDead = true;
}


void AAIShip::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	UE_LOG(LogTemp, Warning, TEXT("HealthChange"))
	if (HealthbarComponent && HealthbarComponent->GetHealthPercent() > Health / MaxHealth)
	{
		HealthbarComponent->SetRenderOpacity(100.f);
		GetWorldTimerManager().SetTimer(HealthbarTimer, this, &AShip::HealthbarTimerFinished, 4.f);
	}

	if (HealthbarComponent)
	{
		HealthbarComponent->SetHealthPercent(Health / MaxHealth);
	}

	if (Health / MaxHealth < .5f && bMinorDamage == false)
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

void AAIShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator ClampedRotation = GetActorRotation();
	ClampedRotation.Roll = FMath::Clamp(ClampedRotation.Roll, -25.f, 25.f);
	ClampedRotation.Pitch = FMath::Clamp(ClampedRotation.Pitch, -10.f, 10.f);
	SetActorRotation(ClampedRotation);


	//if (CurrentTarget)
	//{
	//	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTarget->GetActorLocation());
	//	SetActorRotation(LookAtRotation);
	//}

}



void AAIShip::SetTeam(ETeam TeamToSet)
{
	UE_LOG(LogTemp, Warning, TEXT("AITeam set/..."))

	AITeam = TeamToSet;
	SetSailColors(TeamToSet);

}

void AAIShip::OnRep_SetTeam()
{
	UE_LOG(LogTemp, Warning ,TEXT("Onrep aiteam"))
	SetSailColors(AITeam);
}

void AAIShip::InitializeEnemy()
{
	AIController = Cast<AAIController>(GetController());
}

void AAIShip::CorrectActorRotationTowardTarget()
{
	if (CurrentTarget)
	{
		FRotator RotationToSet = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTarget->GetActorLocation());
		RotationToSet.Pitch = GetActorRotation().Pitch;
		RotationToSet.Roll = GetActorRotation().Roll;
		SetActorRotation(RotationToSet);
		GetWorldTimerManager().SetTimer(CorrectRotationTimer, this, &AAIShip::CorrectActorRotationTowardTarget, 2.f);
		FVector NewLocation = CurrentTarget->GetActorLocation();
		NewLocation.Z = GetActorLocation().Z;
		TargetLocation = NewLocation;
		MoveToLocation(TargetLocation, 0.f);
	}
	else
	{
		if (AIController)
		{
			AIController->StopMovement();
		}
	}
}


void AAIShip::MoveToTarget(AActor* Target)
{
	if (AIController == nullptr || Target == nullptr) return;

	CurrentTarget = Target;

	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Target->GetActorLocation());
	SetActorRotation(LookAtRotation);

	FAIMoveRequest MoveRequest;
	MoveRequest.SetUsePathfinding(false);
	MoveRequest.SetGoalActor(Target);
	MoveRequest.SetAcceptanceRadius(0.f);
	AIController->MoveTo(MoveRequest);
}

void AAIShip::MoveToLocation(FVector LocationToMoveTo, float AcptRadius)
{
	if (!HasAuthority()) return;

	ServerMoveToLocation(LocationToMoveTo, AcptRadius);
}

void AAIShip::ServerMoveToLocation_Implementation(FVector LocationToMoveTo, float AcptRadius)
{
	if (AIController == nullptr) return;

	/*FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LocationToMoveTo);
	SetActorRotation(LookAtRotation);*/

	FAIMoveRequest MoveRequest;
	MoveRequest.SetCanStrafe(true);
 	MoveRequest.SetAllowPartialPath(true);
	MoveRequest.SetUsePathfinding(false);
	MoveRequest.SetProjectGoalLocation(false);
	MoveRequest.SetReachTestIncludesAgentRadius(false);
	MoveRequest.SetGoalLocation(LocationToMoveTo);
	MoveRequest.SetAcceptanceRadius(AcptRadius);
	AIController->MoveTo(MoveRequest);
}

UAbilitySystemComponent* AAIShip::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}

bool AAIShip::ShipIsIdle()
{
	return AIController && (AIController->GetMoveStatus() == EPathFollowingStatus::Waiting || AIController->GetMoveStatus() == EPathFollowingStatus::Paused || AIController->GetMoveStatus() == EPathFollowingStatus::Idle);
}