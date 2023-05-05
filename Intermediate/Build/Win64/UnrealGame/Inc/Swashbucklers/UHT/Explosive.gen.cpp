// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Weapons/Projectiles/Explosive.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosive() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AExplosive();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AExplosive_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AExplosive::execMulticastExplosion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastExplosion_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execServerDetonate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDetonate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execMulticastActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastActivate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execServerSetTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_TeamToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetTeam_Implementation(ETeam(Z_Param_TeamToSet));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execMulticastSetMaterial)
	{
		P_GET_ENUM(ETeam,Z_Param_TeamOfOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetMaterial_Implementation(ETeam(Z_Param_TeamOfOwner));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execSetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execMulticastWaterSplash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastWaterSplash_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosive::execExplosiveOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExplosiveOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct Explosive_eventMulticastSetMaterial_Parms
	{
		ETeam TeamOfOwner;
	};
	struct Explosive_eventServerSetTeam_Parms
	{
		ETeam TeamToSet;
	};
	static FName NAME_AExplosive_MulticastActivate = FName(TEXT("MulticastActivate"));
	void AExplosive::MulticastActivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_MulticastActivate),NULL);
	}
	static FName NAME_AExplosive_MulticastExplosion = FName(TEXT("MulticastExplosion"));
	void AExplosive::MulticastExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_MulticastExplosion),NULL);
	}
	static FName NAME_AExplosive_MulticastSetMaterial = FName(TEXT("MulticastSetMaterial"));
	void AExplosive::MulticastSetMaterial(ETeam TeamOfOwner)
	{
		Explosive_eventMulticastSetMaterial_Parms Parms;
		Parms.TeamOfOwner=TeamOfOwner;
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_MulticastSetMaterial),&Parms);
	}
	static FName NAME_AExplosive_MulticastWaterSplash = FName(TEXT("MulticastWaterSplash"));
	void AExplosive::MulticastWaterSplash()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_MulticastWaterSplash),NULL);
	}
	static FName NAME_AExplosive_ServerDetonate = FName(TEXT("ServerDetonate"));
	void AExplosive::ServerDetonate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_ServerDetonate),NULL);
	}
	static FName NAME_AExplosive_ServerSetTeam = FName(TEXT("ServerSetTeam"));
	void AExplosive::ServerSetTeam(ETeam TeamToSet)
	{
		Explosive_eventServerSetTeam_Parms Parms;
		Parms.TeamToSet=TeamToSet;
		ProcessEvent(FindFunctionChecked(NAME_AExplosive_ServerSetTeam),&Parms);
	}
	void AExplosive::StaticRegisterNativesAExplosive()
	{
		UClass* Class = AExplosive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExplosiveOverlap", &AExplosive::execExplosiveOverlap },
			{ "MulticastActivate", &AExplosive::execMulticastActivate },
			{ "MulticastExplosion", &AExplosive::execMulticastExplosion },
			{ "MulticastSetMaterial", &AExplosive::execMulticastSetMaterial },
			{ "MulticastWaterSplash", &AExplosive::execMulticastWaterSplash },
			{ "ServerDetonate", &AExplosive::execServerDetonate },
			{ "ServerSetTeam", &AExplosive::execServerSetTeam },
			{ "SetMaterial", &AExplosive::execSetMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics
	{
		struct Explosive_eventExplosiveOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventExplosiveOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventExplosiveOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventExplosiveOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventExplosiveOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Explosive_eventExplosiveOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Explosive_eventExplosiveOverlap_Parms), &Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventExplosiveOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "ExplosiveOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::Explosive_eventExplosiveOverlap_Parms), Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_ExplosiveOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_ExplosiveOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_MulticastActivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_MulticastActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_MulticastActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "MulticastActivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_MulticastActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_MulticastActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_MulticastActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_MulticastActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "MulticastExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_MulticastExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_MulticastExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamOfOwner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamOfOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::NewProp_TeamOfOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::NewProp_TeamOfOwner = { "TeamOfOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventMulticastSetMaterial_Parms, TeamOfOwner), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::NewProp_TeamOfOwner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::NewProp_TeamOfOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "MulticastSetMaterial", nullptr, nullptr, sizeof(Explosive_eventMulticastSetMaterial_Parms), Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_MulticastSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_MulticastSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "MulticastWaterSplash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_MulticastWaterSplash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_MulticastWaterSplash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_ServerDetonate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ServerDetonate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_ServerDetonate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "ServerDetonate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ServerDetonate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ServerDetonate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_ServerDetonate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_ServerDetonate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamToSet_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::NewProp_TeamToSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::NewProp_TeamToSet = { "TeamToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Explosive_eventServerSetTeam_Parms, TeamToSet), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::NewProp_TeamToSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::NewProp_TeamToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "ServerSetTeam", nullptr, nullptr, sizeof(Explosive_eventServerSetTeam_Parms), Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_ServerSetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_ServerSetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosive_SetMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosive_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosive_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosive, nullptr, "SetMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosive_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosive_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosive_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosive_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExplosive);
	UClass* Z_Construct_UClass_AExplosive_NoRegister()
	{
		return AExplosive::StaticClass();
	}
	struct Z_Construct_UClass_AExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExplosiveTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExplosiveTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosiveMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetonatedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DetonatedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplashSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplashSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterExplosion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterExplosion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivated_MetaData[];
#endif
		static void NewProp_bActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosiveGEHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExplosive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExplosive_ExplosiveOverlap, "ExplosiveOverlap" }, // 3388320129
		{ &Z_Construct_UFunction_AExplosive_MulticastActivate, "MulticastActivate" }, // 2284194307
		{ &Z_Construct_UFunction_AExplosive_MulticastExplosion, "MulticastExplosion" }, // 3044140915
		{ &Z_Construct_UFunction_AExplosive_MulticastSetMaterial, "MulticastSetMaterial" }, // 2893129919
		{ &Z_Construct_UFunction_AExplosive_MulticastWaterSplash, "MulticastWaterSplash" }, // 1364799203
		{ &Z_Construct_UFunction_AExplosive_ServerDetonate, "ServerDetonate" }, // 451218120
		{ &Z_Construct_UFunction_AExplosive_ServerSetTeam, "ServerSetTeam" }, // 4099219023
		{ &Z_Construct_UFunction_AExplosive_SetMaterial, "SetMaterial" }, // 1028235257
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Projectiles/Explosive.h" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam = { "ExplosiveTeam", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, ExplosiveTeam), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam_MetaData)) }; // 4006013224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveMesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Explosive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveMesh = { "ExplosiveMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, ExplosiveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_PirateMaterial_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_PirateMaterial = { "PirateMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, PirateMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_PirateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_PirateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_PrivateerMaterial_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_PrivateerMaterial = { "PrivateerMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, PrivateerMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_PrivateerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_PrivateerMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Explosive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_SearchingSound_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_SearchingSound = { "SearchingSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, SearchingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_SearchingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_SearchingSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_ActivatedSound_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ActivatedSound = { "ActivatedSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, ActivatedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_ActivatedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_ActivatedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_DetonatedSound_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_DetonatedSound = { "DetonatedSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, DetonatedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_DetonatedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_DetonatedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSystem_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSystem = { "SplashSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, SplashSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSound_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSound = { "SplashSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, SplashSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosionSystem_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosionSystem = { "ExplosionSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, ExplosionSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosionSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosionSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_WaterExplosion_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_WaterExplosion = { "WaterExplosion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, WaterExplosion), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_WaterExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_WaterExplosion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	void Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated_SetBit(void* Obj)
	{
		((AExplosive*)Obj)->bActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AExplosive), &Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Explosive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveGEHandle = { "ExplosiveGEHandle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosive, ExplosiveGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveGEHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_PirateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_PrivateerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_SearchingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ActivatedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_DetonatedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_SplashSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosionSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_WaterExplosion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_bActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosive_Statics::NewProp_ExplosiveGEHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosive_Statics::ClassParams = {
		&AExplosive::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExplosive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosive()
	{
		if (!Z_Registration_Info_UClass_AExplosive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosive.OuterSingleton, Z_Construct_UClass_AExplosive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExplosive.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AExplosive>()
	{
		return AExplosive::StaticClass();
	}

	void AExplosive::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ExplosiveTeam(TEXT("ExplosiveTeam"));
		static const FName Name_bActivated(TEXT("bActivated"));

		const bool bIsValid = true
			&& Name_ExplosiveTeam == ClassReps[(int32)ENetFields_Private::ExplosiveTeam].Property->GetFName()
			&& Name_bActivated == ClassReps[(int32)ENetFields_Private::bActivated].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AExplosive"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosive);
	AExplosive::~AExplosive() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExplosive, AExplosive::StaticClass, TEXT("AExplosive"), &Z_Registration_Info_UClass_AExplosive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosive), 657644391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_2837705661(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
