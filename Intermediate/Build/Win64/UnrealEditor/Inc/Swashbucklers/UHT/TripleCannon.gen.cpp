// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Weapons/TripleCannon.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTripleCannon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ATripleCannon();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ATripleCannon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ATripleCannon::execMulticastCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATripleCannon::execServerCannonFireEffects)
	{
		P_GET_STRUCT(FTransform,Z_Param_TransformToSpawnAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCannonFireEffects_Implementation(Z_Param_TransformToSpawnAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATripleCannon::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	struct TripleCannon_eventMulticastCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	struct TripleCannon_eventServerCannonFireEffects_Parms
	{
		FTransform TransformToSpawnAt;
	};
	static FName NAME_ATripleCannon_MulticastCannonFireEffects = FName(TEXT("MulticastCannonFireEffects"));
	void ATripleCannon::MulticastCannonFireEffects(FTransform TransformToSpawnAt)
	{
		TripleCannon_eventMulticastCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ATripleCannon_MulticastCannonFireEffects),&Parms);
	}
	static FName NAME_ATripleCannon_ServerCannonFireEffects = FName(TEXT("ServerCannonFireEffects"));
	void ATripleCannon::ServerCannonFireEffects(FTransform TransformToSpawnAt)
	{
		TripleCannon_eventServerCannonFireEffects_Parms Parms;
		Parms.TransformToSpawnAt=TransformToSpawnAt;
		ProcessEvent(FindFunctionChecked(NAME_ATripleCannon_ServerCannonFireEffects),&Parms);
	}
	void ATripleCannon::StaticRegisterNativesATripleCannon()
	{
		UClass* Class = ATripleCannon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ATripleCannon::execFire },
			{ "MulticastCannonFireEffects", &ATripleCannon::execMulticastCannonFireEffects },
			{ "ServerCannonFireEffects", &ATripleCannon::execServerCannonFireEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATripleCannon_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripleCannon_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripleCannon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripleCannon, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripleCannon_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATripleCannon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripleCannon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATripleCannon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TripleCannon_eventMulticastCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripleCannon, nullptr, "MulticastCannonFireEffects", nullptr, nullptr, sizeof(TripleCannon_eventMulticastCannonFireEffects_Parms), Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformToSpawnAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::NewProp_TransformToSpawnAt = { "TransformToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TripleCannon_eventServerCannonFireEffects_Parms, TransformToSpawnAt), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::NewProp_TransformToSpawnAt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATripleCannon, nullptr, "ServerCannonFireEffects", nullptr, nullptr, sizeof(TripleCannon_eventServerCannonFireEffects_Parms), Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATripleCannon);
	UClass* Z_Construct_UClass_ATripleCannon_NoRegister()
	{
		return ATripleCannon::StaticClass();
	}
	struct Z_Construct_UClass_ATripleCannon_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATripleCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATripleCannon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATripleCannon_Fire, "Fire" }, // 1273114570
		{ &Z_Construct_UFunction_ATripleCannon_MulticastCannonFireEffects, "MulticastCannonFireEffects" }, // 2050978846
		{ &Z_Construct_UFunction_ATripleCannon_ServerCannonFireEffects, "ServerCannonFireEffects" }, // 3904955520
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/TripleCannon.h" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "TripleCannon" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonGEHandle = { "CannonGEHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonGEHandle_MetaData)) }; // 1303953225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonballClass_MetaData[] = {
		{ "Category", "TripleCannon" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonballClass = { "CannonballClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonballClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonballClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonballClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSystem_MetaData[] = {
		{ "Category", "TripleCannon" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSystem = { "CannonFireSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonFireSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonSmokeSystem_MetaData[] = {
		{ "Category", "TripleCannon" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonSmokeSystem = { "CannonSmokeSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonSmokeSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonSmokeSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonSmokeSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSound_MetaData[] = {
		{ "Category", "TripleCannon" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSound = { "CannonFireSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonMesh_MetaData[] = {
		{ "Category", "TripleCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonMesh = { "CannonMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATripleCannon, CannonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATripleCannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonGEHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonballClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonSmokeSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATripleCannon_Statics::NewProp_CannonMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATripleCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATripleCannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATripleCannon_Statics::ClassParams = {
		&ATripleCannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATripleCannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATripleCannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATripleCannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATripleCannon()
	{
		if (!Z_Registration_Info_UClass_ATripleCannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATripleCannon.OuterSingleton, Z_Construct_UClass_ATripleCannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATripleCannon.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ATripleCannon>()
	{
		return ATripleCannon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATripleCannon);
	ATripleCannon::~ATripleCannon() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATripleCannon, ATripleCannon::StaticClass, TEXT("ATripleCannon"), &Z_Registration_Info_UClass_ATripleCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATripleCannon), 3208965755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannon_h_3606553607(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
