// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Houdini_Study : ModuleRules
{
	public Houdini_Study(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
