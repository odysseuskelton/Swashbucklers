// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameInstance/SBGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBGameInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void USBGameInstance::StaticRegisterNativesUSBGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBGameInstance);
	UClass* Z_Construct_UClass_USBGameInstance_NoRegister()
	{
		return USBGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USBGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInstance/SBGameInstance.h" },
		{ "ModuleRelativePath", "Public/GameInstance/SBGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameInstance_Statics::NewProp_MenuClass_MetaData[] = {
		{ "Category", "SBGameInstance" },
		{ "ModuleRelativePath", "Public/GameInstance/SBGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBGameInstance_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameInstance, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBGameInstance_Statics::NewProp_MenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameInstance_Statics::NewProp_MenuClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameInstance_Statics::NewProp_MenuClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(USBGameInstance, IMenuInterface), false },  // 1196082483
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBGameInstance_Statics::ClassParams = {
		&USBGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBGameInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBGameInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBGameInstance()
	{
		if (!Z_Registration_Info_UClass_USBGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBGameInstance.OuterSingleton, Z_Construct_UClass_USBGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBGameInstance.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USBGameInstance>()
	{
		return USBGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBGameInstance);
	USBGameInstance::~USBGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameInstance_SBGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameInstance_SBGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBGameInstance, USBGameInstance::StaticClass, TEXT("USBGameInstance"), &Z_Registration_Info_UClass_USBGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBGameInstance), 3250674430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameInstance_SBGameInstance_h_2434343532(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameInstance_SBGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameInstance_SBGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
