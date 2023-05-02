// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/Leaderboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboard() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboard();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboard_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboardPlayerSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ULeaderboard::StaticRegisterNativesULeaderboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboard);
	UClass* Z_Construct_UClass_ULeaderboard_NoRegister()
	{
		return ULeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerSlotClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/Leaderboard.h" },
		{ "ModuleRelativePath", "Public/HUD/Leaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboard_Statics::NewProp_PrivateerScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/Leaderboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboard_Statics::NewProp_PrivateerScrollBox = { "PrivateerScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboard, PrivateerScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PrivateerScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PrivateerScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboard_Statics::NewProp_PirateScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/Leaderboard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULeaderboard_Statics::NewProp_PirateScrollBox = { "PirateScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboard, PirateScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PirateScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PirateScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboard_Statics::NewProp_PlayerSlotClass_MetaData[] = {
		{ "Category", "Leaderboard" },
		{ "ModuleRelativePath", "Public/HUD/Leaderboard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULeaderboard_Statics::NewProp_PlayerSlotClass = { "PlayerSlotClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboard, PlayerSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULeaderboardPlayerSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PlayerSlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboard_Statics::NewProp_PlayerSlotClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboard_Statics::NewProp_PrivateerScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboard_Statics::NewProp_PirateScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboard_Statics::NewProp_PlayerSlotClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboard_Statics::ClassParams = {
		&ULeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboard_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboard()
	{
		if (!Z_Registration_Info_UClass_ULeaderboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboard.OuterSingleton, Z_Construct_UClass_ULeaderboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULeaderboard.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ULeaderboard>()
	{
		return ULeaderboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboard);
	ULeaderboard::~ULeaderboard() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Leaderboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Leaderboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboard, ULeaderboard::StaticClass, TEXT("ULeaderboard"), &Z_Registration_Info_UClass_ULeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboard), 1775210774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Leaderboard_h_525894913(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Leaderboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Leaderboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
