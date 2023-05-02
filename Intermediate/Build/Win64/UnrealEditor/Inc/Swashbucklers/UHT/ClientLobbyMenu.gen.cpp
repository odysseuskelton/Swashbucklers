// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/ClientLobbyMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLobbyMenu() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UClientLobbyMenu();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UClientLobbyMenu_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UClientLobbyMenu::execExitLobbyButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitLobbyButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClientLobbyMenu::execSwitchTeamsButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTeamsButtonPressed();
		P_NATIVE_END;
	}
	void UClientLobbyMenu::StaticRegisterNativesUClientLobbyMenu()
	{
		UClass* Class = UClientLobbyMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitLobbyButtonPressed", &UClientLobbyMenu::execExitLobbyButtonPressed },
			{ "SwitchTeamsButtonPressed", &UClientLobbyMenu::execSwitchTeamsButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientLobbyMenu, nullptr, "ExitLobbyButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientLobbyMenu, nullptr, "SwitchTeamsButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClientLobbyMenu);
	UClass* Z_Construct_UClass_UClientLobbyMenu_NoRegister()
	{
		return UClientLobbyMenu::StaticClass();
	}
	struct Z_Construct_UClass_UClientLobbyMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateTeam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerTeam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchTeamsButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchTeamsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitLobbyButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitLobbyButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerSlotClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientLobbyMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClientLobbyMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClientLobbyMenu_ExitLobbyButtonPressed, "ExitLobbyButtonPressed" }, // 3951626882
		{ &Z_Construct_UFunction_UClientLobbyMenu_SwitchTeamsButtonPressed, "SwitchTeamsButtonPressed" }, // 2611098129
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/ClientLobbyMenu.h" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PirateTeam_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PirateTeam = { "PirateTeam", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientLobbyMenu, PirateTeam), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PirateTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PirateTeam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PrivateerTeam_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PrivateerTeam = { "PrivateerTeam", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientLobbyMenu, PrivateerTeam), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PrivateerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PrivateerTeam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_SwitchTeamsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_SwitchTeamsButton = { "SwitchTeamsButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientLobbyMenu, SwitchTeamsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_SwitchTeamsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_SwitchTeamsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_ExitLobbyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_ExitLobbyButton = { "ExitLobbyButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientLobbyMenu, ExitLobbyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_ExitLobbyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_ExitLobbyButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PlayerSlotClass_MetaData[] = {
		{ "Category", "ClientLobbyMenu" },
		{ "ModuleRelativePath", "Public/HUD/ClientLobbyMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PlayerSlotClass = { "PlayerSlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientLobbyMenu, PlayerSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PlayerSlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PlayerSlotClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClientLobbyMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PirateTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PrivateerTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_SwitchTeamsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_ExitLobbyButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientLobbyMenu_Statics::NewProp_PlayerSlotClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientLobbyMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientLobbyMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClientLobbyMenu_Statics::ClassParams = {
		&UClientLobbyMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClientLobbyMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClientLobbyMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientLobbyMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientLobbyMenu()
	{
		if (!Z_Registration_Info_UClass_UClientLobbyMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClientLobbyMenu.OuterSingleton, Z_Construct_UClass_UClientLobbyMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClientLobbyMenu.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UClientLobbyMenu>()
	{
		return UClientLobbyMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientLobbyMenu);
	UClientLobbyMenu::~UClientLobbyMenu() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClientLobbyMenu, UClientLobbyMenu::StaticClass, TEXT("UClientLobbyMenu"), &Z_Registration_Info_UClass_UClientLobbyMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClientLobbyMenu), 3807994205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_3989377242(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
