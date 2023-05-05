// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/Ship.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SENSESYSTEM_API UClass* Z_Construct_UClass_USenseStimulusComponent_NoRegister();
	SMOOTHSYNCPLUGIN_API UClass* Z_Construct_UClass_USmoothSync_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UExecutionInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHealthbarComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
	WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShip::execServerFireCannons)
	{
		P_GET_OBJECT(UClass,Z_Param_CannonAbilityToActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFireCannons_Implementation(Z_Param_CannonAbilityToActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execSwitchCannonAbilities)
	{
		P_GET_OBJECT(UClass,Z_Param_NewPortCannonAbility);
		P_GET_OBJECT(UClass,Z_Param_NewStarboardCannonAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCannonAbilities(Z_Param_NewPortCannonAbility,Z_Param_NewStarboardCannonAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execMulticastOnHealthChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnHealthChanged_Implementation(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execOnHealthChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_Health,Z_Param_MaxHealth,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execMulticastShipCollision)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedOfImpact);
		P_GET_STRUCT(FVector,Z_Param_ForceOfImpact);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastShipCollision_Implementation(Z_Param_OtherActor,Z_Param_Hit,Z_Param_SpeedOfImpact,Z_Param_ForceOfImpact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execServerShipCollision)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedOfImpact);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerShipCollision_Implementation(Z_Param_OtherActor,Z_Param_Hit,Z_Param_SpeedOfImpact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execShipBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShipBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShip::execShipCollision)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShipCollision(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	struct Ship_eventMulticastOnHealthChanged_Parms
	{
		float Health;
		float MaxHealth;
		AActor* InstigatorActor;
	};
	struct Ship_eventMulticastShipCollision_Parms
	{
		AActor* OtherActor;
		FHitResult Hit;
		float SpeedOfImpact;
		FVector ForceOfImpact;
	};
	struct Ship_eventServerFireCannons_Parms
	{
		TSubclassOf<USBGameplayAbility>  CannonAbilityToActivate;
	};
	struct Ship_eventServerShipCollision_Parms
	{
		AActor* OtherActor;
		FHitResult Hit;
		float SpeedOfImpact;
	};
	static FName NAME_AShip_MulticastOnHealthChanged = FName(TEXT("MulticastOnHealthChanged"));
	void AShip::MulticastOnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor)
	{
		Ship_eventMulticastOnHealthChanged_Parms Parms;
		Parms.Health=Health;
		Parms.MaxHealth=MaxHealth;
		Parms.InstigatorActor=InstigatorActor;
		ProcessEvent(FindFunctionChecked(NAME_AShip_MulticastOnHealthChanged),&Parms);
	}
	static FName NAME_AShip_MulticastShipCollision = FName(TEXT("MulticastShipCollision"));
	void AShip::MulticastShipCollision(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact, FVector ForceOfImpact)
	{
		Ship_eventMulticastShipCollision_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.Hit=Hit;
		Parms.SpeedOfImpact=SpeedOfImpact;
		Parms.ForceOfImpact=ForceOfImpact;
		ProcessEvent(FindFunctionChecked(NAME_AShip_MulticastShipCollision),&Parms);
	}
	static FName NAME_AShip_ServerFireCannons = FName(TEXT("ServerFireCannons"));
	void AShip::ServerFireCannons(TSubclassOf<USBGameplayAbility>  CannonAbilityToActivate)
	{
		Ship_eventServerFireCannons_Parms Parms;
		Parms.CannonAbilityToActivate=CannonAbilityToActivate;
		ProcessEvent(FindFunctionChecked(NAME_AShip_ServerFireCannons),&Parms);
	}
	static FName NAME_AShip_ServerShipCollision = FName(TEXT("ServerShipCollision"));
	void AShip::ServerShipCollision(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact)
	{
		Ship_eventServerShipCollision_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.Hit=Hit;
		Parms.SpeedOfImpact=SpeedOfImpact;
		ProcessEvent(FindFunctionChecked(NAME_AShip_ServerShipCollision),&Parms);
	}
	void AShip::StaticRegisterNativesAShip()
	{
		UClass* Class = AShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnHealthChanged", &AShip::execMulticastOnHealthChanged },
			{ "MulticastShipCollision", &AShip::execMulticastShipCollision },
			{ "OnHealthChanged", &AShip::execOnHealthChanged },
			{ "ServerFireCannons", &AShip::execServerFireCannons },
			{ "ServerShipCollision", &AShip::execServerShipCollision },
			{ "ShipBeginOverlap", &AShip::execShipBeginOverlap },
			{ "ShipCollision", &AShip::execShipCollision },
			{ "SwitchCannonAbilities", &AShip::execSwitchCannonAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "MulticastOnHealthChanged", nullptr, nullptr, sizeof(Ship_eventMulticastOnHealthChanged_Parms), Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_MulticastOnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_MulticastOnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_MulticastShipCollision_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfImpact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForceOfImpact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastShipCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastShipCollision_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_SpeedOfImpact = { "SpeedOfImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastShipCollision_Parms, SpeedOfImpact), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_ForceOfImpact = { "ForceOfImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventMulticastShipCollision_Parms, ForceOfImpact), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_SpeedOfImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::NewProp_ForceOfImpact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "MulticastShipCollision", nullptr, nullptr, sizeof(Ship_eventMulticastShipCollision_Parms), Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_MulticastShipCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_MulticastShipCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_OnHealthChanged_Statics
	{
		struct Ship_eventOnHealthChanged_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventOnHealthChanged_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_OnHealthChanged_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShip_OnHealthChanged_Statics::Ship_eventOnHealthChanged_Parms), Z_Construct_UFunction_AShip_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_ServerFireCannons_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonAbilityToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AShip_ServerFireCannons_Statics::NewProp_CannonAbilityToActivate = { "CannonAbilityToActivate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventServerFireCannons_Parms, CannonAbilityToActivate), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_ServerFireCannons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ServerFireCannons_Statics::NewProp_CannonAbilityToActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ServerFireCannons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_ServerFireCannons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "ServerFireCannons", nullptr, nullptr, sizeof(Ship_eventServerFireCannons_Parms), Z_Construct_UFunction_AShip_ServerFireCannons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ServerFireCannons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_ServerFireCannons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ServerFireCannons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_ServerFireCannons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_ServerFireCannons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_ServerShipCollision_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfImpact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventServerShipCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventServerShipCollision_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_SpeedOfImpact = { "SpeedOfImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventServerShipCollision_Parms, SpeedOfImpact), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_ServerShipCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ServerShipCollision_Statics::NewProp_SpeedOfImpact,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ServerShipCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_ServerShipCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "ServerShipCollision", nullptr, nullptr, sizeof(Ship_eventServerShipCollision_Parms), Z_Construct_UFunction_AShip_ServerShipCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ServerShipCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_ServerShipCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ServerShipCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_ServerShipCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_ServerShipCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics
	{
		struct Ship_eventShipBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Ship_eventShipBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Ship_eventShipBeginOverlap_Parms), &Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "ShipBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::Ship_eventShipBeginOverlap_Parms), Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_ShipBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_ShipBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_ShipCollision_Statics
	{
		struct Ship_eventShipCollision_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipCollision_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipCollision_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventShipCollision_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_ShipCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_ShipCollision_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_ShipCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_ShipCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "ShipCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShip_ShipCollision_Statics::Ship_eventShipCollision_Parms), Z_Construct_UFunction_AShip_ShipCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_ShipCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_ShipCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_ShipCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_ShipCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics
	{
		struct Ship_eventSwitchCannonAbilities_Parms
		{
			TSubclassOf<USBGameplayAbility>  NewPortCannonAbility;
			TSubclassOf<USBGameplayAbility>  NewStarboardCannonAbility;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewPortCannonAbility;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewStarboardCannonAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::NewProp_NewPortCannonAbility = { "NewPortCannonAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventSwitchCannonAbilities_Parms, NewPortCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::NewProp_NewStarboardCannonAbility = { "NewStarboardCannonAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ship_eventSwitchCannonAbilities_Parms, NewStarboardCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::NewProp_NewPortCannonAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::NewProp_NewStarboardCannonAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShip, nullptr, "SwitchCannonAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::Ship_eventSwitchCannonAbilities_Parms), Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShip_SwitchCannonAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShip_SwitchCannonAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShip);
	UClass* Z_Construct_UClass_AShip_NoRegister()
	{
		return AShip::StaticClass();
	}
	struct Z_Construct_UClass_AShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreShipName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StoreShipName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreShipImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreShipImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreCannons_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreCannons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StoreSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StoreAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StoreDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreCost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateMaterialSecondary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateMaterialSecondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerMaterialSecondary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerMaterialSecondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateFlag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerFlag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamDamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RamDamageEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuoyancyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthbarComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthbarComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CruisingSoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CruisingSoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothSyncComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmoothSyncComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StimulusComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StimulusComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StealthBuoyancy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StealthBuoyancy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseWheelMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseWheelMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipDeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipDeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipCollisionSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipCollisionSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipCollisionSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipCollisionSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipDamagedSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipDamagedSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipDeathSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipDeathSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShipHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonRecoilMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonRecoilMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortCannonSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PortCannonSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarboardCannonSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StarboardCannonSlots;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortCannons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortCannons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PortCannons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StarboardCannons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarboardCannons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StarboardCannons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortCannonAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PortCannonAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarboardCannonAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarboardCannonAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryCannonAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AuxiliaryCannonAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenSails_MetaData[];
#endif
		static void NewProp_bOpenSails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenSails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SinkingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SinkingRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShip_MulticastOnHealthChanged, "MulticastOnHealthChanged" }, // 2087277962
		{ &Z_Construct_UFunction_AShip_MulticastShipCollision, "MulticastShipCollision" }, // 1109518170
		{ &Z_Construct_UFunction_AShip_OnHealthChanged, "OnHealthChanged" }, // 1839319277
		{ &Z_Construct_UFunction_AShip_ServerFireCannons, "ServerFireCannons" }, // 1059707346
		{ &Z_Construct_UFunction_AShip_ServerShipCollision, "ServerShipCollision" }, // 926376197
		{ &Z_Construct_UFunction_AShip_ShipBeginOverlap, "ShipBeginOverlap" }, // 1025669925
		{ &Z_Construct_UFunction_AShip_ShipCollision, "ShipCollision" }, // 167143094
		{ &Z_Construct_UFunction_AShip_SwitchCannonAbilities, "SwitchCannonAbilities" }, // 355201487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/Ship.h" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreShipName_MetaData[] = {
		{ "Category", "Store Info" },
		{ "Comment", "//Store Info\n" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
		{ "ToolTip", "Store Info" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreShipName = { "StoreShipName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreShipName), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreShipName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreShipName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreShipImage_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreShipImage = { "StoreShipImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreShipImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreShipImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreShipImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreHP_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreHP = { "StoreHP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreHP), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreCannons_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreCannons = { "StoreCannons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreCannons), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreCannons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreCannons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreSpeed_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreSpeed = { "StoreSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreSpeed), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreAcceleration_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreAcceleration = { "StoreAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreAcceleration), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreDescription_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreDescription = { "StoreDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreDescription), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StoreCost_MetaData[] = {
		{ "Category", "Store Info" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StoreCost = { "StoreCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StoreCost), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StoreCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StoreCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterial_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterial = { "PirateMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PirateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterial_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterial = { "PrivateerMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PrivateerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterialSecondary_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterialSecondary = { "PirateMaterialSecondary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PirateMaterialSecondary), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterialSecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterialSecondary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterialSecondary_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterialSecondary = { "PrivateerMaterialSecondary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PrivateerMaterialSecondary), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterialSecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterialSecondary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PirateFlag_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PirateFlag = { "PirateFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PirateFlag), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PirateFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PirateFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PrivateerFlag_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PrivateerFlag = { "PrivateerFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PrivateerFlag), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PrivateerFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_RamDamageEffectClass_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_RamDamageEffectClass = { "RamDamageEffectClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, RamDamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_RamDamageEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_RamDamageEffectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ship" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PawnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PawnMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_BuoyancyComponent_MetaData[] = {
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_BuoyancyComponent = { "BuoyancyComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, BuoyancyComponent), Z_Construct_UClass_UBuoyancyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_BuoyancyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_BuoyancyComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_HealthbarComponent_MetaData[] = {
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_HealthbarComponent = { "HealthbarComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, HealthbarComponent), Z_Construct_UClass_UHealthbarComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_HealthbarComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_HealthbarComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_CruisingSoundComponent_MetaData[] = {
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_CruisingSoundComponent = { "CruisingSoundComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, CruisingSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_CruisingSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_CruisingSoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_SmoothSyncComp_MetaData[] = {
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_SmoothSyncComp = { "SmoothSyncComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, SmoothSyncComp), Z_Construct_UClass_USmoothSync_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_SmoothSyncComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_SmoothSyncComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StimulusComponent_MetaData[] = {
		{ "Category", "Ship" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StimulusComponent = { "StimulusComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StimulusComponent), Z_Construct_UClass_USenseStimulusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StimulusComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StimulusComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StealthBuoyancy_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StealthBuoyancy = { "StealthBuoyancy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StealthBuoyancy), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StealthBuoyancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StealthBuoyancy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_MouseWheelMultiplier_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_MouseWheelMultiplier = { "MouseWheelMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, MouseWheelMultiplier), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_MouseWheelMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_MouseWheelMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ship" },
		{ "Comment", "//Death\n" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
		{ "ToolTip", "Death" },
	};
#endif
	void Z_Construct_UClass_AShip_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AShip*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AShip), &Z_Construct_UClass_AShip_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSound_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSound = { "ShipDeathSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipDeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSound_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSound = { "ShipCollisionSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipCollisionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSystem_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSystem = { "ShipCollisionSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipCollisionSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipDamagedSystem_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipDamagedSystem = { "ShipDamagedSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipDamagedSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipDamagedSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipDamagedSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSystem_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSystem = { "ShipDeathSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipDeathSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_ShipHealth_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ShipHealth = { "ShipHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, ShipHealth), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_ShipHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_ShipHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_CannonRecoilMultiplier_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_CannonRecoilMultiplier = { "CannonRecoilMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, CannonRecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_CannonRecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_CannonRecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_CannonClass_MetaData[] = {
		{ "Category", "Ship" },
		{ "Comment", "//Cannons\n" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
		{ "ToolTip", "Cannons" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_CannonClass = { "CannonClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, CannonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_CannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_CannonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PortCannonSlots_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PortCannonSlots = { "PortCannonSlots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PortCannonSlots), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PortCannonSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PortCannonSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonSlots_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonSlots = { "StarboardCannonSlots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StarboardCannonSlots), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonSlots_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PortCannons_Inner = { "PortCannons", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PortCannons_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PortCannons = { "PortCannons", nullptr, (EPropertyFlags)0x0020080000020025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PortCannons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PortCannons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PortCannons_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons_Inner = { "StarboardCannons", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons = { "StarboardCannons", nullptr, (EPropertyFlags)0x0020080000020025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StarboardCannons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_PortCannonAbility_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_PortCannonAbility = { "PortCannonAbility", nullptr, (EPropertyFlags)0x0024080000000025, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, PortCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_PortCannonAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_PortCannonAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonAbility_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonAbility = { "StarboardCannonAbility", nullptr, (EPropertyFlags)0x0024080000000025, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StarboardCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_AuxiliaryCannonAbility_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_AuxiliaryCannonAbility = { "AuxiliaryCannonAbility", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, AuxiliaryCannonAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_AuxiliaryCannonAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_AuxiliaryCannonAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	void Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails_SetBit(void* Obj)
	{
		((AShip*)Obj)->bOpenSails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails = { "bOpenSails", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AShip), &Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_StrafeSpeed_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_StrafeSpeed = { "StrafeSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, StrafeSpeed), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_StrafeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_StrafeSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_Statics::NewProp_SinkingRate_MetaData[] = {
		{ "Category", "Ship" },
		{ "ModuleRelativePath", "Public/Ships/Ship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_SinkingRate = { "SinkingRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShip, SinkingRate), METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::NewProp_SinkingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::NewProp_SinkingRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreShipName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreShipImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreCannons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StoreCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PirateMaterialSecondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PrivateerMaterialSecondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PirateFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PrivateerFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_RamDamageEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_BuoyancyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_HealthbarComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_CruisingSoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_SmoothSyncComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StimulusComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StealthBuoyancy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_MouseWheelMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_bIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipCollisionSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipDamagedSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipDeathSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ShipHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_RespawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_CannonRecoilMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_CannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PortCannonSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PortCannons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PortCannons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_PortCannonAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StarboardCannonAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_AuxiliaryCannonAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_bOpenSails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_StrafeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_SinkingRate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(AShip, IHitInterface), false },  // 3002095664
			{ Z_Construct_UClass_UExecutionInterface_NoRegister, (int32)VTABLE_OFFSET(AShip, IExecutionInterface), false },  // 1229433332
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShip_Statics::ClassParams = {
		&AShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShip()
	{
		if (!Z_Registration_Info_UClass_AShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShip.OuterSingleton, Z_Construct_UClass_AShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AShip>()
	{
		return AShip::StaticClass();
	}

	void AShip::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsDead(TEXT("bIsDead"));
		static const FName Name_PortCannons(TEXT("PortCannons"));
		static const FName Name_StarboardCannons(TEXT("StarboardCannons"));
		static const FName Name_PortCannonAbility(TEXT("PortCannonAbility"));
		static const FName Name_StarboardCannonAbility(TEXT("StarboardCannonAbility"));
		static const FName Name_bOpenSails(TEXT("bOpenSails"));

		const bool bIsValid = true
			&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
			&& Name_PortCannons == ClassReps[(int32)ENetFields_Private::PortCannons].Property->GetFName()
			&& Name_StarboardCannons == ClassReps[(int32)ENetFields_Private::StarboardCannons].Property->GetFName()
			&& Name_PortCannonAbility == ClassReps[(int32)ENetFields_Private::PortCannonAbility].Property->GetFName()
			&& Name_StarboardCannonAbility == ClassReps[(int32)ENetFields_Private::StarboardCannonAbility].Property->GetFName()
			&& Name_bOpenSails == ClassReps[(int32)ENetFields_Private::bOpenSails].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShip"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShip);
	AShip::~AShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShip, AShip::StaticClass, TEXT("AShip"), &Z_Registration_Info_UClass_AShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShip), 168752527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_1491468674(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
