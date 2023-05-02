// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/ArtilleryShip.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArtilleryShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AArtilleryShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AArtilleryShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_APlayerShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AArtilleryShip::execServerFireArtillery)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToFire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFireArtillery_Implementation(Z_Param_AbilityToFire);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArtilleryShip::execFireArtilleryCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireArtilleryCannon();
		P_NATIVE_END;
	}
	struct ArtilleryShip_eventServerFireArtillery_Parms
	{
		TSubclassOf<USBGameplayAbility>  AbilityToFire;
	};
	static FName NAME_AArtilleryShip_ServerFireArtillery = FName(TEXT("ServerFireArtillery"));
	void AArtilleryShip::ServerFireArtillery(TSubclassOf<USBGameplayAbility>  AbilityToFire)
	{
		ArtilleryShip_eventServerFireArtillery_Parms Parms;
		Parms.AbilityToFire=AbilityToFire;
		ProcessEvent(FindFunctionChecked(NAME_AArtilleryShip_ServerFireArtillery),&Parms);
	}
	void AArtilleryShip::StaticRegisterNativesAArtilleryShip()
	{
		UClass* Class = AArtilleryShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireArtilleryCannon", &AArtilleryShip::execFireArtilleryCannon },
			{ "ServerFireArtillery", &AArtilleryShip::execServerFireArtillery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArtilleryShip, nullptr, "FireArtilleryCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToFire;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::NewProp_AbilityToFire = { "AbilityToFire", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArtilleryShip_eventServerFireArtillery_Parms, AbilityToFire), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::NewProp_AbilityToFire,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArtilleryShip, nullptr, "ServerFireArtillery", nullptr, nullptr, sizeof(ArtilleryShip_eventServerFireArtillery_Parms), Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArtilleryShip);
	UClass* Z_Construct_UClass_AArtilleryShip_NoRegister()
	{
		return AArtilleryShip::StaticClass();
	}
	struct Z_Construct_UClass_AArtilleryShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryTurretMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArtilleryTurretMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryCannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArtilleryCannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ArtilleryProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtilleryGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArtilleryGEHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArtilleryShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArtilleryShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArtilleryShip_FireArtilleryCannon, "FireArtilleryCannon" }, // 1242758148
		{ &Z_Construct_UFunction_AArtilleryShip_ServerFireArtillery, "ServerFireArtillery" }, // 2282662079
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtilleryShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/ArtilleryShip.h" },
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryTurretMesh_MetaData[] = {
		{ "Category", "ArtilleryShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryTurretMesh = { "ArtilleryTurretMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AArtilleryShip, ArtilleryTurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryTurretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryTurretMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryCannonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ArtilleryShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryCannonMesh = { "ArtilleryCannonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AArtilleryShip, ArtilleryCannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryCannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryCannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData[] = {
		{ "Category", "ArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryProjectileClass = { "ArtilleryProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AArtilleryShip, ArtilleryProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ArtilleryShip" },
		{ "ModuleRelativePath", "Public/Ships/ArtilleryShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryGEHandle = { "ArtilleryGEHandle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AArtilleryShip, ArtilleryGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryGEHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArtilleryShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryTurretMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryCannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArtilleryShip_Statics::NewProp_ArtilleryGEHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArtilleryShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArtilleryShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArtilleryShip_Statics::ClassParams = {
		&AArtilleryShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArtilleryShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArtilleryShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArtilleryShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArtilleryShip()
	{
		if (!Z_Registration_Info_UClass_AArtilleryShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArtilleryShip.OuterSingleton, Z_Construct_UClass_AArtilleryShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArtilleryShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AArtilleryShip>()
	{
		return AArtilleryShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArtilleryShip);
	AArtilleryShip::~AArtilleryShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ArtilleryShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ArtilleryShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArtilleryShip, AArtilleryShip::StaticClass, TEXT("AArtilleryShip"), &Z_Registration_Info_UClass_AArtilleryShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArtilleryShip), 824321159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ArtilleryShip_h_3234133711(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ArtilleryShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ArtilleryShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
