// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterActor.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
#include "CitySampleMassCrowd/Public/Animation/MassCrowdAnimInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterActor() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdHairSlots();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdMeshSlots();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdOutfitDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdVisualizationID();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdActorInterface_NoRegister();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventCrowdCharacterEvent_Parms
		{
			FCrowdOutfitDefinition CurrentOutfit;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOutfit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::NewProp_CurrentOutfit = { "CurrentOutfit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventCrowdCharacterEvent_Parms, CurrentOutfit), Z_Construct_UScriptStruct_FCrowdOutfitDefinition, METADATA_PARAMS(0, nullptr) }; // 4212472946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::NewProp_CurrentOutfit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CrowdCharacterEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::_Script_CitySample_eventCrowdCharacterEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::_Script_CitySample_eventCrowdCharacterEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCrowdCharacterEvent_DelegateWrapper(const FMulticastScriptDelegate& CrowdCharacterEvent, FCrowdOutfitDefinition CurrentOutfit)
{
	struct _Script_CitySample_eventCrowdCharacterEvent_Parms
	{
		FCrowdOutfitDefinition CurrentOutfit;
	};
	_Script_CitySample_eventCrowdCharacterEvent_Parms Parms;
	Parms.CurrentOutfit=CurrentOutfit;
	CrowdCharacterEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execUpdateOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execGetCurrentAccessoryAnimSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataAsset**)Z_Param__Result=P_THIS->GetCurrentAccessoryAnimSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execGetCurrentLocomotionAnimSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataAsset**)Z_Param__Result=P_THIS->GetCurrentLocomotionAnimSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execRandomizeFromStream)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeFromStream(Z_Param_Out_RandomStream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execRandomize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Randomize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execSetEnableHair)
	{
		P_GET_UBOOL(Z_Param_bNewHairEnabled);
		P_GET_UBOOL(Z_Param_bForceUpdateCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableHair(Z_Param_bNewHairEnabled,Z_Param_bForceUpdateCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execGetAccessoryMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetAccessoryMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execGetGroomComponentForSlot)
	{
		P_GET_ENUM(ECrowdHairSlots,Z_Param_HairSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomComponent**)Z_Param__Result=P_THIS->GetGroomComponentForSlot(ECrowdHairSlots(Z_Param_HairSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execGetSkeletalMeshComponentForSlot)
	{
		P_GET_ENUM(ECrowdMeshSlots,Z_Param_BodySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSkeletalMeshComponentForSlot(ECrowdMeshSlots(Z_Param_BodySlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execBuildCharacterFromID)
	{
		P_GET_STRUCT_REF(FCrowdVisualizationID,Z_Param_Out_InVisualizationID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildCharacterFromID(Z_Param_Out_InVisualizationID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execBuildCharacterFromDefinition)
	{
		P_GET_STRUCT_REF(FCrowdCharacterDefinition,Z_Param_Out_InCharacterDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildCharacterFromDefinition(Z_Param_Out_InCharacterDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCrowdCharacter::execBuildCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildCharacter();
		P_NATIVE_END;
	}
	struct CitySampleCrowdCharacter_eventHitByCar_Parms
	{
		AActor* CarActor;
	};
	static FName NAME_ACitySampleCrowdCharacter_HitByCar = FName(TEXT("HitByCar"));
	void ACitySampleCrowdCharacter::HitByCar(AActor* CarActor)
	{
		CitySampleCrowdCharacter_eventHitByCar_Parms Parms;
		Parms.CarActor=CarActor;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleCrowdCharacter_HitByCar),&Parms);
	}
	void ACitySampleCrowdCharacter::StaticRegisterNativesACitySampleCrowdCharacter()
	{
		UClass* Class = ACitySampleCrowdCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildCharacter", &ACitySampleCrowdCharacter::execBuildCharacter },
			{ "BuildCharacterFromDefinition", &ACitySampleCrowdCharacter::execBuildCharacterFromDefinition },
			{ "BuildCharacterFromID", &ACitySampleCrowdCharacter::execBuildCharacterFromID },
			{ "GetAccessoryMeshComponent", &ACitySampleCrowdCharacter::execGetAccessoryMeshComponent },
			{ "GetCurrentAccessoryAnimSet", &ACitySampleCrowdCharacter::execGetCurrentAccessoryAnimSet },
			{ "GetCurrentLocomotionAnimSet", &ACitySampleCrowdCharacter::execGetCurrentLocomotionAnimSet },
			{ "GetGroomComponentForSlot", &ACitySampleCrowdCharacter::execGetGroomComponentForSlot },
			{ "GetSkeletalMeshComponentForSlot", &ACitySampleCrowdCharacter::execGetSkeletalMeshComponentForSlot },
			{ "Randomize", &ACitySampleCrowdCharacter::execRandomize },
			{ "RandomizeFromStream", &ACitySampleCrowdCharacter::execRandomizeFromStream },
			{ "SetEnableHair", &ACitySampleCrowdCharacter::execSetEnableHair },
			{ "UpdateOffset", &ACitySampleCrowdCharacter::execUpdateOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uses the currently set options for the actor to build the corresponding character\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the currently set options for the actor to build the corresponding character" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "BuildCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics
	{
		struct CitySampleCrowdCharacter_eventBuildCharacterFromDefinition_Parms
		{
			FCrowdCharacterDefinition InCharacterDefinition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCharacterDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::NewProp_InCharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::NewProp_InCharacterDefinition = { "InCharacterDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventBuildCharacterFromDefinition_Parms, InCharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::NewProp_InCharacterDefinition_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::NewProp_InCharacterDefinition_MetaData) }; // 2253127574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::NewProp_InCharacterDefinition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "BuildCharacterFromDefinition", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::CitySampleCrowdCharacter_eventBuildCharacterFromDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::CitySampleCrowdCharacter_eventBuildCharacterFromDefinition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics
	{
		struct CitySampleCrowdCharacter_eventBuildCharacterFromID_Parms
		{
			FCrowdVisualizationID InVisualizationID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVisualizationID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVisualizationID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::NewProp_InVisualizationID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::NewProp_InVisualizationID = { "InVisualizationID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventBuildCharacterFromID_Parms, InVisualizationID), Z_Construct_UScriptStruct_FCrowdVisualizationID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::NewProp_InVisualizationID_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::NewProp_InVisualizationID_MetaData) }; // 4281151495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::NewProp_InVisualizationID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "BuildCharacterFromID", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::CitySampleCrowdCharacter_eventBuildCharacterFromID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::CitySampleCrowdCharacter_eventBuildCharacterFromID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics
	{
		struct CitySampleCrowdCharacter_eventGetAccessoryMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetAccessoryMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "GetAccessoryMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::CitySampleCrowdCharacter_eventGetAccessoryMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::CitySampleCrowdCharacter_eventGetAccessoryMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics
	{
		struct CitySampleCrowdCharacter_eventGetCurrentAccessoryAnimSet_Parms
		{
			UDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetCurrentAccessoryAnimSet_Parms, ReturnValue), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "GetCurrentAccessoryAnimSet", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::CitySampleCrowdCharacter_eventGetCurrentAccessoryAnimSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::CitySampleCrowdCharacter_eventGetCurrentAccessoryAnimSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics
	{
		struct CitySampleCrowdCharacter_eventGetCurrentLocomotionAnimSet_Parms
		{
			UDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetCurrentLocomotionAnimSet_Parms, ReturnValue), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "GetCurrentLocomotionAnimSet", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::CitySampleCrowdCharacter_eventGetCurrentLocomotionAnimSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::CitySampleCrowdCharacter_eventGetCurrentLocomotionAnimSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics
	{
		struct CitySampleCrowdCharacter_eventGetGroomComponentForSlot_Parms
		{
			ECrowdHairSlots HairSlot;
			UGroomComponent* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HairSlot_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HairSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_HairSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_HairSlot = { "HairSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetGroomComponentForSlot_Parms, HairSlot), Z_Construct_UEnum_CitySample_ECrowdHairSlots, METADATA_PARAMS(0, nullptr) }; // 994991259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetGroomComponentForSlot_Parms, ReturnValue), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_HairSlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_HairSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "GetGroomComponentForSlot", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::CitySampleCrowdCharacter_eventGetGroomComponentForSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::CitySampleCrowdCharacter_eventGetGroomComponentForSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics
	{
		struct CitySampleCrowdCharacter_eventGetSkeletalMeshComponentForSlot_Parms
		{
			ECrowdMeshSlots BodySlot;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodySlot_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodySlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_BodySlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_BodySlot = { "BodySlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetSkeletalMeshComponentForSlot_Parms, BodySlot), Z_Construct_UEnum_CitySample_ECrowdMeshSlots, METADATA_PARAMS(0, nullptr) }; // 3389942478
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventGetSkeletalMeshComponentForSlot_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_BodySlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_BodySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "GetSkeletalMeshComponentForSlot", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::CitySampleCrowdCharacter_eventGetSkeletalMeshComponentForSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::CitySampleCrowdCharacter_eventGetSkeletalMeshComponentForSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::NewProp_CarActor = { "CarActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventHitByCar_Parms, CarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::NewProp_CarActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "HitByCar", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::PropPointers), sizeof(CitySampleCrowdCharacter_eventHitByCar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleCrowdCharacter_eventHitByCar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "Randomize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics
	{
		struct CitySampleCrowdCharacter_eventRandomizeFromStream_Parms
		{
			FRandomStream RandomStream;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleCrowdCharacter_eventRandomizeFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::NewProp_RandomStream_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::NewProp_RandomStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "RandomizeFromStream", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::CitySampleCrowdCharacter_eventRandomizeFromStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::CitySampleCrowdCharacter_eventRandomizeFromStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics
	{
		struct CitySampleCrowdCharacter_eventSetEnableHair_Parms
		{
			bool bNewHairEnabled;
			bool bForceUpdateCharacter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewHairEnabled_MetaData[];
#endif
		static void NewProp_bNewHairEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHairEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpdateCharacter_MetaData[];
#endif
		static void NewProp_bForceUpdateCharacter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdateCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled_SetBit(void* Obj)
	{
		((CitySampleCrowdCharacter_eventSetEnableHair_Parms*)Obj)->bNewHairEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled = { "bNewHairEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdCharacter_eventSetEnableHair_Parms), &Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter_SetBit(void* Obj)
	{
		((CitySampleCrowdCharacter_eventSetEnableHair_Parms*)Obj)->bForceUpdateCharacter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter = { "bForceUpdateCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleCrowdCharacter_eventSetEnableHair_Parms), &Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter_MetaData), Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bNewHairEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::NewProp_bForceUpdateCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets whether hair is enabled for the character.\n// Optionally forces the character to be updated to match the new hair state\n" },
#endif
		{ "CPP_Default_bForceUpdateCharacter", "false" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether hair is enabled for the character.\nOptionally forces the character to be updated to match the new hair state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "SetEnableHair", nullptr, nullptr, Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::CitySampleCrowdCharacter_eventSetEnableHair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::CitySampleCrowdCharacter_eventSetEnableHair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCrowdCharacter, nullptr, "UpdateOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleCrowdCharacter);
	UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister()
	{
		return ACitySampleCrowdCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleCrowdCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdCharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrowdCharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContextualAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentContextualAnimDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAnimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnAnimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAsyncLoad_MetaData[];
#endif
		static void NewProp_bShouldAsyncLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAsyncLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBuildOnConstruct_MetaData[];
#endif
		static void NewProp_bShouldBuildOnConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBuildOnConstruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHair_MetaData[];
#endif
		static void NewProp_bEnableHair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCards_MetaData[];
#endif
		static void NewProp_bUseCards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCards;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomFixedOptions_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomFixedOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomFixedOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomFixedOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterUpdated;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAnimToTextureDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackAnimToTextureDataAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnhideAccessoryTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnhideAccessoryTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AgentComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalMeshes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroomComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AccessoryMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSyncComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODSyncComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateCharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateCharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToTextureDataAssets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToTextureDataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACitySampleCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacter, "BuildCharacter" }, // 4201359570
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromDefinition, "BuildCharacterFromDefinition" }, // 1389067094
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_BuildCharacterFromID, "BuildCharacterFromID" }, // 2959293636
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_GetAccessoryMeshComponent, "GetAccessoryMeshComponent" }, // 3306381533
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentAccessoryAnimSet, "GetCurrentAccessoryAnimSet" }, // 2588533527
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_GetCurrentLocomotionAnimSet, "GetCurrentLocomotionAnimSet" }, // 1735777309
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_GetGroomComponentForSlot, "GetGroomComponentForSlot" }, // 2343945078
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_GetSkeletalMeshComponentForSlot, "GetSkeletalMeshComponentForSlot" }, // 297625757
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_HitByCar, "HitByCar" }, // 2774976290
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_Randomize, "Randomize" }, // 1769694071
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_RandomizeFromStream, "RandomizeFromStream" }, // 1888924252
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_SetEnableHair, "SetEnableHair" }, // 3785754949
		{ &Z_Construct_UFunction_ACitySampleCrowdCharacter_UpdateOffset, "UpdateOffset" }, // 3680835618
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Crowd/CrowdCharacterActor.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CrowdCharacterData_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CrowdCharacterData = { "CrowdCharacterData", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, CrowdCharacterData), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CrowdCharacterData_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CrowdCharacterData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CurrentContextualAnimDataAsset_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CurrentContextualAnimDataAsset = { "CurrentContextualAnimDataAsset", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, CurrentContextualAnimDataAsset), Z_Construct_UClass_UMassCrowdContextualAnimationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CurrentContextualAnimDataAsset_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CurrentContextualAnimDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_SpawnAnimData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Persistent anim data we can pull from during anim's init/spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persistent anim data we can pull from during anim's init/spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_SpawnAnimData = { "SpawnAnimData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, SpawnAnimData), Z_Construct_UScriptStruct_FMassCrowdAnimInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_SpawnAnimData_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_SpawnAnimData_MetaData) }; // 665947450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to asynchronously load any assets which have not previously been loaded\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to asynchronously load any assets which have not previously been loaded" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad_SetBit(void* Obj)
	{
		((ACitySampleCrowdCharacter*)Obj)->bShouldAsyncLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad = { "bShouldAsyncLoad", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleCrowdCharacter), &Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct_MetaData[] = {
		{ "Category", "Character" },
		{ "DisplayName", "Build Character on Contruction" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	void Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct_SetBit(void* Obj)
	{
		((ACitySampleCrowdCharacter*)Obj)->bShouldBuildOnConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct = { "bShouldBuildOnConstruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleCrowdCharacter), &Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	void Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair_SetBit(void* Obj)
	{
		((ACitySampleCrowdCharacter*)Obj)->bEnableHair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair = { "bEnableHair", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleCrowdCharacter), &Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines if cards should be used instead of strands when rendering hair\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if cards should be used instead of strands when rendering hair" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards_SetBit(void* Obj)
	{
		((ACitySampleCrowdCharacter*)Obj)->bUseCards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards = { "bUseCards", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleCrowdCharacter), &Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_Inner = { "RandomFixedOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(0, nullptr) }; // 3035681866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The set of properties which will remain fixed when randomizing\n// Represented as an Array due to issues with how sets of enums display in editor\n" },
#endif
		{ "EditCondition", "CharacterDataType==ECharacterDataType::Crowd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The set of properties which will remain fixed when randomizing\nRepresented as an Array due to issues with how sets of enums display in editor" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions = { "RandomFixedOptions", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, RandomFixedOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_MetaData) }; // 3035681866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CharacterOptions_MetaData[] = {
		{ "Category", "Character" },
		{ "EditCondition", "CharacterDataType==ECharacterDataType::Crowd" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CharacterOptions = { "CharacterOptions", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, CharacterOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CharacterOptions_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CharacterOptions_MetaData) }; // 1650595031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_OnCharacterUpdated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when the character has been updated. This will get called whenever the character is either built or rebuilt\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when the character has been updated. This will get called whenever the character is either built or rebuilt" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_OnCharacterUpdated = { "OnCharacterUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, OnCharacterUpdated), Z_Construct_UDelegateFunction_CitySample_CrowdCharacterEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_OnCharacterUpdated_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_OnCharacterUpdated_MetaData) }; // 764399893
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_FallbackAnimToTextureDataAsset_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used for test data only\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for test data only" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_FallbackAnimToTextureDataAsset = { "FallbackAnimToTextureDataAsset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, FallbackAnimToTextureDataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_FallbackAnimToTextureDataAsset_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_FallbackAnimToTextureDataAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_UnhideAccessoryTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_UnhideAccessoryTime = { "UnhideAccessoryTime", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, UnhideAccessoryTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_UnhideAccessoryTime_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_UnhideAccessoryTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AgentComponent_MetaData[] = {
		{ "Category", "CitySampleCrowdCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AgentComponent = { "AgentComponent", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, AgentComponent), Z_Construct_UClass_UMassAgentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AgentComponent_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AgentComponent_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes_Inner = { "AdditionalMeshes", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes_MetaData[] = {
		{ "Category", "CitySampleCrowdCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of any additional skeletal meshes this character may have\n// The array indices should match the ordering in ECrowdMeshSlots\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of any additional skeletal meshes this character may have\nThe array indices should match the ordering in ECrowdMeshSlots" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes = { "AdditionalMeshes", nullptr, (EPropertyFlags)0x0044008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, AdditionalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents_Inner = { "GroomComponents", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents_MetaData[] = {
		{ "Category", "CitySampleCrowdCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of Groom Components\n// If Groom Components are enabled then this array will be set up such that the indices match ECrowdHairSlots \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of Groom Components\nIf Groom Components are enabled then this array will be set up such that the indices match ECrowdHairSlots" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents = { "GroomComponents", nullptr, (EPropertyFlags)0x0044008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, GroomComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AccessoryMeshComponent_MetaData[] = {
		{ "Category", "CitySampleCrowdCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AccessoryMeshComponent = { "AccessoryMeshComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, AccessoryMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AccessoryMeshComponent_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AccessoryMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_LODSyncComponent_MetaData[] = {
		{ "Category", "CitySampleCrowdCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_LODSyncComponent = { "LODSyncComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, LODSyncComponent), Z_Construct_UClass_ULODSyncComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_LODSyncComponent_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_LODSyncComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_PrivateCharacterDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_PrivateCharacterDefinition = { "PrivateCharacterDefinition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleCrowdCharacter, PrivateCharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_PrivateCharacterDefinition_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_PrivateCharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AnimToTextureDataAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AnimToTextureDataAssets = { "AnimToTextureDataAssets", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(AnimToTextureDataAssets, ACitySampleCrowdCharacter), STRUCT_OFFSET(ACitySampleCrowdCharacter, AnimToTextureDataAssets), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AnimToTextureDataAssets_MetaData), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AnimToTextureDataAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CrowdCharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CurrentContextualAnimDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_SpawnAnimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldAsyncLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bShouldBuildOnConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bEnableHair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_bUseCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_RandomFixedOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_CharacterOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_OnCharacterUpdated,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_FallbackAnimToTextureDataAsset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_UnhideAccessoryTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AgentComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AdditionalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_GroomComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AccessoryMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_LODSyncComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_PrivateCharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::NewProp_AnimToTextureDataAssets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMassCrowdActorInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCrowdCharacter, IMassCrowdActorInterface), false },  // 460905421
			{ Z_Construct_UClass_UMassActorPoolableInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCrowdCharacter, IMassActorPoolableInterface), false },  // 3384984153
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleCrowdCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::ClassParams = {
		&ACitySampleCrowdCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySampleCrowdCharacter()
	{
		if (!Z_Registration_Info_UClass_ACitySampleCrowdCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleCrowdCharacter.OuterSingleton, Z_Construct_UClass_ACitySampleCrowdCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleCrowdCharacter.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleCrowdCharacter>()
	{
		return ACitySampleCrowdCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleCrowdCharacter);
	ACitySampleCrowdCharacter::~ACitySampleCrowdCharacter() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleCrowdCharacter, ACitySampleCrowdCharacter::StaticClass, TEXT("ACitySampleCrowdCharacter"), &Z_Registration_Info_UClass_ACitySampleCrowdCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleCrowdCharacter), 694185364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_2257961360(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
