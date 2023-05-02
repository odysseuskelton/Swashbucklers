// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptainOverlay.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Components/GridPanel.h"
#include "HUD/PlayerKillAnnouncementSlot.h"
#include "Components/Image.h"
#include "Components/Textblock.h"
#include "Components/GridSlot.h"
#include "Components/GridPanel.h"

void UCaptainOverlay::SetPoEText(int32 PoEToSet)
{
	if (PoEText)
	{
		const FString String = FString::Printf(TEXT("%d"), PoEToSet);
		PoEText->SetText(FText::FromString(String));
	}
}

void UCaptainOverlay::UpdateSlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned)
{

	if (SlotAssigned == EAbilitySlot::EAS_Slot1)
	{
		if (Slot1Image && Slot1Text)
		{
			Slot1DynamicMat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, AbilityInfo.UIMat); 
			Slot1Image->SetBrushFromMaterial(Slot1DynamicMat);
			Slot1Image->SetColorAndOpacity(FLinearColor(1.f,1.f,1.f,1.f));
			const FString String = FString::Printf(TEXT("%d"), FMath::CeilToInt(AbilityInfo.Cost * -1));
			Slot1Text->SetText(FText::FromString(String));
			Slot1Info = AbilityInfo;
			return;
		}
	}
	else if (SlotAssigned == EAbilitySlot::EAS_Slot2)
	{
		if (Slot2Image && Slot2Text)
		{
			Slot2DynamicMat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, AbilityInfo.UIMat);
			Slot2Image->SetBrushFromMaterial(Slot2DynamicMat);
			Slot2Image->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
			const FString String = FString::Printf(TEXT("%d"), FMath::CeilToInt(AbilityInfo.Cost * -1));
			Slot2Text->SetText(FText::FromString(String));
			Slot2Info = AbilityInfo;
			return;
		}
	}
	else if (SlotAssigned == EAbilitySlot::EAS_Slot3)
	{
		if (Slot3Image && Slot3Text)
		{
			Slot3DynamicMat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, AbilityInfo.UIMat);
			Slot3Image->SetBrushFromMaterial(Slot3DynamicMat);
			Slot3Image->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
			const FString String = FString::Printf(TEXT("%d"), FMath::CeilToInt(AbilityInfo.Cost *-1));
			Slot3Text->SetText(FText::FromString(String));
			Slot3Info = AbilityInfo;
			return;
		}
	}
	else if (SlotAssigned == EAbilitySlot::EAS_Slot4)
	{
		if (Slot4Image && Slot4Text)
		{
			Slot4DynamicMat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, AbilityInfo.UIMat);
			Slot4Image->SetBrushFromMaterial(Slot4DynamicMat);
			Slot4Image->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
			const FString String = FString::Printf(TEXT("%d"), FMath::CeilToInt(AbilityInfo.Cost * -1));
			Slot4Text->SetText(FText::FromString(String));
			Slot4Info = AbilityInfo;
			return;
		}
	}
}

void UCaptainOverlay::SetCountdownText(float CountdownTime)
{
	if (CountdownText && AnnouncementText)
	{
		if (CountdownText->GetRenderOpacity() == 0.f)
		{
			CountdownText->SetRenderOpacity(100.f);
		}

		if (AnnouncementText->GetRenderOpacity() == 0.f)
		{
			AnnouncementText->SetRenderOpacity(100.f);
		}

		if (CountdownTime <= 10.f)
		{
			PlayCountdownAnimation();
		}

		int32 Minutes = FMath::FloorToInt(CountdownTime / 60);
		int32 Seconds = CountdownTime - Minutes * 60; 

		FString CountdownTextString = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		CountdownText->SetText(FText::FromString(CountdownTextString));
	}
}

void UCaptainOverlay::CreateDeathAnnouncement(FString SunkCapName, FString SinkingCapName, ETeam SunkCapTeam, ETeam SinkingCapTeam)
{
	if (PlayerKillAnnouncementClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Kill Announcement"))

		UPlayerKillAnnouncementSlot* NewKillAnnouncement  = CreateWidget<UPlayerKillAnnouncementSlot>(GetOwningPlayer(), PlayerKillAnnouncementClass);
		if (NewKillAnnouncement && KillAnnouncementPanel)
		{
			NewKillAnnouncement->SetKillAnnouncementText(SunkCapName, SinkingCapName, SunkCapTeam, SinkingCapTeam);
			NewKillAnnouncement->AddToViewport();
			CurrentKillAnnouncements.Add(NewKillAnnouncement);
			KillAnnouncementPanel->AddChild(NewKillAnnouncement);
			UpdateKillAnnouncementGrid();
		}
	}
}

void UCaptainOverlay::UpdateKillAnnouncementGrid()
{
	int32 Row = 0;
	for (UPlayerKillAnnouncementSlot* CurrentAnnouncement : CurrentKillAnnouncements)
	{
		UGridSlot* GridSlot = Cast<UGridSlot>(CurrentAnnouncement->Slot);
		if (GridSlot)
		{
			GridSlot->SetRow(Row);
			Row++;
		}

	}
}

void UCaptainOverlay::WaitingForTreasureToSpawn()
{
	if (CountdownText->GetRenderOpacity() == 0.f)
	{
		CountdownText->SetRenderOpacity(100.f);
	}

	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(TEXT("Searching for treasure...")));
	}
}

void UCaptainOverlay::TreasureHasSpawned()
{
	if (CountdownText && AnnouncementText)
	{
		if (CountdownText->GetRenderOpacity() == 100.f)
		{
			CountdownText->SetRenderOpacity(0.f);
		}

		AnnouncementText->SetText(FText::FromString(TEXT("Treasure has been revealed! Find and capture it before the enemy!")));
	}
}

void UCaptainOverlay::TreasureHasBeenCaptured(ETeam TeamCapturingTreasure, ETeam PlayerTeam)
{

	if(TeamCapturingTreasure == PlayerTeam)
	{
		AnnouncementText->SetText(FText::FromString(TEXT("Your team has captured the treasure, escort the merchant ship to base!")));
	}
	else if (TeamCapturingTreasure == ETeam::ET_Pirate)
	{
		AnnouncementText->SetText(FText::FromString(TEXT("The pirates have captured the treasure! Sink the merchant ship before it reaches their hideout!")));
	}
	else if (TeamCapturingTreasure == ETeam::ET_Privateer)
	{
		AnnouncementText->SetText(FText::FromString(TEXT("The privateers have captured the treasure! Sink the merchant ship before it reaches their HQ!")));
	}
}
