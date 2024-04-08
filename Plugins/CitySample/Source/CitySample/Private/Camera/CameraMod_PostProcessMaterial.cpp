// Copyright Epic Games, Inc. All Rights Reserved.


#include "Camera/CameraMod_PostProcessMaterial.h"

void UCameraMod_PostProcessMaterial::ModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings)
{
	if (bDisabled == false)
	{
		PostProcessSettings.AddBlendable(AgentVisionPostProcessMaterial, 1.f);
		PostProcessBlendWeight = 1.f;
	}
}

void UCameraMod_PostProcessMaterial::AddedToCamera(APlayerCameraManager* Camera)
{
	Super::AddedToCamera(Camera);

	if (bStartDisabled)
	{
		DisableModifier(true);
	}
}
