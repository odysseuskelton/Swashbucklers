// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class Swashbucklers : ModuleRules
{
	public Swashbucklers(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "InputCore", "EnhancedInput", "CableComponent", "Niagara", "GameplayAbilities", "GameplayTags", "AIModule", "SmoothSyncPlugin", "GameplayTasks", "OnlineSubsystem", "OnlineSubsystemSteam", "Water", "SenseSystem"});

		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "steam", "lib", "steam_api64.lib"));

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
