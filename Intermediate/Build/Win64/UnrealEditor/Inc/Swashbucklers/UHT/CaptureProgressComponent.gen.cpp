// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/CaptureProgressComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureProgressComponent() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptureProgressComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptureProgressComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UCaptureProgressComponent::StaticRegisterNativesUCaptureProgressComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaptureProgressComponent);
	UClass* Z_Construct_UClass_UCaptureProgressComponent_NoRegister()
	{
		return UCaptureProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCaptureProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptureProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/CaptureProgressComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/CaptureProgressComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptureProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureProgressComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaptureProgressComponent_Statics::ClassParams = {
		&UCaptureProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCaptureProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaptureProgressComponent()
	{
		if (!Z_Registration_Info_UClass_UCaptureProgressComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaptureProgressComponent.OuterSingleton, Z_Construct_UClass_UCaptureProgressComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCaptureProgressComponent.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UCaptureProgressComponent>()
	{
		return UCaptureProgressComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureProgressComponent);
	UCaptureProgressComponent::~UCaptureProgressComponent() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCaptureProgressComponent, UCaptureProgressComponent::StaticClass, TEXT("UCaptureProgressComponent"), &Z_Registration_Info_UClass_UCaptureProgressComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaptureProgressComponent), 3154886814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressComponent_h_3015438411(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
