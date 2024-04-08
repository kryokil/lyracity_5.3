// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/CitySampleEditorBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleEditorBlueprintLibrary() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorBlueprintLibrary();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execGetSequenceEvents)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::GetSequenceEvents(Z_Param_LevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execIsTrackMuted)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_MovieSceneTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::IsTrackMuted(Z_Param_MovieSceneTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execSetRayTracingGroupID)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_RayTracingGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::SetRayTracingGroupID(Z_Param_StaticMeshComponent,Z_Param_RayTracingGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execCopyMeshMaterials)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SourceMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetMesh);
		P_GET_TMAP_REF(FName,FName,Z_Param_Out_Mapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::CopyMeshMaterials(Z_Param_SourceMesh,Z_Param_TargetMesh,Z_Param_Out_Mapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execIsMaterialIndexUsed)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::IsMaterialIndexUsed(Z_Param_Mesh,Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execResetMaterialSectionSlots)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::ResetMaterialSectionSlots(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execGetGenerateLightmapUVs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::GetGenerateLightmapUVs(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execReimportStaticMeshWithModify)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::ReimportStaticMeshWithModify(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execUpdateReimportPath)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceFileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::UpdateReimportPath(Z_Param_StaticMesh,Z_Param_Filename,Z_Param_SourceFileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execDeleteMaterialSlot)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::DeleteMaterialSlot(Z_Param_Mesh,Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execExploreProfilesDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::ExploreProfilesDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execSetStatsShouldEmitNamedEvents)
	{
		P_GET_UBOOL(Z_Param_bShouldEmitNamedEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::SetStatsShouldEmitNamedEvents(Z_Param_bShouldEmitNamedEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execCopyConstraintSettingsFromBoneNames)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_SourcePhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SourceBone1Name);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SourceBone2Name);
		P_GET_OBJECT(UPhysicsAsset,Z_Param_TargetPhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetBone1Name);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetBone2Name);
		P_GET_UBOOL(Z_Param_bKeepPosition);
		P_GET_UBOOL(Z_Param_bKeepRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::CopyConstraintSettingsFromBoneNames(Z_Param_SourcePhysicsAsset,Z_Param_Out_SourceBone1Name,Z_Param_Out_SourceBone2Name,Z_Param_TargetPhysicsAsset,Z_Param_Out_TargetBone1Name,Z_Param_Out_TargetBone2Name,Z_Param_bKeepPosition,Z_Param_bKeepRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execCopyConstraintSettingsFromJointNames)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_SourcePhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SourceJointName);
		P_GET_OBJECT(UPhysicsAsset,Z_Param_TargetPhysicsAsset);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetJointName);
		P_GET_UBOOL(Z_Param_bKeepPosition);
		P_GET_UBOOL(Z_Param_bKeepRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::CopyConstraintSettingsFromJointNames(Z_Param_SourcePhysicsAsset,Z_Param_Out_SourceJointName,Z_Param_TargetPhysicsAsset,Z_Param_Out_TargetJointName,Z_Param_bKeepPosition,Z_Param_bKeepRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execCopyPhysicsAssetSettings)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_SourcePhysicsAsset);
		P_GET_TARRAY(UPhysicsAsset*,Z_Param_TargetPhysicsAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::CopyPhysicsAssetSettings(Z_Param_SourcePhysicsAsset,Z_Param_TargetPhysicsAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execGetNeverNeedsCookedCollisionData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::GetNeverNeedsCookedCollisionData(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execSetNeverNeedsCookedCollisionData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bNeverNeedsCookedCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::SetNeverNeedsCookedCollisionData(Z_Param_StaticMesh,Z_Param_bNeverNeedsCookedCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execGetCollisionComplexity)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Complexity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleEditorBlueprintLibrary::GetCollisionComplexity(Z_Param_StaticMesh,(TEnumAsByte<ECollisionTraceFlag>&)(Z_Param_Out_Complexity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execSetCollisionComplexity)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FByteProperty,Z_Param_Complexity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::SetCollisionComplexity(Z_Param_StaticMesh,ECollisionTraceFlag(Z_Param_Complexity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execGenerateGeometryCollection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::GenerateGeometryCollection(Z_Param_AssetPath,Z_Param_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleEditorBlueprintLibrary::execSetNaniteSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PercentTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleEditorBlueprintLibrary::SetNaniteSettings(Z_Param_StaticMesh,Z_Param_bEnabled,Z_Param_PercentTriangles);
		P_NATIVE_END;
	}
	void UCitySampleEditorBlueprintLibrary::StaticRegisterNativesUCitySampleEditorBlueprintLibrary()
	{
		UClass* Class = UCitySampleEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyConstraintSettingsFromBoneNames", &UCitySampleEditorBlueprintLibrary::execCopyConstraintSettingsFromBoneNames },
			{ "CopyConstraintSettingsFromJointNames", &UCitySampleEditorBlueprintLibrary::execCopyConstraintSettingsFromJointNames },
			{ "CopyMeshMaterials", &UCitySampleEditorBlueprintLibrary::execCopyMeshMaterials },
			{ "CopyPhysicsAssetSettings", &UCitySampleEditorBlueprintLibrary::execCopyPhysicsAssetSettings },
			{ "DeleteMaterialSlot", &UCitySampleEditorBlueprintLibrary::execDeleteMaterialSlot },
			{ "ExploreProfilesDirectory", &UCitySampleEditorBlueprintLibrary::execExploreProfilesDirectory },
			{ "GenerateGeometryCollection", &UCitySampleEditorBlueprintLibrary::execGenerateGeometryCollection },
			{ "GetCollisionComplexity", &UCitySampleEditorBlueprintLibrary::execGetCollisionComplexity },
			{ "GetGenerateLightmapUVs", &UCitySampleEditorBlueprintLibrary::execGetGenerateLightmapUVs },
			{ "GetNeverNeedsCookedCollisionData", &UCitySampleEditorBlueprintLibrary::execGetNeverNeedsCookedCollisionData },
			{ "GetSequenceEvents", &UCitySampleEditorBlueprintLibrary::execGetSequenceEvents },
			{ "IsMaterialIndexUsed", &UCitySampleEditorBlueprintLibrary::execIsMaterialIndexUsed },
			{ "IsTrackMuted", &UCitySampleEditorBlueprintLibrary::execIsTrackMuted },
			{ "ReimportStaticMeshWithModify", &UCitySampleEditorBlueprintLibrary::execReimportStaticMeshWithModify },
			{ "ResetMaterialSectionSlots", &UCitySampleEditorBlueprintLibrary::execResetMaterialSectionSlots },
			{ "SetCollisionComplexity", &UCitySampleEditorBlueprintLibrary::execSetCollisionComplexity },
			{ "SetNaniteSettings", &UCitySampleEditorBlueprintLibrary::execSetNaniteSettings },
			{ "SetNeverNeedsCookedCollisionData", &UCitySampleEditorBlueprintLibrary::execSetNeverNeedsCookedCollisionData },
			{ "SetRayTracingGroupID", &UCitySampleEditorBlueprintLibrary::execSetRayTracingGroupID },
			{ "SetStatsShouldEmitNamedEvents", &UCitySampleEditorBlueprintLibrary::execSetStatsShouldEmitNamedEvents },
			{ "UpdateReimportPath", &UCitySampleEditorBlueprintLibrary::execUpdateReimportPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms
		{
			UPhysicsAsset* SourcePhysicsAsset;
			FName SourceBone1Name;
			FName SourceBone2Name;
			UPhysicsAsset* TargetPhysicsAsset;
			FName TargetBone1Name;
			FName TargetBone2Name;
			bool bKeepPosition;
			bool bKeepRotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone1Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBone1Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone2Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBone2Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone1Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBone1Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone2Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBone2Name;
		static void NewProp_bKeepPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPosition;
		static void NewProp_bKeepRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourcePhysicsAsset = { "SourcePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, SourcePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone1Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone1Name = { "SourceBone1Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, SourceBone1Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone1Name_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone1Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone2Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone2Name = { "SourceBone2Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, SourceBone2Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone2Name_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone2Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetPhysicsAsset = { "TargetPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, TargetPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone1Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone1Name = { "TargetBone1Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, TargetBone1Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone1Name_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone1Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone2Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone2Name = { "TargetBone2Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms, TargetBone2Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone2Name_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone2Name_MetaData) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepPosition_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms*)Obj)->bKeepPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepPosition = { "bKeepPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepPosition_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepRotation_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms*)Obj)->bKeepRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepRotation = { "bKeepRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepRotation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourcePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone1Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_SourceBone2Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone1Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_TargetBone2Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::NewProp_bKeepRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | PhysicsAsset" },
		{ "CPP_Default_bKeepPosition", "true" },
		{ "CPP_Default_bKeepRotation", "true" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "CopyConstraintSettingsFromBoneNames", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromBoneNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms
		{
			UPhysicsAsset* SourcePhysicsAsset;
			FName SourceJointName;
			UPhysicsAsset* TargetPhysicsAsset;
			FName TargetJointName;
			bool bKeepPosition;
			bool bKeepRotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceJointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceJointName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetJointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetJointName;
		static void NewProp_bKeepPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPosition;
		static void NewProp_bKeepRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourcePhysicsAsset = { "SourcePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms, SourcePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourceJointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourceJointName = { "SourceJointName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms, SourceJointName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourceJointName_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourceJointName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetPhysicsAsset = { "TargetPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms, TargetPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetJointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetJointName = { "TargetJointName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms, TargetJointName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetJointName_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetJointName_MetaData) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepPosition_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms*)Obj)->bKeepPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepPosition = { "bKeepPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepPosition_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepRotation_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms*)Obj)->bKeepRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepRotation = { "bKeepRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepRotation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourcePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_SourceJointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_TargetJointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::NewProp_bKeepRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | PhysicsAsset" },
		{ "CPP_Default_bKeepPosition", "true" },
		{ "CPP_Default_bKeepRotation", "true" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "CopyConstraintSettingsFromJointNames", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::CitySampleEditorBlueprintLibrary_eventCopyConstraintSettingsFromJointNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms
		{
			USkeletalMesh* SourceMesh;
			USkeletalMesh* TargetMesh;
			TMap<FName,FName> Mapping;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Mapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Mapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Mapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms, SourceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_ValueProp = { "Mapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_Key_KeyProp = { "Mapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms, Mapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::NewProp_Mapping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Mapping" },
		{ "Category", "CitySample | SkeletalMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "CopyMeshMaterials", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::CitySampleEditorBlueprintLibrary_eventCopyMeshMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventCopyPhysicsAssetSettings_Parms
		{
			UPhysicsAsset* SourcePhysicsAsset;
			TArray<UPhysicsAsset*> TargetPhysicsAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePhysicsAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPhysicsAssets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_SourcePhysicsAsset = { "SourcePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyPhysicsAssetSettings_Parms, SourcePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_TargetPhysicsAssets_Inner = { "TargetPhysicsAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_TargetPhysicsAssets = { "TargetPhysicsAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventCopyPhysicsAssetSettings_Parms, TargetPhysicsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_SourcePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_TargetPhysicsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::NewProp_TargetPhysicsAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | PhysicsAsset" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "CopyPhysicsAssetSettings", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::CitySampleEditorBlueprintLibrary_eventCopyPhysicsAssetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::CitySampleEditorBlueprintLibrary_eventCopyPhysicsAssetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventDeleteMaterialSlot_Parms
		{
			UStaticMesh* Mesh;
			int32 MaterialIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventDeleteMaterialSlot_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventDeleteMaterialSlot_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::NewProp_MaterialIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "DeleteMaterialSlot", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::CitySampleEditorBlueprintLibrary_eventDeleteMaterialSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::CitySampleEditorBlueprintLibrary_eventDeleteMaterialSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Profiling" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "ExploreProfilesDirectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventGenerateGeometryCollection_Parms
		{
			FString AssetPath;
			TArray<AActor*> Actors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGenerateGeometryCollection_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_AssetPath_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_AssetPath_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGenerateGeometryCollection_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Fracture" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "GenerateGeometryCollection", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::CitySampleEditorBlueprintLibrary_eventGenerateGeometryCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::CitySampleEditorBlueprintLibrary_eventGenerateGeometryCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms
		{
			const UStaticMesh* StaticMesh;
			TEnumAsByte<ECollisionTraceFlag> Complexity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Complexity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms, Complexity), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(0, nullptr) }; // 2608406128
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_Complexity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "GetCollisionComplexity", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::CitySampleEditorBlueprintLibrary_eventGetCollisionComplexity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "GetGenerateLightmapUVs", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::CitySampleEditorBlueprintLibrary_eventGetGenerateLightmapUVs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "GetNeverNeedsCookedCollisionData", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::CitySampleEditorBlueprintLibrary_eventGetNeverNeedsCookedCollisionData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventGetSequenceEvents_Parms
		{
			ULevelSequence* LevelSequence;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetSequenceEvents_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventGetSequenceEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Sequencer" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "GetSequenceEvents", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::CitySampleEditorBlueprintLibrary_eventGetSequenceEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::CitySampleEditorBlueprintLibrary_eventGetSequenceEvents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms
		{
			UStaticMesh* Mesh;
			int32 MaterialIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "IsMaterialIndexUsed", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::CitySampleEditorBlueprintLibrary_eventIsMaterialIndexUsed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms
		{
			UMovieSceneTrack* MovieSceneTrack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieSceneTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieSceneTrack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_MovieSceneTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_MovieSceneTrack = { "MovieSceneTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms, MovieSceneTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_MovieSceneTrack_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_MovieSceneTrack_MetaData) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_MovieSceneTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Sequencer" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "IsTrackMuted", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::CitySampleEditorBlueprintLibrary_eventIsTrackMuted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventReimportStaticMeshWithModify_Parms
		{
			UStaticMesh* StaticMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventReimportStaticMeshWithModify_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "ReimportStaticMeshWithModify", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::CitySampleEditorBlueprintLibrary_eventReimportStaticMeshWithModify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::CitySampleEditorBlueprintLibrary_eventReimportStaticMeshWithModify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventResetMaterialSectionSlots_Parms
		{
			UStaticMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventResetMaterialSectionSlots_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "ResetMaterialSectionSlots", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::CitySampleEditorBlueprintLibrary_eventResetMaterialSectionSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::CitySampleEditorBlueprintLibrary_eventResetMaterialSectionSlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventSetCollisionComplexity_Parms
		{
			UStaticMesh* StaticMesh;
			TEnumAsByte<ECollisionTraceFlag> Complexity;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complexity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Complexity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetCollisionComplexity_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_Complexity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetCollisionComplexity_Parms, Complexity), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_Complexity_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_Complexity_MetaData) }; // 2608406128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::NewProp_Complexity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "SetCollisionComplexity", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::CitySampleEditorBlueprintLibrary_eventSetCollisionComplexity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::CitySampleEditorBlueprintLibrary_eventSetCollisionComplexity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms
		{
			UStaticMesh* StaticMesh;
			bool bEnabled;
			float PercentTriangles;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms, PercentTriangles), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::NewProp_PercentTriangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "SetNaniteSettings", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::CitySampleEditorBlueprintLibrary_eventSetNaniteSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms
		{
			UStaticMesh* StaticMesh;
			bool bNeverNeedsCookedCollisionData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverNeedsCookedCollisionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms*)Obj)->bNeverNeedsCookedCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_bNeverNeedsCookedCollisionData = { "bNeverNeedsCookedCollisionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::NewProp_bNeverNeedsCookedCollisionData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "SetNeverNeedsCookedCollisionData", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::CitySampleEditorBlueprintLibrary_eventSetNeverNeedsCookedCollisionData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventSetRayTracingGroupID_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 RayTracingGroupID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetRayTracingGroupID_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_RayTracingGroupID = { "RayTracingGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventSetRayTracingGroupID_Parms, RayTracingGroupID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::NewProp_RayTracingGroupID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Raytracing" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "SetRayTracingGroupID", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::CitySampleEditorBlueprintLibrary_eventSetRayTracingGroupID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::CitySampleEditorBlueprintLibrary_eventSetRayTracingGroupID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventSetStatsShouldEmitNamedEvents_Parms
		{
			bool bShouldEmitNamedEvents;
		};
		static void NewProp_bShouldEmitNamedEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEmitNamedEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::NewProp_bShouldEmitNamedEvents_SetBit(void* Obj)
	{
		((CitySampleEditorBlueprintLibrary_eventSetStatsShouldEmitNamedEvents_Parms*)Obj)->bShouldEmitNamedEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::NewProp_bShouldEmitNamedEvents = { "bShouldEmitNamedEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleEditorBlueprintLibrary_eventSetStatsShouldEmitNamedEvents_Parms), &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::NewProp_bShouldEmitNamedEvents_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::NewProp_bShouldEmitNamedEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | Profiling" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "SetStatsShouldEmitNamedEvents", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::CitySampleEditorBlueprintLibrary_eventSetStatsShouldEmitNamedEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::CitySampleEditorBlueprintLibrary_eventSetStatsShouldEmitNamedEvents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics
	{
		struct CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms
		{
			UStaticMesh* StaticMesh;
			FString Filename;
			int32 SourceFileIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceFileIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_Filename_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_SourceFileIndex = { "SourceFileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms, SourceFileIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::NewProp_SourceFileIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | StaticMesh" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, nullptr, "UpdateReimportPath", nullptr, nullptr, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::CitySampleEditorBlueprintLibrary_eventUpdateReimportPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_NoRegister()
	{
		return UCitySampleEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromBoneNames, "CopyConstraintSettingsFromBoneNames" }, // 3701438446
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyConstraintSettingsFromJointNames, "CopyConstraintSettingsFromJointNames" }, // 380406072
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyMeshMaterials, "CopyMeshMaterials" }, // 320290081
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_CopyPhysicsAssetSettings, "CopyPhysicsAssetSettings" }, // 4080316324
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_DeleteMaterialSlot, "DeleteMaterialSlot" }, // 3074758182
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ExploreProfilesDirectory, "ExploreProfilesDirectory" }, // 329676174
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GenerateGeometryCollection, "GenerateGeometryCollection" }, // 2668059328
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetCollisionComplexity, "GetCollisionComplexity" }, // 2404861658
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetGenerateLightmapUVs, "GetGenerateLightmapUVs" }, // 2332354445
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetNeverNeedsCookedCollisionData, "GetNeverNeedsCookedCollisionData" }, // 518834357
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_GetSequenceEvents, "GetSequenceEvents" }, // 1866041351
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsMaterialIndexUsed, "IsMaterialIndexUsed" }, // 3078199079
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_IsTrackMuted, "IsTrackMuted" }, // 420166622
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ReimportStaticMeshWithModify, "ReimportStaticMeshWithModify" }, // 2885707765
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_ResetMaterialSectionSlots, "ResetMaterialSectionSlots" }, // 1925778164
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetCollisionComplexity, "SetCollisionComplexity" }, // 4212205378
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNaniteSettings, "SetNaniteSettings" }, // 1238979011
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetNeverNeedsCookedCollisionData, "SetNeverNeedsCookedCollisionData" }, // 35958088
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetRayTracingGroupID, "SetRayTracingGroupID" }, // 3069980031
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_SetStatsShouldEmitNamedEvents, "SetStatsShouldEmitNamedEvents" }, // 1019913728
		{ &Z_Construct_UFunction_UCitySampleEditorBlueprintLibrary_UpdateReimportPath, "UpdateReimportPath" }, // 4259248247
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CitySampleEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CitySampleEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::ClassParams = {
		&UCitySampleEditorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCitySampleEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCitySampleEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleEditorBlueprintLibrary.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleEditorBlueprintLibrary>()
	{
		return UCitySampleEditorBlueprintLibrary::StaticClass();
	}
	UCitySampleEditorBlueprintLibrary::UCitySampleEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleEditorBlueprintLibrary);
	UCitySampleEditorBlueprintLibrary::~UCitySampleEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleEditorBlueprintLibrary, UCitySampleEditorBlueprintLibrary::StaticClass, TEXT("UCitySampleEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UCitySampleEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleEditorBlueprintLibrary), 2810018391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_3577686215(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_CitySampleEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
