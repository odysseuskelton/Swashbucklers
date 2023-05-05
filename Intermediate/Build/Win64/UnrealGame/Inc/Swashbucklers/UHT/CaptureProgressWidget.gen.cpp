// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/CaptureProgressWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureProgressWidget() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptureProgressWidget();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptureProgressWidget_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct CaptureProgressWidget_eventSetMaterial_Parms
	{
		ETeam TeamToSet;
	};
	struct CaptureProgressWidget_eventSetProgress_Parms
	{
		float ProgressToSet;
	};
	static FName NAME_UCaptureProgressWidget_SetMaterial = FName(TEXT("SetMaterial"));
	void UCaptureProgressWidget::SetMaterial(ETeam TeamToSet)
	{
		CaptureProgressWidget_eventSetMaterial_Parms Parms;
		Parms.TeamToSet=TeamToSet;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureProgressWidget_SetMaterial),&Parms);
	}
	static FName NAME_UCaptureProgressWidget_SetProgress = FName(TEXT("SetProgress"));
	void UCaptureProgressWidget::SetProgress(float ProgressToSet)
	{
		CaptureProgressWidget_eventSetProgress_Parms Parms;
		Parms.ProgressToSet=ProgressToSet;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureProgressWidget_SetProgress),&Parms);
	}
	void UCaptureProgressWidget::StaticRegisterNativesUCaptureProgressWidget()
	{
	}
	struct Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamToSet_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::NewProp_TeamToSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::NewProp_TeamToSet = { "TeamToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptureProgressWidget_eventSetMaterial_Parms, TeamToSet), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::NewProp_TeamToSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::NewProp_TeamToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptureProgressWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureProgressWidget, nullptr, "SetMaterial", nullptr, nullptr, sizeof(CaptureProgressWidget_eventSetMaterial_Parms), Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::NewProp_ProgressToSet = { "ProgressToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptureProgressWidget_eventSetProgress_Parms, ProgressToSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::NewProp_ProgressToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptureProgressWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureProgressWidget, nullptr, "SetProgress", nullptr, nullptr, sizeof(CaptureProgressWidget_eventSetProgress_Parms), Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureProgressWidget_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptureProgressWidget_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaptureProgressWidget);
	UClass* Z_Construct_UClass_UCaptureProgressWidget_NoRegister()
	{
		return UCaptureProgressWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCaptureProgressWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptureProgressWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCaptureProgressWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCaptureProgressWidget_SetMaterial, "SetMaterial" }, // 508852799
		{ &Z_Construct_UFunction_UCaptureProgressWidget_SetProgress, "SetProgress" }, // 1429656196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureProgressWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/CaptureProgressWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/CaptureProgressWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptureProgressWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureProgressWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaptureProgressWidget_Statics::ClassParams = {
		&UCaptureProgressWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCaptureProgressWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureProgressWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaptureProgressWidget()
	{
		if (!Z_Registration_Info_UClass_UCaptureProgressWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaptureProgressWidget.OuterSingleton, Z_Construct_UClass_UCaptureProgressWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCaptureProgressWidget.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UCaptureProgressWidget>()
	{
		return UCaptureProgressWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureProgressWidget);
	UCaptureProgressWidget::~UCaptureProgressWidget() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCaptureProgressWidget, UCaptureProgressWidget::StaticClass, TEXT("UCaptureProgressWidget"), &Z_Registration_Info_UClass_UCaptureProgressWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaptureProgressWidget), 220106901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_443472221(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
