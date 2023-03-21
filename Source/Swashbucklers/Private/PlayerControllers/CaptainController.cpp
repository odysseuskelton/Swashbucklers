// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllers/CaptainController.h"
#include "HUD/InGameMenu.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void ACaptainController::BeginPlay()
{
	if (GetPawn() && GetPawn()->IsLocallyControlled())
	{
		InGameMenuWidget = CreateWidget<UInGameMenu>(this, InGameMenuClass);
		if (InGameMenuWidget)
		{
			InGameMenuWidget->Initialize();
		}

		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerControllerContext, 0);
		}
	}
}

void ACaptainController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{

		EnhancedInputComponent->BindAction(InGameMenuAction, ETriggerEvent::Triggered, this, &ACaptainController::OpenInGameMenu);
	}

}

void ACaptainController::OpenInGameMenu()
{
	if (InGameMenuWidget)
	{
		InGameMenuWidget->Setup();
	}

}