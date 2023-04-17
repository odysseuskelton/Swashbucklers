// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/CaptainState.h"
#include "PlayerControllers/CaptainController.h"
#include "Ships/PlayerShip.h"
#include "GameInstance/SBGameInstance.h"
#include "GameStates/SBGameState.h"
#include "HUD/CaptainHUD.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "Buildings/Store.h"
#include "Kismet/GameplayStatics.h"

#include "Weapons/Cannon.h"
#include "Net/UnrealNetwork.h"

#include "TimerManager.h"

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
	DOREPLIFETIME(ACaptainState, StartingAbilities);
	DOREPLIFETIME(ACaptainState, Slot1);
	DOREPLIFETIME(ACaptainState, Slot2);
	DOREPLIFETIME(ACaptainState, Slot3);
	DOREPLIFETIME(ACaptainState, Slot4);
}

void ACaptainState::BeginPlay()
{
	Super::BeginPlay();

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

void ACaptainState::ApplyRegenEffects()
{
	if (HasAuthority() && AbilityComponent)
	{
		FGameplayEffectContextHandle ContextHandle;
		ContextHandle.AddInstigator(this, this);
		
		if (ManaRegenEffectClass)
		{
			FGameplayEffectSpecHandle ManaRegenSpec = AbilityComponent->MakeOutgoingSpec(ManaRegenEffectClass, 0, ContextHandle);
			AbilityComponent->ApplyGameplayEffectSpecToSelf(*ManaRegenSpec.Data.Get());
		}

		if (HealthRegenEffectClass)
		{
			FGameplayEffectSpecHandle HealthRegenSpec = AbilityComponent->MakeOutgoingSpec(HealthRegenEffectClass, 0, ContextHandle);
			AbilityComponent->ApplyGameplayEffectSpecToSelf(*HealthRegenSpec.Data.Get());
		}
	}

}

void ACaptainState::RemoveActiveEffects()
{
	if (AbilityComponent)
	{
		FGameplayEffectQuery Query;
		Query.ModifyingAttribute;
		AbilityComponent->RemoveActiveEffects(Query);
	}
}

void ACaptainState::BuildingDestroyedNotification(EBuildingType BuildingTypeDestroyed)
{
	if(BuildingTypeDestroyed == EBuildingType::EBT_PrivateerHQ || BuildingTypeDestroyed == EBuildingType::EBT_PirateHideout)
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetPlayerController());
		if (CapController)
		{
			CapController->DisplayVictoryScreen(BuildingTypeDestroyed);
		}
	}
}

void ACaptainState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	PollInit();
}

void ACaptainState::PollInit()
{
	if (CaptainController == nullptr)
	{
		CaptainController = CaptainController == nullptr ? Cast<ACaptainController>(GetPlayerController()) : CaptainController;
	}

	if (CaptainController && !CaptainHUD)
	{
		CaptainHUD = CaptainHUD == nullptr ? CaptainController->GetHUD<ACaptainHUD>() : CaptainHUD;
	}

	if (!bHasStartingAbilities)
	{
		AcquireAbilities(StartingAbilities);
	}

	if (GetPawn() && GetPawn()->IsLocallyControlled() && CaptainHUD && CaptainHUD->IsCaptainOverlayValid() && bInitializedSlots == false)
	{
		InitializeSlotsInOverlay();
	}
}

void ACaptainState::InitializeSlotsInOverlay()
{
	if (Slot1)
	{
		SendAbilityToHUD(Slot1, EAbilitySlot::EAS_Slot1);
	}

	if (Slot2)
	{
		SendAbilityToHUD(Slot2, EAbilitySlot::EAS_Slot2);
	}

	if (Slot3)
	{
		SendAbilityToHUD(Slot3, EAbilitySlot::EAS_Slot3);
	}

	if (Slot4)
	{
		SendAbilityToHUD(Slot4, EAbilitySlot::EAS_Slot4);
	}

	bInitializedSlots = true;
}

UAbilitySystemComponent* ACaptainState::GetAbilitySystemComponent() const
{
    return AbilityComponent;
}

void ACaptainState::ActivateAbility(TSubclassOf<USBGameplayAbility> Ability)
{
	AbilityComponent->TryActivateAbilityByClass(Ability);
}

void ACaptainState::ActivateSlotAbility(EAbilitySlot AbilitySlotToActivate)
{

	switch (AbilitySlotToActivate)
	{
		case EAbilitySlot::EAS_Slot1:
			AbilityComponent->TryActivateAbilityByClass(Slot1);
		
			break;
		case EAbilitySlot::EAS_Slot2:
			AbilityComponent->TryActivateAbilityByClass(Slot2);
			break;
		case EAbilitySlot::EAS_Slot3:
			AbilityComponent->TryActivateAbilityByClass(Slot3);
			break;
		case EAbilitySlot::EAS_Slot4:
			AbilityComponent->TryActivateAbilityByClass(Slot4);
			break;
	}
}

void ACaptainState::AcquireAbility(TSubclassOf<USBGameplayAbility> AbilityToAcquire, EAbilitySlot AbilitySlotRequested)
{

	if (AbilityComponent && HasAuthority() && AbilityToAcquire)
	{
		FGameplayAbilitySpecDef SpecDef = FGameplayAbilitySpecDef();
		SpecDef.Ability = AbilityToAcquire;
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(SpecDef, 1);
		AbilityComponent->GiveAbility(FGameplayAbilitySpec(AbilityToAcquire, 1, 1, this));
		AbilityComponent->InitAbilityActorInfo(this, GetPawn());	
		EAbilitySlot SlotAssigned = AssignAbilityToSlot(AbilityToAcquire, AbilitySlotRequested);

		USBGameplayAbility* AbilityInstance = AbilityToAcquire.Get()->GetDefaultObject<USBGameplayAbility>();


		if (AbilityInstance->GetAbilityInfo().AbilityType == EAbilityType::EAT_SlotAbility && GetPawn() && GetPawn()->IsLocallyControlled())
		{
			SendAbilityToHUD(AbilityToAcquire, SlotAssigned);
		}
	}
}

void ACaptainState::SendAbilityToHUD(TSubclassOf<USBGameplayAbility>& AbilityToAcquire, EAbilitySlot SlotAssigned)
{
	CaptainController = CaptainController == nullptr ? Cast<ACaptainController>(GetPlayerController()) : CaptainController;
	if (CaptainController)
	{
		CaptainHUD = CaptainHUD == nullptr ? CaptainController->GetHUD<ACaptainHUD>() : CaptainHUD;
		USBGameplayAbility* AbilityInstance = AbilityToAcquire.Get()->GetDefaultObject<USBGameplayAbility>();
		if (CaptainHUD && AbilityInstance)
		{
			FGameplayAbilityInfo AbilityInfo = AbilityInstance->GetAbilityInfo();
			CaptainHUD->SetAbilitySlot(AbilityInfo, SlotAssigned);
		}
	}
}

void ACaptainState::SendLocalInputToASC(bool bIsPressed, const int32 AbilityID)
{
	if (!AbilityComponent) return;

	if (bIsPressed)
	{
		AbilityComponent->AbilityLocalInputPressed(AbilityID);
	}
	else
	{
		AbilityComponent->AbilityLocalInputReleased(AbilityID);
	}
}

void ACaptainState::ActivateSlotCooldown(TSubclassOf<USBGameplayAbility> AbilityInSlotToActivate)
{
	if (!GetPawn()->IsLocallyControlled())
	{
		ClientActivateSlotCooldown(AbilityInSlotToActivate);
		return;
	}

	CaptainController = CaptainController == nullptr ? Cast<ACaptainController>(GetPlayerController()) : CaptainController;
	if (CaptainController)
	{
		CaptainHUD = CaptainHUD == nullptr ? CaptainController->GetHUD<ACaptainHUD>() : CaptainHUD;
		if (CaptainHUD)
		{
			if (AbilityInSlotToActivate == Slot1)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot1);
			}
			if (AbilityInSlotToActivate == Slot2)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot2);
			}
			if (AbilityInSlotToActivate == Slot3)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot3);
			}
			if (AbilityInSlotToActivate == Slot4)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot4);
			}
				
		}
	}
}

void ACaptainState::ClientActivateSlotCooldown_Implementation(TSubclassOf<USBGameplayAbility> AbilityInSlotToActivate)
{
	CaptainController = CaptainController == nullptr ? Cast<ACaptainController>(GetPlayerController()) : CaptainController;
	if (CaptainController)
	{
		CaptainHUD = CaptainHUD == nullptr ? CaptainController->GetHUD<ACaptainHUD>() : CaptainHUD;
		if (CaptainHUD)
		{
			if (AbilityInSlotToActivate == Slot1)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot1);
			}
			if (AbilityInSlotToActivate == Slot2)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot2);
			}
			if (AbilityInSlotToActivate == Slot3)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot3);
			}
			if (AbilityInSlotToActivate == Slot4)
			{
				CaptainHUD->ActivateSlotCooldownOnOverlay(EAbilitySlot::EAS_Slot4);
			}

		}
	}
}


TArray<TSubclassOf<USBGameplayAbility>> ACaptainState::GetCurrentAbilities()
{
	TArray<TSubclassOf<USBGameplayAbility>> CurrentAbilities;
	CurrentAbilities.Add(Slot1);
	CurrentAbilities.Add(Slot2);
	CurrentAbilities.Add(Slot3);
	CurrentAbilities.Add(Slot4);

	return CurrentAbilities;
}

EAbilitySlot ACaptainState::AssignAbilityToSlot(TSubclassOf<USBGameplayAbility> AbilityToAcquire, EAbilitySlot AbilitySlotRequested)
{
	if (AbilitySlotRequested == EAbilitySlot::EAS_NoSlot)
	{
		if (!Slot1)
		{
			Slot1 = AbilityToAcquire;
			return EAbilitySlot::EAS_Slot1;
		}
		if (!Slot2)
		{
			Slot2 = AbilityToAcquire;
			return EAbilitySlot::EAS_Slot2;
		}
		if (!Slot3)
		{
			Slot3 = AbilityToAcquire;
			return EAbilitySlot::EAS_Slot3;
		}
		if (!Slot4)
		{
			Slot4 = AbilityToAcquire;
			return EAbilitySlot::EAS_Slot4;
		}
	}
	else
	{
		//TODO: This will need to be changed when more than 4 abilities.
		Slot1 = AbilityToAcquire;
		return EAbilitySlot::EAS_Slot1;
	}

	return EAbilitySlot::EAS_Slot1;
}

void ACaptainState::AcquireAbilities(TArray<TSubclassOf<USBGameplayAbility>> AbilitiesToAcquire)
{
	for (TSubclassOf<USBGameplayAbility> Ability : AbilitiesToAcquire)
	{
		AcquireAbility(Ability);
	}

	bHasStartingAbilities = true;
}


void ACaptainState::SetTeam(ETeam TeamToSet)
{
	PlayerTeam = TeamToSet;

	AShip* PlayerShip = Cast<AShip>(GetPawn());
	if (PlayerShip)
	{
		PlayerShip->SetSailColors(PlayerTeam);
		HideEnemyStores();
	}

}

void ACaptainState::OnRep_Team(ETeam TeamToSet)
{
	AShip* PlayerShip = Cast<AShip>(GetPawn());
	if (PlayerShip)
	{
		PlayerShip->SetSailColors(PlayerTeam);
		HideEnemyStores();
	}
}


void ACaptainState::HideEnemyStores()
{
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(this, AStore::StaticClass(), OutActors);
	for (AActor* Actor : OutActors)
	{
		AStore* Store = Cast<AStore>(Actor);
		if (GetPawn() && GetPawn()->IsLocallyControlled() && Store && Store->GetBuildingTeam() != PlayerTeam)
		{
			Store->SetActorHiddenInGame(true);
		}
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
		return;
	}

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

			CurrentShip->CleanupCannons(0.1f);
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
