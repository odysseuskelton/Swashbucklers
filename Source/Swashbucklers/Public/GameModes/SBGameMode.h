// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SBGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ASBGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	void RequestRespawn(APawn* ElimmedShip, AController* ElimmedController);
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
};
