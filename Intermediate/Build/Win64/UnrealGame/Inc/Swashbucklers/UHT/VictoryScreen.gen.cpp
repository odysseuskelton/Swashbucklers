// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/VictoryScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryScreen() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UVictoryScreen();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UVictoryScreen_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FName NAME_UVictoryScreen_PlayVictoryAnimation = FName(TEXT("PlayVictoryAnimation"));
	void UVictoryScreen::PlayVictoryAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVictoryScreen_PlayVictoryAnimation),NULL);
	}
	void UVictoryScreen::StaticRegisterNativesUVictoryScreen()
	{
	}
	struct Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/VictoryScreen.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryScreen, nullptr, "PlayVictoryAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVictoryScreen);
	UClass* Z_Construct_UClass_UVictoryScreen_NoRegister()
	{
		return UVictoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_UVictoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVictoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVictoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVictoryScreen_PlayVictoryAnimation, "PlayVictoryAnimation" }, // 3760212324
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVictoryScreen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/VictoryScreen.h" },
		{ "ModuleRelativePath", "Public/HUD/VictoryScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVictoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVictoryScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVictoryScreen_Statics::ClassParams = {
		&UVictoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVictoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVictoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVictoryScreen()
	{
		if (!Z_Registration_Info_UClass_UVictoryScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVictoryScreen.OuterSingleton, Z_Construct_UClass_UVictoryScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVictoryScreen.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UVictoryScreen>()
	{
		return UVictoryScreen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryScreen);
	UVictoryScreen::~UVictoryScreen() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_VictoryScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_VictoryScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVictoryScreen, UVictoryScreen::StaticClass, TEXT("UVictoryScreen"), &Z_Registration_Info_UClass_UVictoryScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVictoryScreen), 3034996111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_VictoryScreen_h_3757875380(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_VictoryScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_VictoryScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
