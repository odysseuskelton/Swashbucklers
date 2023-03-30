// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerStates/Teams.h"
#include "MenuInterface.generated.h"

// This class does not need to be modified.
class UMainMenu;
class ACaptainState;
UINTERFACE(MinimalAPI)
class UMenuInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SWASHBUCKLERS_API IMenuInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Host(FString ServerNameFromUser) = 0;
	virtual void Join(uint32 Index) = 0;
	virtual void StartGame() = 0;
	virtual UMainMenu* LoadMainMenuWidget() = 0;
	virtual void RefreshServerList() = 0;
	virtual void DestroySession() = 0;
	virtual void ReturnToMainMenu() = 0;
	virtual void ClearTeams() = 0;
	virtual ETeam AssignTeam(ACaptainState* CaptainStateToAssign) = 0;
};
