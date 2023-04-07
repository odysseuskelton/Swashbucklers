#pragma once

UENUM(BlueprintType)
enum class EBuildingType : uint8
{
    EBT_NoType UMETA(DisplayName = "NoType"),
    EBT_PirateHideout UMETA(DisplayName = "PirateHideout"),
    EBT_PrivateerHQ UMETA(DisplayName = "PrivateerHQ"),
    EBT_Tower UMETA(DisplayName = "Tower"),
    EBT_MAX UMETA(DisplayName = "DefaultMAX")
};