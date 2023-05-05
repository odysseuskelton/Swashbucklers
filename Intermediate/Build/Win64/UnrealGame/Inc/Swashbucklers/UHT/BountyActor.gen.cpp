// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/Actors/BountyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABountyActor();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABountyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct BountyActor_eventSetGoldPickupText_Parms
	{
		int32 Bounty;
	};
	static FName NAME_ABountyActor_SetGoldPickupText = FName(TEXT("SetGoldPickupText"));
	void ABountyActor::SetGoldPickupText(int32 Bounty)
	{
		BountyActor_eventSetGoldPickupText_Parms Parms;
		Parms.Bounty=Bounty;
		ProcessEvent(FindFunctionChecked(NAME_ABountyActor_SetGoldPickupText),&Parms);
	}
	void ABountyActor::StaticRegisterNativesABountyActor()
	{
	}
	struct Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BountyActor_eventSetGoldPickupText_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::NewProp_Bounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/Actors/BountyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABountyActor, nullptr, "SetGoldPickupText", nullptr, nullptr, sizeof(BountyActor_eventSetGoldPickupText_Parms), Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABountyActor_SetGoldPickupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABountyActor_SetGoldPickupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABountyActor);
	UClass* Z_Construct_UClass_ABountyActor_NoRegister()
	{
		return ABountyActor::StaticClass();
	}
	struct Z_Construct_UClass_ABountyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABountyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABountyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABountyActor_SetGoldPickupText, "SetGoldPickupText" }, // 2168827302
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABountyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/Actors/BountyActor.h" },
		{ "ModuleRelativePath", "Public/HUD/Actors/BountyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABountyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABountyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABountyActor_Statics::ClassParams = {
		&ABountyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABountyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABountyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABountyActor()
	{
		if (!Z_Registration_Info_UClass_ABountyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABountyActor.OuterSingleton, Z_Construct_UClass_ABountyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABountyActor.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ABountyActor>()
	{
		return ABountyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABountyActor);
	ABountyActor::~ABountyActor() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Actors_BountyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Actors_BountyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABountyActor, ABountyActor::StaticClass, TEXT("ABountyActor"), &Z_Registration_Info_UClass_ABountyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABountyActor), 3227697773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Actors_BountyActor_h_2077908039(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Actors_BountyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Actors_BountyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
