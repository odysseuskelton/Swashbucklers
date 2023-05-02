// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/BuildingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_BuildingTypes_generated_h
#error "BuildingTypes.generated.h already included, missing '#pragma once' in BuildingTypes.h"
#endif
#define SWASHBUCKLERS_BuildingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h


#define FOREACH_ENUM_EBUILDINGTYPE(op) \
	op(EBuildingType::EBT_NoType) \
	op(EBuildingType::EBT_PirateHideout) \
	op(EBuildingType::EBT_PrivateerHQ) \
	op(EBuildingType::EBT_Tower) 

enum class EBuildingType : uint8;
template<> struct TIsUEnumClass<EBuildingType> { enum { Value = true }; };
template<> SWASHBUCKLERS_API UEnum* StaticEnum<EBuildingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
