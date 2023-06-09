// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerStates/Teams.h"
#include "AbilitySystemComponent.h"
#include "SBAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealthChangeDelegate, float, Health, float, MaxHealth, AActor*, InstigatorActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnManaChangeDelegate, float, Mana, float, MaxMana);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBountyChangeDelegate, int32, Bounty, AActor*, DestroyedActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpeedChangeDelegate, float, Speed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPiecesOfEightDelegate, int32, PiecesOfEight, AActor*, DestroyedActor, int32, BountyToCollect);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerKillChangeDelegate, int32, PlayerKills);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTowerKillChangeDelegate, int32, TowerKills);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCaptureChangeDelegate, int32, Captures);

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USBAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USBAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, Health)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Speed)
	FGameplayAttributeData Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Bounty)
	FGameplayAttributeData Bounty;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, Bounty)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_PiecesOfEight)
	FGameplayAttributeData PiecesOfEight;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, PiecesOfEight)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_TreasureCaptures)
	FGameplayAttributeData TreasureCaptures;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, TreasureCaptures)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_TowerKills)
	FGameplayAttributeData TowerKills;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, TowerKills)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_PlayerKills)
	FGameplayAttributeData PlayerKills;
	ATTRIBUTE_ACCESSORS(USBAttributeSet, PlayerKills)

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	void CollectBounty(AActor* BountiedActor, float BountyToCollect);

	void AwardKill();

	void AwardTower();

	void AwardCapture();

	void SendPOEToTeam(ETeam Team, int32 Amount);

	void Buy(int32 Cost);

	void ReceivePOE(int32 POEToReceive);

	FOnHealthChangeDelegate OnHealthChange;
	FOnManaChangeDelegate OnManaChange;
	FOnSpeedChangeDelegate OnSpeedChange;
	FOnBountyChangeDelegate OnBountyChange;
	FOnPiecesOfEightDelegate OnPiecesOfEightChange;
	FOnPlayerKillChangeDelegate OnPlayerKillChange;
	FOnPlayerKillChangeDelegate OnTowerKillChange;
	FOnCaptureChangeDelegate OnCaptureChange;

	UPROPERTY(Replicated)
	AActor* InstigatorActor;

	UPROPERTY(Replicated)
	AActor* DestroyedActor;

	UPROPERTY(Replicated)
	int32 BountyCollected;

protected:
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()
	virtual void OnRep_Speed(const FGameplayAttributeData& OldSpeed);

	UFUNCTION()
	virtual void OnRep_Bounty(const FGameplayAttributeData& OldBounty);

	UFUNCTION()
	virtual void OnRep_PiecesOfEight(const FGameplayAttributeData& OldPiecesOfEight);

	UFUNCTION()
	virtual void OnRep_TreasureCaptures(const FGameplayAttributeData& OldTreasureCaptures);

	UFUNCTION()
	virtual void OnRep_TowerKills(const FGameplayAttributeData& OldTowerKills);

	UFUNCTION()
	virtual void OnRep_PlayerKills(const FGameplayAttributeData& OldPlayerKills);

public:
};
