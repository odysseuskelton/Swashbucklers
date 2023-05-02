// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStates/Teams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_Teams_generated_h
#error "Teams.generated.h already included, missing '#pragma once' in Teams.h"
#endif
#define SWASHBUCKLERS_Teams_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::ET_NoTeam) \
	op(ETeam::ET_Pirate) \
	op(ETeam::ET_Privateer) \
	op(ETeam::ECS_MAX) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> SWASHBUCKLERS_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
