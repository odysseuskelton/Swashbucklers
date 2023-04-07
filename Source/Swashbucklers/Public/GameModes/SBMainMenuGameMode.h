// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SBMainMenuGameMode.generated.h"

/**
 * 
 */
class UMainMenu;


UCLASS()
class SWASHBUCKLERS_API ASBMainMenuGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UMainMenu* HostMainMenu;

	virtual void PostLogin(APlayerController* NewPlayer) override;


	
};
