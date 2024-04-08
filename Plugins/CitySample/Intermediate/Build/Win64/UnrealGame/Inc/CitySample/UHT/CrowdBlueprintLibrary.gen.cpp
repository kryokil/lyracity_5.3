// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdBlueprintLibrary.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
#include "GroomAssetCards.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdBlueprintLibrary() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdFunctionLibrary();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execGenerateCharacterDefinitionFromOptions)
	{
		P_GET_STRUCT_REF(FCrowdCharacterOptions,Z_Param_Out_CharacterOptions);
		P_GET_OBJECT(UCrowdCharacterDataAsset,Z_Param_DataAsset);
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::GenerateCharacterDefinitionFromOptions(Z_Param_Out_CharacterOptions,Z_Param_DataAsset,Z_Param_Out_CharacterDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execScaleComponentByFactor)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::ScaleComponentByFactor(Z_Param_Out_CharacterDefinition,Z_Param_SceneComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execAttachComponent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BaseComponent);
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT(FVector,Z_Param_LocalOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::AttachComponent(Z_Param_SocketName,Z_Param_BaseComponent,Z_Param_SceneComponent,Z_Param_LocalOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execAttachAccessory)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BaseComponent);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_AccessoryComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::AttachAccessory(Z_Param_Out_CharacterDefinition,Z_Param_BaseComponent,Z_Param_AccessoryComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execGetWorldSpaceRefPoseTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UCitySampleCrowdFunctionLibrary::GetWorldSpaceRefPoseTransform(Z_Param_SocketName,Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetOutfitMaterials)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_TopComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BottomComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ShoesComponent);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_AccessoryComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetOutfitMaterials(Z_Param_Out_CharacterDefinition,Z_Param_TopComponent,Z_Param_BottomComponent,Z_Param_ShoesComponent,Z_Param_AccessoryComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetBodyMaterials)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BodyComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyParameterName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BottomComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetBodyMaterials(Z_Param_Out_CharacterDefinition,Z_Param_BodyComponent,Z_Param_MaterialSlotName,Z_Param_BodyParameterName,Z_Param_BottomComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetHeadMaterials)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HeadComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_GET_PROPERTY(FNameProperty,Z_Param_FaceParameterName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ChestParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetHeadMaterials(Z_Param_Out_CharacterDefinition,Z_Param_HeadComponent,Z_Param_MaterialSlotName,Z_Param_FaceParameterName,Z_Param_ChestParameterName,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetHairMaterials)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(UGroomComponent,Z_Param_HairComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_MelaninParameterName);
		P_GET_PROPERTY(FNameProperty,Z_Param_RednessParameterName);
		P_GET_PROPERTY(FNameProperty,Z_Param_RoughnessParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetHairMaterials(Z_Param_Out_CharacterDefinition,Z_Param_HairComponent,Z_Param_MelaninParameterName,Z_Param_RednessParameterName,Z_Param_RoughnessParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetGroomComponents)
	{
		P_GET_OBJECT(UCrowdCharacterDataAsset,Z_Param_CrowdCharacterDataAsset);
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(UGroomComponent,Z_Param_Hair);
		P_GET_OBJECT(UGroomComponent,Z_Param_Eyebrows);
		P_GET_OBJECT(UGroomComponent,Z_Param_Fuzz);
		P_GET_OBJECT(UGroomComponent,Z_Param_Eyelashes);
		P_GET_OBJECT(UGroomComponent,Z_Param_Mustache);
		P_GET_OBJECT(UGroomComponent,Z_Param_Beard);
		P_GET_UBOOL(Z_Param_bUseCards);
		P_GET_UBOOL(Z_Param_bEnableGroomBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetGroomComponents(Z_Param_CrowdCharacterDataAsset,Z_Param_Out_CharacterDefinition,Z_Param_Hair,Z_Param_Eyebrows,Z_Param_Fuzz,Z_Param_Eyelashes,Z_Param_Mustache,Z_Param_Beard,Z_Param_bUseCards,Z_Param_bEnableGroomBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetMeshComponents)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_CharacterDefinition);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BaseComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BodyComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HeadComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_TopComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_BottomComponent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ShoesComponent);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_AccessoryComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetMeshComponents(Z_Param_Out_CharacterDefinition,Z_Param_BaseComponent,Z_Param_BodyComponent,Z_Param_HeadComponent,Z_Param_TopComponent,Z_Param_BottomComponent,Z_Param_ShoesComponent,Z_Param_AccessoryComponent);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execGetHairCardsImportedMesh)
	{
		P_GET_STRUCT_REF(FHairGroupsCardsSourceDescription,Z_Param_Out_CardsSourceDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UCitySampleCrowdFunctionLibrary::GetHairCardsImportedMesh(Z_Param_Out_CardsSourceDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execRecomputeTangents)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::RecomputeTangents(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execAddMorphTarget)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_BaseMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SourceMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_MorphName);
		P_GET_TARRAY(int32,Z_Param_Sections);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleCrowdFunctionLibrary::AddMorphTarget(Z_Param_BaseMesh,Z_Param_SourceMesh,Z_Param_TargetMesh,Z_Param_MorphName,Z_Param_Sections,Z_Param_UVChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execRemoveAllMorphTargets)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleCrowdFunctionLibrary::RemoveAllMorphTargets(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execDisableGroomPhysics)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_Groom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::DisableGroomPhysics(Z_Param_Groom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetGroomInterpolationType)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_Groom);
		P_GET_ENUM(EGroomInterpolationType,Z_Param_InterpolationType);
		P_GET_UBOOL(Z_Param_bUseRBF);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetGroomInterpolationType(Z_Param_Groom,EGroomInterpolationType(Z_Param_InterpolationType),Z_Param_bUseRBF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetGroomGeometryType)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_Groom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetGroomGeometryType(Z_Param_Groom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetGroomBindingType)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_Groom);
		P_GET_TARRAY(EGroomBindingType,Z_Param_LODBindingType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetGroomBindingType(Z_Param_Groom,Z_Param_LODBindingType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execDisableSkeletalMeshPostProcess)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::DisableSkeletalMeshPostProcess(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execEnableSkeletalMeshSkinCache)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_TARRAY(ESkinCacheUsage,Z_Param_LODSkinCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::EnableSkeletalMeshSkinCache(Z_Param_Mesh,Z_Param_LODSkinCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleCrowdFunctionLibrary::execSetLODSettings)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_LODSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleCrowdFunctionLibrary::SetLODSettings(Z_Param_Mesh,Z_Param_LODSettings);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UCitySampleCrowdFunctionLibrary::StaticRegisterNativesUCitySampleCrowdFunctionLibrary()
	{
		UClass* Class = UCitySampleCrowdFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddMorphTarget", &UCitySampleCrowdFunctionLibrary::execAddMorphTarget },
#endif // WITH_EDITOR
			{ "AttachAccessory", &UCitySampleCrowdFunctionLibrary::execAttachAccessory },
			{ "AttachComponent", &UCitySampleCrowdFunctionLibrary::execAttachComponent },
#if WITH_EDITOR
			{ "DisableGroomPhysics", &UCitySampleCrowdFunctionLibrary::execDisableGroomPhysics },
			{ "DisableSkeletalMeshPostProcess", &UCitySampleCrowdFunctionLibrary::execDisableSkeletalMeshPostProcess },
			{ "EnableSkeletalMeshSkinCache", &UCitySampleCrowdFunctionLibrary::execEnableSkeletalMeshSkinCache },
#endif // WITH_EDITOR
			{ "GenerateCharacterDefinitionFromOptions", &UCitySampleCrowdFunctionLibrary::execGenerateCharacterDefinitionFromOptions },
#if WITH_EDITOR
			{ "GetHairCardsImportedMesh", &UCitySampleCrowdFunctionLibrary::execGetHairCardsImportedMesh },
#endif // WITH_EDITOR
			{ "GetWorldSpaceRefPoseTransform", &UCitySampleCrowdFunctionLibrary::execGetWorldSpaceRefPoseTransform },
#if WITH_EDITOR
			{ "RecomputeTangents", &UCitySampleCrowdFunctionLibrary::execRecomputeTangents },
			{ "RemoveAllMorphTargets", &UCitySampleCrowdFunctionLibrary::execRemoveAllMorphTargets },
#endif // WITH_EDITOR
			{ "ScaleComponentByFactor", &UCitySampleCrowdFunctionLibrary::execScaleComponentByFactor },
			{ "SetBodyMaterials", &UCitySampleCrowdFunctionLibrary::execSetBodyMaterials },
#if WITH_EDITOR
			{ "SetGroomBindingType", &UCitySampleCrowdFunctionLibrary::execSetGroomBindingType },
#endif // WITH_EDITOR
			{ "SetGroomComponents", &UCitySampleCrowdFunctionLibrary::execSetGroomComponents },
#if WITH_EDITOR
			{ "SetGroomGeometryType", &UCitySampleCrowdFunctionLibrary::execSetGroomGeometryType },
			{ "SetGroomInterpolationType", &UCitySampleCrowdFunctionLibrary::execSetGroomInterpolationType },
#endif // WITH_EDITOR
			{ "SetHairMaterials", &UCitySampleCrowdFunctionLibrary::execSetHairMaterials },
			{ "SetHeadMaterials", &UCitySampleCrowdFunctionLibrary::execSetHeadMaterials },
#if WITH_EDITOR
			{ "SetLODSettings", &UCitySampleCrowdFunctionLibrary::execSetLODSettings },
#endif // WITH_EDITOR
			{ "SetMeshComponents", &UCitySampleCrowdFunctionLibrary::execSetMeshComponents },
			{ "SetOutfitMaterials", &UCitySampleCrowdFunctionLibrary::execSetOutfitMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms
		{
			USkeletalMesh* BaseMesh;
			USkeletalMesh* SourceMesh;
			USkeletalMesh* TargetMesh;
			FName MorphName;
			TArray<int32> Sections;
			int32 UVChannel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, BaseMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, SourceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_MorphName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, MorphName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_MorphName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_MorphName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_UVChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_UVChannel_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_UVChannel_MetaData) };
	void Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms), &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_MorphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09* Adds a MorphTarget to Base using the difference between Source and Target.\n\x09*/" },
#endif
		{ "CPP_Default_UVChannel", "0" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Adds a MorphTarget to Base using the difference between Source and Target." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "AddMorphTarget", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::CitySampleCrowdFunctionLibrary_eventAddMorphTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USkeletalMeshComponent* BaseComponent;
			UStaticMeshComponent* AccessoryComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_BaseComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_BaseComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_AccessoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_AccessoryComponent = { "AccessoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms, AccessoryComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_AccessoryComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_AccessoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_BaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::NewProp_AccessoryComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Snaps Accessory to the Socket defined in the AccessoryDefinition */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Snaps Accessory to the Socket defined in the AccessoryDefinition" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "AttachAccessory", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::CitySampleCrowdFunctionLibrary_eventAttachAccessory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms
		{
			FName SocketName;
			USkeletalMeshComponent* BaseComponent;
			USceneComponent* SceneComponent;
			FVector LocalOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SocketName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_BaseComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_BaseComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_LocalOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_LocalOffset_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_LocalOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_BaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::NewProp_LocalOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attach Component to socket keeping Offset. \n\x09*   Local offset can be used for adding an additional translation delta after.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach Component to socket keeping Offset.\n Local offset can be used for adding an additional translation delta after." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "AttachComponent", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::CitySampleCrowdFunctionLibrary_eventAttachComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventDisableGroomPhysics_Parms
		{
			UGroomAsset* Groom;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventDisableGroomPhysics_Parms, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::NewProp_Groom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Disable GroomAsset Physics\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable GroomAsset Physics" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "DisableGroomPhysics", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::CitySampleCrowdFunctionLibrary_eventDisableGroomPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::CitySampleCrowdFunctionLibrary_eventDisableGroomPhysics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventDisableSkeletalMeshPostProcess_Parms
		{
			USkeletalMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventDisableSkeletalMeshPostProcess_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Disable SkeletalMesh PostProcess AnimBP.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable SkeletalMesh PostProcess AnimBP." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "DisableSkeletalMeshPostProcess", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::CitySampleCrowdFunctionLibrary_eventDisableSkeletalMeshPostProcess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::CitySampleCrowdFunctionLibrary_eventDisableSkeletalMeshPostProcess_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventEnableSkeletalMeshSkinCache_Parms
		{
			USkeletalMesh* Mesh;
			TArray<ESkinCacheUsage> LODSkinCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODSkinCache_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LODSkinCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSkinCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODSkinCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventEnableSkeletalMeshSkinCache_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_Inner = { "LODSkinCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(0, nullptr) }; // 3310389495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache = { "LODSkinCache", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventEnableSkeletalMeshSkinCache_Parms, LODSkinCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_MetaData) }; // 3310389495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::NewProp_LODSkinCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable SkeletalMeshLODs SkinCache.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable SkeletalMeshLODs SkinCache." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "EnableSkeletalMeshSkinCache", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::CitySampleCrowdFunctionLibrary_eventEnableSkeletalMeshSkinCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::CitySampleCrowdFunctionLibrary_eventEnableSkeletalMeshSkinCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms
		{
			FCrowdCharacterOptions CharacterOptions;
			const UCrowdCharacterDataAsset* DataAsset;
			FCrowdCharacterDefinition CharacterDefinition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterOptions = { "CharacterOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms, CharacterOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterOptions_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterOptions_MetaData) }; // 1650595031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms, DataAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_DataAsset_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_DataAsset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(0, nullptr) }; // 2253127574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::NewProp_CharacterDefinition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uses a provided data asset to resolve a set of character options to a complete character definition\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses a provided data asset to resolve a set of character options to a complete character definition" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "GenerateCharacterDefinitionFromOptions", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::CitySampleCrowdFunctionLibrary_eventGenerateCharacterDefinitionFromOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventGetHairCardsImportedMesh_Parms
		{
			FHairGroupsCardsSourceDescription CardsSourceDescription;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsSourceDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardsSourceDescription;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_CardsSourceDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_CardsSourceDescription = { "CardsSourceDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGetHairCardsImportedMesh_Parms, CardsSourceDescription), Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_CardsSourceDescription_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_CardsSourceDescription_MetaData) }; // 1173003402
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGetHairCardsImportedMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_CardsSourceDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "GetHairCardsImportedMesh", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::CitySampleCrowdFunctionLibrary_eventGetHairCardsImportedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::CitySampleCrowdFunctionLibrary_eventGetHairCardsImportedMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms
		{
			FName SocketName;
			USkinnedMeshComponent* SkinnedMeshComponent;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SocketName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SkinnedMeshComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SkinnedMeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_SkinnedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns Reference Pose Socket Transform in WorldSpace */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Reference Pose Socket Transform in WorldSpace" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "GetWorldSpaceRefPoseTransform", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::CitySampleCrowdFunctionLibrary_eventGetWorldSpaceRefPoseTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventRecomputeTangents_Parms
		{
			USkeletalMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventRecomputeTangents_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Recompute Tangents and Disable Material RecomputeTanents */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recompute Tangents and Disable Material RecomputeTanents" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "RecomputeTangents", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::CitySampleCrowdFunctionLibrary_eventRecomputeTangents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::CitySampleCrowdFunctionLibrary_eventRecomputeTangents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms
		{
			USkeletalMesh* Mesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms), &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Remove All Targets\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Remove All Targets" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "RemoveAllMorphTargets", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::CitySampleCrowdFunctionLibrary_eventRemoveAllMorphTargets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventScaleComponentByFactor_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USceneComponent* SceneComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventScaleComponentByFactor_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventScaleComponentByFactor_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_SceneComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::NewProp_SceneComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scales given component by the Character Definition Scale Factor */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales given component by the Character Definition Scale Factor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "ScaleComponentByFactor", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::CitySampleCrowdFunctionLibrary_eventScaleComponentByFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::CitySampleCrowdFunctionLibrary_eventScaleComponentByFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USkeletalMeshComponent* BodyComponent;
			FName MaterialSlotName;
			FName BodyParameterName;
			USkeletalMeshComponent* BottomComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BodyParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyComponent = { "BodyComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms, BodyComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_MaterialSlotName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_MaterialSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyParameterName = { "BodyParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms, BodyParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BottomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BottomComponent = { "BottomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms, BottomComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BottomComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BottomComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BodyParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::NewProp_BottomComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set Head Material Instance Parameters\n\x09*/" },
#endif
		{ "CPP_Default_BottomComponent", "None" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Head Material Instance Parameters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetBodyMaterials", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetBodyMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetGroomBindingType_Parms
		{
			UGroomAsset* Groom;
			TArray<EGroomBindingType> LODBindingType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODBindingType_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LODBindingType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBindingType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODBindingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomBindingType_Parms, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_Inner = { "LODBindingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HairStrandsCore_EGroomBindingType, METADATA_PARAMS(0, nullptr) }; // 2893825946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType = { "LODBindingType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomBindingType_Parms, LODBindingType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_MetaData) }; // 2893825946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_Groom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::NewProp_LODBindingType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets GroomAsset LOD Binding to given type. Strands and Cards: Skinning, Meshes: Rigid.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets GroomAsset LOD Binding to given type. Strands and Cards: Skinning, Meshes: Rigid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetGroomBindingType", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomBindingType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomBindingType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms
		{
			const UCrowdCharacterDataAsset* CrowdCharacterDataAsset;
			FCrowdCharacterDefinition CharacterDefinition;
			UGroomComponent* Hair;
			UGroomComponent* Eyebrows;
			UGroomComponent* Fuzz;
			UGroomComponent* Eyelashes;
			UGroomComponent* Mustache;
			UGroomComponent* Beard;
			bool bUseCards;
			bool bEnableGroomBinding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdCharacterDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdCharacterDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Eyebrows_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Eyebrows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fuzz_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Fuzz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Eyelashes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Eyelashes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mustache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mustache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Beard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Beard;
		static void NewProp_bUseCards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCards;
		static void NewProp_bEnableGroomBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGroomBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CrowdCharacterDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CrowdCharacterDataAsset = { "CrowdCharacterDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, CrowdCharacterDataAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CrowdCharacterDataAsset_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CrowdCharacterDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Hair_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Hair = { "Hair", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Hair), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Hair_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Hair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyebrows_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyebrows = { "Eyebrows", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Eyebrows), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyebrows_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyebrows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Fuzz_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Fuzz = { "Fuzz", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Fuzz), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Fuzz_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Fuzz_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyelashes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyelashes = { "Eyelashes", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Eyelashes), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyelashes_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyelashes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Mustache_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Mustache = { "Mustache", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Mustache), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Mustache_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Mustache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Beard_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Beard = { "Beard", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms, Beard), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Beard_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Beard_MetaData) };
	void Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bUseCards_SetBit(void* Obj)
	{
		((CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms*)Obj)->bUseCards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bUseCards = { "bUseCards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms), &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bUseCards_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bEnableGroomBinding_SetBit(void* Obj)
	{
		((CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms*)Obj)->bEnableGroomBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bEnableGroomBinding = { "bEnableGroomBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms), &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bEnableGroomBinding_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CrowdCharacterDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Hair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyebrows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Fuzz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Eyelashes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Mustache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_Beard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bUseCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::NewProp_bEnableGroomBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets All Groom Components */" },
#endif
		{ "CPP_Default_bEnableGroomBinding", "true" },
		{ "CPP_Default_bUseCards", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets All Groom Components" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetGroomComponents", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetGroomGeometryType_Parms
		{
			UGroomAsset* Groom;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomGeometryType_Parms, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::NewProp_Groom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Turns all Strands to Cards\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns all Strands to Cards" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetGroomGeometryType", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomGeometryType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomGeometryType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms
		{
			UGroomAsset* Groom;
			EGroomInterpolationType InterpolationType;
			bool bUseRBF;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
		static void NewProp_bUseRBF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRBF;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms, InterpolationType), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, METADATA_PARAMS(0, nullptr) }; // 850683939
	void Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_bUseRBF_SetBit(void* Obj)
	{
		((CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms*)Obj)->bUseRBF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_bUseRBF = { "bUseRBF", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms), &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_bUseRBF_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_Groom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::NewProp_bUseRBF,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets GroomAsset LOD Binding to given type. Strands and Cards: Skinning, Meshes: Rigid.\n\x09*/" },
#endif
		{ "CPP_Default_bUseRBF", "false" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets GroomAsset LOD Binding to given type. Strands and Cards: Skinning, Meshes: Rigid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetGroomInterpolationType", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::CitySampleCrowdFunctionLibrary_eventSetGroomInterpolationType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			UGroomComponent* HairComponent;
			FName MelaninParameterName;
			FName RednessParameterName;
			FName RoughnessParameterName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HairComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MelaninParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MelaninParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RednessParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RednessParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoughnessParameterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_HairComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_HairComponent = { "HairComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms, HairComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_HairComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_HairComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_MelaninParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_MelaninParameterName = { "MelaninParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms, MelaninParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_MelaninParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_MelaninParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RednessParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RednessParameterName = { "RednessParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms, RednessParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RednessParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RednessParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RoughnessParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RoughnessParameterName = { "RoughnessParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms, RoughnessParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RoughnessParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RoughnessParameterName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_HairComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_MelaninParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RednessParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::NewProp_RoughnessParameterName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set Hair Material Instance Parameters \n\x09*  The Hair meshes have multiple materials, for different LODs: cards, helmets, etc.\n\x09*  This function will override the same parameter for all materials.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Hair Material Instance Parameters\n      *  The Hair meshes have multiple materials, for different LODs: cards, helmets, etc.\n      *  This function will override the same parameter for all materials." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetHairMaterials", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetHairMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USkeletalMeshComponent* HeadComponent;
			FName MaterialSlotName;
			FName FaceParameterName;
			FName ChestParameterName;
			int32 LODIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FaceParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChestParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChestParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_HeadComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_HeadComponent = { "HeadComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, HeadComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_HeadComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_HeadComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_MaterialSlotName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_MaterialSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_FaceParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_FaceParameterName = { "FaceParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, FaceParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_FaceParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_FaceParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_ChestParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_ChestParameterName = { "ChestParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, ChestParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_ChestParameterName_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_ChestParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_LODIndex_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_LODIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_HeadComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_FaceParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_ChestParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set Head Material Instance Parameters\n\x09*  This overrides the texture for face and chest.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Head Material Instance Parameters\n      *  This overrides the texture for face and chest." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetHeadMaterials", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetHeadMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetLODSettings_Parms
		{
			USkeletalMesh* Mesh;
			USkeletalMeshLODSettings* LODSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LODSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetLODSettings_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetLODSettings_Parms, LODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::NewProp_LODSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets SkeletalMesh with LODSettings. \n\x09* This makes sure the SkelMesh has enough LODInfo Data */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets SkeletalMesh with LODSettings.\nThis makes sure the SkelMesh has enough LODInfo Data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetLODSettings", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::CitySampleCrowdFunctionLibrary_eventSetLODSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::CitySampleCrowdFunctionLibrary_eventSetLODSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USkeletalMeshComponent* BaseComponent;
			USkeletalMeshComponent* BodyComponent;
			USkeletalMeshComponent* HeadComponent;
			USkeletalMeshComponent* TopComponent;
			USkeletalMeshComponent* BottomComponent;
			USkeletalMeshComponent* ShoesComponent;
			UStaticMeshComponent* AccessoryComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShoesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShoesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BaseComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BaseComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BodyComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BodyComponent = { "BodyComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, BodyComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BodyComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BodyComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_HeadComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_HeadComponent = { "HeadComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, HeadComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_HeadComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_HeadComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_TopComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_TopComponent = { "TopComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, TopComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_TopComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_TopComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BottomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BottomComponent = { "BottomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, BottomComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BottomComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BottomComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_ShoesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_ShoesComponent = { "ShoesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, ShoesComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_ShoesComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_ShoesComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_AccessoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_AccessoryComponent = { "AccessoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms, AccessoryComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_AccessoryComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_AccessoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BodyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_HeadComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_TopComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_BottomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_ShoesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::NewProp_AccessoryComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets Mesh Components for Body, Outfit and Hair. \n\x09*  All the Outfit Meshes described in the CharacterDefinition are merged in one single SkelMesh\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Mesh Components for Body, Outfit and Hair.\n      *  All the Outfit Meshes described in the CharacterDefinition are merged in one single SkelMesh" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetMeshComponents", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::CitySampleCrowdFunctionLibrary_eventSetMeshComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics
	{
		struct CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms
		{
			FCrowdCharacterDefinition CharacterDefinition;
			USkeletalMeshComponent* TopComponent;
			USkeletalMeshComponent* BottomComponent;
			USkeletalMeshComponent* ShoesComponent;
			UStaticMeshComponent* AccessoryComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShoesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShoesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_TopComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_TopComponent = { "TopComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms, TopComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_TopComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_TopComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_BottomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_BottomComponent = { "BottomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms, BottomComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_BottomComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_BottomComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_ShoesComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_ShoesComponent = { "ShoesComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms, ShoesComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_ShoesComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_ShoesComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_AccessoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_AccessoryComponent = { "AccessoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms, AccessoryComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_AccessoryComponent_MetaData), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_AccessoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_TopComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_BottomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_ShoesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::NewProp_AccessoryComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sets Dynamic Material Instances for Outfit.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Dynamic Material Instances for Outfit." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, nullptr, "SetOutfitMaterials", nullptr, nullptr, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::CitySampleCrowdFunctionLibrary_eventSetOutfitMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCrowdFunctionLibrary);
	UClass* Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_NoRegister()
	{
		return UCitySampleCrowdFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AddMorphTarget, "AddMorphTarget" }, // 2471792068
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachAccessory, "AttachAccessory" }, // 418284254
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_AttachComponent, "AttachComponent" }, // 3014502835
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableGroomPhysics, "DisableGroomPhysics" }, // 3042880868
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_DisableSkeletalMeshPostProcess, "DisableSkeletalMeshPostProcess" }, // 136340021
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_EnableSkeletalMeshSkinCache, "EnableSkeletalMeshSkinCache" }, // 3955259620
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GenerateCharacterDefinitionFromOptions, "GenerateCharacterDefinitionFromOptions" }, // 1588231169
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetHairCardsImportedMesh, "GetHairCardsImportedMesh" }, // 1525909759
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_GetWorldSpaceRefPoseTransform, "GetWorldSpaceRefPoseTransform" }, // 4293137919
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RecomputeTangents, "RecomputeTangents" }, // 2556299190
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_RemoveAllMorphTargets, "RemoveAllMorphTargets" }, // 3041765773
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_ScaleComponentByFactor, "ScaleComponentByFactor" }, // 2122464573
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetBodyMaterials, "SetBodyMaterials" }, // 1635253549
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomBindingType, "SetGroomBindingType" }, // 1711813226
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomComponents, "SetGroomComponents" }, // 1208626011
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomGeometryType, "SetGroomGeometryType" }, // 2861847301
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetGroomInterpolationType, "SetGroomInterpolationType" }, // 828169367
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHairMaterials, "SetHairMaterials" }, // 3729093843
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetHeadMaterials, "SetHeadMaterials" }, // 434153448
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetLODSettings, "SetLODSettings" }, // 989335121
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetMeshComponents, "SetMeshComponents" }, // 2529738580
		{ &Z_Construct_UFunction_UCitySampleCrowdFunctionLibrary_SetOutfitMaterials, "SetOutfitMaterials" }, // 2158573978
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Set of utilities for dealing with the Crowd Definition Objects.\n*/" },
#endif
		{ "IncludePath", "Crowd/CrowdBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set of utilities for dealing with the Crowd Definition Objects." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCrowdFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::ClassParams = {
		&UCitySampleCrowdFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleCrowdFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCrowdFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCrowdFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCitySampleCrowdFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCrowdFunctionLibrary.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCrowdFunctionLibrary>()
	{
		return UCitySampleCrowdFunctionLibrary::StaticClass();
	}
	UCitySampleCrowdFunctionLibrary::UCitySampleCrowdFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCrowdFunctionLibrary);
	UCitySampleCrowdFunctionLibrary::~UCitySampleCrowdFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCrowdFunctionLibrary, UCitySampleCrowdFunctionLibrary::StaticClass, TEXT("UCitySampleCrowdFunctionLibrary"), &Z_Registration_Info_UClass_UCitySampleCrowdFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCrowdFunctionLibrary), 1196664301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_2544861991(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
