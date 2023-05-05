// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/Leaderboard.h"
#include "Components/ScrollBox.h"
#include "Kismet/GameplayStatics.h"
#include "HUD/LeaderboardPlayerSlot.h"
#include "GameStates/SBGameState.h"
#include "PlayerStates/CaptainState.h"
#include "PlayerStates/Teams.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "Components/TextBlock.h"

void ULeaderboard::InitializeOverlay(APlayerController* Controller)
{
	GameState = Cast<ASBGameState>(UGameplayStatics::GetGameState(this));
	OwningPlayerController = Controller;

	if (GameState)
	{
		for (ACaptainState* CapState : GameState->CaptainStates)
		{
			if (CapState)
			{
				AddPlayer(CapState);
			}
		}
	}


}

void ULeaderboard::AddPlayer(ACaptainState* CaptainState)
{
	if (!OwningPlayerController || CaptainStates.Contains(CaptainState) || !PlayerSlotClass) return;
	ULeaderboardPlayerSlot* PlayerSlot = CreateWidget<ULeaderboardPlayerSlot>(OwningPlayerController, PlayerSlotClass);

	if (PlayerSlot)
	{
		if (CaptainState->GetPlayerTeam() == ETeam::ET_Privateer)
		{
			if (PrivateerScrollBox)
			{
				PrivateerScrollBox->AddChild(PlayerSlot);
				CaptainStates.Add(CaptainState);
			}
		}
		else if (CaptainState->GetPlayerTeam() == ETeam::ET_Pirate)
		{
			if (PirateScrollBox)
			{
				PirateScrollBox->AddChild(PlayerSlot);
				CaptainStates.Add(CaptainState);
			}
		}
		else
		{
			PlayerSlot->RemoveFromParent();
			return;
		}

		if (PlayerSlot->PlayerNameText)
		{
			PlayerSlot->PlayerNameText->SetText(FText::FromString(CaptainState->GetPlayerName()));
		}

		PlayerSlot->PlayerName = CaptainState->GetPlayerName();
		PlayerSlots.Add(PlayerSlot);
	}
}

void ULeaderboard::UpdatePlayerBounty(ACaptainState* CaptainState, int32 Bounty)
{
	if (PlayerSlots.IsEmpty()) return;

	for (ULeaderboardPlayerSlot* PlayerSlot : PlayerSlots)
	{
		if (PlayerSlot->PlayerName == CaptainState->GetPlayerName())
		{
			if (PlayerSlot->BountyText)
			{
				const FString StringToSet = FString::Printf(TEXT("%d"), Bounty);
				PlayerSlot->BountyText->SetText(FText::FromString(StringToSet));
			}
		}
	}

}

void ULeaderboard::UpdatePlayerKills(ACaptainState* CaptainState, int32 PlayerKills)
{
	if (PlayerSlots.IsEmpty()) return;

	for (ULeaderboardPlayerSlot* PlayerSlot : PlayerSlots)
	{
		if (PlayerSlot->PlayerName == CaptainState->GetPlayerName())
		{
			if (PlayerSlot->KillText)
			{
				const FString StringToSet = FString::Printf(TEXT("%d"), PlayerKills);
				PlayerSlot->KillText->SetText(FText::FromString(StringToSet));
			}
		}
	}
}

void ULeaderboard::UpdateTowerKills(ACaptainState* CaptainState, int32 TowerKills)
{
	for (ULeaderboardPlayerSlot* PlayerSlot : PlayerSlots)
	{
		if (PlayerSlot->PlayerName == CaptainState->GetPlayerName())
		{
			if (PlayerSlot->TowerText)
			{
				const FString StringToSet = FString::Printf(TEXT("%d"), TowerKills);
				PlayerSlot->TowerText->SetText(FText::FromString(StringToSet));
			}
		}
	}
}

void ULeaderboard::UpdateCaptures(ACaptainState* CaptainState, int32 Captures)
{
	for (ULeaderboardPlayerSlot* PlayerSlot : PlayerSlots)
	{
		if (PlayerSlot->PlayerName == CaptainState->GetPlayerName())
		{
			if (PlayerSlot->CaptureText)
			{
				const FString StringToSet = FString::Printf(TEXT("%d"), Captures);
				PlayerSlot->CaptureText->SetText(FText::FromString(StringToSet));
			}
		}
	}
}
