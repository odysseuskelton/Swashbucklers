// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/CapturePoints/CapturePoint.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturePoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACapturePoint();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACapturePoint_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptureProgressComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ACapturePoint::execOnRep_CaptureProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CaptureProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapturePoint::execMulticastSetCapturePointVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetCapturePointVisibility_Implementation(Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapturePoint::execCapturePointEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CapturePointEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapturePoint::execCapturePointOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CapturePointOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACapturePoint::execOnRep_CapturePointMaterialChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CapturePointMaterialChange();
		P_NATIVE_END;
	}
	struct CapturePoint_eventMulticastSetCapturePointVisibility_Parms
	{
		bool bVisibility;
	};
	static FName NAME_ACapturePoint_MulticastSetCapturePointVisibility = FName(TEXT("MulticastSetCapturePointVisibility"));
	void ACapturePoint::MulticastSetCapturePointVisibility(bool bVisibility)
	{
		CapturePoint_eventMulticastSetCapturePointVisibility_Parms Parms;
		Parms.bVisibility=bVisibility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACapturePoint_MulticastSetCapturePointVisibility),&Parms);
	}
	void ACapturePoint::StaticRegisterNativesACapturePoint()
	{
		UClass* Class = ACapturePoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapturePointEndOverlap", &ACapturePoint::execCapturePointEndOverlap },
			{ "CapturePointOverlap", &ACapturePoint::execCapturePointOverlap },
			{ "MulticastSetCapturePointVisibility", &ACapturePoint::execMulticastSetCapturePointVisibility },
			{ "OnRep_CapturePointMaterialChange", &ACapturePoint::execOnRep_CapturePointMaterialChange },
			{ "OnRep_CaptureProgress", &ACapturePoint::execOnRep_CaptureProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics
	{
		struct CapturePoint_eventCapturePointEndOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "CapturePointEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::CapturePoint_eventCapturePointEndOverlap_Parms), Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics
	{
		struct CapturePoint_eventCapturePointOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CapturePoint_eventCapturePointOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CapturePoint_eventCapturePointOverlap_Parms), &Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CapturePoint_eventCapturePointOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "CapturePointOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::CapturePoint_eventCapturePointOverlap_Parms), Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_CapturePointOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_CapturePointOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics
	{
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((CapturePoint_eventMulticastSetCapturePointVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CapturePoint_eventMulticastSetCapturePointVisibility_Parms), &Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "MulticastSetCapturePointVisibility", nullptr, nullptr, sizeof(CapturePoint_eventMulticastSetCapturePointVisibility_Parms), Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "OnRep_CapturePointMaterialChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePoint, nullptr, "OnRep_CaptureProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACapturePoint);
	UClass* Z_Construct_UClass_ACapturePoint_NoRegister()
	{
		return ACapturePoint::StaticClass();
	}
	struct Z_Construct_UClass_ACapturePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateCapturingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateCapturingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerCapturingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerCapturingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoOneCapturingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoOneCapturingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureChest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureChest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureChestSand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureChestSand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureProgressComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureProgressComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptured_MetaData[];
#endif
		static void NewProp_bCaptured_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptured;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapturePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACapturePoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACapturePoint_CapturePointEndOverlap, "CapturePointEndOverlap" }, // 361302566
		{ &Z_Construct_UFunction_ACapturePoint_CapturePointOverlap, "CapturePointOverlap" }, // 2610628354
		{ &Z_Construct_UFunction_ACapturePoint_MulticastSetCapturePointVisibility, "MulticastSetCapturePointVisibility" }, // 2842200381
		{ &Z_Construct_UFunction_ACapturePoint_OnRep_CapturePointMaterialChange, "OnRep_CapturePointMaterialChange" }, // 2830103190
		{ &Z_Construct_UFunction_ACapturePoint_OnRep_CaptureProgress, "OnRep_CaptureProgress" }, // 3616322489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapturePoints/CapturePoint.h" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_PirateCapturingMaterial_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_PirateCapturingMaterial = { "PirateCapturingMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, PirateCapturingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_PirateCapturingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_PirateCapturingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_PrivateerCapturingMaterial_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_PrivateerCapturingMaterial = { "PrivateerCapturingMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, PrivateerCapturingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_PrivateerCapturingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_PrivateerCapturingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_NoOneCapturingMaterial_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_NoOneCapturingMaterial = { "NoOneCapturingMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, NoOneCapturingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_NoOneCapturingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_NoOneCapturingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_CurrentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_CurrentMaterial = { "CurrentMaterial", "OnRep_CapturePointMaterialChange", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, CurrentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CurrentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CurrentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureRate_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, CaptureRate), METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_CapturePoint_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_CapturePoint = { "CapturePoint", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, CapturePoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CapturePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CapturePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChest_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChest = { "TreasureChest", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, TreasureChest), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChestSand_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChestSand = { "TreasureChestSand", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, TreasureChestSand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChestSand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChestSand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgressComponent_MetaData[] = {
		{ "Category", "CapturePoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgressComponent = { "CaptureProgressComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, CaptureProgressComponent), Z_Construct_UClass_UCaptureProgressComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgressComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgressComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgress = { "CaptureProgress", "OnRep_CaptureProgress", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACapturePoint, CaptureProgress), METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured_MetaData[] = {
		{ "ModuleRelativePath", "Public/CapturePoints/CapturePoint.h" },
	};
#endif
	void Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured_SetBit(void* Obj)
	{
		((ACapturePoint*)Obj)->bCaptured = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured = { "bCaptured", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACapturePoint), &Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapturePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_PirateCapturingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_PrivateerCapturingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_NoOneCapturingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_CurrentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_CapturePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_TreasureChestSand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgressComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_CaptureProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePoint_Statics::NewProp_bCaptured,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapturePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapturePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACapturePoint_Statics::ClassParams = {
		&ACapturePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACapturePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapturePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapturePoint()
	{
		if (!Z_Registration_Info_UClass_ACapturePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACapturePoint.OuterSingleton, Z_Construct_UClass_ACapturePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACapturePoint.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ACapturePoint>()
	{
		return ACapturePoint::StaticClass();
	}

	void ACapturePoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentMaterial(TEXT("CurrentMaterial"));
		static const FName Name_CaptureProgress(TEXT("CaptureProgress"));
		static const FName Name_bCaptured(TEXT("bCaptured"));

		const bool bIsValid = true
			&& Name_CurrentMaterial == ClassReps[(int32)ENetFields_Private::CurrentMaterial].Property->GetFName()
			&& Name_CaptureProgress == ClassReps[(int32)ENetFields_Private::CaptureProgress].Property->GetFName()
			&& Name_bCaptured == ClassReps[(int32)ENetFields_Private::bCaptured].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACapturePoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapturePoint);
	ACapturePoint::~ACapturePoint() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACapturePoint, ACapturePoint::StaticClass, TEXT("ACapturePoint"), &Z_Registration_Info_UClass_ACapturePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACapturePoint), 473134385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_1397830798(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
