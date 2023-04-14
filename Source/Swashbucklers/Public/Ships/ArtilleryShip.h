
#pragma once

#include "CoreMinimal.h"
#include "Ships/PlayerShip.h"
#include "GameplayEffectTypes.h"
#include "ArtilleryShip.generated.h"

class AProjectile;
class USBGameplayAbility;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AArtilleryShip : public APlayerShip
{
	GENERATED_BODY()


public:
	AArtilleryShip();
	virtual void Tick(float DeltaTime) override;

	void RotateCannonMesh(FRotator LookAtRotation);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	void RotateTurret(FRotator LookAtRotation, float DeltaTime);
	virtual void BeginPlay() override;
	virtual void Look(const FInputActionValue& Value) override;

	virtual void FireStarboardCannons() override;

	virtual void FireAuxiliaryCannons() override;

	UFUNCTION(BlueprintCallable)
	virtual void FireArtilleryCannon();

	UFUNCTION(Server, Reliable)
	void ServerFireArtillery(TSubclassOf<USBGameplayAbility> AbilityToFire);

	virtual void MouseWheel(const FInputActionValue& Value) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ArtilleryTurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UStaticMeshComponent* ArtilleryCannonMesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ArtilleryProjectileClass;

	bool bAimingCannon = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle ArtilleryGEHandle;
	
};
