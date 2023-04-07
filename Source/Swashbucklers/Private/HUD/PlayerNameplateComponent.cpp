// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PlayerNameplateComponent.h"
#include "HUD/PlayerNameplate.h"
#include "Components/Textblock.h"

void UPlayerNameplateComponent::SetNameplateVisibility(bool bVisibility)
{
	PlayerNameplate = PlayerNameplate == nullptr ? Cast<UPlayerNameplate>(GetUserWidgetObject()) : PlayerNameplate;
	if (PlayerNameplate && bVisibility == true)
	{
		PlayerNameplate->SetRenderOpacity(100.f);
	}
	else if (PlayerNameplate && bVisibility == false)
	{
		PlayerNameplate->SetRenderOpacity(0.f);
	}

}

void UPlayerNameplateComponent::SetPlayerName(FName PlayerName)
{
	PlayerNameplate = PlayerNameplate == nullptr ? Cast<UPlayerNameplate>(GetUserWidgetObject()) : PlayerNameplate;
	if (PlayerNameplate && PlayerNameplate->PlayerNameText)
	{
		PlayerNameplate->PlayerNameText->SetText(FText::FromName(PlayerName));
	}
}

void UPlayerNameplateComponent::SetPlayerBounty(int32 PlayerBounty)
{
	PlayerNameplate = PlayerNameplate == nullptr ? Cast<UPlayerNameplate>(GetUserWidgetObject()) : PlayerNameplate;
	if (PlayerNameplate && PlayerNameplate->PlayerBountyText)
	{
		const FString String = FString::Printf(TEXT("%d"), PlayerBounty);
		PlayerNameplate->PlayerBountyText->SetText(FText::FromString(String));
	}
}

void UPlayerNameplateComponent::SetPlayerNameTeamColor(ETeam PlayerTeam)
{
	if (bPlayerNameTeamColorSet == false)
	{
		if (PlayerTeam == ETeam::ET_Pirate)
		{
			PlayerNameplate->PlayerNameText->SetColorAndOpacity(PirateColor);
		}
		else if (PlayerTeam == ETeam::ET_Privateer)
		{
			PlayerNameplate->PlayerNameText->SetColorAndOpacity(PrivateerColor);
		}
	}
}
