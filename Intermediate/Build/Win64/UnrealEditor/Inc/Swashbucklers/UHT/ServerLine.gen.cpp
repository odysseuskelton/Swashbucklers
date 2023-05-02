// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/ServerLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerLine() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UServerLine();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UServerLine_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UServerLine::execOnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClicked();
		P_NATIVE_END;
	}
	void UServerLine::StaticRegisterNativesUServerLine()
	{
		UClass* Class = UServerLine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClicked", &UServerLine::execOnClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerLine_OnClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerLine_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerLine_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerLine, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerLine_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerLine_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerLine_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerLine_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerLine);
	UClass* Z_Construct_UClass_UServerLine_NoRegister()
	{
		return UServerLine::StaticClass();
	}
	struct Z_Construct_UClass_UServerLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayersText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPlayersText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayersText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxPlayersText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerLineButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerLineButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerLine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerLine_OnClicked, "OnClicked" }, // 3928707834
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/ServerLine.h" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Category", "ServerLine" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	void Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UServerLine*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UServerLine), &Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_ServerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ServerLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_ServerNameText = { "ServerNameText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, ServerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_ServerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_ServerNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_HostNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ServerLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_HostNameText = { "HostNameText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, HostNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_HostNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_HostNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_CurrentPlayersText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ServerLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_CurrentPlayersText = { "CurrentPlayersText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, CurrentPlayersText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_CurrentPlayersText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_CurrentPlayersText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_MaxPlayersText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ServerLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_MaxPlayersText = { "MaxPlayersText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, MaxPlayersText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_MaxPlayersText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_MaxPlayersText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_ServerLineButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_ServerLineButton = { "ServerLineButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, ServerLineButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_ServerLineButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_ServerLineButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerLine_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ServerLine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerLine_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UServerLine, Parent), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_bIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_ServerNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_HostNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_CurrentPlayersText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_MaxPlayersText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_ServerLineButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerLine_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerLine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerLine_Statics::ClassParams = {
		&UServerLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UServerLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerLine()
	{
		if (!Z_Registration_Info_UClass_UServerLine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerLine.OuterSingleton, Z_Construct_UClass_UServerLine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UServerLine.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UServerLine>()
	{
		return UServerLine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerLine);
	UServerLine::~UServerLine() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UServerLine, UServerLine::StaticClass, TEXT("UServerLine"), &Z_Registration_Info_UClass_UServerLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerLine), 2475970591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_602137341(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
