// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/PlayerKillAnnouncementSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerKillAnnouncementSlot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerKillAnnouncementSlot();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerKillAnnouncementSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UPlayerKillAnnouncementSlot::StaticRegisterNativesUPlayerKillAnnouncementSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerKillAnnouncementSlot);
	UClass* Z_Construct_UClass_UPlayerKillAnnouncementSlot_NoRegister()
	{
		return UPlayerKillAnnouncementSlot::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PirateColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateerColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInstigatorText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInstigatorText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAffectedText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAffectedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerbText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerbText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PlayerKillAnnouncementSlot.h" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PirateColor_MetaData[] = {
		{ "Category", "PlayerKillAnnouncementSlot" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PirateColor = { "PirateColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerKillAnnouncementSlot, PirateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PirateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PirateColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PrivateerColor_MetaData[] = {
		{ "Category", "PlayerKillAnnouncementSlot" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PrivateerColor = { "PrivateerColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerKillAnnouncementSlot, PrivateerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PrivateerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PrivateerColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerInstigatorText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerInstigatorText = { "PlayerInstigatorText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerKillAnnouncementSlot, PlayerInstigatorText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerInstigatorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerInstigatorText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerAffectedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerAffectedText = { "PlayerAffectedText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerKillAnnouncementSlot, PlayerAffectedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerAffectedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerAffectedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_VerbText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerKillAnnouncementSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_VerbText = { "VerbText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerKillAnnouncementSlot, VerbText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_VerbText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_VerbText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PirateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PrivateerColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerInstigatorText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_PlayerAffectedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::NewProp_VerbText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerKillAnnouncementSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::ClassParams = {
		&UPlayerKillAnnouncementSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerKillAnnouncementSlot()
	{
		if (!Z_Registration_Info_UClass_UPlayerKillAnnouncementSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerKillAnnouncementSlot.OuterSingleton, Z_Construct_UClass_UPlayerKillAnnouncementSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerKillAnnouncementSlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UPlayerKillAnnouncementSlot>()
	{
		return UPlayerKillAnnouncementSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerKillAnnouncementSlot);
	UPlayerKillAnnouncementSlot::~UPlayerKillAnnouncementSlot() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerKillAnnouncementSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerKillAnnouncementSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerKillAnnouncementSlot, UPlayerKillAnnouncementSlot::StaticClass, TEXT("UPlayerKillAnnouncementSlot"), &Z_Registration_Info_UClass_UPlayerKillAnnouncementSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerKillAnnouncementSlot), 17818059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerKillAnnouncementSlot_h_3094822703(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerKillAnnouncementSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerKillAnnouncementSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
