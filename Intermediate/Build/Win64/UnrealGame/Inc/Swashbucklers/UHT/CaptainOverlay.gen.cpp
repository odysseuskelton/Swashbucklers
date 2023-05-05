// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/CaptainOverlay.h"
#include "Swashbucklers/Public/GameplayAbilities/AbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptainOverlay() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptainOverlay();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptainOverlay_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerKillAnnouncementSlot_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilitySlot();
	SWASHBUCKLERS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UCaptainOverlay::execRotateTreasureArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTreasureArrow();
		P_NATIVE_END;
	}
	struct CaptainOverlay_eventSetHealthProgress_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
	struct CaptainOverlay_eventSetManaProgress_Parms
	{
		float CurrentMana;
		float MaxMana;
	};
	struct CaptainOverlay_eventStartCooldown_Parms
	{
		EAbilitySlot AbilitySlotToActivate;
	};
	static FName NAME_UCaptainOverlay_PlayCountdownAnimation = FName(TEXT("PlayCountdownAnimation"));
	void UCaptainOverlay::PlayCountdownAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCaptainOverlay_PlayCountdownAnimation),NULL);
	}
	static FName NAME_UCaptainOverlay_PlayPoEAnimation = FName(TEXT("PlayPoEAnimation"));
	void UCaptainOverlay::PlayPoEAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCaptainOverlay_PlayPoEAnimation),NULL);
	}
	static FName NAME_UCaptainOverlay_SetHealthProgress = FName(TEXT("SetHealthProgress"));
	void UCaptainOverlay::SetHealthProgress(float CurrentHealth, float MaxHealth)
	{
		CaptainOverlay_eventSetHealthProgress_Parms Parms;
		Parms.CurrentHealth=CurrentHealth;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UCaptainOverlay_SetHealthProgress),&Parms);
	}
	static FName NAME_UCaptainOverlay_SetManaProgress = FName(TEXT("SetManaProgress"));
	void UCaptainOverlay::SetManaProgress(float CurrentMana, float MaxMana)
	{
		CaptainOverlay_eventSetManaProgress_Parms Parms;
		Parms.CurrentMana=CurrentMana;
		Parms.MaxMana=MaxMana;
		ProcessEvent(FindFunctionChecked(NAME_UCaptainOverlay_SetManaProgress),&Parms);
	}
	static FName NAME_UCaptainOverlay_StartCooldown = FName(TEXT("StartCooldown"));
	void UCaptainOverlay::StartCooldown(EAbilitySlot AbilitySlotToActivate)
	{
		CaptainOverlay_eventStartCooldown_Parms Parms;
		Parms.AbilitySlotToActivate=AbilitySlotToActivate;
		ProcessEvent(FindFunctionChecked(NAME_UCaptainOverlay_StartCooldown),&Parms);
	}
	void UCaptainOverlay::StaticRegisterNativesUCaptainOverlay()
	{
		UClass* Class = UCaptainOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateTreasureArrow", &UCaptainOverlay::execRotateTreasureArrow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "PlayCountdownAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "PlayPoEAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "RotateTreasureArrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainOverlay_eventSetHealthProgress_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainOverlay_eventSetHealthProgress_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "SetHealthProgress", nullptr, nullptr, sizeof(CaptainOverlay_eventSetHealthProgress_Parms), Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainOverlay_eventSetManaProgress_Parms, CurrentMana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainOverlay_eventSetManaProgress_Parms, MaxMana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::NewProp_CurrentMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "SetManaProgress", nullptr, nullptr, sizeof(CaptainOverlay_eventSetManaProgress_Parms), Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_SetManaProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_SetManaProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilitySlotToActivate_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilitySlotToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::NewProp_AbilitySlotToActivate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::NewProp_AbilitySlotToActivate = { "AbilitySlotToActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainOverlay_eventStartCooldown_Parms, AbilitySlotToActivate), Z_Construct_UEnum_Swashbucklers_EAbilitySlot, METADATA_PARAMS(nullptr, 0) }; // 1220480195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::NewProp_AbilitySlotToActivate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::NewProp_AbilitySlotToActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptainOverlay, nullptr, "StartCooldown", nullptr, nullptr, sizeof(CaptainOverlay_eventStartCooldown_Parms), Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptainOverlay_StartCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCaptainOverlay_StartCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaptainOverlay);
	UClass* Z_Construct_UClass_UCaptainOverlay_NoRegister()
	{
		return UCaptainOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UCaptainOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot1Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot2Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot3Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot4Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1DynamicMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1DynamicMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2DynamicMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot2DynamicMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3DynamicMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot3DynamicMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4DynamicMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot4DynamicMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKillAnnouncementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerKillAnnouncementClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentKillAnnouncements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKillAnnouncements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentKillAnnouncements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoEText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoEText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot2Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot3Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot4Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot2Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot3Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot4Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillAnnouncementPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KillAnnouncementPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptainOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCaptainOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCaptainOverlay_PlayCountdownAnimation, "PlayCountdownAnimation" }, // 3925150216
		{ &Z_Construct_UFunction_UCaptainOverlay_PlayPoEAnimation, "PlayPoEAnimation" }, // 1502364938
		{ &Z_Construct_UFunction_UCaptainOverlay_RotateTreasureArrow, "RotateTreasureArrow" }, // 55778378
		{ &Z_Construct_UFunction_UCaptainOverlay_SetHealthProgress, "SetHealthProgress" }, // 3177058592
		{ &Z_Construct_UFunction_UCaptainOverlay_SetManaProgress, "SetManaProgress" }, // 3100541172
		{ &Z_Construct_UFunction_UCaptainOverlay_StartCooldown, "StartCooldown" }, // 3482930336
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/CaptainOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Info_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Info = { "Slot1Info", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot1Info), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Info_MetaData)) }; // 2276528733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Info_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Info = { "Slot2Info", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot2Info), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Info_MetaData)) }; // 2276528733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Info_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Info = { "Slot3Info", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot3Info), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Info_MetaData)) }; // 2276528733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Info_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Info = { "Slot4Info", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot4Info), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Info_MetaData)) }; // 2276528733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1DynamicMat_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1DynamicMat = { "Slot1DynamicMat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot1DynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1DynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1DynamicMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2DynamicMat_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2DynamicMat = { "Slot2DynamicMat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot2DynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2DynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2DynamicMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3DynamicMat_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3DynamicMat = { "Slot3DynamicMat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot3DynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3DynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3DynamicMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4DynamicMat_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4DynamicMat = { "Slot4DynamicMat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot4DynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4DynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4DynamicMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PlayerKillAnnouncementClass_MetaData[] = {
		{ "Category", "CaptainOverlay" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PlayerKillAnnouncementClass = { "PlayerKillAnnouncementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, PlayerKillAnnouncementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerKillAnnouncementSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PlayerKillAnnouncementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PlayerKillAnnouncementClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements_Inner = { "CurrentKillAnnouncements", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayerKillAnnouncementSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements = { "CurrentKillAnnouncements", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, CurrentKillAnnouncements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PoEText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PoEText = { "PoEText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, PoEText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PoEText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PoEText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Image = { "Slot1Image", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot1Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Image = { "Slot2Image", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot2Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Image = { "Slot3Image", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot3Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Image = { "Slot4Image", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot4Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_TreasureArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_TreasureArrow = { "TreasureArrow", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, TreasureArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_TreasureArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_TreasureArrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Text = { "Slot1Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot1Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Text = { "Slot2Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot2Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Text = { "Slot3Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot3Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Text = { "Slot4Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, Slot4Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CountdownText_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "CaptainOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CountdownText = { "CountdownText", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, CountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CountdownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CountdownText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_AnnouncementText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_KillAnnouncementPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/CaptainOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_KillAnnouncementPanel = { "KillAnnouncementPanel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCaptainOverlay, KillAnnouncementPanel), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_KillAnnouncementPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_KillAnnouncementPanel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaptainOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1DynamicMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2DynamicMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3DynamicMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4DynamicMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PlayerKillAnnouncementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CurrentKillAnnouncements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_PoEText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_TreasureArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot1Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot2Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot3Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_Slot4Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_CountdownText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_AnnouncementText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptainOverlay_Statics::NewProp_KillAnnouncementPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptainOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptainOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaptainOverlay_Statics::ClassParams = {
		&UCaptainOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCaptainOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCaptainOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptainOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaptainOverlay()
	{
		if (!Z_Registration_Info_UClass_UCaptainOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaptainOverlay.OuterSingleton, Z_Construct_UClass_UCaptainOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCaptainOverlay.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UCaptainOverlay>()
	{
		return UCaptainOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptainOverlay);
	UCaptainOverlay::~UCaptainOverlay() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCaptainOverlay, UCaptainOverlay::StaticClass, TEXT("UCaptainOverlay"), &Z_Registration_Info_UClass_UCaptainOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaptainOverlay), 2887426243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_2619194728(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
