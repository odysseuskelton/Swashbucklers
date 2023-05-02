// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/ExplosiveShip.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveShip() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AExplosiveShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AExplosiveShip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AExplosiveShip::execMulticastExplodeShip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastExplodeShip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosiveShip::execServerExplodeShip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerExplodeShip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExplosiveShip::execAcquireTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcquireTarget();
		P_NATIVE_END;
	}
	static FName NAME_AExplosiveShip_MulticastExplodeShip = FName(TEXT("MulticastExplodeShip"));
	void AExplosiveShip::MulticastExplodeShip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosiveShip_MulticastExplodeShip),NULL);
	}
	static FName NAME_AExplosiveShip_ServerExplodeShip = FName(TEXT("ServerExplodeShip"));
	void AExplosiveShip::ServerExplodeShip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExplosiveShip_ServerExplodeShip),NULL);
	}
	void AExplosiveShip::StaticRegisterNativesAExplosiveShip()
	{
		UClass* Class = AExplosiveShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireTarget", &AExplosiveShip::execAcquireTarget },
			{ "MulticastExplodeShip", &AExplosiveShip::execMulticastExplodeShip },
			{ "ServerExplodeShip", &AExplosiveShip::execServerExplodeShip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveShip, nullptr, "AcquireTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveShip_AcquireTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveShip_AcquireTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveShip, nullptr, "MulticastExplodeShip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveShip, nullptr, "ServerExplodeShip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExplosiveShip);
	UClass* Z_Construct_UClass_AExplosiveShip_NoRegister()
	{
		return AExplosiveShip::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerFuseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateerFuseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateFuseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PirateFuseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuseSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FuseSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosiveGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosiveGEHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExplosiveShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExplosiveShip_AcquireTarget, "AcquireTarget" }, // 3759003283
		{ &Z_Construct_UFunction_AExplosiveShip_MulticastExplodeShip, "MulticastExplodeShip" }, // 1054769790
		{ &Z_Construct_UFunction_AExplosiveShip_ServerExplodeShip, "ServerExplodeShip" }, // 1633843846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/ExplosiveShip.h" },
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PrivateerFuseColor_MetaData[] = {
		{ "Category", "ExplosiveShip" },
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PrivateerFuseColor = { "PrivateerFuseColor", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosiveShip, PrivateerFuseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PrivateerFuseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PrivateerFuseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PirateFuseColor_MetaData[] = {
		{ "Category", "ExplosiveShip" },
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PirateFuseColor = { "PirateFuseColor", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosiveShip, PirateFuseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PirateFuseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PirateFuseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveShip_Statics::NewProp_FuseSystem_MetaData[] = {
		{ "Category", "ExplosiveShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveShip_Statics::NewProp_FuseSystem = { "FuseSystem", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosiveShip, FuseSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_FuseSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_FuseSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveShip_Statics::NewProp_ExplosiveGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ExplosiveShip" },
		{ "ModuleRelativePath", "Public/Ships/ExplosiveShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosiveShip_Statics::NewProp_ExplosiveGEHandle = { "ExplosiveGEHandle", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AExplosiveShip, ExplosiveGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_ExplosiveGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::NewProp_ExplosiveGEHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PrivateerFuseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveShip_Statics::NewProp_PirateFuseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveShip_Statics::NewProp_FuseSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveShip_Statics::NewProp_ExplosiveGEHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveShip_Statics::ClassParams = {
		&AExplosiveShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExplosiveShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveShip()
	{
		if (!Z_Registration_Info_UClass_AExplosiveShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveShip.OuterSingleton, Z_Construct_UClass_AExplosiveShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExplosiveShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AExplosiveShip>()
	{
		return AExplosiveShip::StaticClass();
	}

	void AExplosiveShip::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PrivateerFuseColor(TEXT("PrivateerFuseColor"));
		static const FName Name_PirateFuseColor(TEXT("PirateFuseColor"));

		const bool bIsValid = true
			&& Name_PrivateerFuseColor == ClassReps[(int32)ENetFields_Private::PrivateerFuseColor].Property->GetFName()
			&& Name_PirateFuseColor == ClassReps[(int32)ENetFields_Private::PirateFuseColor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AExplosiveShip"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveShip);
	AExplosiveShip::~AExplosiveShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveShip, AExplosiveShip::StaticClass, TEXT("AExplosiveShip"), &Z_Registration_Info_UClass_AExplosiveShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveShip), 2739702911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_3883960667(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
