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
class AAIShip;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ASBGameMode : public AGameMode
{
	GENERATED_BODY()
	
protected:
	ASBGameMode();
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;
	void HandleTreasureCaptured();
	void HandleTreasureSpawned();
	virtual void Tick(float DeltaTime) override;
	void PostLogin(APlayerController* NewPlayer) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AAIShip> MerchantShipClass;

	AActor* PirateGoal;

	AActor* PrivateerGoal;

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

	AAIShip* ActiveMerchantShip;

private:
	float CountdownTime = 0.f; 




};
