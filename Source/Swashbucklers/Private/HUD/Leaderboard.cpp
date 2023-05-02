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
	if (!OwningPlayerController || CaptainStates.Contains(CaptainState)) return;
	ULeaderboardPlayerSlot* PlayerSlot = CreateWidget<ULeaderboardPlayerSlot>(OwningPlayerController, PlayerSlotClass);

	if (OwningPlayerController->HasAuthority() && PlayerSlot)
	{
		UE_LOG(LogTemp, Warning, TEXT("Add player slot on server, player slot valid"))
			if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_NoTeam)
			{
				UE_LOG(LogTemp, Warning, TEXT("No team...."))
			}
		if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Pirate)
		{
			UE_LOG(LogTemp, Warning, TEXT("pirate...."))
		}
		if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Privateer)
		{
			UE_LOG(LogTemp, Warning, TEXT("pirate...."))
		}
	}



	if (CaptainState->GetPlayerTeam() == ETeam::ET_Privateer)
	{
		if (OwningPlayerController->HasAuthority() && PlayerSlot)
		{
			UE_LOG(LogTemp, Warning, TEXT("Add player slot on server, player slot valid add privateer"))
		}
		PrivateerLeaderboardSlots.Add(PlayerSlot);
		if (PrivateerScrollBox)
		{
			PrivateerScrollBox->AddChild(PlayerSlot);
			CaptainStates.Add(CaptainState);
		}
	}
	else if (CaptainState->GetPlayerTeam() == ETeam::ET_Pirate)
	{
		if (OwningPlayerController->HasAuthority() && PlayerSlot)
		{
			UE_LOG(LogTemp, Warning, TEXT("Add player slot on server, player slot valid add privateer"))
		}
		PirateLeaderboardSlots.Add(PlayerSlot);
		if (PirateScrollBox)
		{
			PirateScrollBox->AddChild(PlayerSlot);
			CaptainStates.Add(CaptainState);
		}
	}
	else
	{
		PlayerSlot->RemoveFromParent();
	}

	if (PlayerSlot && PlayerSlot->PlayerNameText)
	{
		PlayerSlot->PlayerNameText->SetText(FText::FromString(CaptainState->GetPlayerName()));
	}
}
	
