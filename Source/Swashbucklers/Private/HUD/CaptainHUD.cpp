// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptainHUD.h"
#include "HUD/CaptainOverlay.h"

void ACaptainHUD::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		Controller = World->GetFirstPlayerController();
		if (!Controller) return;

		if (CaptainOverlayClass)
		{
			CaptainOverlay = CreateWidget<UCaptainOverlay>(Controller, CaptainOverlayClass);
			CaptainOverlay->AddToViewport();
		}
	}
}

void ACaptainHUD::SetAbilitySlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned)
{
	UE_LOG(LogTemp, Warning, TEXT("abilityslot ...."))

	if (CaptainOverlay)
	{
		UE_LOG(LogTemp, Warning, TEXT("cap overlay valid ...."))

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
	if (CaptainOverlay && GetOwningPawn()->IsLocallyControlled())
	{
		CaptainOverlay->SetPoEText(PoEToSet);
		CaptainOverlay->PlayPoEAnimation();
	}
}

void ACaptainHUD::ActivateSlotCooldownOnOverlay(EAbilitySlot AbilitySlotToActivate)
{
	if (CaptainOverlay && GetOwningPawn()->IsLocallyControlled())
	{
		CaptainOverlay->StartCooldown(AbilitySlotToActivate);
	}
}