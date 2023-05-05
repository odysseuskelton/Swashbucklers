// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/MerchantShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMerchantShip() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AMerchantShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AMerchantShip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void AMerchantShip::StaticRegisterNativesAMerchantShip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMerchantShip);
	UClass* Z_Construct_UClass_AMerchantShip_NoRegister()
	{
		return AMerchantShip::StaticClass();
	}
	struct Z_Construct_UClass_AMerchantShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MerchantShipBounty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MerchantShipBounty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToBaseBounty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnToBaseBounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMerchantShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMerchantShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/MerchantShip.h" },
		{ "ModuleRelativePath", "Public/Ships/MerchantShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMerchantShip_Statics::NewProp_MerchantShipBounty_MetaData[] = {
		{ "Category", "MerchantShip" },
		{ "ModuleRelativePath", "Public/Ships/MerchantShip.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMerchantShip_Statics::NewProp_MerchantShipBounty = { "MerchantShipBounty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMerchantShip, MerchantShipBounty), METADATA_PARAMS(Z_Construct_UClass_AMerchantShip_Statics::NewProp_MerchantShipBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMerchantShip_Statics::NewProp_MerchantShipBounty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMerchantShip_Statics::NewProp_ReturnToBaseBounty_MetaData[] = {
		{ "Category", "MerchantShip" },
		{ "ModuleRelativePath", "Public/Ships/MerchantShip.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMerchantShip_Statics::NewProp_ReturnToBaseBounty = { "ReturnToBaseBounty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMerchantShip, ReturnToBaseBounty), METADATA_PARAMS(Z_Construct_UClass_AMerchantShip_Statics::NewProp_ReturnToBaseBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMerchantShip_Statics::NewProp_ReturnToBaseBounty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMerchantShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMerchantShip_Statics::NewProp_MerchantShipBounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMerchantShip_Statics::NewProp_ReturnToBaseBounty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMerchantShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMerchantShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMerchantShip_Statics::ClassParams = {
		&AMerchantShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMerchantShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMerchantShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMerchantShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMerchantShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMerchantShip()
	{
		if (!Z_Registration_Info_UClass_AMerchantShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMerchantShip.OuterSingleton, Z_Construct_UClass_AMerchantShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMerchantShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AMerchantShip>()
	{
		return AMerchantShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMerchantShip);
	AMerchantShip::~AMerchantShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_MerchantShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_MerchantShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMerchantShip, AMerchantShip::StaticClass, TEXT("AMerchantShip"), &Z_Registration_Info_UClass_AMerchantShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMerchantShip), 3409294801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_MerchantShip_h_3369478571(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_MerchantShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_MerchantShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
