// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameMenu.generated.h"

class UButton;
class UWidgetSwitcher;

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UInGameMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	UWidgetSwitcher* InGameMenuSwitcher;

	UPROPERTY(meta = (BindWidget))
	UWidget* InGameMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UWidget* SettingsMenuWidget;

	UPROPERTY(meta = (BindWidget))
	UButton* ResumeButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SettingsButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitToMainMenuButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitSettingsMenuButton;

	void Setup();

	UFUNCTION()
	void Teardown();

	virtual bool Initialize() override;

	UFUNCTION()
	void OpenSettingsMenu();

	UFUNCTION()
	void ExitToMainMenu();

	UFUNCTION()
	void ExitGame();

	UFUNCTION()
	void ReturnToInGameMenu();

};
