// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/Announcement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnouncement() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UAnnouncement();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UAnnouncement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UAnnouncement::StaticRegisterNativesUAnnouncement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnnouncement);
	UClass* Z_Construct_UClass_UAnnouncement_NoRegister()
	{
		return UAnnouncement::StaticClass();
	}
	struct Z_Construct_UClass_UAnnouncement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnouncement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnouncement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/Announcement.h" },
		{ "ModuleRelativePath", "Public/HUD/Announcement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/Announcement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnnouncement, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnouncement_Statics::NewProp_CountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/Announcement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_CountdownText = { "CountdownText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnnouncement, CountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnouncement_Statics::NewProp_CountdownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::NewProp_CountdownText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/Announcement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText = { "InfoText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnnouncement, InfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_AnnouncementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_CountdownText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnouncement_Statics::NewProp_InfoText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnouncement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnouncement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnnouncement_Statics::ClassParams = {
		&UAnnouncement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnnouncement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnouncement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnouncement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnouncement()
	{
		if (!Z_Registration_Info_UClass_UAnnouncement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnnouncement.OuterSingleton, Z_Construct_UClass_UAnnouncement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnnouncement.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UAnnouncement>()
	{
		return UAnnouncement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnouncement);
	UAnnouncement::~UAnnouncement() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Announcement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Announcement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnnouncement, UAnnouncement::StaticClass, TEXT("UAnnouncement"), &Z_Registration_Info_UClass_UAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnnouncement), 2785457308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Announcement_h_1591152902(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Announcement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_Announcement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
