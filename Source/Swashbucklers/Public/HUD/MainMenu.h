// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStates/Teams.h"
#include "OnlineSessionSettings.h"
#include "MainMenu.generated.h"

class UButton;
class UWidgetSwitcher;
class UEditableTextBox;
class IMenuInterface;
class UServerLine;
class UScrollBox;
class UTextBlock;
class UEditableText;
class ACaptainState;
class UPlayerSlot;

USTRUCT()
struct FServerData
{
	GENERATED_BODY()

	FString ServerName;
	FName HostName;
	uint16 CurrentPlayers;
	uint16 MaxPlayers;
};
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void Setup();
	void Teardown();

	void SetMenuInterface(IMenuInterface* InInterface);

	UFUNCTION()
	void CreateServerLines(TArray<FServerData> ServerNames);

	UFUNCTION()
	void RefreshServers();

	void SelectIndex(uint32 Index);

	UFUNCTION()
	void SetFindServerStatusText(FString StatusToSet);

	UFUNCTION()
	void OpenLobbyMenu();

	UFUNCTION()
	void StartGame();

	UFUNCTION()
	void CloseLobbyMenu();

	void CreateUserSlot(FString PlayerName, ACaptainState* NewPlayerCaptainState, ETeam PlayerTeam);
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerSlot> PlayerSlotClass;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PirateTeam;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PrivateerTeam;

	void RemovePlayerFromList(FString PlayerNameToRemove);

protected:
	virtual bool Initialize();
	
	UFUNCTION()
	void OpenHostMenu();

private:

	UPROPERTY(meta = (BindWidget))
	UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* StartHostingButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SwitchTeamsButton;

	UPROPERTY(meta = (BindWidget))
	UButton* StartGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SettingsButton;

	UPROPERTY(meta = (BindWidget))
	UButton* RefreshServersButton;
	
	UPROPERTY(meta = (BindWidget))
	UButton* ConfirmJoinButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitHostingMenuButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitJoinMenuButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitLobbyButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitSettingsMenuButton;

	UPROPERTY(meta = (BindWidget))
	UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
	UWidget* MainMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UWidget* JoinMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UWidget* HostMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UWidget* LobbyMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UWidget* SettingsMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* FindServerStatusText;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* ServerList;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UServerLine> ServerLineClass;

	UPROPERTY(meta=(BindWidget))
	UEditableText* ServerNameFromUser;

	UFUNCTION()
	void HostServer();

	UFUNCTION()
	void SwitchTeamsButtonPressed();

	UFUNCTION()
	void JoinServer();

	UFUNCTION()
	void OpenJoinMenu();

	UFUNCTION()
	void OpenSettingsMenu();

	UFUNCTION()
	void OpenMainMenu();

	UFUNCTION()
	void QuitPressed();

	void UpdateServerLines();

	TOptional<uint32> SelectedIndex;

	IMenuInterface* MenuInterface;

};
