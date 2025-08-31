// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class elysium : ModuleRules
{
	public elysium(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"elysium",
			"elysium/Variant_Platforming",
			"elysium/Variant_Platforming/Animation",
			"elysium/Variant_Combat",
			"elysium/Variant_Combat/AI",
			"elysium/Variant_Combat/Animation",
			"elysium/Variant_Combat/Gameplay",
			"elysium/Variant_Combat/Interfaces",
			"elysium/Variant_Combat/UI",
			"elysium/Variant_SideScrolling",
			"elysium/Variant_SideScrolling/AI",
			"elysium/Variant_SideScrolling/Gameplay",
			"elysium/Variant_SideScrolling/Interfaces",
			"elysium/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
