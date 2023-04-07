// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "PlayerStates/Teams.h"
#include "PlayerNameplateComponent.generated.h"

class UPlayerNameplate;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UPlayerNameplateComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	void SetNameplateVisibility(bool bVisibility);
	void SetPlayerName(FName PlayerName);
	void SetPlayerBounty(int32 PlayerBounty);
	void SetPlayerNameTeamColor(ETeam PlayerTeam);

private:
	UPlayerNameplate* PlayerNameplate;

	UPROPERTY(EditAnywhere)
	FSlateColor PirateColor;

	UPROPERTY(EditAnywhere)
	FSlateColor PrivateerColor;

	bool bPlayerNameTeamColorSet = false;

};
