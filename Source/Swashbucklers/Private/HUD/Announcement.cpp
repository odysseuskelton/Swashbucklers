// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/Announcement.h"
#include "Components/TextBlock.h"

void UAnnouncement::SetCountdownText(float CountdownTime)
{
	if (CountdownText)
	{
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownTextString = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		CountdownText->SetText(FText::FromString(CountdownTextString));
	}
}
