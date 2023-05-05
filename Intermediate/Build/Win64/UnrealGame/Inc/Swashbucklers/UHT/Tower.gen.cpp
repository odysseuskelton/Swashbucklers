// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Buildings/Tower.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABuilding();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ATower();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ATower_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ATower::execOnRep_RotateCannonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RotateCannonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execOnRep_RotateTurret)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RotateTurret();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execMulticastTurretCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastTurretCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execServerTurretCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTurretCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execFireTowerCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireTowerCannon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execOutAggroRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OutAggroRange(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower::execInAggroRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InAggroRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct Tower_eventMulticastTurretCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	struct Tower_eventServerTurretCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	static FName NAME_ATower_MulticastTurretCannonFireEffects = FName(TEXT("MulticastTurretCannonFireEffects"));
	void ATower::MulticastTurretCannonFireEffects(FTransform TransformToSpawnAt)
	{
		Tower_eventMulticastTurretCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ATower_MulticastTurretCannonFireEffects),&Parms);
	}
	static FName NAME_ATower_ServerTurretCannonFireEffects = FName(TEXT("ServerTurretCannonFireEffects"));
	void ATower::ServerTurretCannonFireEffects(FTransform TransformToSpawnAt)
	{
		Tower_eventServerTurretCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ATower_ServerTurretCannonFireEffects),&Parms);
	}
	void ATower::StaticRegisterNativesATower()
	{
		UClass* Class = ATower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireTowerCannon", &ATower::execFireTowerCannon },
			{ "InAggroRange", &ATower::execInAggroRange },
			{ "MulticastTurretCannonFireEffects", &ATower::execMulticastTurretCannonFireEffects },
			{ "OnRep_RotateCannonMesh", &ATower::execOnRep_RotateCannonMesh },
			{ "OnRep_RotateTurret", &ATower::execOnRep_RotateTurret },
			{ "OutAggroRange", &ATower::execOutAggroRange },
			{ "ServerTurretCannonFireEffects", &ATower::execServerTurretCannonFireEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATower_FireTowerCannon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_FireTowerCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_FireTowerCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "FireTowerCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_FireTowerCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_FireTowerCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_FireTowerCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_FireTowerCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_InAggroRange_Statics
	{
		struct Tower_eventInAggroRange_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventInAggroRange_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventInAggroRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventInAggroRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventInAggroRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Tower_eventInAggroRange_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Tower_eventInAggroRange_Parms), &Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventInAggroRange_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_InAggroRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_InAggroRange_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_InAggroRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_InAggroRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "InAggroRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATower_InAggroRange_Statics::Tower_eventInAggroRange_Parms), Z_Construct_UFunction_ATower_InAggroRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_InAggroRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_InAggroRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_InAggroRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_InAggroRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_InAggroRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventMulticastTurretCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "MulticastTurretCannonFireEffects", nullptr, nullptr, sizeof(Tower_eventMulticastTurretCannonFireEffects_Parms), Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "OnRep_RotateCannonMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "OnRep_RotateTurret", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_OnRep_RotateTurret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_OnRep_RotateTurret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_OutAggroRange_Statics
	{
		struct Tower_eventOutAggroRange_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventOutAggroRange_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventOutAggroRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventOutAggroRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventOutAggroRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_OutAggroRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_OutAggroRange_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_OutAggroRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_OutAggroRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "OutAggroRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATower_OutAggroRange_Statics::Tower_eventOutAggroRange_Parms), Z_Construct_UFunction_ATower_OutAggroRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OutAggroRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_OutAggroRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_OutAggroRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_OutAggroRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_OutAggroRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Tower_eventServerTurretCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower, nullptr, "ServerTurretCannonFireEffects", nullptr, nullptr, sizeof(Tower_eventServerTurretCannonFireEffects_Parms), Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATower);
	UClass* Z_Construct_UClass_ATower_NoRegister()
	{
		return ATower::StaticClass();
	}
	struct Z_Construct_UClass_ATower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonFireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonFireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretBaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretBaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretCannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretCannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggroComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AggroComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerCannonAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TowerCannonAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonballClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonballClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonFireSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonFireSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonSmokeSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonSmokeSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretBaseMeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretBaseMeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretCannonMeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurretCannonMeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerCannonGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TowerCannonGEHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATower_FireTowerCannon, "FireTowerCannon" }, // 2079480077
		{ &Z_Construct_UFunction_ATower_InAggroRange, "InAggroRange" }, // 3500259339
		{ &Z_Construct_UFunction_ATower_MulticastTurretCannonFireEffects, "MulticastTurretCannonFireEffects" }, // 4166875746
		{ &Z_Construct_UFunction_ATower_OnRep_RotateCannonMesh, "OnRep_RotateCannonMesh" }, // 2687932098
		{ &Z_Construct_UFunction_ATower_OnRep_RotateTurret, "OnRep_RotateTurret" }, // 1577340219
		{ &Z_Construct_UFunction_ATower_OutAggroRange, "OutAggroRange" }, // 189457039
		{ &Z_Construct_UFunction_ATower_ServerTurretCannonFireEffects, "ServerTurretCannonFireEffects" }, // 1466945467
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/Tower.h" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_CannonFireRate_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_CannonFireRate = { "CannonFireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, CannonFireRate), METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TurretRotationSpeed_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TurretRotationSpeed = { "TurretRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TurretRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TurretRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TurretRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMesh_MetaData[] = {
		{ "Category", "Tower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMesh = { "TurretBaseMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TurretBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMesh_MetaData[] = {
		{ "Category", "Tower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMesh = { "TurretCannonMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TurretCannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_AggroComponent_MetaData[] = {
		{ "Category", "Tower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_AggroComponent = { "AggroComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, AggroComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_AggroComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_AggroComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonAbility_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonAbility = { "TowerCannonAbility", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TowerCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_CannonballClass_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_CannonballClass = { "CannonballClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, CannonballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_CannonballClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_CannonballClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSystem_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSystem = { "CannonFireSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, CannonFireSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_CannonSmokeSystem_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_CannonSmokeSystem = { "CannonSmokeSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, CannonSmokeSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_CannonSmokeSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_CannonSmokeSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSound_MetaData[] = {
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSound = { "CannonFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, CannonFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMeshRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMeshRotation = { "TurretBaseMeshRotation", "OnRep_RotateTurret", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TurretBaseMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMeshRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMeshRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMeshRotation = { "TurretCannonMeshRotation", "OnRep_RotateCannonMesh", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TurretCannonMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMeshRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Tower" },
		{ "ModuleRelativePath", "Public/Buildings/Tower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonGEHandle = { "TowerCannonGEHandle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATower, TowerCannonGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonGEHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_CannonFireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TurretRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_AggroComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_CannonballClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_CannonSmokeSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_CannonFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TurretBaseMeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TurretCannonMeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Statics::NewProp_TowerCannonGEHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATower_Statics::ClassParams = {
		&ATower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower()
	{
		if (!Z_Registration_Info_UClass_ATower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATower.OuterSingleton, Z_Construct_UClass_ATower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATower.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ATower>()
	{
		return ATower::StaticClass();
	}

	void ATower::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TurretBaseMeshRotation(TEXT("TurretBaseMeshRotation"));
		static const FName Name_TurretCannonMeshRotation(TEXT("TurretCannonMeshRotation"));

		const bool bIsValid = true
			&& Name_TurretBaseMeshRotation == ClassReps[(int32)ENetFields_Private::TurretBaseMeshRotation].Property->GetFName()
			&& Name_TurretCannonMeshRotation == ClassReps[(int32)ENetFields_Private::TurretCannonMeshRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATower"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower);
	ATower::~ATower() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATower, ATower::StaticClass, TEXT("ATower"), &Z_Registration_Info_UClass_ATower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATower), 2079689828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_917952693(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
