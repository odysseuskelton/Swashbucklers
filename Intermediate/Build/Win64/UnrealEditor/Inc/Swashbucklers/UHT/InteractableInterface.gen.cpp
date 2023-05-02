// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Interfaces/InteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInteractableInterface();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableInterface);
	UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
	{
		return UInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
		&UInteractableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UInteractableInterface>()
	{
		return UInteractableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInterface);
	UInteractableInterface::~UInteractableInterface() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_InteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_InteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableInterface, UInteractableInterface::StaticClass, TEXT("UInteractableInterface"), &Z_Registration_Info_UClass_UInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableInterface), 1384409830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_InteractableInterface_h_474073596(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_InteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_InteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
