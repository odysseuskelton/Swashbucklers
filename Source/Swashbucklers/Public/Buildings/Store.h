// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Buildings/Building.h"
#include "Interfaces/InteractableInterface.h"
#include "Store.generated.h"


class USphereComponent;
class UWidgetComponent;
class AShip;
class UShipwrightWidget;
class UStoreShipSlot;
class ICaptainStateInterface;
class IPlayerInterface;

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AStore : public ABuilding, public IInteractableInterface
{
	GENERATED_BODY()
	
public:
	AStore();

protected:
	virtual void BeginPlay() override;

	void BindOverlapDelegates();

	UFUNCTION()
	void EnterStore(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void ExitStore(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	UPROPERTY(VisibleAnywhere)
	USphereComponent* StoreEntry;

	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* StoreEntryText;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AShip>> ShipsInStock;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShipwrightWidget> ShipwrightWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStoreShipSlot> StoreShipSlotClass;

	UShipwrightWidget* ShipwrightWidget;
	
	APlayerController* OwningController;

	TArray<IPlayerInterface*> InteractingPlayers;


public:
	void RefreshShipSlots(ICaptainStateInterface* OwningCSInterface, APlayerController* OwningPlayerController);
	//Interactable Overrides
	virtual void BeginInteraction(APlayerController* InteractingController) override;
	virtual void EndInteraction(APlayerController* PlayerToStopInteractingWith) override;
};
