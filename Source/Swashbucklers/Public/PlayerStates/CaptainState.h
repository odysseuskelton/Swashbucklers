// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Teams.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Buildings/BuildingTypes.h"
#include "AbilitySystemInterface.h"
#include "CaptainState.generated.h"


class USBAbilitySystemComponent;
class USBAttributeSet;
class USBGameplayAbility;
class AShip;

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainState : public APlayerState, public IAbilitySystemInterface, public ICaptainStateInterface
{
	GENERATED_BODY()

public:
	ACaptainState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TSubclassOf<AShip> DefaultShip;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TArray<TSubclassOf<USBGameplayAbility>> StartingAbilities;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite,meta = (AllowPrivateAccess))
	TArray<TSubclassOf<AShip>> OwnedShips;

	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_Team)
	ETeam PlayerTeam;

	UFUNCTION()
	void BuildingDestroyedNotification(EBuildingType BuildingTypeDestroyed);

	UFUNCTION(Server, Reliable)
	void ServerBuyShip(TSubclassOf<AShip> ShipToBuy);

	UFUNCTION(Server, Reliable)
	void ServerSwitchShips(TSubclassOf<AShip> ShipToSwitchTo);

protected:
	virtual void BeginPlay() override;

	void Tick(float DeltaTime);

public:
	//IAbilitySystemInterface Override
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	void ActivateAbility(TSubclassOf<USBGameplayAbility> Ability);

	void AcquireAbility(TSubclassOf<USBGameplayAbility> AbilityToAcquire);

	void AcquireAbilities(TArray<TSubclassOf<USBGameplayAbility>> AbilitiesToAcquire);

public:
	FORCEINLINE USBAttributeSet* GetAttributeSet() { return AttributeSet; }
	void SetTeam(ETeam TeamToSet);

	UFUNCTION()
	void OnRep_Team(ETeam TeamToSet);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETeam GetPlayerTeam() override { return PlayerTeam; }

	//CaptainState Interface
	FORCEINLINE TArray<TSubclassOf<AShip>> GetPlayerShips() override { return OwnedShips; }
	FORCEINLINE virtual void SetDefaultShip(TSubclassOf<AShip> NewDefaultShip) { DefaultShip = NewDefaultShip; }
	void BuyShip(TSubclassOf<AShip> ShipToBuy) override;
	int32 GetPlayerPOE() override; 
	void SendPlayerPOE(int32 POEToSend) override;


};
