// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/CaptainState.h"
#include "PlayerControllers/CaptainController.h"
#include "Ships/PlayerShip.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameInstance/SBGameInstance.h"
#include "GameStates/SBGameState.h"
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
	DOREPLIFETIME(ACaptainState, OwnedShips);

}


void ACaptainState::BeginPlay()
{
	Super::BeginPlay();

	if(!StartingAbilities.IsEmpty())
	{
		AcquireAbilities(StartingAbilities);
	}

	UWorld* World = GetWorld();
	if (World)
	{
		ASBGameState* SBGameState = World->GetGameState<ASBGameState>();
		if (SBGameState)
		{
			SBGameState->OnBuildingDestroyed.AddDynamic(this, &ACaptainState::BuildingDestroyedNotification);
		}
	}

}

void ACaptainState::BuildingDestroyedNotification(EBuildingType BuildingTypeDestroyed)
{

	if(BuildingTypeDestroyed == EBuildingType::EBT_PrivateerHQ || BuildingTypeDestroyed == EBuildingType::EBT_PirateHideout)
	{
		ACaptainController* CaptainController = Cast<ACaptainController>(GetPlayerController());
		if (CaptainController)
		{
			CaptainController->DisplayVictoryScreen(BuildingTypeDestroyed);
		}
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
	APlayerShip* PlayerShip = Cast<APlayerShip>(GetPawn());
	if (PlayerShip)
	{
		PlayerShip->SetSailColors(PlayerTeam);
	}
}

void ACaptainState::BuyShip(TSubclassOf<AShip> ShipToBuy)
{
	ServerBuyShip(ShipToBuy);
}


void ACaptainState::ServerBuyShip_Implementation(TSubclassOf<AShip> ShipToBuy)
{
	if (OwnedShips.Contains(ShipToBuy))
	{
		ServerSwitchShips(ShipToBuy);
		UE_LOG(LogTemp, Warning, TEXT("Just switch, no buy"))
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Server buy ship"))

	OwnedShips.Add(ShipToBuy);
	AttributeSet->Buy(ShipToBuy.GetDefaultObject()->StoreCost);
	ServerSwitchShips(ShipToBuy);
}

void ACaptainState::ServerSwitchShips_Implementation(TSubclassOf<AShip> ShipToSwitchTo)
{
	SetDefaultShip(ShipToSwitchTo);
	if (GetPlayerController()->GetPawn())
	{
		FTransform TransformForNewShip = GetPlayerController()->GetPawn()->GetActorTransform();
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.ObjectFlags |= RF_Transient;
		AShip* CurrentShip = Cast<AShip>(GetPlayerController()->GetPawn());
		if (CurrentShip)
		{
			CurrentShip->CleanupCannons();
			CurrentShip->Destroy();
		}
		AShip* NewShip = GetWorld()->SpawnActor<AShip>(ShipToSwitchTo, TransformForNewShip, SpawnInfo);
		GetPlayerController()->Possess(NewShip);
	}
}


int32 ACaptainState::GetPlayerPOE()
{
	if (!AttributeSet) return int32();
	
	return AttributeSet->PiecesOfEight.GetCurrentValue();
}

void ACaptainState::SendPlayerPOE(int32 POEToSend)
{
	if (!AttributeSet) return;

	AttributeSet->ReceivePOE(POEToSend);
}

