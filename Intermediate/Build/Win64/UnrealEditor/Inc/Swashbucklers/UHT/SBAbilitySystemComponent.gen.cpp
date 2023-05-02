// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Components/SBAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAbilitySystemComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void USBAbilitySystemComponent::StaticRegisterNativesUSBAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBAbilitySystemComponent);
	UClass* Z_Construct_UClass_USBAbilitySystemComponent_NoRegister()
	{
		return USBAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/SBAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SBAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBAbilitySystemComponent_Statics::ClassParams = {
		&USBAbilitySystemComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_USBAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_USBAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBAbilitySystemComponent.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USBAbilitySystemComponent>()
	{
		return USBAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBAbilitySystemComponent);
	USBAbilitySystemComponent::~USBAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Components_SBAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Components_SBAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBAbilitySystemComponent, USBAbilitySystemComponent::StaticClass, TEXT("USBAbilitySystemComponent"), &Z_Registration_Info_UClass_USBAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBAbilitySystemComponent), 3048197464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Components_SBAbilitySystemComponent_h_3657290441(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Components_SBAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Components_SBAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
