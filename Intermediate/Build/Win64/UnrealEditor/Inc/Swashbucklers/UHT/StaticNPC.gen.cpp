// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/AI/StaticNPC.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticNPC() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AStaticNPC();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AStaticNPC_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbarComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AStaticNPC::execMulticastOnHealthChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnHealthChanged_Implementation(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execOnHealthChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execSetCanRotate)
	{
		P_GET_UBOOL(Z_Param_bUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanRotate(Z_Param_bUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execAttackFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execExitAggroRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitAggroRange(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execEnterAggroRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterAggroRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticNPC::execOnMeshOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMeshOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct StaticNPC_eventMulticastOnHealthChanged_Parms
	{
		float Health;
		float MaxHealth;
		AActor* InstigatorActor;
	};
	static FName NAME_AStaticNPC_MulticastOnHealthChanged = FName(TEXT("MulticastOnHealthChanged"));
	void AStaticNPC::MulticastOnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor)
	{
		StaticNPC_eventMulticastOnHealthChanged_Parms Parms;
		Parms.Health=Health;
		Parms.MaxHealth=MaxHealth;
		Parms.InstigatorActor=InstigatorActor;
		ProcessEvent(FindFunctionChecked(NAME_AStaticNPC_MulticastOnHealthChanged),&Parms);
	}
	void AStaticNPC::StaticRegisterNativesAStaticNPC()
	{
		UClass* Class = AStaticNPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackFinished", &AStaticNPC::execAttackFinished },
			{ "EnterAggroRange", &AStaticNPC::execEnterAggroRange },
			{ "ExitAggroRange", &AStaticNPC::execExitAggroRange },
			{ "MulticastOnHealthChanged", &AStaticNPC::execMulticastOnHealthChanged },
			{ "OnHealthChanged", &AStaticNPC::execOnHealthChanged },
			{ "OnMeshOverlap", &AStaticNPC::execOnMeshOverlap },
			{ "SetCanRotate", &AStaticNPC::execSetCanRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "AttackFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_AttackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_AttackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics
	{
		struct StaticNPC_eventEnterAggroRange_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventEnterAggroRange_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventEnterAggroRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventEnterAggroRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventEnterAggroRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((StaticNPC_eventEnterAggroRange_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticNPC_eventEnterAggroRange_Parms), &Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventEnterAggroRange_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "EnterAggroRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::StaticNPC_eventEnterAggroRange_Parms), Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_EnterAggroRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_EnterAggroRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics
	{
		struct StaticNPC_eventExitAggroRange_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventExitAggroRange_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventExitAggroRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventExitAggroRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventExitAggroRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "ExitAggroRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::StaticNPC_eventExitAggroRange_Parms), Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_ExitAggroRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_ExitAggroRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventMulticastOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventMulticastOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventMulticastOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "MulticastOnHealthChanged", nullptr, nullptr, sizeof(StaticNPC_eventMulticastOnHealthChanged_Parms), Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics
	{
		struct StaticNPC_eventOnHealthChanged_Parms
		{
			float Health;
			float MaxHealth;
			AActor* InstigatorActor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::StaticNPC_eventOnHealthChanged_Parms), Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics
	{
		struct StaticNPC_eventOnMeshOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnMeshOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnMeshOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnMeshOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnMeshOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((StaticNPC_eventOnMeshOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticNPC_eventOnMeshOverlap_Parms), &Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticNPC_eventOnMeshOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "OnMeshOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::StaticNPC_eventOnMeshOverlap_Parms), Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_OnMeshOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_OnMeshOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics
	{
		struct StaticNPC_eventSetCanRotate_Parms
		{
			bool bUpdate;
		};
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((StaticNPC_eventSetCanRotate_Parms*)Obj)->bUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticNPC_eventSetCanRotate_Parms), &Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::NewProp_bUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticNPC, nullptr, "SetCanRotate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::StaticNPC_eventSetCanRotate_Parms), Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticNPC_SetCanRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticNPC_SetCanRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticNPC);
	UClass* Z_Construct_UClass_AStaticNPC_NoRegister()
	{
		return AStaticNPC::StaticClass();
	}
	struct Z_Construct_UClass_AStaticNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KrakenHitForceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KrakenHitForceMultiplier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AITeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AITeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AITeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggroComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AggroComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthbarComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthbarComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStaticNPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticNPC_AttackFinished, "AttackFinished" }, // 3446438488
		{ &Z_Construct_UFunction_AStaticNPC_EnterAggroRange, "EnterAggroRange" }, // 107538276
		{ &Z_Construct_UFunction_AStaticNPC_ExitAggroRange, "ExitAggroRange" }, // 219789711
		{ &Z_Construct_UFunction_AStaticNPC_MulticastOnHealthChanged, "MulticastOnHealthChanged" }, // 3772175744
		{ &Z_Construct_UFunction_AStaticNPC_OnHealthChanged, "OnHealthChanged" }, // 1410273192
		{ &Z_Construct_UFunction_AStaticNPC_OnMeshOverlap, "OnMeshOverlap" }, // 1460013489
		{ &Z_Construct_UFunction_AStaticNPC_SetCanRotate, "SetCanRotate" }, // 2363760846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/StaticNPC.h" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_AttackDelay_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_AttackDelay = { "AttackDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, AttackDelay), METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AttackDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_TrackingSpeed_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_TrackingSpeed = { "TrackingSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, TrackingSpeed), METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_TrackingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_TrackingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_Bounty_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, Bounty), METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_Bounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_Bounty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_KrakenHitForceMultiplier_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_KrakenHitForceMultiplier = { "KrakenHitForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, KrakenHitForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_KrakenHitForceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_KrakenHitForceMultiplier_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam = { "AITeam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, AITeam), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam_MetaData)) }; // 4006013224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, CharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_CharacterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_CharacterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_AggroComponent_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_AggroComponent = { "AggroComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, AggroComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AggroComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_AggroComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_HealthbarComponent_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_HealthbarComponent = { "HealthbarComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, HealthbarComponent), Z_Construct_UClass_UHealthbarComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_HealthbarComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_HealthbarComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_StartingHealth_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_StartingHealth = { "StartingHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, StartingHealth), METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_StartingHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_StartingHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticNPC_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "StaticNPC" },
		{ "ModuleRelativePath", "Public/AI/StaticNPC.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStaticNPC_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticNPC, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::NewProp_DamageEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::NewProp_DamageEffectClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_AttackDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_TrackingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_Bounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_KrakenHitForceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_AITeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_CharacterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_AggroComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_HealthbarComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_StartingHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticNPC_Statics::NewProp_DamageEffectClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStaticNPC_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(AStaticNPC, IHitInterface), false },  // 3002095664
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AStaticNPC, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticNPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticNPC_Statics::ClassParams = {
		&AStaticNPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStaticNPC_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStaticNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticNPC()
	{
		if (!Z_Registration_Info_UClass_AStaticNPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticNPC.OuterSingleton, Z_Construct_UClass_AStaticNPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStaticNPC.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AStaticNPC>()
	{
		return AStaticNPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticNPC);
	AStaticNPC::~AStaticNPC() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStaticNPC, AStaticNPC::StaticClass, TEXT("AStaticNPC"), &Z_Registration_Info_UClass_AStaticNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticNPC), 1152858434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_1736856210(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
