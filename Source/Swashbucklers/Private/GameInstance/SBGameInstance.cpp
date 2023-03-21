// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/SBGameInstance.h"
#include "OnlineSubsystem.h"
#include "HUD/MainMenu.h"

const static FName SESSION_NAME = TEXT("Swashbuckler Session");

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

void USBGameInstance::LoadMainMenuWidget()
{
	if (!ensure(MenuClass != nullptr)) return;

	MainMenu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(MainMenu != nullptr)) return;

	MainMenu->Setup();

	MainMenu->SetMenuInterface(this);
}

void USBGameInstance::RefreshServerList()
{
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	if (SessionSearch.IsValid())
	{
		//SessionSearch->bIsLanQuery = false;
		SessionSearch->MaxSearchResults = 1000;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
		//SessionSearch->QuerySettings.Set();
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

	UE_LOG(LogTemp, Warning, TEXT("Join session...."))
	if (MainMenu != nullptr)
	{
		MainMenu->Teardown();
	}

	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;
	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	World->ServerTravel("/Game/CartoonWaterShader/Maps/DemoMapOcean?listen");
}

void USBGameInstance::OnDestroySessionComplete(FName SessionName, bool bSuccess)
{
	if (bSuccess)
	{
		Host(StoredServerName);
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
			SessionSettings.NumPublicConnections = 10;
			SessionSettings.bShouldAdvertise = true;
			SessionSettings.bUsesPresence = true;
			SessionSettings.bUseLobbiesIfAvailable = true;
			SessionSettings.Set(TEXT("ServerName"), ServerNameFromUser, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
			SessionInterface->CreateSession(0, SESSION_NAME, SessionSettings);
			UE_LOG(LogTemp, Warning, TEXT("Create sessions"))
		}
	}
}

void USBGameInstance::DestroySession()
{
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
}
