// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Announcement.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UAnnouncement : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetCountdownText(float CountdownTime);

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AnnouncementText;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* CountdownText;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* InfoText;

};
