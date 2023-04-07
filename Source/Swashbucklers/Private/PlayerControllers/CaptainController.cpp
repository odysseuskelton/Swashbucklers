// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllers/CaptainController.h"
#include "HUD/InGameMenu.h"
#include "HUD/VictoryScreen.h"
#include "HUD/ClientLobbyMenu.h"
#include "GameInstance/SBGameInstance.h"
#include "GameStates/SBGameState.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PlayerStates/CaptainState.h"

void ACaptainController::BeginPlay()
{
	if (GetPawn() && GetPawn()->IsLocallyControlled())
	{
		InGameMenuWidget = CreateWidget<UInGameMenu>(this, InGameMenuClass);
		if (InGameMenuWidget)
		{
			InGameMenuWidget->Initialize();
		}

		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerControllerContext, 0);
		}
	}

	if (!HasAuthority())
	{
		UWorld* World = GetWorld();
		if (World)
		{
			ASBGameState* SBGameState = World->GetGameState<ASBGameState>();
			if (SBGameState)
			{
				if (SBGameState->GetIsInLobby() && ClientLobbyMenuClass)
				{
					ClientLobbyMenu = CreateWidget<UClientLobbyMenu>(this, ClientLobbyMenuClass);
					if (ClientLobbyMenu)
					{
						ClientLobbyMenu->Setup();
						ClientLobbyMenu->Initialize();
						UpdateTeamsOnClient(SBGameState->PirateTeam, SBGameState->PrivateerTeam);
					}
				}
				else
				{
					FInputModeGameOnly InputModeData;
					SetInputMode(InputModeData);
					bShowMouseCursor = false;
				}
			}
		}
	}
}

void ACaptainController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	int32 SizeX; 
	int32 SizeY;
	GetViewportSize(SizeX, SizeY);
	FVector WorldLocation;
	FVector WorldDirection;

	bool bScreenToWorld = DeprojectScreenPositionToWorld(SizeX/2, SizeY/2, WorldLocation, WorldDirection);

	if (bScreenToWorld)
	{
		FVector Start = WorldLocation;
		FVector End = Start + WorldDirection * 500.f;
		/*DrawDebugLine(GetWorld(), Start, End, FColor::Red);
		DrawDebugSphere(GetWorld(), Start, 20, 10, FColor::Green);
		DrawDebugSphere(GetWorld(), End, 20, 10, FColor::Yellow);*/
	}


}

void ACaptainController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{

		EnhancedInputComponent->BindAction(InGameMenuAction, ETriggerEvent::Triggered, this, &ACaptainController::OpenInGameMenu);
	}

}

void ACaptainController::OpenInGameMenu()
{
	if (InGameMenuWidget)
	{
		InGameMenuWidget->Setup();
	}

}

void ACaptainController::CreateClientLobbyWidget()
{
	if (ClientLobbyMenuClass)
	{
		ClientLobbyMenu = CreateWidget<UClientLobbyMenu>(this, ClientLobbyMenuClass);
		ClientLobbyMenu->AddToViewport();
	}
}

void ACaptainController::UpdateTeamsOnClient(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames)
{
	if (ClientLobbyMenu)
	{
		ClientLobbyMenu->UpdateClientLobbyWidget(PirateTeamNames, PrivateerTeamNames);
	}
}

void ACaptainController::ReturnToMainMenu()
{
	if (GetPawn()->HasAuthority())
	{
		UWorld* World = GetWorld();
		if (World)
		{
			USBGameInstance* GameInstance = GetGameInstance<USBGameInstance>();
			if (GameInstance)
			{
				GameInstance->DestroySession();
			}
			World->ServerTravel("/Game/Core/Maps/MainMenu?listen");
		}
	}
	else
	{
		ClientTravel("/Game/Core/Maps/MainMenu?listen", TRAVEL_Absolute);
	}
}

void ACaptainController::RequestTeamSwitch()
{
	ACaptainState* CaptainState = GetPlayerState<ACaptainState>();
	if (CaptainState)
	{
		ServerRequestSwitchTeam(CaptainState);
	}

}

void ACaptainController::ServerRequestSwitchTeam_Implementation(ACaptainState* CaptainState)
{
	USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
	if (SBGameInstance)
	{
		SBGameInstance->SwitchTeams(CaptainState);
	}
}

void ACaptainController::DisplayVictoryScreen(EBuildingType BuildingType)
{
	if (!GetPawn()->IsLocallyControlled()) return;

	if (BuildingType == EBuildingType::EBT_PirateHideout)
	{
		UVictoryScreen* PrivateerVictoryScreen = CreateWidget<UVictoryScreen>(this, PrivateerVictoryScreenClass);
		if (PrivateerVictoryScreen)
		{
			PrivateerVictoryScreen->AddToViewport();
			PrivateerVictoryScreen->PlayVictoryAnimation();
		}
	}
	else if (BuildingType == EBuildingType::EBT_PrivateerHQ)
	{
		UVictoryScreen* PirateVictoryScreen = CreateWidget<UVictoryScreen>(this, PirateVictoryScreenClass);
		if (PirateVictoryScreen)
		{
			PirateVictoryScreen->AddToViewport();
			PirateVictoryScreen->PlayVictoryAnimation();
		}
	}

	GetWorldTimerManager().SetTimer(ReturnToMainMenuTimer, this, &ACaptainController::ReturnToMainMenu, ReturnToMainMenuDelay);
}

