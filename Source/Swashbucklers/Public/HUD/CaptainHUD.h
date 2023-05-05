// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "PlayerStates/Teams.h"
#include "CaptainHUD.generated.h"

class UCaptainOverlay;
class USBGameplayAbility;
class UAnnouncement;
class ACaptainState;
class ULeaderboard;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainHUD : public AHUD
{
	GENERATED_BODY()
	

public:
	void SetHUDHealth(float CurrentHealth, float MaxHealth);
	void SetHUDMana(float CurrentMana, float MaxMana);

	void SetHUDPoE(int32 PoEToSet);

	void ActivateSlotCooldownOnOverlay(EAbilitySlot AbilitySlotToActivate);

	void UpdateCountdown(float CountdownTime);
	void UpdateAnnouncement(float CountdownTime);

	void UpdateHUDTreasureWaitingToSpawn();
	void UpdateHUDTreasureHasSpawned(FVector TreasureLocation);
	void UpdateHUDTreasureHasBeenCaptured(ETeam TeamCapturingTreasure, ETeam PlayerTeam);

	void SendDeathAnnouncementToHUD(FString SunkCapName, FString SinkingCapName, ETeam SunkCapTeam, ETeam SinkingCapTeam);

	void SetAbilitySlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned);

	void AddCaptainOverlayToViewport();
	ULeaderboard* InitializeLeaderboardOverlay();
	void ToggleLeaderboardOverlay();
	void AddAnnouncementToViewport();

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UCaptainOverlay* CaptainOverlay;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UAnnouncement* Announcement;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	ULeaderboard* LeaderboardOverlay;

	void AddPlayerToLeaderboard(ACaptainState* CaptainState);

	void UpdatePlayerBountyOnLeaderboard(ACaptainState* CaptainState, int32 Bounty);
	void UpdateHUDKills(ACaptainState* CapStateToUpdate, int32 PlayerKills);

	void UpdateHUDTowers(ACaptainState* CapStateToUpdate, int32 TowerKills);

	void UpdateHUDCaptures(ACaptainState* CaptainState, int32 Captures);

protected:
	virtual void BeginPlay() override;

	void InitializeOverlaySlots();

private:
	APlayerController* Controller;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<UCaptainOverlay> CaptainOverlayClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ULeaderboard> LeaderboardOverlayClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<UAnnouncement> AnnouncementClass;

public:
	FORCEINLINE virtual bool IsCaptainOverlayValid() { if (CaptainOverlay) { return true; } return false; }


};
