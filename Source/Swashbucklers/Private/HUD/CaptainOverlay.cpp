// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptainOverlay.h"
#include "Components/Textblock.h"

void UCaptainOverlay::SetPoEText(int32 PoEToSet)
{
	if (PoEText)
	{
		const FString String = FString::Printf(TEXT("%d"), PoEToSet);
		PoEText->SetText(FText::FromString(String));
	}
}