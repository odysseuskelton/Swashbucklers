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

void ACaptainHUD::SetHUDHealth(float HealthPercentToSet)
{
	if (CaptainOverlay)
	{
		CaptainOverlay->SetHealthProgress(HealthPercentToSet);
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