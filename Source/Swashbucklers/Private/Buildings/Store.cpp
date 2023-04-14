// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildings/Store.h"
#include "Interfaces/PlayerInterface.h"
#include "Interfaces/CaptainStateInterface.h"
#include "GameFramework/PlayerState.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "HUD/ShipwrightWidget.h"
#include "HUD/StoreShipSlot.h"

AStore::AStore()
{
	StoreEntry = CreateDefaultSubobject<USphereComponent>(TEXT("StoreEntryOverlap"));
	SetRootComponent(StoreEntry);

	StoreEntryText = CreateDefaultSubobject<UWidgetComponent>(TEXT("StoreEntryTextWidget"));
	StoreEntryText->SetupAttachment(StoreEntry);
	StoreEntryText->SetVisibility(false);

}

void AStore::BeginPlay()
{
	Super::BeginPlay();

	BindOverlapDelegates();
}

void AStore::BindOverlapDelegates()
{
	StoreEntry->OnComponentBeginOverlap.AddDynamic(this, &AStore::EnterStore);
	StoreEntry->OnComponentEndOverlap.AddDynamic(this, &AStore::ExitStore);
}

void AStore::EnterStore(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IPlayerInterface* InteractingPlayer = Cast<IPlayerInterface>(OtherActor);

	if (InteractingPlayer && InteractingPlayer->LocallyControlledPlayer())
	{
		StoreEntryText->SetVisibility(true);
		InteractingPlayers.Add(InteractingPlayer);
	}
}

void AStore::ExitStore(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	IPlayerInterface* InteractingPlayer = Cast<IPlayerInterface>(OtherActor);

	if (InteractingPlayer && InteractingPlayers.Contains(InteractingPlayer) && InteractingPlayer->LocallyControlledPlayer() && StoreEntryText)
	{
		InteractingPlayers.Remove(InteractingPlayer);
		StoreEntryText->SetVisibility(false);

		/*if (OwningController )
		{
			FInputModeGameOnly InputModeData;
			OwningController->SetInputMode(InputModeData);

			OwningController->bShowMouseCursor = false;
		}*/
	}
}

void AStore::BeginInteraction(APlayerController* InteractingController)
{
	if (!InteractingController || !ShipwrightWidgetClass || !InteractingController->IsLocalController()) return;

	OwningController = InteractingController;

	ShipwrightWidget = CreateWidget<UShipwrightWidget>(InteractingController, ShipwrightWidgetClass);
	if (ShipwrightWidget)
	{
		ShipwrightWidget->AddToViewport();

		FInputModeUIOnly InputModeData;
		InputModeData.SetWidgetToFocus(ShipwrightWidget->TakeWidget());
		InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

		InteractingController->SetInputMode(InputModeData);

		InteractingController->bShowMouseCursor = true;

		ICaptainStateInterface* CSInterface = Cast<ICaptainStateInterface>(InteractingController->GetPlayerState<APlayerState>());
		if (CSInterface)
		{
			RefreshShipSlots(CSInterface, InteractingController);
		}
	}

}

void AStore::RefreshShipSlots(ICaptainStateInterface* OwningCSInterface, APlayerController* OwningPlayerController)
{
	if (OwningCSInterface)
	{
		ShipwrightWidget->ShipSlotGridPanel->ClearChildren();

		int32 RowIndex = 0;
		int32 ColumnIndex = 0;

		if (!ShipwrightWidget->ShipSlotGridPanel) return;

		for (TSubclassOf<AShip> ShipInStock : ShipsInStock)
		{
			UStoreShipSlot* ShipSlot = CreateWidget<UStoreShipSlot>(OwningPlayerController, StoreShipSlotClass);
			if (ShipSlot)
			{
				ShipSlot->InitializeShipSlot(ShipInStock, OwningCSInterface, OwningPlayerController);
				ShipwrightWidget->ShipSlotGridPanel->AddChild(ShipSlot);
				UGridSlot* GridSlot = Cast<UGridSlot>(ShipSlot->Slot);
				if (GridSlot)
				{
					GridSlot->SetColumn(ColumnIndex);
					GridSlot->SetRow(RowIndex);
				}
			}
			++ColumnIndex;
			if (ColumnIndex > 1)
			{
				ColumnIndex = 0;
				++RowIndex;
			}
		}


	}
}

void AStore::EndInteraction(APlayerController* PlayerToStopInteractingWith)
{
	if (!PlayerToStopInteractingWith) return;
}
