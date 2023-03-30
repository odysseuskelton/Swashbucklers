// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/SBMainMenuGameMode.h"
#include "GameInstance/SBGameInstance.h"
#include "PlayerStates/CaptainState.h"
#include "HUD/MainMenu.h"

void ASBMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Gamemodebeginplay"))
	USBGameInstance* GameInstance = Cast<USBGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		HostMainMenu = GameInstance->LoadMainMenuWidget();
	}
}

void ASBMainMenuGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	UE_LOG(LogTemp, Warning, TEXT("Login..."))

	if (HostMainMenu)
	{
		ACaptainState* NewPlayerCaptainState = NewPlayer->GetPlayerState<ACaptainState>();
		if (NewPlayerCaptainState)
		{
			USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
			if (SBGameInstance)
			{
				ETeam TeamToAssignTo = SBGameInstance->AssignTeam(NewPlayerCaptainState);
				HostMainMenu->CreateUserSlot(NewPlayerCaptainState->GetPlayerName(), NewPlayerCaptainState, TeamToAssignTo);
			}
		}
	}
}
