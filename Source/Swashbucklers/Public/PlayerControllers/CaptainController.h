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
class ACaptainHUD;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainController : public APlayerController
{
	GENERATED_BODY()

public:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	void DisplayVictoryScreen(EBuildingType BuildingType);

	void CreateClientLobbyWidget();

	void UpdateTeamsOnClient(TArray<FString> PirateTeamNames, TArray<FString> PrivateerTeamNames);

	void RequestTeamSwitch();

	UFUNCTION(Server, Reliable)
	void ServerRequestSwitchTeam(ACaptainState* StateRequesting);

	void OnMatchStateSet(FName State);

	void HandleMatchHasStarted();

	void HandleWaitingForTreasureToSpawn();

	void HandleTreasureHasSpawned();

	void HandleTreasureCaptured();

	bool bTreasureLocationOnClient = false;

protected:
	virtual void BeginPlay() override;

	void BindLeaderboardDelegates();

	/*UFUNCTION()
	void PlayerBountyChange(int32 Bounty, AActor* DestroyedActor);

	UFUNCTION(Server, Unreliable)
	void ServerPlayerBountyChange(int32 Bounty, AActor* DestroyedActor, AActor* DestroyingActor);

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastPlayerBountyChange(int32 Bounty, AActor* DestroyedActor, AActor* DestroyingActor);*/

	void InitializePlayerController();

	void HandleClientTransitionBetweenMaps();

	//UTexture2D* GetSteamAvatar();

	virtual void Tick(float DeltaTime) override;

	void PollInit();

	virtual void SetupInputComponent() override;

	UFUNCTION()
	void OpenInGameMenu();

	void ToggleLeaderboard();

	void SetHUDCountdown(float CountdownTime);

	void SetHUDAnnouncementCountdown(float CountdownTime);

	void SetHUDTime();

	uint32 CountdownInt = 0;
	float ClientServerDelta = 0;
	float TimeSyncRunningTime = 0.f;
	float WarmupTime = 0.f;
	float TreasureSpawnTime = 0.f;
	float LevelStartingTime = 0.f;
	float TimeTreasureActive = 0.f;
	int32 NumberOfCaptures = 1;

	void CheckTimeSynch(float DeltaTime);

	UPROPERTY(EditAnywhere, Category=Time)
	float TimeSyncFrequency = 5.f;
	//Sync with server time
	UFUNCTION(Server, Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);
	
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest);

	virtual float GetServerTime(); // Synced with server world clock
	virtual void ReceivedPlayer() override;

	UFUNCTION(Server, Reliable)
	void ServerCheckMatchState();

	UFUNCTION(Client, Reliable)
	void ClientJoinMidgame(FName StateOfMatch, float Warmup, float TimeToSpawnTreasure, float StartingTime, float ActiveTreasureTime, int32 NumCaps);

private:
	//Input
	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* PlayerControllerContext;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* InGameMenuAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* LeaderboardAction;

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

	ACaptainState* CaptainState;

	UPROPERTY(EditAnywhere)
	float ReturnToMainMenuDelay= 15.f;

	UPROPERTY(ReplicatedUsing = OnRep_MatchStateSet)
	FName MatchState;

	UFUNCTION()
	void OnRep_MatchStateSet();

	void CheckIfPlayerOverlayValid();

	ACaptainHUD* CaptainHUD;

	void ReturnToMainMenu();

	bool bGameOver = false;
	bool bControllerInputSet = false;

	void ServerRequestSwitchTeam_Implementation(ACaptainState* StateRequesting);

public:
	FORCEINLINE void SetNumberOfCaptures(int32 NewTotal) { NumberOfCaptures = NewTotal; }
	FORCEINLINE void SetTreasureActiveTime(float NewTime) { TimeTreasureActive = NewTime; }
	
};
