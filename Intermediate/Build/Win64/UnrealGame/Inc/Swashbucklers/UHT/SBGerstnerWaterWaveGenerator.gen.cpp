// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Waves/SBGerstnerWaterWaveGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBGerstnerWaterWaveGenerator() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGerstnerWaterWaveGenerator();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGerstnerWaterWaveGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase();
// End Cross Module References
	void USBGerstnerWaterWaveGenerator::StaticRegisterNativesUSBGerstnerWaterWaveGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBGerstnerWaterWaveGenerator);
	UClass* Z_Construct_UClass_USBGerstnerWaterWaveGenerator_NoRegister()
	{
		return USBGerstnerWaterWaveGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBigWaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBigWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Randomness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Randomness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WavelengthFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WavelengthFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindAngleDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindAngleDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAngularSpreadDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionAngularSpreadDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmallWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteepnessFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteepnessFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBigWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBigWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBigWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBigWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigWavelengthFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BigWavelengthFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBigWaveAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBigWaveAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBigWaveAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBigWaveAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigWaveAmplitudeFallof_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BigWaveAmplitudeFallof;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallBigWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmallBigWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeBigWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeBigWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigWaveSteepnessFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BigWaveSteepnessFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigWindAngleDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BigWindAngleDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BigDirectionAngularSpreadDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BigDirectionAngularSpreadDeg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumWaves_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, NumWaves), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumBigWaves_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumBigWaves = { "NumBigWaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, NumBigWaves), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumBigWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumBigWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, Seed), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Randomness_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Randomness = { "Randomness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, Randomness), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Randomness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Randomness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinWavelength = { "MinWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MinWavelength), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxWavelength = { "MaxWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MaxWavelength), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WavelengthFalloff_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WavelengthFalloff = { "WavelengthFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, WavelengthFalloff), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WavelengthFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WavelengthFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinAmplitude = { "MinAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MinAmplitude), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxAmplitude = { "MaxAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MaxAmplitude), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_AmplitudeFalloff_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_AmplitudeFalloff = { "AmplitudeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, AmplitudeFalloff), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_AmplitudeFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_AmplitudeFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WindAngleDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "DisplayName", "Dominant Wind Angle" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WindAngleDeg = { "WindAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, WindAngleDeg), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WindAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WindAngleDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_DirectionAngularSpreadDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Direction Angular Spread" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMin", "0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_DirectionAngularSpreadDeg = { "DirectionAngularSpreadDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, DirectionAngularSpreadDeg), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_DirectionAngularSpreadDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_DirectionAngularSpreadDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallWaveSteepness = { "SmallWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, SmallWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeWaveSteepness = { "LargeWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, LargeWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SteepnessFalloff_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SteepnessFalloff = { "SteepnessFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, SteepnessFalloff), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SteepnessFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SteepnessFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "Comment", "//Big waves\n" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "ToolTip", "Big waves" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWavelength = { "MinBigWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MinBigWavelength), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWavelength = { "MaxBigWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MaxBigWavelength), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWavelengthFalloff_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWavelengthFalloff = { "BigWavelengthFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, BigWavelengthFalloff), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWavelengthFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWavelengthFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWaveAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWaveAmplitude = { "MinBigWaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MinBigWaveAmplitude), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWaveAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWaveAmplitude = { "MaxBigWaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, MaxBigWaveAmplitude), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveAmplitudeFallof_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveAmplitudeFallof = { "BigWaveAmplitudeFallof", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, BigWaveAmplitudeFallof), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveAmplitudeFallof_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveAmplitudeFallof_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallBigWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallBigWaveSteepness = { "SmallBigWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, SmallBigWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallBigWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallBigWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeBigWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeBigWaveSteepness = { "LargeBigWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, LargeBigWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeBigWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeBigWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveSteepnessFalloff_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveSteepnessFalloff = { "BigWaveSteepnessFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, BigWaveSteepnessFalloff), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveSteepnessFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveSteepnessFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWindAngleDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "DisplayName", "Big Dominant Wind Angle" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWindAngleDeg = { "BigWindAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, BigWindAngleDeg), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWindAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWindAngleDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigDirectionAngularSpreadDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Big Direction Angular Spread" },
		{ "ModuleRelativePath", "Public/Waves/SBGerstnerWaterWaveGenerator.h" },
		{ "UIMin", "0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigDirectionAngularSpreadDeg = { "BigDirectionAngularSpreadDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGerstnerWaterWaveGenerator, BigDirectionAngularSpreadDeg), METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigDirectionAngularSpreadDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigDirectionAngularSpreadDeg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_NumBigWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_Randomness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WavelengthFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_AmplitudeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_WindAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_DirectionAngularSpreadDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SteepnessFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWavelengthFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MinBigWaveAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_MaxBigWaveAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveAmplitudeFallof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_SmallBigWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_LargeBigWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWaveSteepnessFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigWindAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::NewProp_BigDirectionAngularSpreadDeg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBGerstnerWaterWaveGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::ClassParams = {
		&USBGerstnerWaterWaveGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBGerstnerWaterWaveGenerator()
	{
		if (!Z_Registration_Info_UClass_USBGerstnerWaterWaveGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBGerstnerWaterWaveGenerator.OuterSingleton, Z_Construct_UClass_USBGerstnerWaterWaveGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBGerstnerWaterWaveGenerator.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USBGerstnerWaterWaveGenerator>()
	{
		return USBGerstnerWaterWaveGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBGerstnerWaterWaveGenerator);
	USBGerstnerWaterWaveGenerator::~USBGerstnerWaterWaveGenerator() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Waves_SBGerstnerWaterWaveGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Waves_SBGerstnerWaterWaveGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBGerstnerWaterWaveGenerator, USBGerstnerWaterWaveGenerator::StaticClass, TEXT("USBGerstnerWaterWaveGenerator"), &Z_Registration_Info_UClass_USBGerstnerWaterWaveGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBGerstnerWaterWaveGenerator), 888978646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Waves_SBGerstnerWaterWaveGenerator_h_1506928759(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Waves_SBGerstnerWaterWaveGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Waves_SBGerstnerWaterWaveGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
