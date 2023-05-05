// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameplayAbilities/TickingTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickingTask() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTickingTask();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTickingTask_NoRegister();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnTickTaskDelegate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnTickTaskDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/TickingTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnTickTaskDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnTickTaskDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTickingTask::execAbilityTaskOnTick)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTickingTask**)Z_Param__Result=UTickingTask::AbilityTaskOnTick(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UTickingTask::StaticRegisterNativesUTickingTask()
	{
		UClass* Class = UTickingTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityTaskOnTick", &UTickingTask::execAbilityTaskOnTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics
	{
		struct TickingTask_eventAbilityTaskOnTick_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UTickingTask* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TickingTask_eventAbilityTaskOnTick_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TickingTask_eventAbilityTaskOnTick_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TickingTask_eventAbilityTaskOnTick_Parms, ReturnValue), Z_Construct_UClass_UTickingTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/TickingTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTickingTask, nullptr, "AbilityTaskOnTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::TickingTask_eventAbilityTaskOnTick_Parms), Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickingTask);
	UClass* Z_Construct_UClass_UTickingTask_NoRegister()
	{
		return UTickingTask::StaticClass();
	}
	struct Z_Construct_UClass_UTickingTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickingTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTickingTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTickingTask_AbilityTaskOnTick, "AbilityTaskOnTick" }, // 3975984081
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickingTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilities/TickingTask.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/TickingTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickingTask_Statics::NewProp_OnTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/TickingTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTickingTask_Statics::NewProp_OnTick = { "OnTick", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickingTask, OnTick), Z_Construct_UDelegateFunction_Swashbucklers_OnTickTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTickingTask_Statics::NewProp_OnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickingTask_Statics::NewProp_OnTick_MetaData)) }; // 117281526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickingTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickingTask_Statics::NewProp_OnTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickingTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickingTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickingTask_Statics::ClassParams = {
		&UTickingTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTickingTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickingTask_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTickingTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickingTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickingTask()
	{
		if (!Z_Registration_Info_UClass_UTickingTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickingTask.OuterSingleton, Z_Construct_UClass_UTickingTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickingTask.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UTickingTask>()
	{
		return UTickingTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickingTask);
	UTickingTask::~UTickingTask() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTickingTask, UTickingTask::StaticClass, TEXT("UTickingTask"), &Z_Registration_Info_UClass_UTickingTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickingTask), 1749881325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_2537873586(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
