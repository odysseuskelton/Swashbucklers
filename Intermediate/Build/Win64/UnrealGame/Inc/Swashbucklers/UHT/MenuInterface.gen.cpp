// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Interfaces/MenuInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UMenuInterface();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UMenuInterface::StaticRegisterNativesUMenuInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuInterface);
	UClass* Z_Construct_UClass_UMenuInterface_NoRegister()
	{
		return UMenuInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMenuInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MenuInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMenuInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuInterface_Statics::ClassParams = {
		&UMenuInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuInterface()
	{
		if (!Z_Registration_Info_UClass_UMenuInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuInterface.OuterSingleton, Z_Construct_UClass_UMenuInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenuInterface.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UMenuInterface>()
	{
		return UMenuInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuInterface);
	UMenuInterface::~UMenuInterface() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_MenuInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_MenuInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenuInterface, UMenuInterface::StaticClass, TEXT("UMenuInterface"), &Z_Registration_Info_UClass_UMenuInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuInterface), 1196082483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_MenuInterface_h_1164887434(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_MenuInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_MenuInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
