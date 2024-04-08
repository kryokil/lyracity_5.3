// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedConfigurations(UnrealTargetConfiguration.Debug, UnrealTargetConfiguration.Development, UnrealTargetConfiguration.Test, UnrealTargetConfiguration.Shipping)]


public class CitySampleEditor : ModuleRules
{
	public CitySampleEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		//PrivatePCHHeaderFile = "CitySampleEditor.h";

		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"GeometryProcessingInterfaces"
			}
		);

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"InputCore",
			"Engine",
			"UMG",
			"Blutility",
			"Slate",
			"SlateCore",
			"EditorStyle",
			"RenderCore",
			"LevelEditor",
			"PropertyEditor",
			"AssetTools",
			"BlueprintGraph",
			"AnimGraph",
			"AnimGraphRuntime",
			"CitySample",
			"LevelSequence",
			"MovieSceneCapture",
			"MovieSceneCaptureDialog",
			"EditorSubsystem",
			"SequencerScripting",
			"SequencerScriptingEditor",
			"SourceControl",
			"MovieSceneTools",
			"MovieScene",
			"GeometryCollectionEngine",
			"GeometryCollectionEditor",
			"FractureEditor",
			"Json",
			"DataValidation",
			"MessageLog",
			"ToolMenus",
			"Projects"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"WorldPartitionHLODUtilities"
		});

		DynamicallyLoadedModuleNames.AddRange(
			new string[] {
				"GeometryProcessingInterfaces",
				"LightWeightInstancesEditor"
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

		PrivateIncludePaths.Add(System.IO.Path.Combine(GetModuleDirectory("StaticMeshEditor"), "Private"));

		SetupModulePhysicsSupport(Target);
	}
}
