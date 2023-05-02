// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ShipwrightWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_ShipwrightWidget_generated_h
#error "ShipwrightWidget.generated.h already included, missing '#pragma once' in ShipwrightWidget.h"
#endif
#define SWASHBUCKLERS_ShipwrightWidget_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchToCircleOfStorms); \
	DECLARE_FUNCTION(execSwitchToShipwright);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchToCircleOfStorms); \
	DECLARE_FUNCTION(execSwitchToShipwright);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShipwrightWidget(); \
	friend struct Z_Construct_UClass_UShipwrightWidget_Statics; \
public: \
	DECLARE_CLASS(UShipwrightWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UShipwrightWidget)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUShipwrightWidget(); \
	friend struct Z_Construct_UClass_UShipwrightWidget_Statics; \
public: \
	DECLARE_CLASS(UShipwrightWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UShipwrightWidget)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShipwrightWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShipwrightWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShipwrightWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShipwrightWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShipwrightWidget(UShipwrightWidget&&); \
	NO_API UShipwrightWidget(const UShipwrightWidget&); \
public: \
	NO_API virtual ~UShipwrightWidget();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShipwrightWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShipwrightWidget(UShipwrightWidget&&); \
	NO_API UShipwrightWidget(const UShipwrightWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShipwrightWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShipwrightWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShipwrightWidget) \
	NO_API virtual ~UShipwrightWidget();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_16_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UShipwrightWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
