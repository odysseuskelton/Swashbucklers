// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/AIShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIShip() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	SENSESYSTEM_API UClass* Z_Construct_UClass_USenseReceiverComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AAIShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAbilitySystemComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAttributeSet_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAIState();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
	static UEnum* EAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Swashbucklers_EAIState, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("EAIState"));
		}
		return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_Swashbucklers_EAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enumerators[] = {
		{ "EAIState::EAI_NoState", (int64)EAIState::EAI_NoState },
		{ "EAIState::EAI_Dead", (int64)EAIState::EAI_Dead },
		{ "EAIState::EAI_Patrolling", (int64)EAIState::EAI_Patrolling },
		{ "EAIState::EAI_Aggroed", (int64)EAIState::EAI_Aggroed },
		{ "EAIState::EAI_Repositioning", (int64)EAIState::EAI_Repositioning },
		{ "EAIState::EAI_Chasing", (int64)EAIState::EAI_Chasing },
		{ "EAIState::EAI_Attacking", (int64)EAIState::EAI_Attacking },
		{ "EAIState::EAI_Engaged", (int64)EAIState::EAI_Engaged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAI_Aggroed.DisplayName", "Aggroed" },
		{ "EAI_Aggroed.Name", "EAIState::EAI_Aggroed" },
		{ "EAI_Attacking.DisplayName", "Attacking" },
		{ "EAI_Attacking.Name", "EAIState::EAI_Attacking" },
		{ "EAI_Chasing.DisplayName", "Chasing" },
		{ "EAI_Chasing.Name", "EAIState::EAI_Chasing" },
		{ "EAI_Dead.DisplayName", "Dead" },
		{ "EAI_Dead.Name", "EAIState::EAI_Dead" },
		{ "EAI_Engaged.DisplayName", "Engaged" },
		{ "EAI_Engaged.Name", "EAIState::EAI_Engaged" },
		{ "EAI_NoState.DisplayName", "NoState" },
		{ "EAI_NoState.Name", "EAIState::EAI_NoState" },
		{ "EAI_Patrolling.DisplayName", "Patrolling" },
		{ "EAI_Patrolling.Name", "EAIState::EAI_Patrolling" },
		{ "EAI_Repositioning.DisplayName", "Repositioning" },
		{ "EAI_Repositioning.Name", "EAIState::EAI_Repositioning" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Swashbucklers_EAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		"EAIState",
		"EAIState",
		Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAIState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Swashbucklers_EAIState()
	{
		if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_Swashbucklers_EAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
	}
	DEFINE_FUNCTION(AAIShip::execOnRep_SetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIShip::execSetTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_TeamToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeam(ETeam(Z_Param_TeamToSet));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIShip::execServerMoveToLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_LocationToMoveTo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AcptRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerMoveToLocation_Implementation(Z_Param_LocationToMoveTo,Z_Param_AcptRadius);
		P_NATIVE_END;
	}
	struct AIShip_eventServerMoveToLocation_Parms
	{
		FVector LocationToMoveTo;
		float AcptRadius;
	};
	static FName NAME_AAIShip_ServerMoveToLocation = FName(TEXT("ServerMoveToLocation"));
	void AAIShip::ServerMoveToLocation(FVector LocationToMoveTo, float AcptRadius)
	{
		AIShip_eventServerMoveToLocation_Parms Parms;
		Parms.LocationToMoveTo=LocationToMoveTo;
		Parms.AcptRadius=AcptRadius;
		ProcessEvent(FindFunctionChecked(NAME_AAIShip_ServerMoveToLocation),&Parms);
	}
	void AAIShip::StaticRegisterNativesAAIShip()
	{
		UClass* Class = AAIShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_SetTeam", &AAIShip::execOnRep_SetTeam },
			{ "ServerMoveToLocation", &AAIShip::execServerMoveToLocation },
			{ "SetTeam", &AAIShip::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIShip, nullptr, "OnRep_SetTeam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIShip_OnRep_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIShip_OnRep_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationToMoveTo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcptRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::NewProp_LocationToMoveTo = { "LocationToMoveTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIShip_eventServerMoveToLocation_Parms, LocationToMoveTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::NewProp_AcptRadius = { "AcptRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIShip_eventServerMoveToLocation_Parms, AcptRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::NewProp_LocationToMoveTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::NewProp_AcptRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIShip, nullptr, "ServerMoveToLocation", nullptr, nullptr, sizeof(AIShip_eventServerMoveToLocation_Parms), Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIShip_ServerMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIShip_ServerMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIShip_SetTeam_Statics
	{
		struct AIShip_eventSetTeam_Parms
		{
			ETeam TeamToSet;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamToSet_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIShip_SetTeam_Statics::NewProp_TeamToSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAIShip_SetTeam_Statics::NewProp_TeamToSet = { "TeamToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIShip_eventSetTeam_Parms, TeamToSet), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIShip_SetTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIShip_SetTeam_Statics::NewProp_TeamToSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIShip_SetTeam_Statics::NewProp_TeamToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIShip_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIShip_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIShip, nullptr, "SetTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIShip_SetTeam_Statics::AIShip_eventSetTeam_Parms), Z_Construct_UFunction_AAIShip_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIShip_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIShip_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIShip_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIShip_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIShip_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIShip);
	UClass* Z_Construct_UClass_AAIShip_NoRegister()
	{
		return AAIShip::StaticClass();
	}
	struct Z_Construct_UClass_AAIShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AIState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AIState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AITeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AITeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AITeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sensor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIShip_OnRep_SetTeam, "OnRep_SetTeam" }, // 1689162598
		{ &Z_Construct_UFunction_AAIShip_ServerMoveToLocation, "ServerMoveToLocation" }, // 3328216688
		{ &Z_Construct_UFunction_AAIShip_SetTeam, "SetTeam" }, // 2880418483
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/AIShip.h" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AIState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_AIState_MetaData[] = {
		{ "Category", "AIShip" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AIState = { "AIState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, AIState), Z_Construct_UEnum_Swashbucklers_EAIState, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_AIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_AIState_MetaData)) }; // 2931747560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "AIShip" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_CurrentTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam_MetaData[] = {
		{ "Category", "AIShip" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam = { "AITeam", "OnRep_SetTeam", (EPropertyFlags)0x0020080100000021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, AITeam), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam_MetaData)) }; // 4006013224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, AbilityComponent), Z_Construct_UClass_USBAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_AbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_AbilityComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, AttributeSet), Z_Construct_UClass_USBAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIShip_Statics::NewProp_Sensor_MetaData[] = {
		{ "Category", "AIShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/AIShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIShip_Statics::NewProp_Sensor = { "Sensor", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIShip, Sensor), Z_Construct_UClass_USenseReceiverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::NewProp_Sensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::NewProp_Sensor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AIState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AIState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AITeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIShip_Statics::NewProp_Sensor,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAIShip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAIShip, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIShip_Statics::ClassParams = {
		&AAIShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIShip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIShip()
	{
		if (!Z_Registration_Info_UClass_AAIShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIShip.OuterSingleton, Z_Construct_UClass_AAIShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AAIShip>()
	{
		return AAIShip::StaticClass();
	}

	void AAIShip::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AITeam(TEXT("AITeam"));

		const bool bIsValid = true
			&& Name_AITeam == ClassReps[(int32)ENetFields_Private::AITeam].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAIShip"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIShip);
	AAIShip::~AAIShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::EnumInfo[] = {
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2931747560U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIShip, AAIShip::StaticClass, TEXT("AAIShip"), &Z_Registration_Info_UClass_AAIShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIShip), 3214406161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_505163108(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
