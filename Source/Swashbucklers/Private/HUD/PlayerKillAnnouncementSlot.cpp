// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PlayerKillAnnouncementSlot.h"
#include "Components/TextBlock.h"

void UPlayerKillAnnouncementSlot::SetKillAnnouncementText(FString SunkCapName, FString SinkingCapName, ETeam SunkCapTeam, ETeam SinkingCapTeam)
{	
	if (PlayerAffectedText && PlayerInstigatorText)
	{
		SetTextColor(PlayerAffectedText, SunkCapTeam);
		SetTextColor(PlayerInstigatorText, SinkingCapTeam);

		PlayerAffectedText->SetText(FText::FromString(SunkCapName));
		PlayerInstigatorText->SetText(FText::FromString(SinkingCapName));
	}

}

void UPlayerKillAnnouncementSlot::SetTextColor(UTextBlock* TextblockToSet, ETeam Team)
{
	if (TextblockToSet)
	{
		if (Team == ETeam::ET_Pirate)
		{
			TextblockToSet->SetColorAndOpacity(PirateColor);
		}
		else if (Team == ETeam::ET_Privateer)
		{
			TextblockToSet->SetColorAndOpacity(PrivateerColor);
		}
	}
}