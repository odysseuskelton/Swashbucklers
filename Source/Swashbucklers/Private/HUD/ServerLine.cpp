// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ServerLine.h"
#include "Components/TextBlock.h"
#include "HUD/MainMenu.h"
#include "Components/Button.h"

void UServerLine::Setup(UMainMenu* InParent, uint32 InIndex)
{
	Parent = InParent;
	Index = InIndex;
	ServerLineButton->OnClicked.AddDynamic(this, &UServerLine::OnClicked);
}

void UServerLine::SetServerNameText(FString ServerNameToSet)
{
	if (ServerNameText)
	{
		ServerNameText->SetText(FText::FromString(ServerNameToSet));
	}
}

void UServerLine::SetHostNameText(FName HostNameToSet)
{
	if (HostNameText)
	{
		HostNameText->SetText(FText::FromName(HostNameToSet));
	}
}

void UServerLine::SetCurrentPlayerText(uint16 CurrentPlayersToSet)
{
	if (CurrentPlayersText)
	{
		CurrentPlayersText->SetText(FText::FromString(FString::Printf(TEXT("%d"), CurrentPlayersToSet)));
	}
}

void UServerLine::SetMaxPlayersText(uint16 MaxPlayersToSet)
{
	if (MaxPlayersText)
	{
		MaxPlayersText->SetText(FText::FromString(FString::Printf(TEXT("%d"), MaxPlayersToSet)));
	}
}

void UServerLine::OnClicked()
{
	Parent->SelectIndex(Index);
}
