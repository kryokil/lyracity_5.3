// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleDrivingUI.h"
#include "CitySample/Public/Vehicles/CitySampleDrivingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleDrivingUI() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleDrivingUI();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleDrivingUI_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleSpeedUnits;
	static UEnum* ECitySampleSpeedUnits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleSpeedUnits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleSpeedUnits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleSpeedUnits"));
		}
		return Z_Registration_Info_UEnum_ECitySampleSpeedUnits.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleSpeedUnits>()
	{
		return ECitySampleSpeedUnits_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enumerators[] = {
		{ "ECitySampleSpeedUnits::MilesPerHour", (int64)ECitySampleSpeedUnits::MilesPerHour },
		{ "ECitySampleSpeedUnits::KilometersPerHour", (int64)ECitySampleSpeedUnits::KilometersPerHour },
		{ "ECitySampleSpeedUnits::MetersPerSecond", (int64)ECitySampleSpeedUnits::MetersPerSecond },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KilometersPerHour.Name", "ECitySampleSpeedUnits::KilometersPerHour" },
		{ "MetersPerSecond.Name", "ECitySampleSpeedUnits::MetersPerSecond" },
		{ "MilesPerHour.Name", "ECitySampleSpeedUnits::MilesPerHour" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleSpeedUnits",
		"ECitySampleSpeedUnits",
		Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleSpeedUnits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleSpeedUnits.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleSpeedUnits.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription;
class UScriptStruct* FCitySampleDrivingStateDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleDrivingStateDescription"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleDrivingStateDescription>()
{
	return FCitySampleDrivingStateDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBrakeOn_MetaData[];
#endif
		static void NewProp_bBrakeOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBrakeOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandbrakeOn_MetaData[];
#endif
		static void NewProp_bHandbrakeOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandbrakeOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleDrivingStateDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn_MetaData[] = {
		{ "Category", "CitySampleDrivingStateDescription" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn_SetBit(void* Obj)
	{
		((FCitySampleDrivingStateDescription*)Obj)->bBrakeOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn = { "bBrakeOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingStateDescription), &Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn_MetaData[] = {
		{ "Category", "CitySampleDrivingStateDescription" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn_SetBit(void* Obj)
	{
		((FCitySampleDrivingStateDescription*)Obj)->bHandbrakeOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn = { "bHandbrakeOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingStateDescription), &Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CitySampleDrivingStateDescription" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingStateDescription, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_RPM_MetaData[] = {
		{ "Category", "CitySampleDrivingStateDescription" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingStateDescription, RPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_RPM_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_RPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "CitySampleDrivingStateDescription" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingStateDescription, Gear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Gear_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Gear_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bBrakeOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_bHandbrakeOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_RPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewProp_Gear,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleDrivingStateDescription",
		Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::PropPointers),
		sizeof(FCitySampleDrivingStateDescription),
		alignof(FCitySampleDrivingStateDescription),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execFloatToDescriptionFormat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Float);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UCitySampleDrivingUI::FloatToDescriptionFormat(Z_Param_Float,Z_Param_MinDigits,Z_Param_MaxDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execGetTopSpeedRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTopSpeedRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execSetSpeedUnits)
	{
		P_GET_ENUM(ECitySampleSpeedUnits,Z_Param_Units);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeedUnits(ECitySampleSpeedUnits(Z_Param_Units));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execGetSpeedUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECitySampleSpeedUnits*)Z_Param__Result=P_THIS->GetSpeedUnits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execResetDrivingStateDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDrivingStateDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execUpdateDrivingStateDescription)
	{
		P_GET_STRUCT_REF(FCitySampleDrivingState,Z_Param_Out_DrivingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDrivingStateDescription(Z_Param_Out_DrivingState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleDrivingUI::execGetDrivingStateDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleDrivingStateDescription*)Z_Param__Result=P_THIS->GetDrivingStateDescription();
		P_NATIVE_END;
	}
	struct CitySampleDrivingUI_eventOnUpdateDrivingStateDescription_Parms
	{
		FCitySampleDrivingStateDescription Description;
	};
	struct CitySampleDrivingUI_eventUpdateMap_Parms
	{
		const APlayerController* PlayerController;
	};
	static FName NAME_UCitySampleDrivingUI_OnUpdateDrivingStateDescription = FName(TEXT("OnUpdateDrivingStateDescription"));
	void UCitySampleDrivingUI::OnUpdateDrivingStateDescription(FCitySampleDrivingStateDescription const& Description)
	{
		CitySampleDrivingUI_eventOnUpdateDrivingStateDescription_Parms Parms;
		Parms.Description=Description;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleDrivingUI_OnUpdateDrivingStateDescription),&Parms);
	}
	static FName NAME_UCitySampleDrivingUI_UpdateMap = FName(TEXT("UpdateMap"));
	void UCitySampleDrivingUI::UpdateMap(const APlayerController* PlayerController)
	{
		CitySampleDrivingUI_eventUpdateMap_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleDrivingUI_UpdateMap),&Parms);
	}
	void UCitySampleDrivingUI::StaticRegisterNativesUCitySampleDrivingUI()
	{
		UClass* Class = UCitySampleDrivingUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FloatToDescriptionFormat", &UCitySampleDrivingUI::execFloatToDescriptionFormat },
			{ "GetDrivingStateDescription", &UCitySampleDrivingUI::execGetDrivingStateDescription },
			{ "GetSpeedUnits", &UCitySampleDrivingUI::execGetSpeedUnits },
			{ "GetTopSpeedRatio", &UCitySampleDrivingUI::execGetTopSpeedRatio },
			{ "ResetDrivingStateDescription", &UCitySampleDrivingUI::execResetDrivingStateDescription },
			{ "SetSpeedUnits", &UCitySampleDrivingUI::execSetSpeedUnits },
			{ "UpdateDrivingStateDescription", &UCitySampleDrivingUI::execUpdateDrivingStateDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics
	{
		struct CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms
		{
			float Float;
			int32 MinDigits;
			int32 MaxDigits;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_Float_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms, Float), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_Float_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_Float_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MinDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MinDigits = { "MinDigits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms, MinDigits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MinDigits_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MinDigits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MaxDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MaxDigits = { "MaxDigits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms, MaxDigits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MaxDigits_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MaxDigits_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MinDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_MaxDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns float as text with appropriate formatting for the driving UI. */" },
#endif
		{ "CPP_Default_MaxDigits", "4" },
		{ "CPP_Default_MinDigits", "3" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns float as text with appropriate formatting for the driving UI." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "FloatToDescriptionFormat", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::CitySampleDrivingUI_eventFloatToDescriptionFormat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics
	{
		struct CitySampleDrivingUI_eventGetDrivingStateDescription_Parms
		{
			FCitySampleDrivingStateDescription ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventGetDrivingStateDescription_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::NewProp_ReturnValue_MetaData) }; // 62247255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~End UCitySamplePanel Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~End UCitySamplePanel Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "GetDrivingStateDescription", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::CitySampleDrivingUI_eventGetDrivingStateDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::CitySampleDrivingUI_eventGetDrivingStateDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics
	{
		struct CitySampleDrivingUI_eventGetSpeedUnits_Parms
		{
			ECitySampleSpeedUnits ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventGetSpeedUnits_Parms, ReturnValue), Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits, METADATA_PARAMS(0, nullptr) }; // 1510554623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "GetSpeedUnits", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::CitySampleDrivingUI_eventGetSpeedUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::CitySampleDrivingUI_eventGetSpeedUnits_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics
	{
		struct CitySampleDrivingUI_eventGetTopSpeedRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventGetTopSpeedRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "GetTopSpeedRatio", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::CitySampleDrivingUI_eventGetTopSpeedRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::CitySampleDrivingUI_eventGetTopSpeedRatio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventOnUpdateDrivingStateDescription_Parms, Description), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::NewProp_Description_MetaData) }; // 62247255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hook for BP event/function to update UI with the newly updated driving state description. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hook for BP event/function to update UI with the newly updated driving state description." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "OnUpdateDrivingStateDescription", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::PropPointers), sizeof(CitySampleDrivingUI_eventOnUpdateDrivingStateDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleDrivingUI_eventOnUpdateDrivingStateDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "ResetDrivingStateDescription", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics
	{
		struct CitySampleDrivingUI_eventSetSpeedUnits_Parms
		{
			ECitySampleSpeedUnits Units;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Units;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventSetSpeedUnits_Parms, Units), Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits, METADATA_PARAMS(0, nullptr) }; // 1510554623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::NewProp_Units_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::NewProp_Units,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "SetSpeedUnits", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::CitySampleDrivingUI_eventSetSpeedUnits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::CitySampleDrivingUI_eventSetSpeedUnits_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics
	{
		struct CitySampleDrivingUI_eventUpdateDrivingStateDescription_Parms
		{
			FCitySampleDrivingState DrivingState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::NewProp_DrivingState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::NewProp_DrivingState = { "DrivingState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventUpdateDrivingStateDescription_Parms, DrivingState), Z_Construct_UScriptStruct_FCitySampleDrivingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::NewProp_DrivingState_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::NewProp_DrivingState_MetaData) }; // 464802188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::NewProp_DrivingState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "UpdateDrivingStateDescription", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::CitySampleDrivingUI_eventUpdateDrivingStateDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::CitySampleDrivingUI_eventUpdateDrivingStateDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleDrivingUI_eventUpdateMap_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::NewProp_PlayerController_MetaData), Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::NewProp_PlayerController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleDrivingUI, nullptr, "UpdateMap", nullptr, nullptr, Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::PropPointers), sizeof(CitySampleDrivingUI_eventUpdateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleDrivingUI_eventUpdateMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleDrivingUI);
	UClass* Z_Construct_UClass_UCitySampleDrivingUI_NoRegister()
	{
		return UCitySampleDrivingUI::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleDrivingUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleCOMDebugClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleCOMDebugClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingStateDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingStateDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleCOMDebug_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleCOMDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleDrivingUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleDrivingUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_FloatToDescriptionFormat, "FloatToDescriptionFormat" }, // 1539604840
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_GetDrivingStateDescription, "GetDrivingStateDescription" }, // 23804546
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_GetSpeedUnits, "GetSpeedUnits" }, // 412995917
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_GetTopSpeedRatio, "GetTopSpeedRatio" }, // 269406506
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_OnUpdateDrivingStateDescription, "OnUpdateDrivingStateDescription" }, // 3419355146
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_ResetDrivingStateDescription, "ResetDrivingStateDescription" }, // 519097414
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_SetSpeedUnits, "SetSpeedUnits" }, // 3938828264
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_UpdateDrivingStateDescription, "UpdateDrivingStateDescription" }, // 619965777
		{ &Z_Construct_UFunction_UCitySampleDrivingUI_UpdateMap, "UpdateMap" }, // 2474695869
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/CitySampleDrivingUI.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_TopSpeed_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_TopSpeed = { "TopSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDrivingUI, TopSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_TopSpeed_MetaData), Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_TopSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebugClass_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Panel class used to add the Vehicle Center of Mass Debug Display if needed */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Panel class used to add the Vehicle Center of Mass Debug Display if needed" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebugClass = { "VehicleCOMDebugClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDrivingUI, VehicleCOMDebugClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebugClass_MetaData), Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebugClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_DrivingStateDescription_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_DrivingStateDescription = { "DrivingStateDescription", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDrivingUI, DrivingStateDescription), Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_DrivingStateDescription_MetaData), Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_DrivingStateDescription_MetaData) }; // 62247255
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits = { "SpeedUnits", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDrivingUI, SpeedUnits), Z_Construct_UEnum_CitySample_ECitySampleSpeedUnits, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits_MetaData), Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits_MetaData) }; // 1510554623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebug_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle COM Debug Panel Instance */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleDrivingUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle COM Debug Panel Instance" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebug = { "VehicleCOMDebug", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleDrivingUI, VehicleCOMDebug), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebug_MetaData), Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebug_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleDrivingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_TopSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebugClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_DrivingStateDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_SpeedUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleDrivingUI_Statics::NewProp_VehicleCOMDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleDrivingUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleDrivingUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleDrivingUI_Statics::ClassParams = {
		&UCitySampleDrivingUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleDrivingUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleDrivingUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleDrivingUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleDrivingUI()
	{
		if (!Z_Registration_Info_UClass_UCitySampleDrivingUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleDrivingUI.OuterSingleton, Z_Construct_UClass_UCitySampleDrivingUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleDrivingUI.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleDrivingUI>()
	{
		return UCitySampleDrivingUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleDrivingUI);
	UCitySampleDrivingUI::~UCitySampleDrivingUI() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::EnumInfo[] = {
		{ ECitySampleSpeedUnits_StaticEnum, TEXT("ECitySampleSpeedUnits"), &Z_Registration_Info_UEnum_ECitySampleSpeedUnits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1510554623U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleDrivingStateDescription::StaticStruct, Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics::NewStructOps, TEXT("CitySampleDrivingStateDescription"), &Z_Registration_Info_UScriptStruct_CitySampleDrivingStateDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleDrivingStateDescription), 62247255U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleDrivingUI, UCitySampleDrivingUI::StaticClass, TEXT("UCitySampleDrivingUI"), &Z_Registration_Info_UClass_UCitySampleDrivingUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleDrivingUI), 1079917913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_1920644004(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
