#pragma once

UENUM(BlueprintType)
enum class ETeam : uint8
{
    ET_NoTeam UMETA(DisplayName = "NoTeam"),
    ET_Pirate UMETA(DisplayName = "Pirate"),
    ET_Privateer UMETA(DisplayName = "Privateer"),
    ECS_MAX UMETA(DisplayName = "DefaultMAX")

};