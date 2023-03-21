// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MainMenu.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Components/EditableText.h"
#include "Interfaces/MenuInterface.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "HUD/ServerLine.h"


void UMainMenu::Setup()
{
	this->AddToViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = true;
}

void UMainMenu::Teardown()
{
	this->RemoveFromParent();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeGameOnly InputModeData;
	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = false;
}

void UMainMenu::SetMenuInterface(IMenuInterface* InInterface)
{
	this->MenuInterface = InInterface;
}

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(HostButton != nullptr)) return false;
	HostButton->OnClicked.AddDynamic(this, &UMainMenu::OpenHostMenu);

	if (!ensure(HostButton != nullptr)) return false;
	StartHostingButton->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	if (!ensure(JoinButton != nullptr)) return false;
	JoinButton->OnClicked.AddDynamic(this, &UMainMenu::OpenJoinMenu);

	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitPressed);

	if (!ensure(ExitJoinMenuButton != nullptr)) return false;
	ExitHostingMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

	if (!ensure(ExitJoinMenuButton != nullptr)) return false;
	ExitJoinMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

	if (!ensure(ExitSettingsMenuButton != nullptr)) return false;
	ExitSettingsMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

	if (!ensure(RefreshServersButton != nullptr)) return false;
	RefreshServersButton->OnClicked.AddDynamic(this, &UMainMenu::RefreshServers);

	if (!ensure(ConfirmJoinButton != nullptr)) return false;
	ConfirmJoinButton->OnClicked.AddDynamic(this, &UMainMenu::JoinServer);

	if (!ensure(SettingsButton != nullptr)) return false;
	SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::OpenSettingsMenu);

	return true;
}

void UMainMenu::OpenHostMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(HostMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidgetIndex(2);
}

void UMainMenu::HostServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Host server"))

	if (MenuInterface != nullptr && ServerNameFromUser)
	{
		if (ServerNameFromUser->GetText().IsEmpty())
		{
			MenuInterface->Host(FString("Swashbucklers Game"));
		}
		else
		{
			MenuInterface->Host(ServerNameFromUser->GetText().ToString());
		}
	}
}

void UMainMenu::OpenJoinMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidgetIndex(1);
	RefreshServers();
}

void UMainMenu::OpenSettingsMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(SettingsMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidgetIndex(3);
}

void UMainMenu::SelectIndex(uint32 Index)
{

	SelectedIndex = Index;
	UpdateServerLines();
}

void UMainMenu::UpdateServerLines()
{
	if (!ServerList) return;

	for (int32 i = 0; i < ServerList->GetChildrenCount(); ++i)
	{
		UServerLine* ServerLine = Cast<UServerLine>(ServerList->GetChildAt(i));
		if (ServerLine)
		{
			ServerLine->bIsSelected = (SelectedIndex.IsSet() && SelectedIndex.GetValue() == i);
		}
	}
}

void UMainMenu::JoinServer()
{
	if (SelectedIndex.IsSet() && MenuInterface)
	{
		UE_LOG(LogTemp, Warning, TEXT("IndexSet! %d"), SelectedIndex.GetValue())
		MenuInterface->Join(SelectedIndex.GetValue());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not set..."))
	}
}

void UMainMenu::OpenMainMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinMenuWidget != nullptr)) return;
	MenuSwitcher->SetActiveWidget(0);
}

void UMainMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("quit");
}

void UMainMenu::SetFindServerStatusText(FString StatusToSet)
{
	if (FindServerStatusText)
	{
		FindServerStatusText->SetText(FText::FromString(StatusToSet));
	}
}

void UMainMenu::CreateServerLines(TArray<FServerData> ServerData)
{
	if (!ServerList) return;
	ServerList->ClearChildren();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	if (!ServerLineClass) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();
	uint32 i = 0;

	for (FServerData Data : ServerData)
	{
		if (PlayerController && ServerList)
		{
			UServerLine* ServerLine = CreateWidget<UServerLine>(PlayerController, ServerLineClass);
	
			ServerLine->Setup(this, i);
			ServerLine->SetServerNameText(Data.ServerName);
			ServerLine->SetHostNameText(Data.HostName);
			ServerLine->SetMaxPlayersText(Data.MaxPlayers);
			ServerLine->SetCurrentPlayerText(Data.CurrentPlayers);
			ServerList->AddChild(ServerLine);
			++i;
		}
	}

}

void UMainMenu::RefreshServers()
{
	if (MenuInterface != nullptr)
	{
		SetFindServerStatusText(FString("Finding Servers..."));
		MenuInterface->RefreshServerList();
	}
}

