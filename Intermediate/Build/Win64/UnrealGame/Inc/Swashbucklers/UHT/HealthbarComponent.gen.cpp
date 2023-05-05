// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/HealthbarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthbarComponent() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbar_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbarComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbarComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UHealthbarComponent::StaticRegisterNativesUHealthbarComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthbarComponent);
	UClass* Z_Construct_UClass_UHealthbarComponent_NoRegister()
	{
		return UHealthbarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthbarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthbarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthbarComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/HealthbarComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/HealthbarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthbarComponent_Statics::NewProp_HealthBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HealthbarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthbarComponent_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealthbarComponent, HealthBarWidget), Z_Construct_UClass_UHealthbar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHealthbarComponent_Statics::NewProp_HealthBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthbarComponent_Statics::NewProp_HealthBarWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthbarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthbarComponent_Statics::NewProp_HealthBarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthbarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthbarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthbarComponent_Statics::ClassParams = {
		&UHealthbarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthbarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthbarComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthbarComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthbarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthbarComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthbarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthbarComponent.OuterSingleton, Z_Construct_UClass_UHealthbarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthbarComponent.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UHealthbarComponent>()
	{
		return UHealthbarComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthbarComponent);
	UHealthbarComponent::~UHealthbarComponent() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_HealthbarComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_HealthbarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthbarComponent, UHealthbarComponent::StaticClass, TEXT("UHealthbarComponent"), &Z_Registration_Info_UClass_UHealthbarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthbarComponent), 2289178168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_HealthbarComponent_h_2572385155(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_HealthbarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_HealthbarComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
