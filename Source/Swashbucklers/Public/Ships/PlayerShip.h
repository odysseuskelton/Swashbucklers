// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/Ship.h"
#include "PlayerStates/Teams.h"
#include "PlayerShip.generated.h"


class UCameraComponent;
class USpringArmComponent;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API APlayerShip : public AShip
{
	GENERATED_BODY()

public:
	APlayerShip();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void Die() override;
	FTimerHandle RespawnTimer;
	void RequestRespawnFromServer();

	void ResetHealth();

	UFUNCTION(Server, Reliable)
	void ServerResetHealth();

	void SetSailColors(ETeam PlayerTeam);
	bool bSailColorSet = false;

protected:

	//Input
	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* PlayerContext;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* TurnAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FirePortCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FireStarboardCannonsAction;

	virtual void BeginPlay() override;

	virtual  void Tick(float DeltaTime) override;

	void PollInit();

	void OnRep_PlayerState() override;

	void PossessedBy(AController* NewController) override;

	void GetInputSubsytem();
	virtual void BindAbilityComponentDelegates() override;

	void Look(const FInputActionValue& Value);

	void Move(const FInputActionValue& Value);

	UFUNCTION(Server, Unreliable)
	void ServerDropSails();

	UFUNCTION(Server, Unreliable)
	void ServerHoistSails();

	void HoistSails(const FInputActionValue& Value);

	void Turn(const FInputActionValue& Value);

	void RightShip(const FInputActionValue& Value);

	void FirePortCannons() override;

	void FireStarboardCannons() override;
	void ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate) override;
	
	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateMaterialSecondary;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerMaterialSecondary;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateFlag;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerFlag;

private:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	//Playerstate
	UPROPERTY()
	ACaptainState* CaptainState;

	//HitInterface Override
	ACaptainState* GetCaptainState() override;

	//UFUNCTION(Server, Reliable)
	//void ServerGetCaptainState();


	//Movement Controls
	UPROPERTY(EditAnywhere)
	float TurnRollAmount = 15.f;


};
