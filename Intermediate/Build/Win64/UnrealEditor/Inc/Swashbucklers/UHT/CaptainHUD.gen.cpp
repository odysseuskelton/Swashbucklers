// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/CaptainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptainHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainHUD();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainHUD_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UAnnouncement_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptainOverlay_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ULeaderboard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ACaptainHUD::StaticRegisterNativesACaptainHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptainHUD);
	UClass* Z_Construct_UClass_ACaptainHUD_NoRegister()
	{
		return ACaptainHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACaptainHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptainOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Announcement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Announcement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderboardOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptainOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CaptainOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LeaderboardOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnnouncementClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptainHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/CaptainHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlay = { "CaptainOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, CaptainOverlay), Z_Construct_UClass_UCaptainOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_Announcement_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_Announcement = { "Announcement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, Announcement), Z_Construct_UClass_UAnnouncement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_Announcement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_Announcement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlay = { "LeaderboardOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, LeaderboardOverlay), Z_Construct_UClass_ULeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlayClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlayClass = { "CaptainOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, CaptainOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCaptainOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlayClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlayClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlayClass = { "LeaderboardOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, LeaderboardOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlayClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainHUD_Statics::NewProp_AnnouncementClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/HUD/CaptainHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainHUD_Statics::NewProp_AnnouncementClass = { "AnnouncementClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainHUD, AnnouncementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnnouncement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_AnnouncementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::NewProp_AnnouncementClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptainHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_Announcement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_CaptainOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_LeaderboardOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainHUD_Statics::NewProp_AnnouncementClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptainHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptainHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptainHUD_Statics::ClassParams = {
		&ACaptainHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACaptainHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACaptainHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaptainHUD()
	{
		if (!Z_Registration_Info_UClass_ACaptainHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptainHUD.OuterSingleton, Z_Construct_UClass_ACaptainHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaptainHUD.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ACaptainHUD>()
	{
		return ACaptainHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptainHUD);
	ACaptainHUD::~ACaptainHUD() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptainHUD, ACaptainHUD::StaticClass, TEXT("ACaptainHUD"), &Z_Registration_Info_UClass_ACaptainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptainHUD), 4128430317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainHUD_h_4082583631(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
