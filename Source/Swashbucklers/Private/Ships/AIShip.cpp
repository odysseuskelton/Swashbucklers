// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/AIShip.h"
#include "Engine/EngineTypes.h"
#include "AITypes.h"
#include "AIController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "GameModes/SBGameMode.h"

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
}

void AAIShip::BeginPlay()
{
	Super::BeginPlay();
	InitializeEnemy();

	ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &AAIShip::ShipBeginOverlap);

	AttributeSet->OnHealthChange.AddUniqueDynamic(this, &AShip::OnHealthChanged);
	AttributeSet->MaxHealth.SetCurrentValue(ShipHealth);
	AttributeSet->MaxHealth.SetBaseValue(ShipHealth);
	AttributeSet->Health.SetCurrentValue(ShipHealth);
	AttributeSet->Health.SetBaseValue(ShipHealth);

	
}

void AAIShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAIShip, AITeam);

}

void AAIShip::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	Super::MulticastOnHealthChanged_Implementation(Health, MaxHealth, InstigatorActor);

}

void AAIShip::ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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

void AAIShip::TreasureResolved()
{
	ASBGameMode* GameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	UE_LOG(LogTemp, Warning, TEXT("Treasure Resolved"))

	if (GameMode)
	{
		GameMode->TreasureResolved();
	}
}

void AAIShip::Die(AActor* InstigatorActor)
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

	GetWorldTimerManager().SetTimer(DestroyTimer, this, &AAIShip::DestroyTimerFinished, 5.f);
}

void AAIShip::DestroyTimerFinished()
{
	TreasureResolved();

	Destroy();
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
	AITeam = TeamToSet;
	SetSailColors(TeamToSet);
}

void AAIShip::OnRep_SetTeam()
{
	SetSailColors(AITeam);
}

void AAIShip::InitializeEnemy()
{
	AIController = Cast<AAIController>(GetController());
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
	MoveRequest.SetAcceptanceRadius(10.f);
	AIController->MoveTo(MoveRequest);
}

UAbilitySystemComponent* AAIShip::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}