// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "CaptainController.generated.h"


class UInputMappingContext;
class UInputAction;
class UInGameMenu;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

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

	UPROPERTY()
	UInGameMenu* InGameMenuWidget;
	
};
