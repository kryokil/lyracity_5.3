// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraEditor : ModuleRules
{
    public LyraEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				"LyraEditor"
			}
		);

		PrivateIncludePaths.AddRange(
			new string[] {
			}
		);

		PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "EditorFramework",
                "PhysicsCore",
				"GameplayTagsEditor",
				"GameplayTasksEditor",
				"GameplayAbilities",
				"GameplayAbilitiesEditor",
				"LyraGame",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
				"InputCore",
				"Slate",
				"SlateCore",
				"ToolMenus",
				"EditorStyle",
				"DataValidation",
				"MessageLog",
				"Projects",
				"DeveloperToolSettings",
				"CollectionManager",
				"SourceControl",
				"Chaos"
			}
        );

		DynamicallyLoadedModuleNames.AddRange(
			new string[] {
			}
		);
		if (Target.bBuildEditor == true)
		{
			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"UnrealEd",
					"NiagaraEditor",
					"MeshUtilities"
				}
			);
		}

		// Generate compile errors if using DrawDebug functions in test/shipping builds.
		PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");
    }
}
