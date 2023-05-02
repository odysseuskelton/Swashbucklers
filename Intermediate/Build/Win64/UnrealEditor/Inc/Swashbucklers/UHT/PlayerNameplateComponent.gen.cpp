// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/PlayerNameplateComponent.h"
#include "SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerNameplateComponent() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerNameplateComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerNameplateComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UPlayerNameplateComponent::StaticRegisterNativesUPlayerNameplateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerNameplateComponent);
	UClass* Z_Construct_UClass_UPlayerNameplateComponent_NoRegister()
	{
		return UPlayerNameplateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerNameplateComponent_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerNameplateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplateComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/PlayerNameplateComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PirateColor_MetaData[] = {
		{ "Category", "PlayerNameplateComponent" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplateComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PirateColor = { "PirateColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNameplateComponent, PirateColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PirateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PirateColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PrivateerColor_MetaData[] = {
		{ "Category", "PlayerNameplateComponent" },
		{ "ModuleRelativePath", "Public/HUD/PlayerNameplateComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PrivateerColor = { "PrivateerColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNameplateComponent, PrivateerColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PrivateerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PrivateerColor_MetaData)) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerNameplateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PirateColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNameplateComponent_Statics::NewProp_PrivateerColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerNameplateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerNameplateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerNameplateComponent_Statics::ClassParams = {
		&UPlayerNameplateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerNameplateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplateComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerNameplateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameplateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerNameplateComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerNameplateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerNameplateComponent.OuterSingleton, Z_Construct_UClass_UPlayerNameplateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerNameplateComponent.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UPlayerNameplateComponent>()
	{
		return UPlayerNameplateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerNameplateComponent);
	UPlayerNameplateComponent::~UPlayerNameplateComponent() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerNameplateComponent, UPlayerNameplateComponent::StaticClass, TEXT("UPlayerNameplateComponent"), &Z_Registration_Info_UClass_UPlayerNameplateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerNameplateComponent), 3709442547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplateComponent_h_1160946834(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_PlayerNameplateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
