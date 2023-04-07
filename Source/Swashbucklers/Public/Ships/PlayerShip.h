// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/Ship.h"
#include "Interfaces/PlayerInterface.h"
#include "PlayerStates/Teams.h"
#include "PlayerShip.generated.h"


class UCameraComponent;
class USpringArmComponent;
class ACaptainHUD;
class UBountyWidget;
class ABountyActor;
class UBountyWidgetComponent;
class IInteractableInterface;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API APlayerShip : public AShip, public IPlayerInterface
{
	GENERATED_BODY()

public:
	APlayerShip();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void Die(AActor* InstigatorActor) override;
	FTimerHandle RespawnTimer;
	void RequestRespawnFromServer();

	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor) override;

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
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FirePortCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FireStarboardCannonsAction;

	virtual void BeginPlay() override;

	void InitializeOverlays();

	virtual  void Tick(float DeltaTime) override;

	void TraceForPlayerNameplates();

	void PollInit();

	FTimerHandle NameplateVisibilityTimer;

	UFUNCTION()
	void NameplateVisibilityTimerFinished();

	//Make sure cannons are at a reasonable rotation regardless of ship rotation
	void NormalizeCannonRotation(float DeltaTime);

	void StarboardCannonRotationCalc(float DeltaTime);
	void PortCannonRotationCalc(float DeltaTime);

	UFUNCTION()
	void OnRep_StarboardCannonRotationCalc();

	UFUNCTION()
	void OnRep_PortCannonRotationCalc();

	UPROPERTY(ReplicatedUsing = OnRep_StarboardCannonRotationCalc)
	FRotator StarboardCannonRotation;

	UPROPERTY(ReplicatedUsing = OnRep_PortCannonRotationCalc)
	FRotator PortCannonRotation;

	UPROPERTY(EditAnywhere)
	float CannonCorrectionAngle = 12.f;

	UPROPERTY(EditAnywhere)
	float BeginCannonCorrectionAngle = 8.f;

	UPROPERTY(EditAnywhere)
	float CannonCorrectionSpeed = 2.f;

	//

	void OnRep_PlayerState() override;

	void SetPlayerNameplate(ACaptainState* CS);

	void PossessedBy(AController* NewController) override;

	void GetInputSubsytem();
	virtual void BindAbilityComponentDelegates() override;

	void BindInteractionDelegates();

	IInteractableInterface* InteractableInterface;

	UFUNCTION()
	void CanInteract(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void StartInteracting();

	UFUNCTION(Server, Reliable)
	void ServerStartInteracting(APlayerController* ClientPlayerController);

	UFUNCTION(Client, Reliable)
	void ClientStartInteracting(const TScriptInterface<IInteractableInterface> & ScriptInterface);

	UFUNCTION()
	void EndInteract(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

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

	UPROPERTY(VisibleAnywhere)
	UPlayerNameplateComponent* PlayerNameplateComponent;

	//Playerstate
	UPROPERTY()
	ACaptainState* CaptainState;

	UFUNCTION()
	ACaptainState* GetCaptainState();

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABountyActor> BountyWidgetClass;

	UFUNCTION()
	void OnBountyChange(int32 Bounty, AActor* DestroyedActor);

	UFUNCTION()
	void OnPiecesOfEightChange(int32 PiecesOfEight, AActor* DestroyedActor, int32 Bounty);
	//HitInterface Override
	AActor* GetActorWithAbilityComponent() override;
	ETeam GetHitActorTeam() override;

	//UFUNCTION(Server, Reliable)
	//void ServerGetCaptainState();

	ACaptainHUD* CaptainHUD;

	//Movement Controls
	UPROPERTY(EditAnywhere)
	float TurnRollAmount = 15.f;

public:
	//Player Interface Override
	virtual UPlayerNameplateComponent* GetPlayerNameplate() override;
	FORCEINLINE virtual UStaticMeshComponent* GetPlayerShipMesh() override { return ShipMesh; };
	FORCEINLINE virtual float GetCannonRecoilMultiplierFromShip() override { return CannonRecoilMultiplier; }
	FORCEINLINE virtual bool LocallyControlledPlayer() override { return IsLocallyControlled(); }
};
