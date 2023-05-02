// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CaptureProgressWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef SWASHBUCKLERS_CaptureProgressWidget_generated_h
#error "CaptureProgressWidget.generated.h already included, missing '#pragma once' in CaptureProgressWidget.h"
#endif
#define SWASHBUCKLERS_CaptureProgressWidget_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_RPC_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureProgressWidget(); \
	friend struct Z_Construct_UClass_UCaptureProgressWidget_Statics; \
public: \
	DECLARE_CLASS(UCaptureProgressWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UCaptureProgressWidget)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCaptureProgressWidget(); \
	friend struct Z_Construct_UClass_UCaptureProgressWidget_Statics; \
public: \
	DECLARE_CLASS(UCaptureProgressWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UCaptureProgressWidget)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureProgressWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureProgressWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureProgressWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureProgressWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureProgressWidget(UCaptureProgressWidget&&); \
	NO_API UCaptureProgressWidget(const UCaptureProgressWidget&); \
public: \
	NO_API virtual ~UCaptureProgressWidget();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureProgressWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureProgressWidget(UCaptureProgressWidget&&); \
	NO_API UCaptureProgressWidget(const UCaptureProgressWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureProgressWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureProgressWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureProgressWidget) \
	NO_API virtual ~UCaptureProgressWidget();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_13_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UCaptureProgressWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptureProgressWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
