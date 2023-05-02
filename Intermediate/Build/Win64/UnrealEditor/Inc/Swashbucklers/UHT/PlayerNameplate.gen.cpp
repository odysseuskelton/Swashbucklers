// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/PlayerNameplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerNameplate() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerNameplate();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerNameplate_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UPlayerNameplate::StaticRegisterNativesUPlayerNameplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerNameplate);
	UClass* Z_Construct_UClass_UPlayerNameplate_NoRegister()
	{
		return UPlayerNameplate::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerNameplate_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBountyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBountyText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerNameplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PlayerNameplate.h" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNameplate, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerBountyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerBountyText = { "PlayerBountyText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNameplate, PlayerBountyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerBountyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerBountyText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerNameplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNameplate_Statics::NewProp_PlayerBountyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerNameplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerNameplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerNameplate_Statics::ClassParams = {
		&UPlayerNameplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerNameplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplate_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerNameplate()
	{
		if (!Z_Registration_Info_UClass_UPlayerNameplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerNameplate.OuterSingleton, Z_Construct_UClass_UPlayerNameplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerNameplate.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UPlayerNameplate>()
	{
		return UPlayerNameplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerNameplate);
	UPlayerNameplate::~UPlayerNameplate() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerNameplate, UPlayerNameplate::StaticClass, TEXT("UPlayerNameplate"), &Z_Registration_Info_UClass_UPlayerNameplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerNameplate), 3676186682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplate_h_3470585138(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
