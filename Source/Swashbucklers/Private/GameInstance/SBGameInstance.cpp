// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/SBGameInstance.h"
#include "OnlineSubsystem.h"
#include "GameStates/SBGameState.h"
#include "PlayerStates/CaptainState.h"
#include "HUD/MainMenu.h"
#include "Net/UnrealNetwork.h"

const static FName SESSION_NAME = TEXT("Swashbuckler Session");

void USBGameInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USBGameInstance, PirateTeamNames);
	DOREPLIFETIME(USBGameInstance, PrivateerTeamNames);

}

void USBGameInstance::Init()
{
	Super::Init();

	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found subsystem: %s"), *Subsystem->GetSubsystemName().ToString());
		SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &USBGameInstance::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &USBGameInstance::OnDestroySessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &USBGameInstance::OnFindSessionsComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &USBGameInstance::OnJoinSessionComplete);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Subsystem found: %s"), *Subsystem->GetSubsystemName().ToString());
	}

}

UMainMenu* USBGameInstance::LoadMainMenuWidget()
{
	if (!ensure(MenuClass != nullptr)) return nullptr;

	MainMenu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(MainMenu != nullptr)) return nullptr;

	MainMenu->Setup();

	MainMenu->SetMenuInterface(this);

	return MainMenu;
}

void USBGameInstance::RefreshServerList()
{
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	if (SessionSearch.IsValid())
	{
		SessionSearch->bIsLanQuery = false;
		SessionSearch->MaxSearchResults = 1000;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
		SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
	}
}

void USBGameInstance::OnFindSessionsComplete(bool bSuccess)
{
	if (bSuccess && SessionSearch && MainMenu)
	{
		TArray<FServerData> ServerNames;
		int32 NumberOfServersFound = 0;
		for (const FOnlineSessionSearchResult& Result : SessionSearch->SearchResults)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Result.GetSessionIdStr())
			FServerData Data;
			FString ServerNameToSet;
			Result.Session.SessionSettings.Get(TEXT("ServerName"), ServerNameToSet);
			Data.ServerName = ServerNameToSet;
			Data.HostName = FName(Result.Session.OwningUserName);
			Data.MaxPlayers = Result.Session.SessionSettings.NumPublicConnections;
			Data.CurrentPlayers = Result.Session.SessionSettings.NumPublicConnections - Result.Session.NumOpenPublicConnections;

			ServerNames.Add(Data);
			++NumberOfServersFound;
		}

		MainMenu->CreateServerLines(ServerNames);
		FString ServerStatusTextToSet = FString::Printf(TEXT("Found %d servers. Click refresh button to update."), NumberOfServersFound);
		MainMenu->SetFindServerStatusText(ServerStatusTextToSet);
	}
}

void USBGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (!SessionInterface) return;
	FString Address;
	if (!SessionInterface->GetResolvedConnectString(SessionName, Address))
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not get connect string...."));
		return;
	}

	APlayerController* Controller = GetFirstLocalPlayerController();

	if (!Controller) return;

	Controller->ClientTravel(Address, TRAVEL_Absolute);


}

void USBGameInstance::Join(uint32 Index)
{
	if (!SessionInterface.IsValid() || !SessionSearch.IsValid()) return; 

	if (MainMenu != nullptr)
	{
		MainMenu->Teardown();
	}

	SessionInterface->JoinSession(0, SESSION_NAME, SessionSearch->SearchResults[Index]);

}

void USBGameInstance::OnCreateSessionComplete(FName SessionName, bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not create session"));  
		return;
	}
	if (bSuccess)
	{
		UE_LOG(LogTemp, Warning, TEXT("Created session!"));

	}

	if (MainMenu != nullptr)
	{
		MainMenu->OpenLobbyMenu();
	}
}

void USBGameInstance::OnDestroySessionComplete(FName SessionName, bool bSuccess)
{
	if (bSuccess)
	{
		//Host(StoredServerName);
	}
}

void USBGameInstance::Host(FString ServerNameFromUser)
{
	if (SessionInterface.IsValid())
	{
		FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
		if (ExistingSession)
		{
			StoredServerName = ServerNameFromUser;
			SessionInterface->DestroySession(SESSION_NAME);
		}
		else
		{
			FOnlineSessionSettings SessionSettings;
			SessionSettings.bIsLANMatch = false;
			SessionSettings.NumPublicConnections = 20;
			SessionSettings.bShouldAdvertise = true;
			SessionSettings.bUsesPresence = true;
			SessionSettings.bUseLobbiesIfAvailable = true;
			SessionSettings.bAllowJoinInProgress = true;
			SessionSettings.Set(TEXT("ServerName"), ServerNameFromUser, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
			SessionInterface->CreateSession(0, SESSION_NAME, SessionSettings);
			FNamedOnlineSession* TestSession = SessionInterface->GetNamedSession(SESSION_NAME);
			if (TestSession)
			{
				UE_LOG(LogTemp, Warning, TEXT("Create sessions %d"), TestSession->SessionSettings.NumPublicConnections)
			}

		}
	}
}

void USBGameInstance::StartGame()
{
	if (MainMenu)
	{
		MainMenu->Teardown();
	}

	UWorld* World = GetWorld();
	if (World)
	{
		World->ServerTravel("/Game/CartoonWaterShader/Maps/OceanNew?listen");
	}
}

void USBGameInstance::Shutdown()
{
	Super::Shutdown();

	//DestroySession();
}

void USBGameInstance::DestroySession()
{
	ClearTeams();
	if (SessionInterface.IsValid())
	{
		FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
		if (ExistingSession)
		{
			SessionInterface->DestroySession(SESSION_NAME);
		}
	}
}

void USBGameInstance::ReturnToMainMenu()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	World->ServerTravel("/Game/Core/Maps/MainMenu?listen");
	LoadMainMenuWidget();
}


ETeam USBGameInstance::AssignTeam(ACaptainState* PlayerToAssignTeamTo)
{
	if (PlayerToAssignTeamTo == nullptr) return ETeam();


	UWorld* World = GetWorld();
	if (World)
	{
		ASBGameState* SBGameState = World->GetGameState<ASBGameState>();
		//If player already assigned to a team, return.
		if (PirateTeamNames.Contains(PlayerToAssignTeamTo->GetPlayerName()) || PirateTeamNames.Contains(PlayerToAssignTeamTo->GetPlayerName())) return ETeam();

		//If both teams are empty, auto assign to pirate
		if (PirateTeamNames.IsEmpty() && PrivateerTeamNames.IsEmpty())
		{
			PirateTeamNames.Add(PlayerToAssignTeamTo->GetPlayerName());
			if (SBGameState)
			{
				SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, PlayerToAssignTeamTo);
			}
			return ETeam::ET_Pirate;
		}

		//Assign player to team with less players; if teams have equal players, default to adding to pirate team
		if (PirateTeamNames.Num() > PrivateerTeamNames.Num())
		{
			PrivateerTeamNames.Add(PlayerToAssignTeamTo->GetPlayerName());

			if (SBGameState)
			{
				SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, PlayerToAssignTeamTo);
			}
			return ETeam::ET_Privateer;
		}
		else if (PrivateerTeamNames.Num() > PirateTeamNames.Num())
		{
			PirateTeamNames.Add(PlayerToAssignTeamTo->GetPlayerName());
			if (SBGameState)
			{
				SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, PlayerToAssignTeamTo);
			}
			return ETeam::ET_Pirate;
		}
		else
		{
			PirateTeamNames.Add(PlayerToAssignTeamTo->GetPlayerName());
			if (SBGameState)
			{
				SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, PlayerToAssignTeamTo);
			}
			return ETeam::ET_Pirate;
		}
	}
	return ETeam::ET_NoTeam;
}

void USBGameInstance::SwitchTeams(ACaptainState* CaptainStateTeamToSwitch)
{
	if (!CaptainStateTeamToSwitch) return;
	
	FString CaptainName = CaptainStateTeamToSwitch->GetPlayerName();
	ASBGameState* SBGameState = GetWorld()->GetGameState<ASBGameState>();
	if (PirateTeamNames.Contains(CaptainName))
	{
		PirateTeamNames.Remove(CaptainName);
		PrivateerTeamNames.Add(CaptainName);
		CaptainStateTeamToSwitch->SetTeam(ETeam::ET_Privateer);
		if (MainMenu)
		{
			MainMenu->RemovePlayerFromList(CaptainName);
			MainMenu->CreateUserSlot(CaptainName, CaptainStateTeamToSwitch, CaptainStateTeamToSwitch->GetPlayerTeam());
		}
		if (SBGameState)
		{
			SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, CaptainStateTeamToSwitch);
		}
	}
	else if (PrivateerTeamNames.Contains(CaptainName))
	{
		PrivateerTeamNames.Remove(CaptainName);
		PirateTeamNames.Add(CaptainName);
		CaptainStateTeamToSwitch->SetTeam(ETeam::ET_Pirate);
		if (MainMenu)
		{
			MainMenu->RemovePlayerFromList(CaptainName);
			MainMenu->CreateUserSlot(CaptainName, CaptainStateTeamToSwitch, CaptainStateTeamToSwitch->GetPlayerTeam());
		}
		if (SBGameState)
		{
			SBGameState->UpdateTeams(PirateTeamNames, PrivateerTeamNames, CaptainStateTeamToSwitch);
		}
	}
}

void USBGameInstance::RemovePlayerFromTeam(ACaptainState* CaptainStateTeamToSwitch)
{
	if (!CaptainStateTeamToSwitch) return;

	if (PirateTeamNames.Contains(CaptainStateTeamToSwitch->GetPlayerName()))
	{
		PirateTeamNames.Remove(CaptainStateTeamToSwitch->GetPlayerName());
	}

	if (PrivateerTeamNames.Contains(CaptainStateTeamToSwitch->GetPlayerName()))
	{
		PrivateerTeamNames.Remove(CaptainStateTeamToSwitch->GetPlayerName());
	}
}

void USBGameInstance::CheckTeams()
{

}

void USBGameInstance::ClearTeams()
{
	if (!PirateTeamNames.IsEmpty())
	{
		PirateTeamNames.Empty();
	}
	if (!PrivateerTeamNames.IsEmpty())
	{
		PrivateerTeamNames.Empty();
	}
}
