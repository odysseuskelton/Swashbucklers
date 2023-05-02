// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/PlayerSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSlot() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerSlot();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UPlayerSlot::StaticRegisterNativesUPlayerSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerSlot);
	UClass* Z_Construct_UClass_UPlayerSlot_NoRegister()
	{
		return UPlayerSlot::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PlayerSlot.h" },
		{ "ModuleRelativePath", "Public/HUD/PlayerSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSlot_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerSlot_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerSlot, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerSlot_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSlot_Statics::NewProp_PlayerNameText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSlot_Statics::NewProp_PlayerNameText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerSlot_Statics::ClassParams = {
		&UPlayerSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerSlot()
	{
		if (!Z_Registration_Info_UClass_UPlayerSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerSlot.OuterSingleton, Z_Construct_UClass_UPlayerSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerSlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UPlayerSlot>()
	{
		return UPlayerSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSlot);
	UPlayerSlot::~UPlayerSlot() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSlot, UPlayerSlot::StaticClass, TEXT("UPlayerSlot"), &Z_Registration_Info_UClass_UPlayerSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSlot), 1931895011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerSlot_h_2190465660(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
