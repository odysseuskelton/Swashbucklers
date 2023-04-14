// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ClientLobbyMenu.h"
#include "HUD/PlayerSlot.h"
#include "PlayerControllers/CaptainController.h"
#include "Components/Button.h"
#include "Components/Scrollbox.h"

void UClientLobbyMenu::Setup()
{
	this->AddToViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	CaptainController = Cast<ACaptainController>(World->GetFirstPlayerController());
	if (!ensure(CaptainController != nullptr)) return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	CaptainController->SetInputMode(InputModeData);

	CaptainController->bShowMouseCursor = true;
}

bool UClientLobbyMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(SwitchTeamsButton != nullptr)) return false;
	SwitchTeamsButton->OnClicked.AddDynamic(this, &UClientLobbyMenu::SwitchTeamsButtonPressed);

	if (!ensure(ExitLobbyButton != nullptr)) return false;
	ExitLobbyButton->OnClicked.AddDynamic(this, &UClientLobbyMenu::ExitLobbyButtonPressed);
	return true;
}

void UClientLobbyMenu::SwitchTeamsButtonPressed()
{
	CaptainController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
	if (CaptainController)
	{
		CaptainController->RequestTeamSwitch();
	}
}

void UClientLobbyMenu::ExitLobbyButtonPressed()
{
	CaptainController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
	if (CaptainController)
	{
		CaptainController->ClientReturnToMainMenuWithTextReason(FText::FromString(FString("ExitLobby")));
	}
}

void UClientLobbyMenu::UpdateClientLobbyWidget(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames)
{
	UWorld* World = GetWorld();
	if (!World) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (!PlayerSlotClass || !PlayerController) return;
	ClearTeamNames();

	AddPirateTeamNames(PirateTeamNames, PlayerController);

	AddPrivateerTeamNames(PrivateerTeamNames, PlayerController);

}

void UClientLobbyMenu::ClearTeamNames()
{
	if (PirateTeam)
	{
		PirateTeam->ClearChildren();
	}
	if (PrivateerTeam)
	{
		PrivateerTeam->ClearChildren();
	}
}

void UClientLobbyMenu::AddPrivateerTeamNames(FJsonSerializableArray& PrivateerTeamNames, APlayerController* PlayerController)
{
	for (FString PlayerName : PrivateerTeamNames)
	{
		UPlayerSlot* PlayerSlot = CreateWidget<UPlayerSlot>(PlayerController, PlayerSlotClass);
		if (PlayerSlot)
		{
			PlayerSlot->SetPlayerNameText(PlayerName);
			PrivateerTeam->AddChild(PlayerSlot);
		}
	}
}

void UClientLobbyMenu::AddPirateTeamNames(FJsonSerializableArray& PirateTeamNames, APlayerController* PlayerController)
{
	for (FString PlayerName : PirateTeamNames)
	{
		UPlayerSlot* PlayerSlot = CreateWidget<UPlayerSlot>(PlayerController, PlayerSlotClass);
		if (PlayerSlot)
		{
			PlayerSlot->SetPlayerNameText(PlayerName);
			PirateTeam->AddChild(PlayerSlot);
		}
	}
}
