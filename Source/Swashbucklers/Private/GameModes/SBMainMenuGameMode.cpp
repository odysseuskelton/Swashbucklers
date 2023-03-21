// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/SBMainMenuGameMode.h"
#include "GameInstance/SBGameInstance.h"

void ASBMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	USBGameInstance* GameInstance = Cast<USBGameInstance>(GetGameInstance());
	if (GameInstance)
	{
		GameInstance->LoadMainMenuWidget();
	}
}