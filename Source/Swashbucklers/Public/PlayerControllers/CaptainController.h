// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Buildings/BuildingTypes.h"
#include "InputActionValue.h"
#include "CaptainController.generated.h"


class UInputMappingContext;
class UInputAction;
class UInGameMenu;
class UVictoryScreen;
class UClientLobbyMenu;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainController : public APlayerController
{
	GENERATED_BODY()

public:
	void DisplayVictoryScreen(EBuildingType BuildingType);

	void CreateClientLobbyWidget();

	void UpdateTeamsOnClient(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames);

	void RequestTeamSwitch();

	UFUNCTION(Server, Reliable)
	void ServerRequestSwitchTeam(ACaptainState* CaptainState);

protected:
	virtual void BeginPlay() override;

	//UTexture2D* GetSteamAvatar();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupInputComponent() override;

	UFUNCTION()
	void OpenInGameMenu();

private:
	//Input
	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* PlayerControllerContext;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* InGameMenuAction;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInGameMenu> InGameMenuClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UClientLobbyMenu> ClientLobbyMenuClass;

	UPROPERTY()
	UInGameMenu* InGameMenuWidget;

	UPROPERTY()
	UClientLobbyMenu* ClientLobbyMenu;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UVictoryScreen> PirateVictoryScreenClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UVictoryScreen> PrivateerVictoryScreenClass;

	FTimerHandle ReturnToMainMenuTimer;

	UPROPERTY(EditAnywhere)
	float ReturnToMainMenuDelay= 15.f;

	void ReturnToMainMenu();


	void ServerRequestSwitchTeam_Implementation(ACaptainState* CaptainState);


	
};
