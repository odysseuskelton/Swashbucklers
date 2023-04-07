// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SBGameMode.generated.h"


class ACaptainState;
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
	void PostLogin(APlayerController* NewPlayer) override;

	FTimerHandle TeamCheckTimer;
	void TeamCheck();
public:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	void RequestRespawn(APawn* ElimmedShip, AController* ElimmedController);
	virtual void RestartPlayer(AController* NewPlayer) override;
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);

	APawn* SpawnDefaultShip(AController* NewPlayer, AActor* StartSpot, ACaptainState* NewCaptainState);
	APawn* SpawnDefaultShipAtTransform(AController* NewPlayer, const FTransform& SpawnTransform, ACaptainState* NewCaptainState);


	UFUNCTION(Exec, Category = "Commands")
	void TakeTheirLadderPoints();
	UFUNCTION(Exec, Category = "Commands")
	void DrRockso();

};
