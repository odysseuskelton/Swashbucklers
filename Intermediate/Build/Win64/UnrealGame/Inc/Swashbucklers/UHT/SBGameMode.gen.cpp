// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameModes/SBGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AMerchantShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBGameMode();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ASBGameMode::execMegaJarOfDirt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MegaJarOfDirt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameMode::execDrRockso)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrRockso();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameMode::execTakeTheirLadderPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeTheirLadderPoints();
		P_NATIVE_END;
	}
	void ASBGameMode::StaticRegisterNativesASBGameMode()
	{
		UClass* Class = ASBGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrRockso", &ASBGameMode::execDrRockso },
			{ "MegaJarOfDirt", &ASBGameMode::execMegaJarOfDirt },
			{ "TakeTheirLadderPoints", &ASBGameMode::execTakeTheirLadderPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBGameMode_DrRockso_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameMode_DrRockso_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameMode_DrRockso_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameMode, nullptr, "DrRockso", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameMode_DrRockso_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameMode_DrRockso_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameMode_DrRockso()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameMode_DrRockso_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameMode, nullptr, "MegaJarOfDirt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameMode, nullptr, "TakeTheirLadderPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASBGameMode);
	UClass* Z_Construct_UClass_ASBGameMode_NoRegister()
	{
		return ASBGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASBGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KrakenSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KrakenSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KrakenToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_KrakenToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIWaveSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AIWaveSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenAISpawn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenAISpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveShipClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaveShipClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAIToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAIToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MerchantShipClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MerchantShipClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreasureSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBGameMode_DrRockso, "DrRockso" }, // 286877360
		{ &Z_Construct_UFunction_ASBGameMode_MegaJarOfDirt, "MegaJarOfDirt" }, // 639833597
		{ &Z_Construct_UFunction_ASBGameMode_TakeTheirLadderPoints, "TakeTheirLadderPoints" }, // 978437492
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/SBGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenSpawnTime_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenSpawnTime = { "KrakenSpawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, KrakenSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenToSpawn_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenToSpawn = { "KrakenToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, KrakenToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_AIWaveSpawnTime_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_AIWaveSpawnTime = { "AIWaveSpawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, AIWaveSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_AIWaveSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_AIWaveSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_TimeBetweenAISpawn_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_TimeBetweenAISpawn = { "TimeBetweenAISpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, TimeBetweenAISpawn), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_TimeBetweenAISpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_TimeBetweenAISpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_WaveShipClass_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_WaveShipClass = { "WaveShipClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, WaveShipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_WaveShipClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_WaveShipClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_NumberOfAIToSpawn_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_NumberOfAIToSpawn = { "NumberOfAIToSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, NumberOfAIToSpawn), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_NumberOfAIToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_NumberOfAIToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_SpawnIndex_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_SpawnIndex = { "SpawnIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, SpawnIndex), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_SpawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_SpawnIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_MerchantShipClass_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_MerchantShipClass = { "MerchantShipClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, MerchantShipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMerchantShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_MerchantShipClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_MerchantShipClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_TreasureSpawnTime_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_TreasureSpawnTime = { "TreasureSpawnTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, TreasureSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_TreasureSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_TreasureSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameMode_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "SBGameMode" },
		{ "ModuleRelativePath", "Public/GameModes/SBGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameMode_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameMode, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::NewProp_WarmupTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_KrakenToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_AIWaveSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_TimeBetweenAISpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_WaveShipClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_NumberOfAIToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_SpawnIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_MerchantShipClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_TreasureSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameMode_Statics::NewProp_WarmupTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASBGameMode_Statics::ClassParams = {
		&ASBGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBGameMode()
	{
		if (!Z_Registration_Info_UClass_ASBGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASBGameMode.OuterSingleton, Z_Construct_UClass_ASBGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASBGameMode.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ASBGameMode>()
	{
		return ASBGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBGameMode);
	ASBGameMode::~ASBGameMode() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASBGameMode, ASBGameMode::StaticClass, TEXT("ASBGameMode"), &Z_Registration_Info_UClass_ASBGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASBGameMode), 75067395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBGameMode_h_852216518(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
