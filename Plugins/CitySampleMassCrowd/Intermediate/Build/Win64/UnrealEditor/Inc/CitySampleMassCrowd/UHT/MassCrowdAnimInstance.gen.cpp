// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCrowdAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterMovementInfo_AnimInput.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterProximity_AnimInput.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterStopPrediction_AnimInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdAnimInstance() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimInstance();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimInstance_NoRegister();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData;
class UScriptStruct* FMassCrowdAnimInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCrowdAnimInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdAnimInstanceData>()
{
	return FMassCrowdAnimInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarLODAnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FarLODAnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassEntityTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MassEntityTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarLODPlaybackStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarLODPlaybackStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Significance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Significance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwappedThisFrame_MetaData[];
#endif
		static void NewProp_bSwappedThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwappedThisFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdAnimInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODAnimSequence_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODAnimSequence = { "FarLODAnimSequence", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdAnimInstanceData, FarLODAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODAnimSequence_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODAnimSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_MassEntityTransform_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_MassEntityTransform = { "MassEntityTransform", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdAnimInstanceData, MassEntityTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_MassEntityTransform_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_MassEntityTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_LookAtDirection_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In local/component space\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In local/component space" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_LookAtDirection = { "LookAtDirection", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdAnimInstanceData, LookAtDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_LookAtDirection_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_LookAtDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODPlaybackStartTime_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODPlaybackStartTime = { "FarLODPlaybackStartTime", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdAnimInstanceData, FarLODPlaybackStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODPlaybackStartTime_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODPlaybackStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_Significance_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_Significance = { "Significance", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdAnimInstanceData, Significance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_Significance_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_Significance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default to true to assume we always swapped on init\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default to true to assume we always swapped on init" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame_SetBit(void* Obj)
	{
		((FMassCrowdAnimInstanceData*)Obj)->bSwappedThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame = { "bSwappedThisFrame", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassCrowdAnimInstanceData), &Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame_MetaData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODAnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_MassEntityTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_LookAtDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_FarLODPlaybackStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_Significance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewProp_bSwappedThisFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
		nullptr,
		&NewStructOps,
		"MassCrowdAnimInstanceData",
		Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::PropPointers),
		sizeof(FMassCrowdAnimInstanceData),
		alignof(FMassCrowdAnimInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData.InnerSingleton;
	}
	void UMassCrowdAnimInstance::StaticRegisterNativesUMassCrowdAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdAnimInstance);
	UClass* Z_Construct_UClass_UMassCrowdAnimInstance_NoRegister()
	{
		return UMassCrowdAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerProximityData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerProximityData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopPredictionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StopPredictionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMovementInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MassMovementInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoFootTraces_MetaData[];
#endif
		static void NewProp_bDoFootTraces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFootTraces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassCrowdAnimInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MassCrowdAnimInstanceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/MassCrowdAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_PlayerProximityData_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_PlayerProximityData = { "PlayerProximityData", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimInstance, PlayerProximityData), Z_Construct_UScriptStruct_FMassCharacterProximity_AnimInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_PlayerProximityData_MetaData), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_PlayerProximityData_MetaData) }; // 2054109242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_StopPredictionData_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_StopPredictionData = { "StopPredictionData", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimInstance, StopPredictionData), Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_StopPredictionData_MetaData), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_StopPredictionData_MetaData) }; // 2325085377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassMovementInfo_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassMovementInfo = { "MassMovementInfo", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimInstance, MassMovementInfo), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassMovementInfo_MetaData), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassMovementInfo_MetaData) }; // 929262749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces_SetBit(void* Obj)
	{
		((UMassCrowdAnimInstance*)Obj)->bDoFootTraces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces = { "bDoFootTraces", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassCrowdAnimInstance), &Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces_MetaData), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassCrowdAnimInstanceData_MetaData[] = {
		{ "Category", "MassCrowd" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassCrowdAnimInstanceData = { "MassCrowdAnimInstanceData", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimInstance, MassCrowdAnimInstanceData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassCrowdAnimInstanceData_MetaData), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassCrowdAnimInstanceData_MetaData) }; // 665947450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_PlayerProximityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_StopPredictionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassMovementInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_bDoFootTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimInstance_Statics::NewProp_MassCrowdAnimInstanceData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdAnimInstance_Statics::ClassParams = {
		&UMassCrowdAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassCrowdAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdAnimInstance.OuterSingleton, Z_Construct_UClass_UMassCrowdAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdAnimInstance.OuterSingleton;
	}
	template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdAnimInstance>()
	{
		return UMassCrowdAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdAnimInstance);
	UMassCrowdAnimInstance::~UMassCrowdAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FMassCrowdAnimInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData_Statics::NewStructOps, TEXT("MassCrowdAnimInstanceData"), &Z_Registration_Info_UScriptStruct_MassCrowdAnimInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdAnimInstanceData), 665947450U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdAnimInstance, UMassCrowdAnimInstance::StaticClass, TEXT("UMassCrowdAnimInstance"), &Z_Registration_Info_UClass_UMassCrowdAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdAnimInstance), 1792232063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_2745557665(TEXT("/Script/CitySampleMassCrowd"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
