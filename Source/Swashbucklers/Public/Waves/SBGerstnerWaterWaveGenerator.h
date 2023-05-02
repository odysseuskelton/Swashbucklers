// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GerstnerWaterWaves.h"
#include "SBGerstnerWaterWaveGenerator.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USBGerstnerWaterWaveGenerator : public UGerstnerWaterWaveGeneratorBase
{
	GENERATED_BODY()

public:
	virtual void GenerateGerstnerWaves_Implementation(TArray<FGerstnerWave>& OutWaves) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 1, ClampMin = 1, UIMax = 128, ClampMax = 4096, Category = "Default"))
		int32 NumWaves = 16;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 1, ClampMin = 1, UIMax = 128, ClampMax = 4096, Category = "Default"))
		int32 NumBigWaves = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Default")
		int32 Seed = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, Category = "Default"))
		float Randomness = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 10000.0, Category = "Wavelengths"))
		float MinWavelength = 521.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 10000.0, Category = "Wavelengths"))
		float MaxWavelength = 6000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Wavelengths"))
		float WavelengthFalloff = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0.0001, ClampMin = 0.0001, UIMax = 1000.0, Category = "Amplitude"))
		float MinAmplitude = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0.0001, ClampMin = 0.0001, UIMax = 1000.0, Category = "Amplitude"))
		float MaxAmplitude = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Amplitude"))
		float AmplitudeFalloff = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Dominant Wind Angle", Category = "Directions", UIMin = -180, ClampMin = -180, UIMax = 180, ClampMax = 180, Units = deg))
		float WindAngleDeg = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Direction Angular Spread", Category = "Directions", UIMin = 0, ClampMin = 0, Units = deg))
		float DirectionAngularSpreadDeg = 1325.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 1.0, Category = "Steepness"))
		float SmallWaveSteepness = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 1.0, Category = "Steepness"))
		float LargeWaveSteepness = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Steepness"))
		float SteepnessFalloff = 1.0f;


	//Big waves

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 10000.0, Category = "Wavelengths"))
		float MinBigWavelength = 521.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 10000.0, Category = "Wavelengths"))
		float MaxBigWavelength = 6000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Wavelengths"))
		float BigWavelengthFalloff = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0.0001, ClampMin = 0.0001, UIMax = 1000.0, Category = "Amplitude"))
		float MinBigWaveAmplitude = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0.0001, ClampMin = 0.0001, UIMax = 1000.0, Category = "Amplitude"))
		float MaxBigWaveAmplitude = 80.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Amplitude"))
		float BigWaveAmplitudeFallof = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 1.0, Category = "Steepness"))
		float SmallBigWaveSteepness = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 1.0, Category = "Steepness"))
		float LargeBigWaveSteepness = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = 0, ClampMin = 0, UIMax = 100.0, Category = "Steepness"))
		float BigWaveSteepnessFalloff = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Big Dominant Wind Angle", Category = "Directions", UIMin = -180, ClampMin = -180, UIMax = 180, ClampMax = 180, Units = deg))
		float BigWindAngleDeg = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Big Direction Angular Spread", Category = "Directions", UIMin = 0, ClampMin = 0, Units = deg))
		float BigDirectionAngularSpreadDeg = 1325.0f;
	
};
