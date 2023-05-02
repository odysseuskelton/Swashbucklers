// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapturePoint.generated.h"

class IHitInterface;
class UCaptureProgressComponent;
class ASBGameMode;

UCLASS()
class SWASHBUCKLERS_API ACapturePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	ACapturePoint();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

private:
	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateCapturingMaterial;
	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerCapturingMaterial;
	UPROPERTY(EditAnywhere)
	UMaterialInterface* NoOneCapturingMaterial;

	UPROPERTY(ReplicatedUsing=OnRep_CapturePointMaterialChange)
	UMaterialInterface* CurrentMaterial;

	UFUNCTION()
	void OnRep_CapturePointMaterialChange();

	ASBGameMode* GameMode;

protected:
	virtual void BeginPlay() override;

	void BindDelegates();

	UFUNCTION()
	void CapturePointOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void CapturePointEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	virtual void Tick(float DeltaTime) override;

	void PrivateerTeamCapturing();

	void PirateTeamCapturing();

	void NoTeamCapturing();

	void Captured();

	UPROPERTY(EditAnywhere)
	float CaptureRate = 1.5f;

	void SetCapturePointVisibility(bool bVisibility);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetCapturePointVisibility(bool bVisibility);

	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CapturePoint;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* TreasureChest;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* TreasureChestSand;

	UPROPERTY(VisibleAnywhere)
	UCaptureProgressComponent* CaptureProgressComponent;

	UPROPERTY(ReplicatedUsing=OnRep_CaptureProgress)
	float CaptureProgress = 0.f;

	UFUNCTION()
	void OnRep_CaptureProgress();

	UPROPERTY(Replicated)
	bool bCaptured = true;

	TArray<AActor*> PirateTeamOnPoint;
	TArray<AActor*> PrivateerTeamOnPoint;

	FORCEINLINE FTransform GetCapturePointTransform() { return CapturePoint->GetComponentTransform(); }
	void SetProgressBarVisibility(bool bVisibility);

	FTimerHandle ProgressbarVisibilityTimer;
	void ProgressbarVisibilityTimerFinished();

};
