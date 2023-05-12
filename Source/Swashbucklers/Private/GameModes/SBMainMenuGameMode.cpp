// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/SBMainMenuGameMode.h"
#include "GameInstance/SBGameInstance.h"
#include "GameStates/SBGameState.h"
#include "PlayerStates/CaptainState.h"
#include "PlayerControllers/CaptainController.h"
#include "HUD/MainMenu.h"


void ASBMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();
	USBGameInstance* GameInstance = Cast<USBGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		HostMainMenu = GameInstance->LoadMainMenuWidget();
	}

	ASBGameState* SBGameState = GetGameState<ASBGameState>();
	if (SBGameState)
	{
		SBGameState->SetIsInLobby(true);
	}
}

void ASBMainMenuGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	

	if (HostMainMenu)
	{
		ACaptainState* NewPlayerCaptainState = NewPlayer->GetPlayerState<ACaptainState>();
		if (NewPlayerCaptainState)
		{
			NewPlayerCaptainState->bExitingGame = false;
			USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
			if (SBGameInstance)
			{
				ETeam TeamToAssignTo = SBGameInstance->AssignTeam(NewPlayerCaptainState);
				HostMainMenu->CreateUserSlot(NewPlayerCaptainState->GetPlayerName(), NewPlayerCaptainState, TeamToAssignTo);
			}
		}
	}

}

void ASBMainMenuGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	if (HostMainMenu)
	{
		ACaptainState* LeavingPlayerState = Exiting->GetPlayerState<ACaptainState>();

		if (LeavingPlayerState->bExitingGame)
		{
			
			ULevel* CurrentLevel = LeavingPlayerState->GetPlayerController()->GetLevel();
			UE_LOG(LogTemp,Warning, TEXT("Levelname: %s"), *CurrentLevel->GetPathName())
			if (LeavingPlayerState )
			{
				ETeam TeamToRemoveFrom = LeavingPlayerState->GetPlayerTeam();
				HostMainMenu->RemovePlayerFromList(LeavingPlayerState->GetPlayerName());
				USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
				if (SBGameInstance)
				{
					SBGameInstance->RemovePlayerFromTeam(LeavingPlayerState);
				}
		
			}
		}
	}
}

