// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ClientLobbyMenu.generated.h"

class UScrollBox;
class UButton;
class UPlayerSlot;
class ACaptainController;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UClientLobbyMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void Setup();
	virtual bool Initialize() override;

	UFUNCTION()
	void SwitchTeamsButtonPressed();

	UFUNCTION()
	void ExitLobbyButtonPressed();

	void UpdateClientLobbyWidget(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames);

	void ClearTeamNames();

	void AddPrivateerTeamNames(FJsonSerializableArray& PrivateerTeamNames, APlayerController* PlayerController);

	void AddPirateTeamNames(FJsonSerializableArray& PirateTeamNames, APlayerController* PlayerController);

private:

	ACaptainController* CaptainController;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PirateTeam;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PrivateerTeam;

	UPROPERTY(meta = (BindWidget))
	UButton* SwitchTeamsButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitLobbyButton;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerSlot> PlayerSlotClass;
};
