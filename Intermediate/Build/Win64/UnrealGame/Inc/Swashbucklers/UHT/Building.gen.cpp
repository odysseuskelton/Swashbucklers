// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Buildings/Building.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SENSESYSTEM_API UClass* Z_Construct_UClass_USenseStimulusComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABuilding();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABuilding_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbarComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAbilitySystemComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAttributeSet_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EBuildingType();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ABuilding::execMulticastOnBuildingHealthChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnBuildingHealthChange_Implementation(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuilding::execOnBuildingHealthChange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuildingHealthChange(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	struct Building_eventMulticastOnBuildingHealthChange_Parms
	{
		float Health;
		float MaxHealth;
		AActor* InstigatorActor;
	};
	static FName NAME_ABuilding_MulticastOnBuildingHealthChange = FName(TEXT("MulticastOnBuildingHealthChange"));
	void ABuilding::MulticastOnBuildingHealthChange(float Health, float MaxHealth, AActor* InstigatorActor)
	{
		Building_eventMulticastOnBuildingHealthChange_Parms Parms;
		Parms.Health=Health;
		Parms.MaxHealth=MaxHealth;
		Parms.InstigatorActor=InstigatorActor;
		ProcessEvent(FindFunctionChecked(NAME_ABuilding_MulticastOnBuildingHealthChange),&Parms);
	}
	static FName NAME_ABuilding_SpawnDestructible = FName(TEXT("SpawnDestructible"));
	void ABuilding::SpawnDestructible()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuilding_SpawnDestructible),NULL);
	}
	void ABuilding::StaticRegisterNativesABuilding()
	{
		UClass* Class = ABuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnBuildingHealthChange", &ABuilding::execMulticastOnBuildingHealthChange },
			{ "OnBuildingHealthChange", &ABuilding::execOnBuildingHealthChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventMulticastOnBuildingHealthChange_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventMulticastOnBuildingHealthChange_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventMulticastOnBuildingHealthChange_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "MulticastOnBuildingHealthChange", nullptr, nullptr, sizeof(Building_eventMulticastOnBuildingHealthChange_Parms), Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics
	{
		struct Building_eventOnBuildingHealthChange_Parms
		{
			float Health;
			float MaxHealth;
			AActor* InstigatorActor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventOnBuildingHealthChange_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventOnBuildingHealthChange_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Building_eventOnBuildingHealthChange_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "OnBuildingHealthChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::Building_eventOnBuildingHealthChange_Parms), Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuilding_OnBuildingHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_OnBuildingHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuilding, nullptr, "SpawnDestructible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuilding_SpawnDestructible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuilding_SpawnDestructible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilding);
	UClass* Z_Construct_UClass_ABuilding_NoRegister()
	{
		return ABuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StimulusComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StimulusComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathTimerDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathTimerDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthbarComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthbarComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingDamageSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingDamageSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingDeathSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingDeathSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingHitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingHitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingDeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingDeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingBounty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuildingBounty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingBuildingHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingBuildingHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuilding_MulticastOnBuildingHealthChange, "MulticastOnBuildingHealthChange" }, // 3301391768
		{ &Z_Construct_UFunction_ABuilding_OnBuildingHealthChange, "OnBuildingHealthChange" }, // 2766932086
		{ &Z_Construct_UFunction_ABuilding_SpawnDestructible, "SpawnDestructible" }, // 2003761953
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildings/Building.h" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, AbilityComponent), Z_Construct_UClass_USBAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_AbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_AbilityComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_StimulusComponent_MetaData[] = {
		{ "Category", "Building" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_StimulusComponent = { "StimulusComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, StimulusComponent), Z_Construct_UClass_USenseStimulusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_StimulusComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_StimulusComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_DeathTimerDelay_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_DeathTimerDelay = { "DeathTimerDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, DeathTimerDelay), METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_DeathTimerDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_DeathTimerDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	void Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((ABuilding*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABuilding), &Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingMesh_MetaData[] = {
		{ "Category", "Building" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingMesh = { "BuildingMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, Team), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_Team_MetaData)) }; // 4006013224
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingType), Z_Construct_UEnum_Swashbucklers_EBuildingType, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType_MetaData)) }; // 1602796454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, AttributeSet), Z_Construct_UClass_USBAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_HealthbarComponent_MetaData[] = {
		{ "Category", "Building" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_HealthbarComponent = { "HealthbarComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, HealthbarComponent), Z_Construct_UClass_UHealthbarComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_HealthbarComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_HealthbarComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDamageSystem_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDamageSystem = { "BuildingDamageSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingDamageSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDamageSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDamageSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSystem_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSystem = { "BuildingDeathSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingDeathSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingHitSound_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingHitSound = { "BuildingHitSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingHitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingHitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSound_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSound = { "BuildingDeathSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingDeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingBounty_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingBounty = { "BuildingBounty", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, BuildingBounty), METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingBounty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_StartingBuildingHealth_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Buildings/Building.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_StartingBuildingHealth = { "StartingBuildingHealth", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuilding, StartingBuildingHealth), METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_StartingBuildingHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_StartingBuildingHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_AbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_StimulusComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_DeathTimerDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_bIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_HealthbarComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDamageSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingHitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingDeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_BuildingBounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_StartingBuildingHealth,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilding_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABuilding, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(ABuilding, IHitInterface), false },  // 3002095664
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_Statics::ClassParams = {
		&ABuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuilding_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilding()
	{
		if (!Z_Registration_Info_UClass_ABuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilding.OuterSingleton, Z_Construct_UClass_ABuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuilding.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ABuilding>()
	{
		return ABuilding::StaticClass();
	}

	void ABuilding::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsDead(TEXT("bIsDead"));
		static const FName Name_Team(TEXT("Team"));
		static const FName Name_BuildingType(TEXT("BuildingType"));
		static const FName Name_StartingBuildingHealth(TEXT("StartingBuildingHealth"));

		const bool bIsValid = true
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName()
			&& Name_BuildingType == ClassReps[(int32)ENetFields_Private::BuildingType].Property->GetFName()
			&& Name_StartingBuildingHealth == ClassReps[(int32)ENetFields_Private::StartingBuildingHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABuilding"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding);
	ABuilding::~ABuilding() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuilding, ABuilding::StaticClass, TEXT("ABuilding"), &Z_Registration_Info_UClass_ABuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilding), 3616483658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_547589700(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
