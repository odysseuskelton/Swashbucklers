// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/CaptainState.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/SBGameplayAbility.h"

#include "Weapons/Cannon.h"

ACaptainState::ACaptainState()
{
	AbilityComponent = CreateDefaultSubobject<USBAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USBAttributeSet>("AttributeSetBaseComp");
	PrimaryActorTick.bCanEverTick = true;
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
