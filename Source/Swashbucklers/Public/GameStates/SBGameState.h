// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "PlayerStates/Teams.h"
#include "Buildings/BuildingTypes.h"
#include "SBGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingDestroyedDelegate, EBuildingType, BuildingType);
/**
 * 
 */
class ACaptainState;
class ABuilding;
UCLASS()
class SWASHBUCKLERS_API ASBGameState : public AGameState
{
	GENERATED_BODY()

public:
	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void BeginPlay() override;

	void UpdateTeams(TArray<FString> UpdatedPirateTeam, TArray<FString> UpdatedPrivateerTeam, ACaptainState* NewCaptainState);

	//UFUNCTION(NetMulticast, Reliable)
	//void MulticastUpdateTeams();

	UFUNCTION()
	void OnRep_UpdateTeams();

	void RegisterCaptainState(ACaptainState* CaptainState);

	UFUNCTION()
	void OnRep_RegisterCaptainState(ACaptainState* CaptainState);

	UPROPERTY(ReplicatedUsing=OnRep_UpdateTeams)
	TArray<FString> PirateTeam;

	UPROPERTY(ReplicatedUsing=OnRep_UpdateTeams)
	TArray<FString> PrivateerTeam;

	UPROPERTY(ReplicatedUsing = OnRep_RegisterCaptainState)
	ACaptainState* NewestCaptainState;

	UPROPERTY(Replicated)
	TArray<ACaptainState*> CaptainStates;

	void BuildingDestroyed(EBuildingType BuildingType, ABuilding* BuildingDestroyed);
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastBuildingDestroyed(EBuildingType BuildingType, ABuilding* BuildingDestroyed);

	FOnBuildingDestroyedDelegate OnBuildingDestroyed;

	void PlayerKilled(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState);

	UFUNCTION(Client, Unreliable)
	void ClientPlayerKilled(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState);

	UFUNCTION(Exec, Category = "Commands")
	void ExtraHeartPiece();

	void SetIsInLobby(bool bUpdateIsInLobby);

	bool GetIsInLobby();

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastExtraHeartPiece();

	UPROPERTY(Replicated)
	bool bIsInLobby = false;

	bool bGameOver = false;

	UPROPERTY(ReplicatedUsing = OnRep_TeamCapturedTreasure)
	ETeam TeamCapturingTreasure;

	UPROPERTY(Replicated)
	float TreasureActiveTime = 0.f;
	UPROPERTY(ReplicatedUsing = OnRep_TreasureCapturesUpdate)
	int32 TreasuresCaptured = 1;


	void SetTreasuresCaptured(int32 NumberOfCaptures, float TimeTreasureActive);

	UFUNCTION()
	void OnRep_TreasureCapturesUpdate();
  
	UFUNCTION()
	void OnRep_TeamCapturedTreasure();

};

