// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/InGameMenu.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Interfaces/MenuInterface.h"


void UInGameMenu::Setup()
{
	this->AddToViewport();
	this->SetVisibility(ESlateVisibility::Visible);

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

void UInGameMenu::Teardown()
{
	this->SetVisibility(ESlateVisibility::Hidden);

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeGameOnly InputModeData;
	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = false;
}

bool UInGameMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(ResumeButton != nullptr)) return false;
	ResumeButton->OnClicked.AddDynamic(this, &UInGameMenu::Teardown);

	if (!ensure(SettingsButton != nullptr)) return false;
	SettingsButton->OnClicked.AddDynamic(this, &UInGameMenu::OpenSettingsMenu);

	if (!ensure(ExitToMainMenuButton != nullptr)) return false;
	ExitToMainMenuButton->OnClicked.AddDynamic(this, &UInGameMenu::ExitToMainMenu);

	if (!ensure(ExitGameButton != nullptr)) return false;
	ExitGameButton->OnClicked.AddDynamic(this, &UInGameMenu::ExitGame);

	if (!ensure(ExitSettingsMenuButton != nullptr)) return false;
	ExitSettingsMenuButton->OnClicked.AddDynamic(this, &UInGameMenu::ReturnToInGameMenu);

	this->SetVisibility(ESlateVisibility::Hidden);

	return true;
}

void UInGameMenu::OpenSettingsMenu()
{
	if (!ensure(InGameMenuSwitcher != nullptr)) return;
	if (!ensure(SettingsMenuWidget != nullptr)) return;
	InGameMenuSwitcher->SetActiveWidgetIndex(1);
}

void UInGameMenu::ExitToMainMenu()
{
	if (GetOwningPlayer()->HasAuthority())
	{
		IMenuInterface* MenuInterface = Cast<IMenuInterface>(GetGameInstance());
		if (MenuInterface)
		{
			MenuInterface->DestroySession();
			MenuInterface->ReturnToMainMenu();
		}
	}
	else
	{
		IMenuInterface* MenuInterface = Cast<IMenuInterface>(GetGameInstance());
		if (MenuInterface)
		{
			MenuInterface->ReturnToMainMenu();
		}
	}
}

void UInGameMenu::ExitGame()
{
	if (GetOwningPlayer()->HasAuthority())
	{
		IMenuInterface* MenuInterface = Cast<IMenuInterface>(GetGameInstance());
		if (MenuInterface)
		{
			MenuInterface->DestroySession();

			UWorld* World = GetWorld();
			if (!ensure(World != nullptr)) return;

			APlayerController* PlayerController = World->GetFirstPlayerController();
			if (!ensure(PlayerController != nullptr)) return;

			PlayerController->ConsoleCommand("quit");

		}
	}
	else
	{
		UWorld* World = GetWorld();
		if (!ensure(World != nullptr)) return;

		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (!ensure(PlayerController != nullptr)) return;

		PlayerController->ConsoleCommand("quit");
	}
}

void UInGameMenu::ReturnToInGameMenu()
{
	if (!ensure(InGameMenuSwitcher != nullptr)) return;
	if (!ensure(InGameMenuWidget != nullptr)) return;
	InGameMenuSwitcher->SetActiveWidgetIndex(0);
}

