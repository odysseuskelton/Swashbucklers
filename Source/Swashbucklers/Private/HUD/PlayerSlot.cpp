// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PlayerSlot.h"
#include "Components/TextBlock.h"

void UPlayerSlot::SetPlayerNameText(FString PlayerNameToSet)
{
	if (!PlayerNameText) return;

	PlayerName = PlayerNameToSet;
	PlayerNameText->SetText(FText::FromString(PlayerNameToSet));
}
