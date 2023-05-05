// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/AIArtilleryShip.h"
#include "AIModule/Classes/AITypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "SenseSystem/Public/SensedStimulStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIArtilleryShip() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	SENSESYSTEM_API UClass* Z_Construct_UClass_USensorBase_NoRegister();
	SENSESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSensedStimulus();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIArtilleryShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIArtilleryShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AAIArtilleryShip::execFireArtilleryCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireArtilleryCannon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIArtilleryShip::execOnLostSense)
	{
		P_GET_OBJECT(USensorBase,Z_Param_SensorPtr);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_TARRAY_REF(FSensedStimulus,Z_Param_Out_inSensedStimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLostSense(Z_Param_SensorPtr,Z_Param_Channel,Z_Param_Out_inSensedStimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIArtilleryShip::execOnCurrentSense)
	{
		P_GET_OBJECT(USensorBase,Z_Param_SensorPtr);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_TARRAY_REF(FSensedStimulus,Z_Param_Out_inSensedStimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentSense(Z_Param_SensorPtr,Z_Param_Channel,Z_Param_Out_inSensedStimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIArtilleryShip::execOnMoveCompleted)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void AAIArtilleryShip::StaticRegisterNativesAAIArtilleryShip()
	{
		UClass* Class = AAIArtilleryShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireArtilleryCannon", &AAIArtilleryShip::execFireArtilleryCannon },
			{ "OnCurrentSense", &AAIArtilleryShip::execOnCurrentSense },
			{ "OnLostSense", &AAIArtilleryShip::execOnLostSense },
			{ "OnMoveCompleted", &AAIArtilleryShip::execOnMoveCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIArtilleryShip, nullptr, "FireArtilleryCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics
	{
		struct AIArtilleryShip_eventOnCurrentSense_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_SensorPtr = { "SensorPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnCurrentSense_Parms, SensorPtr), Z_Construct_UClass_USensorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_SensorPtr_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnCurrentSense_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_Inner = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSensedStimulus, METADATA_PARAMS(nullptr, 0) }; // 1495711532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnCurrentSense_Parms, inSensedStimulus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_MetaData)) }; // 1495711532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_SensorPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::NewProp_inSensedStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIArtilleryShip, nullptr, "OnCurrentSense", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::AIArtilleryShip_eventOnCurrentSense_Parms), Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics
	{
		struct AIArtilleryShip_eventOnLostSense_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_SensorPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_SensorPtr = { "SensorPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnLostSense_Parms, SensorPtr), Z_Construct_UClass_USensorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_SensorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_SensorPtr_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnLostSense_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus_Inner = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSensedStimulus, METADATA_PARAMS(nullptr, 0) }; // 1495711532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus = { "inSensedStimulus", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnLostSense_Parms, inSensedStimulus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus_MetaData)) }; // 1495711532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_SensorPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::NewProp_inSensedStimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIArtilleryShip, nullptr, "OnLostSense", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::AIArtilleryShip_eventOnLostSense_Parms), Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIArtilleryShip_OnLostSense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIArtilleryShip_OnLostSense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics
	{
		struct AIArtilleryShip_eventOnMoveCompleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) }; // 4070710876
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIArtilleryShip_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) }; // 1916887335
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::NewProp_RequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIArtilleryShip, nullptr, "OnMoveCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::AIArtilleryShip_eventOnMoveCompleted_Parms), Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIArtilleryShip);
	UClass* Z_Construct_UClass_AAIArtilleryShip_NoRegister()
	{
		return AAIArtilleryShip::StaticClass();
	}
	struct Z_Construct_UClass_AAIArtilleryShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToDetect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToDetect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAggroRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAggroRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiringDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRepositionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRepositionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRepositionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRepositionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ArtilleryProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArtilleryGEHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretBaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretBaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretCannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretCannonMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIArtilleryShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIArtilleryShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIArtilleryShip_FireArtilleryCannon, "FireArtilleryCannon" }, // 1650524162
		{ &Z_Construct_UFunction_AAIArtilleryShip_OnCurrentSense, "OnCurrentSense" }, // 2858326283
		{ &Z_Construct_UFunction_AAIArtilleryShip_OnLostSense, "OnLostSense" }, // 793062332
		{ &Z_Construct_UFunction_AAIArtilleryShip_OnMoveCompleted, "OnMoveCompleted" }, // 2934336047
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/AIArtilleryShip.h" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ActorClassToDetect_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ActorClassToDetect = { "ActorClassToDetect", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, ActorClassToDetect), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ActorClassToDetect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ActorClassToDetect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackAcceptanceRadius_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackAcceptanceRadius = { "AttackAcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, AttackAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackDelay_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackDelay = { "AttackDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, AttackDelay), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxAggroRange_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxAggroRange = { "MaxAggroRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, MaxAggroRange), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxAggroRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxAggroRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_FiringDistance_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_FiringDistance = { "FiringDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, FiringDistance), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_FiringDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_FiringDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MinRepositionDistance_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MinRepositionDistance = { "MinRepositionDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, MinRepositionDistance), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MinRepositionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MinRepositionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxRepositionDistance_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxRepositionDistance = { "MaxRepositionDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, MaxRepositionDistance), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxRepositionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxRepositionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_CannonDistanceMultiplier_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_CannonDistanceMultiplier = { "CannonDistanceMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, CannonDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_CannonDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_CannonDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryProjectileClass = { "ArtilleryProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, ArtilleryProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AIArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryGEHandle = { "ArtilleryGEHandle", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, ArtilleryGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData)) }; // 1303953225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretBaseMesh_MetaData[] = {
		{ "Category", "AIArtilleryShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretBaseMesh = { "TurretBaseMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, TurretBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretBaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretCannonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AIArtilleryShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/AIArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretCannonMesh = { "TurretCannonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIArtilleryShip, TurretCannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretCannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretCannonMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIArtilleryShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ActorClassToDetect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackAcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_AttackDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxAggroRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_FiringDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MinRepositionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_MaxRepositionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_CannonDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_ArtilleryGEHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretBaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIArtilleryShip_Statics::NewProp_TurretCannonMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIArtilleryShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIArtilleryShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIArtilleryShip_Statics::ClassParams = {
		&AAIArtilleryShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIArtilleryShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIArtilleryShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIArtilleryShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIArtilleryShip()
	{
		if (!Z_Registration_Info_UClass_AAIArtilleryShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIArtilleryShip.OuterSingleton, Z_Construct_UClass_AAIArtilleryShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIArtilleryShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AAIArtilleryShip>()
	{
		return AAIArtilleryShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIArtilleryShip);
	AAIArtilleryShip::~AAIArtilleryShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIArtilleryShip, AAIArtilleryShip::StaticClass, TEXT("AAIArtilleryShip"), &Z_Registration_Info_UClass_AAIArtilleryShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIArtilleryShip), 1101012094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_1896787099(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
