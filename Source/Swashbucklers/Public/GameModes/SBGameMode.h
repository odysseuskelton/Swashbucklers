// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PlayerStates/Teams.h"
#include "SBGameMode.generated.h"


namespace MatchState
{
	extern SWASHBUCKLERS_API const FName WaitingForTreasureToSpawn;
	extern SWASHBUCKLERS_API const FName TreasureSpawned;
	extern SWASHBUCKLERS_API const FName TreasureCaptured;
}

class ACaptainState;
class AMerchantShip;
class ACapturePoint;
class ASBGameState;
class AAIShip;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ASBGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AActor* PirateGoal;

	AActor* PrivateerGoal;
	
protected:
	ASBGameMode();
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float KrakenSpawnTime = 30.f;
	FTimerHandle KrakenSpawnTimer;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> KrakenToSpawn;

	UPROPERTY(EditAnywhere)
	float AIWaveSpawnTime = 15.f;
	FTimerHandle AIWaveTimer;

	UPROPERTY(EditAnywhere)
	float TimeBetweenAISpawn = 2.5f;
	FTimerHandle SpawnDelayTimer;
	void SpawnAI();

	void HandleAISpawn(ETeam AITeam);

	UPROPERTY(EditAnywhere)
	TSubclassOf<AAIShip> WaveShipClass;

	UPROPERTY(EditAnywhere)
	int32 NumberOfAIToSpawn = 3;

	UPROPERTY(EditAnywhere)
	int32 SpawnIndex = 0;

	void SpawnKraken();
	virtual void OnMatchStateSet() override;
	void HandleTreasureWaitingToSpawn();
	void HandleTreasureCaptured();
	void HandleTreasureSpawned();
	virtual void Tick(float DeltaTime) override;
	void PostLogin(APlayerController* NewPlayer) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMerchantShip> MerchantShipClass;


public:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	void RequestRespawn(APawn* ElimmedShip, AController* ElimmedController);
	virtual void RestartPlayer(AController* NewPlayer) override;
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);

	void TreasureCaptured(ETeam CapturingTeam);

	void TreasureResolved();

	APawn* SpawnDefaultShip(AController* NewPlayer, AActor* StartSpot, ACaptainState* NewCaptainState);
	APawn* SpawnDefaultShipAtTransform(AController* NewPlayer, const FTransform& SpawnTransform, ACaptainState* NewCaptainState);

	UPROPERTY(EditDefaultsOnly)
	float TreasureSpawnTime = 120.f;

	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 10.f;

	float LevelStartingTime = 0.f;

	float TimeTreasureActive = 0.f;
	int32 NumberOfCaptures = 1;

	UFUNCTION(Exec, Category = "Commands")
	void TakeTheirLadderPoints();
	UFUNCTION(Exec, Category = "Commands")
	void DrRockso();
	UFUNCTION(Exec, Category = "Commands")
	void MegaJarOfDirt();

	virtual void Logout(AController* Exiting) override;

	AMerchantShip* ActiveMerchantShip;
	ACapturePoint* ActiveCapturePoint;
	ASBGameState* SBGameState;

private:
	float CountdownTime = 0.f; 




};
