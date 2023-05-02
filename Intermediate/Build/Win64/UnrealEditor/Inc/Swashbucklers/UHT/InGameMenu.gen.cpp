// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/InGameMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMenu() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInGameMenu();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UInGameMenu::execReturnToInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToInGameMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execExitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execExitToMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitToMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execOpenSettingsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenSettingsMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execTeardown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Teardown();
		P_NATIVE_END;
	}
	void UInGameMenu::StaticRegisterNativesUInGameMenu()
	{
		UClass* Class = UInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitGame", &UInGameMenu::execExitGame },
			{ "ExitToMainMenu", &UInGameMenu::execExitToMainMenu },
			{ "OpenSettingsMenu", &UInGameMenu::execOpenSettingsMenu },
			{ "ReturnToInGameMenu", &UInGameMenu::execReturnToInGameMenu },
			{ "Teardown", &UInGameMenu::execTeardown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameMenu_ExitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_ExitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_ExitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "ExitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_ExitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_ExitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_ExitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_ExitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "ExitToMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_ExitToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_ExitToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "OpenSettingsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "ReturnToInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_Teardown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_Teardown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_Teardown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "Teardown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_Teardown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_Teardown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_Teardown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_Teardown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameMenu);
	UClass* Z_Construct_UClass_UInGameMenu_NoRegister()
	{
		return UInGameMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInGameMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenuSwitcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitToMainMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitToMainMenuButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitGameButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitSettingsMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitSettingsMenuButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameMenu_ExitGame, "ExitGame" }, // 4024010326
		{ &Z_Construct_UFunction_UInGameMenu_ExitToMainMenu, "ExitToMainMenu" }, // 2206093655
		{ &Z_Construct_UFunction_UInGameMenu_OpenSettingsMenu, "OpenSettingsMenu" }, // 2839732733
		{ &Z_Construct_UFunction_UInGameMenu_ReturnToInGameMenu, "ReturnToInGameMenu" }, // 3411696743
		{ &Z_Construct_UFunction_UInGameMenu_Teardown, "Teardown" }, // 2525728056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/InGameMenu.h" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuSwitcher = { "InGameMenuSwitcher", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, InGameMenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuSwitcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuWidget = { "InGameMenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, InGameMenuWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsMenuWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsMenuWidget = { "SettingsMenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, SettingsMenuWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsMenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsButton = { "SettingsButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, SettingsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitToMainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitToMainMenuButton = { "ExitToMainMenuButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, ExitToMainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitToMainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitToMainMenuButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitGameButton = { "ExitGameButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, ExitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitGameButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitSettingsMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitSettingsMenuButton = { "ExitSettingsMenuButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInGameMenu, ExitSettingsMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitSettingsMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitSettingsMenuButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuSwitcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_InGameMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_ResumeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_SettingsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitToMainMenuButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitGameButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_ExitSettingsMenuButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameMenu_Statics::ClassParams = {
		&UInGameMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameMenu()
	{
		if (!Z_Registration_Info_UClass_UInGameMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameMenu.OuterSingleton, Z_Construct_UClass_UInGameMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameMenu.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UInGameMenu>()
	{
		return UInGameMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameMenu);
	UInGameMenu::~UInGameMenu() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameMenu, UInGameMenu::StaticClass, TEXT("UInGameMenu"), &Z_Registration_Info_UClass_UInGameMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameMenu), 695493626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_1687505568(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
