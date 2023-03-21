// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerLine.generated.h"

class UTextBlock;
class UMainMenu;
class UButton;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UServerLine : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	bool bIsSelected = false;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UTextBlock* ServerNameText;
	
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UTextBlock* HostNameText;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UTextBlock* CurrentPlayersText;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UTextBlock* MaxPlayersText;

	void Setup(UMainMenu* InParent, uint32 InIndex);

	void SetServerNameText(FString ServerNameToSet);
	void SetHostNameText(FName HostNameToSet);
	void SetCurrentPlayerText(uint16 CurrentPlayersToSet);
	void SetMaxPlayersText(uint16 MaxPlayersToSet);

private:
	UPROPERTY(meta = (BindWidget))
	UButton* ServerLineButton;

	UFUNCTION()
	void OnClicked();

	UPROPERTY()
	UMainMenu* Parent;
	uint32 Index;
};
