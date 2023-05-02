// Fill out your copyright notice in the Description page of Project Settings.


#include "Waves/SBGerstnerWaterWaveGenerator.h"

void USBGerstnerWaterWaveGenerator::GenerateGerstnerWaves_Implementation(TArray<FGerstnerWave>& OutWaves) const
{
	Super::GenerateGerstnerWaves_Implementation(OutWaves);
	ensure(OutWaves.Num() == 0);

	FRandomStream LocalSeed(Seed);
	//int32 Quality = GetQualityWaveCount(); // Replaced by NumWaves

	for (int i = 0; i < NumWaves; ++i)
	{
		float Alpha = FMath::Clamp(1.f - ((float)i / (float)NumWaves) + LocalSeed.FRandRange(Randomness * (-1.0f / (float)NumWaves), Randomness * (1.0f / (float)NumWaves)), 0.0f, 1.0f);

		FGerstnerWave& Params = OutWaves.AddDefaulted_GetRef();

		Params.Direction = FVector(EForceInit::ForceInitToZero);
		FMath::SinCos(&Params.Direction.Y, &Params.Direction.X, FMath::DegreesToRadians((FVector::FReal)WindAngleDeg));
		if (i > 0)
		{
			Params.Direction = Params.Direction.RotateAngleAxis(LocalSeed.FRandRange(-DirectionAngularSpreadDeg, DirectionAngularSpreadDeg), FVector::UpVector);
		}

		Params.WaveLength = FMath::Lerp(MinWavelength, MaxWavelength, FMath::Pow(Alpha, WavelengthFalloff));
		Params.Amplitude = FMath::Max(FMath::Lerp(MinAmplitude, MaxAmplitude, FMath::Pow(Alpha, AmplitudeFalloff)), 0.0001f);
		Params.Steepness = FMath::Lerp(LargeWaveSteepness, SmallWaveSteepness, FMath::Pow((float)i / NumWaves, SteepnessFalloff));
	}

	for (int i = 0; i < NumBigWaves; ++i)
	{
		float Alpha = FMath::Clamp(1.f - ((float)i / (float)NumWaves) + LocalSeed.FRandRange(Randomness * (-1.0f / (float)NumWaves), Randomness * (1.0f / (float)NumWaves)), 0.0f, 1.0f);

		FGerstnerWave& Params = OutWaves.AddDefaulted_GetRef();

		Params.Direction = FVector(EForceInit::ForceInitToZero);
		FMath::SinCos(&Params.Direction.Y, &Params.Direction.X, FMath::DegreesToRadians((FVector::FReal)WindAngleDeg));

		Params.Direction = Params.Direction.RotateAngleAxis(LocalSeed.FRandRange(-BigDirectionAngularSpreadDeg, BigDirectionAngularSpreadDeg), FVector::UpVector);

		Params.WaveLength = FMath::Lerp(MinBigWavelength, MaxBigWavelength, FMath::Pow(Alpha, BigWavelengthFalloff));
		Params.Amplitude = FMath::Max(FMath::Lerp(MinBigWaveAmplitude, MaxBigWaveAmplitude, FMath::Pow(Alpha, BigWaveAmplitudeFallof)), 0.0001f);
		Params.Steepness = FMath::Lerp(LargeBigWaveSteepness, SmallBigWaveSteepness, FMath::Pow((float)i / NumWaves, BigWaveSteepnessFalloff));
	}
}
