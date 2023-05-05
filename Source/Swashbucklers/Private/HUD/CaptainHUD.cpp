// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptainHUD.h"
#include "HUD/CaptainOverlay.h"
#include "HUD/Announcement.h"
#include "HUD/Leaderboard.h"

#include "PlayerStates/CaptainState.h"

void ACaptainHUD::BeginPlay()
{
	Super::BeginPlay();

}

void ACaptainHUD::AddPlayerToLeaderboard(ACaptainState* CaptainState)
{
	LeaderboardOverlay = LeaderboardOverlay == nullptr ? InitializeLeaderboardOverlay() : LeaderboardOverlay;
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->AddPlayer(CaptainState);
	}
}

void ACaptainHUD::UpdatePlayerBountyOnLeaderboard(ACaptainState* CaptainState, int32 Bounty)
{
	LeaderboardOverlay = LeaderboardOverlay == nullptr ? InitializeLeaderboardOverlay() : LeaderboardOverlay;
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->UpdatePlayerBounty(CaptainState, Bounty);
	}
}

void ACaptainHUD::UpdateHUDKills(ACaptainState* CapStateToUpdate, int32 PlayerKills)
{
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->UpdatePlayerKills(CapStateToUpdate, PlayerKills);
	}
}

void ACaptainHUD::UpdateHUDTowers(ACaptainState* CapStateToUpdate, int32 TowerKills)
{
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->UpdateTowerKills(CapStateToUpdate, TowerKills);
	}
}

void ACaptainHUD::UpdateHUDCaptures(ACaptainState* CaptainState, int32 Captures)
{
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->UpdateCaptures(CaptainState, Captures);
	}
}

void ACaptainHUD::AddCaptainOverlayToViewport()
{
	UWorld* World = GetWorld();
	if (World)
	{
		Controller = Controller == nullptr ? GetOwningPlayerController() : Controller;
		if (!Controller) return;

		if (CaptainOverlayClass && !CaptainOverlay)
		{
			CaptainOverlay = CreateWidget<UCaptainOverlay>(Controller, CaptainOverlayClass);
			CaptainOverlay->AddToViewport();
		}

		if (LeaderboardOverlayClass && !LeaderboardOverlay)
		{
			InitializeLeaderboardOverlay();
		}
	}
}

ULeaderboard* ACaptainHUD::InitializeLeaderboardOverlay()
{
	LeaderboardOverlay = CreateWidget<ULeaderboard>(Controller, LeaderboardOverlayClass);
	if (LeaderboardOverlay)
	{
		LeaderboardOverlay->InitializeOverlay(Controller);
		LeaderboardOverlay->AddToViewport();
		LeaderboardOverlay->SetRenderOpacity(0.f);
	}
	return LeaderboardOverlay;
}

void ACaptainHUD::ToggleLeaderboardOverlay()
{
	if (LeaderboardOverlay->GetRenderOpacity() == 0.f)
	{
		LeaderboardOverlay->SetRenderOpacity(1.f);
	}
	else
	{
		LeaderboardOverlay->SetRenderOpacity(0.f);
	}
}

void ACaptainHUD::AddAnnouncementToViewport()
{
	UWorld* World = GetWorld();
	if (World)
	{
		Controller = Controller == nullptr ? GetOwningPlayerController() : Controller;
		if (!Controller) return;

		if (AnnouncementClass && !Announcement)
		{
			Announcement = CreateWidget<UAnnouncement>(Controller, AnnouncementClass);
			Announcement->AddToViewport();
		}
	}
}

void ACaptainHUD::SetAbilitySlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->UpdateSlot(AbilityInfo, SlotAssigned);
	}
}

void ACaptainHUD::SetHUDHealth(float CurrentHealth, float MaxHealth)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->SetHealthProgress(CurrentHealth, MaxHealth);
	}
}

void ACaptainHUD::SetHUDMana(float CurrentMana, float MaxMana)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->SetManaProgress(CurrentMana, MaxMana);
	}
}

void ACaptainHUD::SetHUDPoE(int32 PoEToSet)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->SetPoEText(PoEToSet);
		CaptainOverlay->PlayPoEAnimation();
	}
}

void ACaptainHUD::ActivateSlotCooldownOnOverlay(EAbilitySlot AbilitySlotToActivate)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->StartCooldown(AbilitySlotToActivate);
	}
}

void ACaptainHUD::UpdateCountdown(float CountdownTime)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->SetCountdownText(CountdownTime);
	}
}

void ACaptainHUD::UpdateAnnouncement(float CountdownTime)
{
	if (Announcement)
	{
		Announcement->SetCountdownText(CountdownTime);
	}
}

void ACaptainHUD::UpdateHUDTreasureWaitingToSpawn()
{
	if (CaptainOverlay)
	{
		CaptainOverlay->WaitingForTreasureToSpawn();
	}
}

void ACaptainHUD::UpdateHUDTreasureHasSpawned(FVector TreasureLocation)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->TreasureHasSpawned(TreasureLocation);
	}
}

void ACaptainHUD::UpdateHUDTreasureHasBeenCaptured(ETeam TeamCapturingTreasure, ETeam PlayerTeam)
{

	if (CaptainOverlay)
	{
		CaptainOverlay->TreasureHasBeenCaptured(TeamCapturingTreasure, PlayerTeam);
	}
}

void ACaptainHUD::SendDeathAnnouncementToHUD(FString SunkCapName, FString SinkingCapName, ETeam SunkCapTeam, ETeam SinkingCapTeam)
{
	if (!SunkCapName.IsEmpty() && !SinkingCapName.IsEmpty() && CaptainOverlay)
	{
		CaptainOverlay->CreateDeathAnnouncement(SunkCapName, SinkingCapName, SunkCapTeam, SinkingCapTeam);

	}
}