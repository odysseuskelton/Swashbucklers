// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/CaptainState.h"
#include "Ships/PlayerShip.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameInstance/SBGameInstance.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/SBGameplayAbility.h"

#include "Weapons/Cannon.h"
#include "Net/UnrealNetwork.h"

ACaptainState::ACaptainState()
{
	AbilityComponent = CreateDefaultSubobject<USBAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USBAttributeSet>("AttributeSetBaseComp");
	PrimaryActorTick.bCanEverTick = true;
}

void ACaptainState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACaptainState, PlayerTeam);

}

void ACaptainState::BeginPlay()
{
	Super::BeginPlay();

	if(!StartingAbilities.IsEmpty())
	{
		AcquireAbilities(StartingAbilities);
	}

}

void ACaptainState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if (!HasAuthority())
	{
		if (PlayerTeam == ETeam::ET_Pirate)
		{
			UE_LOG(LogTemp, Warning, TEXT("Yarrr pirate!"))
		}
		else if (PlayerTeam == ETeam::ET_Privateer)
		{
			UE_LOG(LogTemp, Warning, TEXT("For the king! Privateer"))
		}
	}*/

}

UAbilitySystemComponent* ACaptainState::GetAbilitySystemComponent() const
{
    return AbilityComponent;
}


void ACaptainState::ActivateAbility(TSubclassOf<USBGameplayAbility> Ability)
{
	UE_LOG(LogTemp, Warning, TEXT("Call activate..."))

	AbilityComponent->TryActivateAbilityByClass(Ability);
}

void ACaptainState::AcquireAbility(TSubclassOf<USBGameplayAbility> AbilityToAcquire)
{
	if (AbilityComponent && HasAuthority() && AbilityToAcquire)
	{
		FGameplayAbilitySpecDef SpecDef = FGameplayAbilitySpecDef();
		SpecDef.Ability = AbilityToAcquire;
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(SpecDef, 1);
		AbilityComponent->GiveAbility(FGameplayAbilitySpec(AbilityToAcquire, 1, 1, this));
		AbilityComponent->InitAbilityActorInfo(this, GetPawn());
	}
}

void ACaptainState::AcquireAbilities(TArray<TSubclassOf<USBGameplayAbility>> AbilitiesToAcquire)
{
	if (!HasAuthority()) return;

	for (TSubclassOf<USBGameplayAbility> Ability : AbilitiesToAcquire)
	{
		AcquireAbility(Ability);
	}
}

void ACaptainState::SetTeam(ETeam TeamToSet)
{
	PlayerTeam = TeamToSet;

	APlayerShip* PlayerShip = Cast<APlayerShip>(GetPawn());
	if (PlayerShip)
	{
		PlayerShip->SetSailColors(PlayerTeam);
	}

}

void ACaptainState::OnRep_Team(ETeam TeamToSet)
{
	UE_LOG(LogTemp, Warning, TEXT("OnRepTeam"))
	APlayerShip* PlayerShip = Cast<APlayerShip>(GetPawn());
	if (PlayerShip)
	{
		PlayerShip->SetSailColors(PlayerTeam);
	}
}
