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
#include "HUD/StoreAbilitySlot.h"
#include "HUD/StoreShipSlot.h"
#include "HUD/SlotSelectionWidget.h"

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
		GetWorldTimerManager().SetTimer(StoreTextTimer, this, &AStore::StoreTextTimerFinished, 15.f);
		InteractingPlayer->SetInteractableInterface(this);
	}

}

void AStore::ExitStore(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	IPlayerInterface* InteractingPlayer = Cast<IPlayerInterface>(OtherActor);

	if (InteractingPlayer && InteractingPlayers.Contains(InteractingPlayer) && InteractingPlayer->LocallyControlledPlayer() && StoreEntryText)
	{
		InteractingPlayers.Remove(InteractingPlayer);
		StoreEntryText->SetVisibility(false);
		if (ShipwrightWidget)
		{
			APawn* PawnActor = Cast<APawn>(OtherActor);
			if (PawnActor)
			{
				EndInteraction(PawnActor->GetController());
			}
		}

		/*if (OwningController )
		{
			FInputModeGameOnly InputModeData;
			OwningController->SetInputMode(InputModeData);

			OwningController->bShowMouseCursor = false;
		}*/
	}
	if (InteractingPlayer)
	{
		InteractingPlayer->SetInteractableInterface(nullptr);
	}
}

void AStore::BeginInteraction(APlayerController* InteractingController)
{
	UE_LOG(LogTemp, Warning, TEXT("Store begin interaction"))
	if (InteractingController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Interacting Controller valid"))
	}
	if (!ShipwrightWidget)
	{
		UE_LOG(LogTemp, Warning, TEXT("No widget"))

	}
	if (!InteractingController->IsLocalController())
	{
		UE_LOG(LogTemp, Warning, TEXT("LocalController"))

	}

	if (!InteractingController || !ShipwrightWidgetClass || !InteractingController->IsLocalController() || ShipwrightWidget) return;

	StoreEntryText->SetVisibility(false);

	OwningController = InteractingController;

	ShipwrightWidget = CreateWidget<UShipwrightWidget>(InteractingController, ShipwrightWidgetClass);
	if (ShipwrightWidget)
	{
		ShipwrightWidget->InitializeStoreWidget();
		ShipwrightWidget->AddToViewport();

		FInputModeUIOnly InputModeData;
		InputModeData.SetWidgetToFocus(ShipwrightWidget->TakeWidget());
		InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

		InteractingController->SetInputMode(InputModeData);

		InteractingController->bShowMouseCursor = true;

		ICaptainStateInterface* CSInterface = Cast<ICaptainStateInterface>(InteractingController->GetPlayerState<APlayerState>());
		if (CSInterface)
		{
			OwningInterface = CSInterface;
			RefreshShipSlots(CSInterface, InteractingController);
			RefreshAbilitySlots(CSInterface, InteractingController);
		}
	}

}

void AStore::StoreTextTimerFinished()
{
	if (StoreEntryText->IsVisible())
	{
		StoreEntryText->SetVisibility(false);
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
				ShipSlot->ShipBought.AddDynamic(this, &AStore::ItemPurchased);
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

void AStore::RefreshAbilitySlots(ICaptainStateInterface* OwningCSInterface, APlayerController* OwningPlayerController)
{
	if (OwningCSInterface)
	{
		ShipwrightWidget->AbilitySlotGridPanel->ClearChildren();

		int32 RowIndex = 0;
		int32 ColumnIndex = 0;

		if (!ShipwrightWidget->AbilitySlotGridPanel) return;

		for (TSubclassOf<USBGameplayAbility> AbilityInStock : AbilitiesInStock)
		{
			UStoreAbilitySlot* AbilitySlot = CreateWidget<UStoreAbilitySlot>(OwningPlayerController, StoreAbilitySlotClass);
			if (AbilitySlot)
			{
				AbilitySlot->InitializeAbilitySlot(AbilityInStock, OwningCSInterface);
				AbilitySlot->AbilityBought.AddDynamic(this, &AStore::ItemPurchased);
				ShipwrightWidget->AbilitySlotGridPanel->AddChild(AbilitySlot);
				UGridSlot* GridSlot = Cast<UGridSlot>(AbilitySlot->Slot);
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

void AStore::ItemPurchased()
{
	if (OwningController && OwningInterface)
	{
		RefreshAbilitySlots(OwningInterface, OwningController);
		RefreshShipSlots(OwningInterface, OwningController);
	}
}

void AStore::EndInteraction(AController* PlayerToStopInteractingWith)
{
	if (!PlayerToStopInteractingWith) return;


	if (ShipwrightWidget)
	{
		ShipwrightWidget->RemoveFromParent();

		for (UWidget* Widget : ShipwrightWidget->AbilitySlotGridPanel->GetAllChildren())
		{
			UStoreAbilitySlot* AbilitySlot = Cast<UStoreAbilitySlot>(Widget);
			if (AbilitySlot && AbilitySlot->SlotSelectionWidget)
			{
				AbilitySlot->SlotSelectionWidget->RemoveFromParent();
			}
		}
		ShipwrightWidget = nullptr;
	}

	APlayerController* PlayerController = Cast<APlayerController>(PlayerToStopInteractingWith);
	if (PlayerController)
	{
		FInputModeGameOnly InputModeData;
		PlayerController->bShowMouseCursor = false;
		PlayerController->SetInputMode(InputModeData);
	}
}
