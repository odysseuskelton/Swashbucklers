// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/DeployableShip.h"
#include "SenseSystem/Public/SensedStimulStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeployableShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SENSESYSTEM_API UClass* Z_Construct_UClass_USensorBase_NoRegister();
	SENSESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSensedStimulus();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ADeployableShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ADeployableShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ATripleCannon_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ADeployableShip::execOnCurrentSense)
	{
		P_GET_OBJECT(USensorBase,Z_Param_SensorPtr);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_TARRAY_REF(FSensedStimulus,Z_Param_Out_inSensedStimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentSense(Z_Param_SensorPtr,Z_Param_Channel,Z_Param_Out_inSensedStimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeployableShip::execOnRep_TurretRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TurretRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADeployableShip::execMulticastSetMaterial)
	{
		P_GET_ENUM(ETeam,Z_Param_TeamOfOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetMaterial_Implementation(ETeam(Z_Param_TeamOfOwner));
		P_NATIVE_END;
	}
	struct DeployableShip_eventMulticastSetMaterial_Parms
	{
		ETeam TeamOfOwner;
	};
	static FName NAME_ADeployableShip_MulticastSetMaterial = FName(TEXT("MulticastSetMaterial"));
	void ADeployableShip::MulticastSetMaterial(ETeam TeamOfOwner)
	{
		DeployableShip_eventMulticastSetMaterial_Parms Parms;
		Parms.TeamOfOwner=TeamOfOwner;
		ProcessEvent(FindFunctionChecked(NAME_ADeployableShip_MulticastSetMaterial),&Parms);
	}
	void ADeployableShip::StaticRegisterNativesADeployableShip()
	{
		UClass* Class = ADeployableShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastSetMaterial", &ADeployableShip::execMulticastSetMaterial },
			{ "OnCurrentSense", &ADeployableShip::execOnCurrentSense },
			{ "OnRep_TurretRotation", &ADeployableShip::execOnRep_TurretRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamOfOwner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamOfOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::NewProp_TeamOfOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::NewProp_TeamOfOwner = { "TeamOfOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeployableShip_eventMulticastSetMaterial_Parms, TeamOfOwner), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::NewProp_TeamOfOwner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::NewProp_TeamOfOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeployableShip, nullptr, "MulticastSetMaterial", nullptr, nullptr, sizeof(DeployableShip_eventMulticastSetMaterial_Parms), Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics
	{
		struct DeployableShip_eventOnCurrentSense_Parms
		{
			const USensorBase* SensorPtr;
			int32 Channel;
			TArray<FSensedStimulus> inSensedStimulus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SensorPtr;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inSensedStimulus_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inSensedStimulus_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inSensedStimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_SensorPtr = { "SensorPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeployableShip_eventOnCurrentSense_Parms, SensorPtr), Z_Construct_UClass_USensorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeployableShip_eventOnCurrentSense_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_Inner = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSensedStimulus, METADATA_PARAMS(nullptr, 0) }; // 1495711532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeployableShip_eventOnCurrentSense_Parms, inSensedStimulus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData)) }; // 1495711532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_SensorPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::NewProp_inSensedStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeployableShip, nullptr, "OnCurrentSense", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::DeployableShip_eventOnCurrentSense_Parms), Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeployableShip_OnCurrentSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeployableShip_OnCurrentSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeployableShip, nullptr, "OnRep_TurretRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeployableShip);
	UClass* Z_Construct_UClass_ADeployableShip_NoRegister()
	{
		return ADeployableShip::StaticClass();
	}
	struct Z_Construct_UClass_ADeployableShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCaptState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCaptState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TripleCannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TripleCannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonDamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonDamageEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeployableShipLifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeployableShipLifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAggroDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAggroDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToDetect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToDetect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeployableShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADeployableShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeployableShip_MulticastSetMaterial, "MulticastSetMaterial" }, // 1761718032
		{ &Z_Construct_UFunction_ADeployableShip_OnCurrentSense, "OnCurrentSense" }, // 193536897
		{ &Z_Construct_UFunction_ADeployableShip_OnRep_TurretRotation, "OnRep_TurretRotation" }, // 365717143
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/DeployableShip.h" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_CurrentRotation = { "CurrentRotation", "OnRep_TurretRotation", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_CurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_OwningCaptState_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_OwningCaptState = { "OwningCaptState", nullptr, (EPropertyFlags)0x0040000000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, OwningCaptState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_OwningCaptState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_OwningCaptState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_TurretBase_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_TurretBase = { "TurretBase", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, TurretBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_TurretBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_TurretBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_TripleCannonClass_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_TripleCannonClass = { "TripleCannonClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, TripleCannonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATripleCannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_TripleCannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_TripleCannonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_CannonDamageEffectClass_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_CannonDamageEffectClass = { "CannonDamageEffectClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, CannonDamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_CannonDamageEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_CannonDamageEffectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_MainWeapon_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, MainWeapon), Z_Construct_UClass_ATripleCannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_MainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_MainWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, SecondaryWeapon), Z_Construct_UClass_ATripleCannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_FireOffset_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_FireOffset = { "FireOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, FireOffset), METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_FireOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_FireOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_DeployableShipLifeTime_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_DeployableShipLifeTime = { "DeployableShipLifeTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, DeployableShipLifeTime), METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_DeployableShipLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_DeployableShipLifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_MaxAggroDistance_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_MaxAggroDistance = { "MaxAggroDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, MaxAggroDistance), METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_MaxAggroDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_MaxAggroDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeployableShip_Statics::NewProp_ActorClassToDetect_MetaData[] = {
		{ "Category", "DeployableShip" },
		{ "ModuleRelativePath", "Public/Ships/DeployableShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeployableShip_Statics::NewProp_ActorClassToDetect = { "ActorClassToDetect", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeployableShip, ActorClassToDetect), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::NewProp_ActorClassToDetect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::NewProp_ActorClassToDetect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeployableShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_CurrentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_OwningCaptState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_TurretBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_TripleCannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_CannonDamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_MainWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_FireOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_DeployableShipLifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_MaxAggroDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeployableShip_Statics::NewProp_ActorClassToDetect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeployableShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeployableShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeployableShip_Statics::ClassParams = {
		&ADeployableShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADeployableShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeployableShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeployableShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeployableShip()
	{
		if (!Z_Registration_Info_UClass_ADeployableShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeployableShip.OuterSingleton, Z_Construct_UClass_ADeployableShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADeployableShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ADeployableShip>()
	{
		return ADeployableShip::StaticClass();
	}

	void ADeployableShip::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentRotation(TEXT("CurrentRotation"));
		static const FName Name_OwningCaptState(TEXT("OwningCaptState"));

		const bool bIsValid = true
			&& Name_CurrentRotation == ClassReps[(int32)ENetFields_Private::CurrentRotation].Property->GetFName()
			&& Name_OwningCaptState == ClassReps[(int32)ENetFields_Private::OwningCaptState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADeployableShip"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeployableShip);
	ADeployableShip::~ADeployableShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADeployableShip, ADeployableShip::StaticClass, TEXT("ADeployableShip"), &Z_Registration_Info_UClass_ADeployableShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeployableShip), 530204556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_3156489600(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
