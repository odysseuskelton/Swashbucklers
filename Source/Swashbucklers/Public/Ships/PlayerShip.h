// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/Ship.h"
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
	
	virtual void Die() override;
	FTimerHandle RespawnTimer;
	void RequestRespawnFromServer();

	void ResetHealth();

	UFUNCTION(Server, Reliable)
	void ServerResetHealth();

protected:
	virtual void BeginPlay() override;
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

private:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	//Playerstate
	UPROPERTY()
	ACaptainState* CaptainState;

	//HitInterface Override
	ACaptainState* GetCaptainState();
	void ServerGetCaptainState_Implementation() override;


	//Movement Controls
	UPROPERTY(EditAnywhere)
	float TurnRollAmount = 15.f;


};
