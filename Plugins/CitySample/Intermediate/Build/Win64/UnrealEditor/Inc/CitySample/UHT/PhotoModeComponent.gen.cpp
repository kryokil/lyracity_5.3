// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/PhotoModeComponent.h"
#include "CitySample/Public/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeComponent() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleHoverDrone_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleVehicleBase_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UDrivableVehicleComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UPhotoModeComponent();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UPhotoModeComponent_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EPhotoModeState();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnPhotoModeActivated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnPhotoModeActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPhotoModeActivated_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModeActivated)
{
	OnPhotoModeActivated.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhotoModeState;
	static UEnum* EPhotoModeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhotoModeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhotoModeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_EPhotoModeState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("EPhotoModeState"));
		}
		return Z_Registration_Info_UEnum_EPhotoModeState.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<EPhotoModeState>()
	{
		return EPhotoModeState_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_EPhotoModeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enumerators[] = {
		{ "EPhotoModeState::NotActive", (int64)EPhotoModeState::NotActive },
		{ "EPhotoModeState::Pending", (int64)EPhotoModeState::Pending },
		{ "EPhotoModeState::Active", (int64)EPhotoModeState::Active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EPhotoModeState::Active" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to help manage Photo Mode states\n */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
		{ "NotActive.Name", "EPhotoModeState::NotActive" },
		{ "Pending.Name", "EPhotoModeState::Pending" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to help manage Photo Mode states" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"EPhotoModeState",
		"EPhotoModeState",
		Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_EPhotoModeState()
	{
		if (!Z_Registration_Info_UEnum_EPhotoModeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhotoModeState.InnerSingleton, Z_Construct_UEnum_CitySample_EPhotoModeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhotoModeState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhotoModeSettings;
class UScriptStruct* FPhotoModeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhotoModeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhotoModeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeSettings, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("PhotoModeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhotoModeSettings.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FPhotoModeSettings>()
{
	return FPhotoModeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhotoModeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualExposureBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFocusEnabled_MetaData[];
#endif
		static void NewProp_bAutoFocusEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFocusEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure for storing all adjustable Photo Mode parameters\n */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for storing all adjustable Photo Mode parameters" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualExposureBias_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualExposureBias = { "ManualExposureBias", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhotoModeSettings, ManualExposureBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualExposureBias_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualExposureBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled_SetBit(void* Obj)
	{
		((FPhotoModeSettings*)Obj)->bAutoFocusEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled = { "bAutoFocusEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhotoModeSettings), &Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhotoModeSettings, ManualFocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualFocusDistance_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualFocusDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_FocusDistanceAdjustment_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_FocusDistanceAdjustment = { "FocusDistanceAdjustment", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhotoModeSettings, FocusDistanceAdjustment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_FocusDistanceAdjustment_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_FocusDistanceAdjustment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhotoModeSettings, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentFocalLength_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentFocalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "Category", "PhotoModeSettings" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhotoModeSettings, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentAperture_MetaData), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentAperture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_bAutoFocusEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_ManualFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_FocusDistanceAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewProp_CurrentAperture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"PhotoModeSettings",
		Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::PropPointers),
		sizeof(FPhotoModeSettings),
		alignof(FPhotoModeSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PhotoModeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhotoModeSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhotoModeSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execOnVehicleDriverExit)
	{
		P_GET_OBJECT(UDrivableVehicleComponent,Z_Param_DrivableComponent);
		P_GET_OBJECT(ACitySampleVehicleBase,Z_Param_Vehicle);
		P_GET_OBJECT(APawn,Z_Param_Driver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVehicleDriverExit(Z_Param_DrivableComponent,Z_Param_Vehicle,Z_Param_Driver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execShouldTriggerFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldTriggerFadeOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execGetCachedPlayerPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetCachedPlayerPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execGetPhotoModeSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPhotoModeSettings*)Z_Param__Result=P_THIS->GetPhotoModeSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetManualFocusDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewManualFocusDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManualFocusDistance(Z_Param_NewManualFocusDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetManualExposureBias)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewManualExposureBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManualExposureBias(Z_Param_NewManualExposureBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetFocusDistanceAdjustment)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocusDistanceAdjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusDistanceAdjustment(Z_Param_NewFocusDistanceAdjustment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetCurrentAperture)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAperture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAperture(Z_Param_NewAperture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetCurrentFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFocalLength(Z_Param_NewFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSetUseAutoFocus)
	{
		P_GET_UBOOL(Z_Param_bUseAutoFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAutoFocus(Z_Param_bUseAutoFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSaveCurrentSettingsAsDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCurrentSettingsAsDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execDisableAutoFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAutoFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execEnableAutoFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAutoFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execRemovePhotomodeInputContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePhotomodeInputContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execAddPhotomodeInputContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPhotomodeInputContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execDeactivatePhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivatePhotoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execActivatePhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivatePhotoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execGetPhotoModeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPhotoModeState*)Z_Param__Result=P_THIS->GetPhotoModeState();
		P_NATIVE_END;
	}
	struct PhotoModeComponent_eventOnHideUIToggle_Parms
	{
		bool bIsHiding;
	};
	static FName NAME_UPhotoModeComponent_OnActivatePhotoMode = FName(TEXT("OnActivatePhotoMode"));
	void UPhotoModeComponent::OnActivatePhotoMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_OnActivatePhotoMode),NULL);
	}
	static FName NAME_UPhotoModeComponent_OnDeactivatePhotoMode = FName(TEXT("OnDeactivatePhotoMode"));
	void UPhotoModeComponent::OnDeactivatePhotoMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_OnDeactivatePhotoMode),NULL);
	}
	static FName NAME_UPhotoModeComponent_OnDisableAutoFocus = FName(TEXT("OnDisableAutoFocus"));
	void UPhotoModeComponent::OnDisableAutoFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_OnDisableAutoFocus),NULL);
	}
	static FName NAME_UPhotoModeComponent_OnEnableAutoFocus = FName(TEXT("OnEnableAutoFocus"));
	void UPhotoModeComponent::OnEnableAutoFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_OnEnableAutoFocus),NULL);
	}
	static FName NAME_UPhotoModeComponent_OnHideUIToggle = FName(TEXT("OnHideUIToggle"));
	void UPhotoModeComponent::OnHideUIToggle(bool bIsHiding)
	{
		PhotoModeComponent_eventOnHideUIToggle_Parms Parms;
		Parms.bIsHiding=bIsHiding ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_OnHideUIToggle),&Parms);
	}
	void UPhotoModeComponent::StaticRegisterNativesUPhotoModeComponent()
	{
		UClass* Class = UPhotoModeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePhotoMode", &UPhotoModeComponent::execActivatePhotoMode },
			{ "AddPhotomodeInputContext", &UPhotoModeComponent::execAddPhotomodeInputContext },
			{ "DeactivatePhotoMode", &UPhotoModeComponent::execDeactivatePhotoMode },
			{ "DisableAutoFocus", &UPhotoModeComponent::execDisableAutoFocus },
			{ "EnableAutoFocus", &UPhotoModeComponent::execEnableAutoFocus },
			{ "GetCachedPlayerPawn", &UPhotoModeComponent::execGetCachedPlayerPawn },
			{ "GetPhotoModeSettings", &UPhotoModeComponent::execGetPhotoModeSettings },
			{ "GetPhotoModeState", &UPhotoModeComponent::execGetPhotoModeState },
			{ "OnVehicleDriverExit", &UPhotoModeComponent::execOnVehicleDriverExit },
			{ "RemovePhotomodeInputContext", &UPhotoModeComponent::execRemovePhotomodeInputContext },
			{ "SaveCurrentSettingsAsDefault", &UPhotoModeComponent::execSaveCurrentSettingsAsDefault },
			{ "SetCurrentAperture", &UPhotoModeComponent::execSetCurrentAperture },
			{ "SetCurrentFocalLength", &UPhotoModeComponent::execSetCurrentFocalLength },
			{ "SetFocusDistanceAdjustment", &UPhotoModeComponent::execSetFocusDistanceAdjustment },
			{ "SetManualExposureBias", &UPhotoModeComponent::execSetManualExposureBias },
			{ "SetManualFocusDistance", &UPhotoModeComponent::execSetManualFocusDistance },
			{ "SetUseAutoFocus", &UPhotoModeComponent::execSetUseAutoFocus },
			{ "ShouldTriggerFadeOut", &UPhotoModeComponent::execShouldTriggerFadeOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics
	{
		struct PhotoModeComponent_eventActivatePhotoMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventActivatePhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotoModeComponent_eventActivatePhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initializes Photo Mode and attempts spawning and possession of a Photo Mode pawn */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes Photo Mode and attempts spawning and possession of a Photo Mode pawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ActivatePhotoMode", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PhotoModeComponent_eventActivatePhotoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::PhotoModeComponent_eventActivatePhotoMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds input mapping that is relevant to Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds input mapping that is relevant to Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "AddPhotomodeInputContext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deactivates Photo Mode and handles proper transition to previous gameplay state */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deactivates Photo Mode and handles proper transition to previous gameplay state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "DeactivatePhotoMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disables auto focus, leaving the focus distance at whatever was set upon disable */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disables auto focus, leaving the focus distance at whatever was set upon disable" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "DisableAutoFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables auto focus and initializes auto focus interpolator */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables auto focus and initializes auto focus interpolator" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "EnableAutoFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics
	{
		struct PhotoModeComponent_eventGetCachedPlayerPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventGetCachedPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "GetCachedPlayerPawn", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PhotoModeComponent_eventGetCachedPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::PhotoModeComponent_eventGetCachedPlayerPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics
	{
		struct PhotoModeComponent_eventGetPhotoModeSettings_Parms
		{
			FPhotoModeSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventGetPhotoModeSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FPhotoModeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::NewProp_ReturnValue_MetaData) }; // 916342409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "GetPhotoModeSettings", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PhotoModeComponent_eventGetPhotoModeSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::PhotoModeComponent_eventGetPhotoModeSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics
	{
		struct PhotoModeComponent_eventGetPhotoModeState_Parms
		{
			EPhotoModeState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventGetPhotoModeState_Parms, ReturnValue), Z_Construct_UEnum_CitySample_EPhotoModeState, METADATA_PARAMS(0, nullptr) }; // 1652972319
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End ActorComponent Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "GetPhotoModeState", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PhotoModeComponent_eventGetPhotoModeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::PhotoModeComponent_eventGetPhotoModeState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for when Photo Mode is activated */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for when Photo Mode is activated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnActivatePhotoMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for when Photo Mode is deactivated */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for when Photo Mode is deactivated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnDeactivatePhotoMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for when auto focus is disabled */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for when auto focus is disabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnDisableAutoFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for when auto focus is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for when auto focus is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnEnableAutoFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics
	{
		static void NewProp_bIsHiding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHiding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::NewProp_bIsHiding_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventOnHideUIToggle_Parms*)Obj)->bIsHiding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::NewProp_bIsHiding = { "bIsHiding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotoModeComponent_eventOnHideUIToggle_Parms), &Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::NewProp_bIsHiding_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::NewProp_bIsHiding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for when the UI is hidden while in Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for when the UI is hidden while in Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnHideUIToggle", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::PropPointers), sizeof(PhotoModeComponent_eventOnHideUIToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::PropPointers) < 2048);
	static_assert(sizeof(PhotoModeComponent_eventOnHideUIToggle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics
	{
		struct PhotoModeComponent_eventOnVehicleDriverExit_Parms
		{
			const UDrivableVehicleComponent* DrivableComponent;
			const ACitySampleVehicleBase* Vehicle;
			const APawn* Driver;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivableComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_DrivableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_DrivableComponent = { "DrivableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventOnVehicleDriverExit_Parms, DrivableComponent), Z_Construct_UClass_UDrivableVehicleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_DrivableComponent_MetaData), Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_DrivableComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Vehicle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventOnVehicleDriverExit_Parms, Vehicle), Z_Construct_UClass_ACitySampleVehicleBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Vehicle_MetaData), Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Vehicle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Driver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventOnVehicleDriverExit_Parms, Driver), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Driver_MetaData), Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Driver_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_DrivableComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Vehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::NewProp_Driver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates our OldPawn variable so that we attempt to possess the proper pawn upon Photo Mode deactivation */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates our OldPawn variable so that we attempt to possess the proper pawn upon Photo Mode deactivation" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "OnVehicleDriverExit", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PhotoModeComponent_eventOnVehicleDriverExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::PhotoModeComponent_eventOnVehicleDriverExit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes input mapping that is relevant to Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes input mapping that is relevant to Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "RemovePhotomodeInputContext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Saves current Photo Mode settings as the new default settings used for resets */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves current Photo Mode settings as the new default settings used for resets" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SaveCurrentSettingsAsDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics
	{
		struct PhotoModeComponent_eventSetCurrentAperture_Parms
		{
			float NewAperture;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAperture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::NewProp_NewAperture = { "NewAperture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventSetCurrentAperture_Parms, NewAperture), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::NewProp_NewAperture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetCurrentAperture", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PhotoModeComponent_eventSetCurrentAperture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::PhotoModeComponent_eventSetCurrentAperture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics
	{
		struct PhotoModeComponent_eventSetCurrentFocalLength_Parms
		{
			float NewFocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::NewProp_NewFocalLength = { "NewFocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventSetCurrentFocalLength_Parms, NewFocalLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::NewProp_NewFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetCurrentFocalLength", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PhotoModeComponent_eventSetCurrentFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::PhotoModeComponent_eventSetCurrentFocalLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics
	{
		struct PhotoModeComponent_eventSetFocusDistanceAdjustment_Parms
		{
			float NewFocusDistanceAdjustment;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocusDistanceAdjustment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::NewProp_NewFocusDistanceAdjustment = { "NewFocusDistanceAdjustment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventSetFocusDistanceAdjustment_Parms, NewFocusDistanceAdjustment), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::NewProp_NewFocusDistanceAdjustment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetFocusDistanceAdjustment", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PhotoModeComponent_eventSetFocusDistanceAdjustment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::PhotoModeComponent_eventSetFocusDistanceAdjustment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics
	{
		struct PhotoModeComponent_eventSetManualExposureBias_Parms
		{
			float NewManualExposureBias;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewManualExposureBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::NewProp_NewManualExposureBias = { "NewManualExposureBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventSetManualExposureBias_Parms, NewManualExposureBias), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::NewProp_NewManualExposureBias,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetManualExposureBias", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PhotoModeComponent_eventSetManualExposureBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::PhotoModeComponent_eventSetManualExposureBias_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics
	{
		struct PhotoModeComponent_eventSetManualFocusDistance_Parms
		{
			float NewManualFocusDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewManualFocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::NewProp_NewManualFocusDistance = { "NewManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotoModeComponent_eventSetManualFocusDistance_Parms, NewManualFocusDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::NewProp_NewManualFocusDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetManualFocusDistance", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PhotoModeComponent_eventSetManualFocusDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::PhotoModeComponent_eventSetManualFocusDistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics
	{
		struct PhotoModeComponent_eventSetUseAutoFocus_Parms
		{
			bool bUseAutoFocus;
		};
		static void NewProp_bUseAutoFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutoFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::NewProp_bUseAutoFocus_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventSetUseAutoFocus_Parms*)Obj)->bUseAutoFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::NewProp_bUseAutoFocus = { "bUseAutoFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotoModeComponent_eventSetUseAutoFocus_Parms), &Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::NewProp_bUseAutoFocus_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::NewProp_bUseAutoFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SetUseAutoFocus", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PhotoModeComponent_eventSetUseAutoFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::PhotoModeComponent_eventSetUseAutoFocus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics
	{
		struct PhotoModeComponent_eventShouldTriggerFadeOut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventShouldTriggerFadeOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotoModeComponent_eventShouldTriggerFadeOut_Parms), &Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not the Photo Mode pawn has moved far enough from its original position and orientation to warrant a fade transition */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the Photo Mode pawn has moved far enough from its original position and orientation to warrant a fade transition" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ShouldTriggerFadeOut", nullptr, nullptr, Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PhotoModeComponent_eventShouldTriggerFadeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::PhotoModeComponent_eventShouldTriggerFadeOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhotoModeComponent);
	UClass* Z_Construct_UClass_UPhotoModeComponent_NoRegister()
	{
		return UPhotoModeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhotomodePawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhotomodePawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFocusDistanceInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoFocusDistanceInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndingLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhotoModeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhotoModeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverDroneMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverDroneMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestingPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestingPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveInputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeAltitudeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangeAltitudeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAutoFocusAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UseAutoFocusAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalMovementRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalMovementRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalMovementRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalMovementRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeComponent_ActivatePhotoMode, "ActivatePhotoMode" }, // 2484230464
		{ &Z_Construct_UFunction_UPhotoModeComponent_AddPhotomodeInputContext, "AddPhotomodeInputContext" }, // 3406937784
		{ &Z_Construct_UFunction_UPhotoModeComponent_DeactivatePhotoMode, "DeactivatePhotoMode" }, // 4103381496
		{ &Z_Construct_UFunction_UPhotoModeComponent_DisableAutoFocus, "DisableAutoFocus" }, // 3616668377
		{ &Z_Construct_UFunction_UPhotoModeComponent_EnableAutoFocus, "EnableAutoFocus" }, // 3398365084
		{ &Z_Construct_UFunction_UPhotoModeComponent_GetCachedPlayerPawn, "GetCachedPlayerPawn" }, // 668674204
		{ &Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeSettings, "GetPhotoModeSettings" }, // 1295194501
		{ &Z_Construct_UFunction_UPhotoModeComponent_GetPhotoModeState, "GetPhotoModeState" }, // 3213832915
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnActivatePhotoMode, "OnActivatePhotoMode" }, // 787447538
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnDeactivatePhotoMode, "OnDeactivatePhotoMode" }, // 513305188
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnDisableAutoFocus, "OnDisableAutoFocus" }, // 4257210313
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnEnableAutoFocus, "OnEnableAutoFocus" }, // 1265429410
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnHideUIToggle, "OnHideUIToggle" }, // 4147208711
		{ &Z_Construct_UFunction_UPhotoModeComponent_OnVehicleDriverExit, "OnVehicleDriverExit" }, // 626138373
		{ &Z_Construct_UFunction_UPhotoModeComponent_RemovePhotomodeInputContext, "RemovePhotomodeInputContext" }, // 733027398
		{ &Z_Construct_UFunction_UPhotoModeComponent_SaveCurrentSettingsAsDefault, "SaveCurrentSettingsAsDefault" }, // 2084573615
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetCurrentAperture, "SetCurrentAperture" }, // 942099343
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetCurrentFocalLength, "SetCurrentFocalLength" }, // 3145295601
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetFocusDistanceAdjustment, "SetFocusDistanceAdjustment" }, // 138234344
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetManualExposureBias, "SetManualExposureBias" }, // 2627576876
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetManualFocusDistance, "SetManualFocusDistance" }, // 3255835877
		{ &Z_Construct_UFunction_UPhotoModeComponent_SetUseAutoFocus, "SetUseAutoFocus" }, // 2593342104
		{ &Z_Construct_UFunction_UPhotoModeComponent_ShouldTriggerFadeOut, "ShouldTriggerFadeOut" }, // 3779518073
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component for activating, deactivating, and managing Photo Mode\n */" },
#endif
		{ "IncludePath", "Camera/PhotoModeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for activating, deactivating, and managing Photo Mode" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotomodePawnClass_MetaData[] = {
		{ "Category", "PhotoModeComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn class to spawn and possess when activating Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn class to spawn and possess when activating Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotomodePawnClass = { "PhotomodePawnClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, PhotomodePawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACitySampleHoverDrone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotomodePawnClass_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotomodePawnClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_AutoFocusDistanceInterpolator_MetaData[] = {
		{ "Category", "PhotoModeComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolator used to smoothly adjust auto focus distance values */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolator used to smoothly adjust auto focus distance values" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_AutoFocusDistanceInterpolator = { "AutoFocusDistanceInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, AutoFocusDistanceInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_AutoFocusDistanceInterpolator_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_AutoFocusDistanceInterpolator_MetaData) }; // 1581328207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingLocation_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Photo Mode Pawn initial location when entering Photo Mode. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Photo Mode Pawn initial location when entering Photo Mode." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingLocation_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingRotation_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Photo Mode Pawn initial rotation when entering Photo Mode. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Photo Mode Pawn initial rotation when entering Photo Mode." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingRotation = { "StartingRotation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, StartingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingRotation_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingLocation_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Photo Mode Pawn final location when exiting Photo Mode. */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Photo Mode Pawn final location when exiting Photo Mode." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingLocation = { "EndingLocation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, EndingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingLocation_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingRotation_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Photo Mode Pawn final rotation when exiting Photo Mode.*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Photo Mode Pawn final rotation when exiting Photo Mode." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingRotation = { "EndingRotation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, EndingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingRotation_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutDistanceThreshold_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Translational Difference Threshold allowed before a Fade Out transition is warranted */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Translational Difference Threshold allowed before a Fade Out transition is warranted" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutDistanceThreshold = { "FadeOutDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, FadeOutDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutDistanceThreshold_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutRotationThreshold_MetaData[] = {
		{ "Category", "FadeOut" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation Difference Threshold allowed before a Fade Out transition is warranted */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation Difference Threshold allowed before a Fade Out transition is warranted" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutRotationThreshold = { "FadeOutRotationThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, FadeOutRotationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutRotationThreshold_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutRotationThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotoModeClass_MetaData[] = {
		{ "Category", "PhotoModeComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Mode to use for Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Mode to use for Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotoModeClass = { "PhotoModeClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, PhotoModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotoModeClass_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotoModeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "PhotoModeComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Up to date Photo Mode settings */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Up to date Photo Mode settings" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, Settings), Z_Construct_UScriptStruct_FPhotoModeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_Settings_MetaData) }; // 916342409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CameraPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to pawn that is spawned and possessed when activating PhotoMode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to pawn that is spawned and possessed when activating PhotoMode" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CameraPawn = { "CameraPawn", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, CameraPawn), Z_Construct_UClass_ACitySampleHoverDrone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CameraPawn_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CameraPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HoverDroneMovementComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to HoverDroneMovementComponent that the Photo Mode pawn relies on for movement */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to HoverDroneMovementComponent that the Photo Mode pawn relies on for movement" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HoverDroneMovementComp = { "HoverDroneMovementComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, HoverDroneMovementComp), Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HoverDroneMovementComp_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HoverDroneMovementComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_OldPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to pawn that was in possession prior to entering Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to pawn that was in possession prior to entering Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_OldPawn_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_OldPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_RequestingPlayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to player that requested Photo Mode activation */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to player that requested Photo Mode activation" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_RequestingPlayer = { "RequestingPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, RequestingPlayer), Z_Construct_UClass_ACitySamplePlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_RequestingPlayer_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_RequestingPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_DefaultSettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached default Photo Mode settings for resets */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached default Photo Mode settings for resets" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_DefaultSettings = { "DefaultSettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, DefaultSettings), Z_Construct_UScriptStruct_FPhotoModeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_DefaultSettings_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_DefaultSettings_MetaData) }; // 916342409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ActiveInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context and Input Actions that Photo Mode relies on */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context and Input Actions that Photo Mode relies on" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ActiveInputMappingContext = { "ActiveInputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, ActiveInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ActiveInputMappingContext_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ActiveInputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ChangeAltitudeAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ChangeAltitudeAction = { "ChangeAltitudeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, ChangeAltitudeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ChangeAltitudeAction_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ChangeAltitudeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_UseAutoFocusAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_UseAutoFocusAction = { "UseAutoFocusAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, UseAutoFocusAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_UseAutoFocusAction_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_UseAutoFocusAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_InputMappingPriority_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_InputMappingPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HorizontalMovementRate_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Corresponds to the movement rate when using the left stick */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Corresponds to the movement rate when using the left stick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HorizontalMovementRate = { "HorizontalMovementRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, HorizontalMovementRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HorizontalMovementRate_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HorizontalMovementRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_VerticalMovementRate_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Corresponds to the movement rate when rising/falling with trigger inputs */" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Corresponds to the movement rate when rising/falling with trigger inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_VerticalMovementRate = { "VerticalMovementRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, VerticalMovementRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_VerticalMovementRate_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_VerticalMovementRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookUpRate_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Corresponds to camera vertical look rate*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Corresponds to camera vertical look rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookUpRate = { "LookUpRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, LookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookUpRate_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookUpRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_TurnRate_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Corresponds to camera horizontal look rate*/" },
#endif
		{ "ModuleRelativePath", "Public/Camera/PhotoModeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Corresponds to camera horizontal look rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhotoModeComponent, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_TurnRate_MetaData), Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_TurnRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotomodePawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_AutoFocusDistanceInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_StartingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_EndingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_FadeOutRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_PhotoModeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CameraPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HoverDroneMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_OldPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_RequestingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_DefaultSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ActiveInputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ChangeAltitudeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_UseAutoFocusAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_InputMappingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_HorizontalMovementRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_VerticalMovementRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_LookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_TurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeComponent_Statics::ClassParams = {
		&UPhotoModeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPhotoModeComponent()
	{
		if (!Z_Registration_Info_UClass_UPhotoModeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhotoModeComponent.OuterSingleton, Z_Construct_UClass_UPhotoModeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhotoModeComponent.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UPhotoModeComponent>()
	{
		return UPhotoModeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeComponent);
	UPhotoModeComponent::~UPhotoModeComponent() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::EnumInfo[] = {
		{ EPhotoModeState_StaticEnum, TEXT("EPhotoModeState"), &Z_Registration_Info_UEnum_EPhotoModeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1652972319U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ScriptStructInfo[] = {
		{ FPhotoModeSettings::StaticStruct, Z_Construct_UScriptStruct_FPhotoModeSettings_Statics::NewStructOps, TEXT("PhotoModeSettings"), &Z_Registration_Info_UScriptStruct_PhotoModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhotoModeSettings), 916342409U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhotoModeComponent, UPhotoModeComponent::StaticClass, TEXT("UPhotoModeComponent"), &Z_Registration_Info_UClass_UPhotoModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhotoModeComponent), 1487404345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_1608129148(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
