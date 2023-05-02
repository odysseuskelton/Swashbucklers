// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Teams.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Interfaces/SlotInterface.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "Buildings/BuildingTypes.h"
#include "GameplayEffect.h"
#include "AbilitySystemInterface.h"
#include "CaptainState.generated.h"


class USBAbilitySystemComponent;
class USBAttributeSet;
class USBGameplayAbility;
class AShip;
class ACaptainController;
class ACaptainHUD;


/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainState : public APlayerState, public IAbilitySystemInterface, public ICaptainStateInterface, public ISlotInterface
{
	GENERATED_BODY()

public:
	ACaptainState();

	void ApplyRegenEffects();

	void RemoveActiveEffects();


	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TSubclassOf<AShip> DefaultShip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TSubclassOf<AShip> CurrentShip;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TArray<TSubclassOf<USBGameplayAbility>> StartingAbilities;

	bool bHasStartingAbilities = false;

	//Regen
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayEffect> ManaRegenEffectClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayEffect> HealthRegenEffectClass;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TArray<TSubclassOf<AShip>> OwnedShips;

private:

	ACaptainController* CaptainController;
	ACaptainHUD* CaptainHUD;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TArray<TSubclassOf<USBGameplayAbility>> OwnedAbilities;

	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_Team)
	ETeam PlayerTeam;

	UFUNCTION()
	void BuildingDestroyedNotification(EBuildingType BuildingTypeDestroyed);

	UFUNCTION(Server, Reliable)
	void ServerBuyShip(TSubclassOf<AShip> ShipToBuy);

	UFUNCTION(Server, Reliable)
	void ServerSwitchShips(TSubclassOf<AShip> ShipToSwitchTo);

	UFUNCTION(Server, Reliable)
	void ServerBuyAbility(TSubclassOf<USBGameplayAbility> AbilityToBuy, EAbilitySlot SlotSelected);

	//Ability Slots
	UPROPERTY(ReplicatedUsing = OnRep_Slot1Change)
	TSubclassOf<USBGameplayAbility> Slot1;

	UPROPERTY(ReplicatedUsing = OnRep_Slot2Change)
	TSubclassOf<USBGameplayAbility> Slot2;

	UPROPERTY(ReplicatedUsing = OnRep_Slot3Change)
	TSubclassOf<USBGameplayAbility> Slot3;

	UPROPERTY(ReplicatedUsing = OnRep_Slot4Change)
	TSubclassOf<USBGameplayAbility> Slot4;

	UFUNCTION()
	void OnRep_Slot1Change();

	UFUNCTION()
	void OnRep_Slot2Change();

	UFUNCTION()
	void OnRep_Slot3Change();

	UFUNCTION()
	void OnRep_Slot4Change();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(Server, Reliable)
	void ServerRegisterCaptainState(ACaptainState* CaptainState);

	void Tick(float DeltaTime);

	void PollInit();

	void InitializeSlotsInOverlay();
	bool bInitializedSlots = false;

public:
	//IAbilitySystemInterface Override
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	void ActivateAbility(TSubclassOf<USBGameplayAbility> Ability);

	void ActivateSlotAbility(EAbilitySlot AbilitySlotToActivate);

	void AcquireAbility(TSubclassOf<USBGameplayAbility> AbilityToAcquire, EAbilitySlot AbilitySlotRequested = EAbilitySlot::EAS_NoSlot);

	void SendAbilityToHUD(TSubclassOf<USBGameplayAbility>& AbilityToAcquire, EAbilitySlot SlotAssigned);

	void SendLocalInputToASC(bool bIsPressed, const int32 AbilityID);

	EAbilitySlot AssignAbilityToSlot(TSubclassOf<USBGameplayAbility> AbilityToAcquire, EAbilitySlot AbilitySlot);

	void AcquireAbilities(TArray<TSubclassOf<USBGameplayAbility>> AbilitiesToAcquire);

public:
	FORCEINLINE USBAttributeSet* GetAttributeSet() { return AttributeSet; }
	void SetTeam(ETeam TeamToSet);

	UFUNCTION()
	void OnRep_Team(ETeam TeamToSet);

	void HideEnemyStores();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETeam GetPlayerTeam() override { return PlayerTeam; }

	//CaptainState Interface
	FORCEINLINE TArray<TSubclassOf<AShip>> GetPlayerShips() override { return OwnedShips; }
	FORCEINLINE virtual void SetDefaultShip(TSubclassOf<AShip> NewDefaultShip) { DefaultShip = NewDefaultShip; }
	FORCEINLINE virtual void SetCurrentShip(TSubclassOf<AShip> NewDefaultShip) { CurrentShip = NewDefaultShip; }
	void BuyShip(TSubclassOf<AShip> ShipToBuy) override;
	void BuyAbility(TSubclassOf<USBGameplayAbility> AbilityToBuy, EAbilitySlot SlotSelected) override;
	int32 GetPlayerPOE() override; 
	void SendPlayerPOE(int32 POEToSend) override;
	FORCEINLINE virtual APawn* GetPossessedPawn() { return GetPawn(); }


	//Slot Interface
	virtual void ActivateSlotCooldown(TSubclassOf<USBGameplayAbility> AbilityInSlotToActivate) override;
	virtual TArray<TSubclassOf<USBGameplayAbility>> GetCurrentAbilities();

	UFUNCTION(Client, Unreliable)
	void ClientActivateSlotCooldown(TSubclassOf<USBGameplayAbility> AbilityInSlotToActivate);


};
