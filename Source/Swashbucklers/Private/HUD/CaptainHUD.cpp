// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptainHUD.h"
#include "HUD/CaptainOverlay.h"
#include "HUD/Announcement.h"

void ACaptainHUD::BeginPlay()
{
	Super::BeginPlay();

}

void ACaptainHUD::AddCaptainOverlayToViewport()
{
	UWorld* World = GetWorld();
	if (World)
	{
		Controller = Controller == nullptr ? GetOwningPlayerController() : Controller;
		if (!Controller) return;

		if (CaptainOverlayClass)
		{
			CaptainOverlay = CreateWidget<UCaptainOverlay>(Controller, CaptainOverlayClass);
			CaptainOverlay->AddToViewport();
		}
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

void ACaptainHUD::UpdateHUDTreasureHasSpawned()
{
	if (CaptainOverlay)
	{
		CaptainOverlay->TreasureHasSpawned();
	}
}

void ACaptainHUD::UpdateHUDTreasureHasBeenCaptured(ETeam TeamCapturingTreasure, ETeam PlayerTeam)
{

	if (CaptainOverlay)
	{
		CaptainOverlay->TreasureHasBeenCaptured(TeamCapturingTreasure, PlayerTeam);
	}
}
