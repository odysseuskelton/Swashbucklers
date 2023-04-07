// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/MenuInterface.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "PlayerStates/Teams.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SBGameInstance.generated.h"

/**
 * 
 */
class UMainMenu;
class FOnlineSessionSearch;
class ACaptainState;
UCLASS()
class SWASHBUCKLERS_API USBGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()
	
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Init() override;
	virtual UMainMenu* LoadMainMenuWidget() override;

	virtual void RefreshServerList() override;

	IOnlineSessionPtr SessionInterface;
	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	FString StoredServerName;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UMainMenu> MenuClass;

	UMainMenu* MainMenu;

	virtual void Shutdown() override;

	void OnCreateSessionComplete(FName SessionName, bool bSuccess);
	void OnDestroySessionComplete(FName SessionName, bool bSuccess);
	void OnFindSessionsComplete(bool bSuccess);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	virtual void Host(FString ServerNameFromUser) override;
	virtual void StartGame() override;
	virtual void DestroySession() override;
	virtual void ReturnToMainMenu() override;

	bool bInLobby = false;

	TArray<FString> PirateTeamNames;
	TArray<FString> PrivateerTeamNames;

	ETeam AssignTeam(ACaptainState* PlayerToAssignTeamTo);
	virtual void SwitchTeams(ACaptainState* CaptainStateTeamToSwitch) override;
	void CheckTeams();
	virtual void ClearTeams() override;
	virtual void Join(uint32 Index) override;

};
