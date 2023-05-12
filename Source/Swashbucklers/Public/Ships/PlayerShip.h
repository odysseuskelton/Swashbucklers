// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/Ship.h"
#include "Interfaces/PlayerInterface.h"
#include "PlayerStates/Teams.h"
#include "AbilitySystemBlueprintLibrary.h"
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
	bool bPlayerInputSet = false;

	bool bAuxiliaryCannonsActive = false;


	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle AuxilaryCannonGEHandle;

	FTimerHandle AuxCannonTimer;

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
	UInputAction* MouseWheelAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FirePortCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FireStarboardCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FireAuxiliaryCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* AuxiliaryCannonsReleasedAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* PortCannonsReleasedAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* StarboardCannonsReleasedAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Slot1Action;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Slot2Action;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Slot3Action;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Slot4Action;

	virtual void BeginPlay() override;

	virtual void SetSailColors(ETeam TeamToSet) override;

	void InitializeOverlays();

	virtual  void Tick(float DeltaTime) override;

	void TraceForPlayerNameplates();

	void PollInit();

	FTimerHandle NameplateVisibilityTimer;

	UFUNCTION()
	void NameplateVisibilityTimerFinished();

	//Make sure cannons are at a reasonable rotation regardless of ship rotation
	void NormalizeCannonRotation(float DeltaTime);

	void AuxiliaryCannonActive();

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);

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

	UPROPERTY(EditAnywhere)
	float DefaultSpeed = 3000.f;

	UPROPERTY(EditAnywhere)
	float DefaultAcceleration = 900.f;

	UPROPERTY(EditAnywhere)
	float RotationMultiplier = 70.f;

	UPROPERTY(EditAnywhere)
	float RudderTurnSpeed = 1.f;

	//

	void OnRep_PlayerState() override;

	void SetPlayerNameplate(ACaptainState* CS);

	void PossessedBy(AController* NewController) override;

	void GetInputSubsytem();
	virtual void BindAbilityComponentDelegates();

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

	UFUNCTION(BlueprintCallable)
	void HandleEndInteract();

	virtual void Look(const FInputActionValue& Value);

	void Move(const FInputActionValue& Value);

	virtual void MouseWheel(const FInputActionValue& Value);

	UFUNCTION(Server, Unreliable)
	void ServerDropSails();

	UFUNCTION(Server, Unreliable)
	void ServerHoistSails();

	void HoistSails(const FInputActionValue& Value);

	void Turn(const FInputActionValue& Value);

	UFUNCTION(Server, Unreliable)
	void ServerCaptainTurn(bool bNewLeft, bool bNewRight);

	void RightShip(const FInputActionValue& Value);

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool bTurningLeft = false;
	UPROPERTY(Replicated, BlueprintReadOnly)
	bool bTurningRight = false;

	virtual void FirePortCannons() override;

	virtual void FireStarboardCannons() override;
	virtual void ReleasePortCannons();
	virtual void ReleaseStarboardCannons();
	virtual void FireAuxiliaryCannons();
	void ReleaseAuxiliaryCannons();
	UFUNCTION(Server, Reliable)
	void ServerReleaseAuxiliarycannons();
	void ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate) override;
	
	UFUNCTION(Server, Reliable)
	void ServerFireAuxiliary(TSubclassOf<USBGameplayAbility> AuxAbilityToActivate);

	void ActivateSlot1Action();
	void ActivateSlot2Action();
	void ActivateSlot3Action();
	void ActivateSlot4Action();

	UFUNCTION(Server, Reliable)
	void ServerActivateSlotAction(EAbilitySlot AbilitySlot);

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateCaptainMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerCaptainMaterial;

	//Playerstate
	UPROPERTY()
	ACaptainState* CaptainState;

	UFUNCTION()
	ACaptainState* GetCaptainState();

private:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UPlayerNameplateComponent* PlayerNameplateComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* CaptainMesh;

	UFUNCTION()
	void OnManaChanged(float Mana, float MaxMana);

	UFUNCTION()
	void OnSpeedChanged(float AttributeSpeed);

	UFUNCTION(Client, Reliable)
	void ClientOnSpeedChanged(float NewSpeed, float NewAcceleration);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnSpeedChanged(float Speed);

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABountyActor> BountyWidgetClass;

	UFUNCTION()
	void OnBountyChange(int32 Bounty, AActor* DestroyedActor);

	UFUNCTION()
	void OnPlayerKillChange(int32 PlayerKills);


	UFUNCTION(Server, Reliable)
	void ServerPlayerKillChange(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayerKillChange(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills);

	UFUNCTION()
	void OnTowerKillChange(int32 TowerKills);

	UFUNCTION()
	void OnCaptureChange(int32 Captures);

	UFUNCTION(Server, Reliable)
	void ServerCaptureChange(ACaptainState* CaptainStateCaptureChange, int32 Captures);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastCaptureChange(ACaptainState* CaptainStateCaptureChange, int32 Captures);

	UFUNCTION(Server, Reliable)
	void ServerTowerKillChange(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastTowerKillChange(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills);

	UFUNCTION(Server, Reliable)
	void ServerPlayerBountyChange(ACaptainState* CaptainStateBountyChange,int32 Bounty);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayerBountyChanged(ACaptainState* CaptainStateBountyChange,int32 Bounty);

	UFUNCTION()
	void OnPiecesOfEightChange(int32 PiecesOfEight, AActor* DestroyedActor, int32 Bounty);
	//HitInterface Override
	AActor* GetActorWithAbilityComponent() override;
	ETeam GetHitActorTeam() override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

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
	FORCEINLINE virtual ACaptainState* GetPlayerCaptainState() override { return GetCaptainState(); }
	FORCEINLINE virtual void SetInteractableInterface(IInteractableInterface* InterfaceToSet) { InteractableInterface = InterfaceToSet; }
};
