// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Weapons/Cannon.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACannon();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ACannon::execMulticastCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannon::execServerCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannon::execFireDragonsBreath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireDragonsBreath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannon::execFireCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireCannon();
		P_NATIVE_END;
	}
	struct Cannon_eventMulticastCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	struct Cannon_eventServerCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	static FName NAME_ACannon_MulticastCannonFireEffects = FName(TEXT("MulticastCannonFireEffects"));
	void ACannon::MulticastCannonFireEffects(FTransform TransformToSpawnAt)
	{
		Cannon_eventMulticastCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ACannon_MulticastCannonFireEffects),&Parms);
	}
	static FName NAME_ACannon_ServerCannonFireEffects = FName(TEXT("ServerCannonFireEffects"));
	void ACannon::ServerCannonFireEffects(FTransform TransformToSpawnAt)
	{
		Cannon_eventServerCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ACannon_ServerCannonFireEffects),&Parms);
	}
	void ACannon::StaticRegisterNativesACannon()
	{
		UClass* Class = ACannon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireCannon", &ACannon::execFireCannon },
			{ "FireDragonsBreath", &ACannon::execFireDragonsBreath },
			{ "MulticastCannonFireEffects", &ACannon::execMulticastCannonFireEffects },
			{ "ServerCannonFireEffects", &ACannon::execServerCannonFireEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACannon_FireCannon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannon_FireCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannon_FireCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannon, nullptr, "FireCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannon_FireCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_FireCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannon_FireCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannon_FireCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannon, nullptr, "FireDragonsBreath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannon_FireDragonsBreath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannon_FireDragonsBreath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cannon_eventMulticastCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannon, nullptr, "MulticastCannonFireEffects", nullptr, nullptr, sizeof(Cannon_eventMulticastCannonFireEffects_Parms), Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannon_MulticastCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannon_MulticastCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cannon_eventServerCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannon, nullptr, "ServerCannonFireEffects", nullptr, nullptr, sizeof(Cannon_eventServerCannonFireEffects_Parms), Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannon_ServerCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannon_ServerCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannon);
	UClass* Z_Construct_UClass_ACannon_NoRegister()
	{
		return ACannon::StaticClass();
	}
	struct Z_Construct_UClass_ACannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CannonGEHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSoundsOnCannonball_MetaData[];
#endif
		static void NewProp_ExtraSoundsOnCannonball_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExtraSoundsOnCannonball;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCannonStreamAbilityActive_MetaData[];
#endif
		static void NewProp_bCannonStreamAbilityActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCannonStreamAbilityActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonballClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonballClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonAngularRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonAngularRecoil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonLinearRecoil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonLinearRecoil;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACannon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACannon_FireCannon, "FireCannon" }, // 2557846413
		{ &Z_Construct_UFunction_ACannon_FireDragonsBreath, "FireDragonsBreath" }, // 1671692533
		{ &Z_Construct_UFunction_ACannon_MulticastCannonFireEffects, "MulticastCannonFireEffects" }, // 3157176135
		{ &Z_Construct_UFunction_ACannon_ServerCannonFireEffects, "ServerCannonFireEffects" }, // 549719442
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Cannon.h" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonGEHandle = { "CannonGEHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonGEHandle_MetaData)) }; // 1303953225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_SocketName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, SocketName), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	void Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball_SetBit(void* Obj)
	{
		((ACannon*)Obj)->ExtraSoundsOnCannonball = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball = { "ExtraSoundsOnCannonball", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACannon), &Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	void Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive_SetBit(void* Obj)
	{
		((ACannon*)Obj)->bCannonStreamAbilityActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive = { "bCannonStreamAbilityActive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACannon), &Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Cannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh = { "CannonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonballClass_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonballClass = { "CannonballClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonballClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonballClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Cannon" },
		{ "Comment", "//FireEffects\n" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
		{ "ToolTip", "FireEffects" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, FireAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSystem_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSystem = { "CannonFireSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonFireSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonSmokeSystem_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonSmokeSystem = { "CannonSmokeSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonSmokeSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonSmokeSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonSmokeSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSound_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSound = { "CannonFireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonAngularRecoil_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonAngularRecoil = { "CannonAngularRecoil", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonAngularRecoil), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonAngularRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonAngularRecoil_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonLinearRecoil_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Public/Weapons/Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonLinearRecoil = { "CannonLinearRecoil", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACannon, CannonLinearRecoil), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonLinearRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonLinearRecoil_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonGEHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ExtraSoundsOnCannonball,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_bCannonStreamAbilityActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonballClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonSmokeSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonAngularRecoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonLinearRecoil,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannon_Statics::ClassParams = {
		&ACannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannon()
	{
		if (!Z_Registration_Info_UClass_ACannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannon.OuterSingleton, Z_Construct_UClass_ACannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannon.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ACannon>()
	{
		return ACannon::StaticClass();
	}

	void ACannon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ExtraSoundsOnCannonball(TEXT("ExtraSoundsOnCannonball"));

		const bool bIsValid = true
			&& Name_ExtraSoundsOnCannonball == ClassReps[(int32)ENetFields_Private::ExtraSoundsOnCannonball].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACannon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannon);
	ACannon::~ACannon() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannon, ACannon::StaticClass, TEXT("ACannon"), &Z_Registration_Info_UClass_ACannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannon), 3474124575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_1596444281(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
