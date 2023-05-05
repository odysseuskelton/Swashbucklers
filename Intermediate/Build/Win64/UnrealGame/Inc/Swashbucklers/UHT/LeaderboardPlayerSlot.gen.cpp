// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/LeaderboardPlayerSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardPlayerSlot() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboardPlayerSlot();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboardPlayerSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ULeaderboardPlayerSlot::StaticRegisterNativesULeaderboardPlayerSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardPlayerSlot);
	UClass* Z_Construct_UClass_ULeaderboardPlayerSlot_NoRegister()
	{
		return ULeaderboardPlayerSlot::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboardPlayerSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BountyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BountyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KillText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/LeaderboardPlayerSlot.h" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardPlayerSlot, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_PlayerNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_BountyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_BountyText = { "BountyText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardPlayerSlot, BountyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_BountyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_BountyText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_CaptureText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_CaptureText = { "CaptureText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardPlayerSlot, CaptureText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_CaptureText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_CaptureText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_TowerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_TowerText = { "TowerText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardPlayerSlot, TowerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_TowerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_TowerText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_KillText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/LeaderboardPlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_KillText = { "KillText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardPlayerSlot, KillText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_KillText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_KillText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_PlayerNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_BountyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_CaptureText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_TowerText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::NewProp_KillText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardPlayerSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::ClassParams = {
		&ULeaderboardPlayerSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboardPlayerSlot()
	{
		if (!Z_Registration_Info_UClass_ULeaderboardPlayerSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardPlayerSlot.OuterSingleton, Z_Construct_UClass_ULeaderboardPlayerSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULeaderboardPlayerSlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ULeaderboardPlayerSlot>()
	{
		return ULeaderboardPlayerSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardPlayerSlot);
	ULeaderboardPlayerSlot::~ULeaderboardPlayerSlot() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_LeaderboardPlayerSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_LeaderboardPlayerSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardPlayerSlot, ULeaderboardPlayerSlot::StaticClass, TEXT("ULeaderboardPlayerSlot"), &Z_Registration_Info_UClass_ULeaderboardPlayerSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardPlayerSlot), 4223426940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_LeaderboardPlayerSlot_h_1214698812(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_LeaderboardPlayerSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_LeaderboardPlayerSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
