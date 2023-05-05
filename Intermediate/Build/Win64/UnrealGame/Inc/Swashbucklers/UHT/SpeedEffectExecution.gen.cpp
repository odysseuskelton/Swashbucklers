// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameplayAbilities/EffectExecutions/SpeedEffectExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedEffectExecution() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USpeedEffectExecution();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USpeedEffectExecution_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void USpeedEffectExecution::StaticRegisterNativesUSpeedEffectExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeedEffectExecution);
	UClass* Z_Construct_UClass_USpeedEffectExecution_NoRegister()
	{
		return USpeedEffectExecution::StaticClass();
	}
	struct Z_Construct_UClass_USpeedEffectExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedEffectExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedEffectExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilities/EffectExecutions/SpeedEffectExecution.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/EffectExecutions/SpeedEffectExecution.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedEffectExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedEffectExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeedEffectExecution_Statics::ClassParams = {
		&USpeedEffectExecution::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpeedEffectExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedEffectExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeedEffectExecution()
	{
		if (!Z_Registration_Info_UClass_USpeedEffectExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeedEffectExecution.OuterSingleton, Z_Construct_UClass_USpeedEffectExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpeedEffectExecution.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USpeedEffectExecution>()
	{
		return USpeedEffectExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedEffectExecution);
	USpeedEffectExecution::~USpeedEffectExecution() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_EffectExecutions_SpeedEffectExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_EffectExecutions_SpeedEffectExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpeedEffectExecution, USpeedEffectExecution::StaticClass, TEXT("USpeedEffectExecution"), &Z_Registration_Info_UClass_USpeedEffectExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeedEffectExecution), 1545038603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_EffectExecutions_SpeedEffectExecution_h_281685524(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_EffectExecutions_SpeedEffectExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_EffectExecutions_SpeedEffectExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
