// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossfader/Public/CrossfaderSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossfaderSubsystem() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	CROSSFADER_API UClass* Z_Construct_UClass_UCrossfaderSettings();
	CROSSFADER_API UClass* Z_Construct_UClass_UCrossfaderSettings_NoRegister();
	CROSSFADER_API UClass* Z_Construct_UClass_UCrossfaderSubsystem();
	CROSSFADER_API UClass* Z_Construct_UClass_UCrossfaderSubsystem_NoRegister();
	CROSSFADER_API UClass* Z_Construct_UClass_UMixStateBank_NoRegister();
	CROSSFADER_API UScriptStruct* Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Crossfader();
// End Cross Module References
	void UCrossfaderSettings::StaticRegisterNativesUCrossfaderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrossfaderSettings);
	UClass* Z_Construct_UClass_UCrossfaderSettings_NoRegister()
	{
		return UCrossfaderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCrossfaderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseProjectMixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseProjectMixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseProjectMixes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserMix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixStateBanks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixStateBanks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixStateBanks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossfaderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Crossfader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Game Settings which allow the user to set Default Mixes which activate/deactivate with the Crossfader Subsystem \n* as well as define default MixStateBanks which are added to the Subsystem master bank on initialization. \n*/" },
#endif
		{ "DisplayName", "Crossfader" },
		{ "IncludePath", "CrossfaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Settings which allow the user to set Default Mixes which activate/deactivate with the Crossfader Subsystem\nas well as define default MixStateBanks which are added to the Subsystem master bank on initialization." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes_Inner = { "BaseProjectMixes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Crossfader Subsystem will attempt to load and activate these SoundControlBusMixes on World creation */" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Crossfader Subsystem will attempt to load and activate these SoundControlBusMixes on World creation" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes = { "BaseProjectMixes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSettings, BaseProjectMixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes_MetaData), Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_UserMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Crossfader Subsystem will attempt to load and activate this SoundControlBusMix on World creation */" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Crossfader Subsystem will attempt to load and activate this SoundControlBusMix on World creation" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_UserMix = { "UserMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSettings, UserMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_UserMix_MetaData), Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_UserMix_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks_Inner = { "MixStateBanks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks_MetaData[] = {
		{ "AllowedClasses", "/Script/Crossfader.MixStateBank" },
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Crossfadfer Subsystem will add the data from these MixStateBanks to the master bank list on initialization */" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Crossfadfer Subsystem will add the data from these MixStateBanks to the master bank list on initialization" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks = { "MixStateBanks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSettings, MixStateBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks_MetaData), Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossfaderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_BaseProjectMixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_UserMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSettings_Statics::NewProp_MixStateBanks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossfaderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossfaderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrossfaderSettings_Statics::ClassParams = {
		&UCrossfaderSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrossfaderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrossfaderSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrossfaderSettings()
	{
		if (!Z_Registration_Info_UClass_UCrossfaderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrossfaderSettings.OuterSingleton, Z_Construct_UClass_UCrossfaderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrossfaderSettings.OuterSingleton;
	}
	template<> CROSSFADER_API UClass* StaticClass<UCrossfaderSettings>()
	{
		return UCrossfaderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossfaderSettings);
	UCrossfaderSettings::~UCrossfaderSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair;
class UScriptStruct* FCrossfaderMixBusStatePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair, (UObject*)Z_Construct_UPackage__Script_Crossfader(), TEXT("CrossfaderMixBusStatePair"));
	}
	return Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.OuterSingleton;
}
template<> CROSSFADER_API UScriptStruct* StaticStruct<FCrossfaderMixBusStatePair>()
{
	return FCrossfaderMixBusStatePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* This struct contains the MixState GameplayTag and the associated SoundControlBusMix pointer. \n*/" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This struct contains the MixState GameplayTag and the associated SoundControlBusMix pointer." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrossfaderMixBusStatePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewProp_ControlBusMix_MetaData[] = {
		{ "Category", "CrossfaderMixBusStatePair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the Associated SoundControlBus */" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the Associated SoundControlBus" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewProp_ControlBusMix = { "ControlBusMix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrossfaderMixBusStatePair, ControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewProp_ControlBusMix_MetaData), Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewProp_ControlBusMix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewProp_ControlBusMix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Crossfader,
		nullptr,
		&NewStructOps,
		"CrossfaderMixBusStatePair",
		Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::PropPointers),
		sizeof(FCrossfaderMixBusStatePair),
		alignof(FCrossfaderMixBusStatePair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair()
	{
		if (!Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.InnerSingleton, Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair.InnerSingleton;
	}
	DEFINE_FUNCTION(UCrossfaderSubsystem::execClearMixState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_MixState);
		P_GET_UBOOL(Z_Param_bDeactivateChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMixState(Z_Param_WorldContextObject,Z_Param_MixState,Z_Param_bDeactivateChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossfaderSubsystem::execSetMixState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FGameplayTag,Z_Param_MixState);
		P_GET_UBOOL(Z_Param_bFallBackToNearestParent);
		P_GET_UBOOL(Z_Param_bDeactivateChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMixState(Z_Param_WorldContextObject,Z_Param_MixState,Z_Param_bFallBackToNearestParent,Z_Param_bDeactivateChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossfaderSubsystem::execRemoveBank)
	{
		P_GET_OBJECT(UMixStateBank,Z_Param_MixStateBank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBank(Z_Param_MixStateBank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossfaderSubsystem::execAddBank)
	{
		P_GET_OBJECT(UMixStateBank,Z_Param_MixStateBank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBank(Z_Param_MixStateBank);
		P_NATIVE_END;
	}
	void UCrossfaderSubsystem::StaticRegisterNativesUCrossfaderSubsystem()
	{
		UClass* Class = UCrossfaderSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBank", &UCrossfaderSubsystem::execAddBank },
			{ "ClearMixState", &UCrossfaderSubsystem::execClearMixState },
			{ "RemoveBank", &UCrossfaderSubsystem::execRemoveBank },
			{ "SetMixState", &UCrossfaderSubsystem::execSetMixState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics
	{
		struct CrossfaderSubsystem_eventAddBank_Parms
		{
			const UMixStateBank* MixStateBank;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixStateBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MixStateBank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::NewProp_MixStateBank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::NewProp_MixStateBank = { "MixStateBank", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventAddBank_Parms, MixStateBank), Z_Construct_UClass_UMixStateBank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::NewProp_MixStateBank_MetaData), Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::NewProp_MixStateBank_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::NewProp_MixStateBank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Add bank data to the Crossfader Master Bank \n\x09* @param MixStateBank The MixStateBank to add to the Crossfader Master Bank\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add bank data to the Crossfader Master Bank\n@param MixStateBank The MixStateBank to add to the Crossfader Master Bank" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossfaderSubsystem, nullptr, "AddBank", nullptr, nullptr, Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::CrossfaderSubsystem_eventAddBank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::CrossfaderSubsystem_eventAddBank_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrossfaderSubsystem_AddBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrossfaderSubsystem_AddBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics
	{
		struct CrossfaderSubsystem_eventClearMixState_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag MixState;
			bool bDeactivateChildren;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixState;
		static void NewProp_bDeactivateChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeactivateChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventClearMixState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_MixState = { "MixState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventClearMixState_Parms, MixState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_bDeactivateChildren_SetBit(void* Obj)
	{
		((CrossfaderSubsystem_eventClearMixState_Parms*)Obj)->bDeactivateChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_bDeactivateChildren = { "bDeactivateChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrossfaderSubsystem_eventClearMixState_Parms), &Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_bDeactivateChildren_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_MixState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::NewProp_bDeactivateChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::Function_MetaDataParams[] = {
		{ "Categories", "Crossfader" },
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear an active Mix State.\n\x09* This function will look for a specific MixState and clear it. If it cannot find it, then there was no need to clear the state.\n\x09* @param MixState The MixState to clear.\n\x09* @param bDeactivateChildren When set to true, this function will also clear all associated siblings and children of the stated MixState. \n\x09* Calling clear at the top MixState namespace when this is true, will clear all active MixStates.\n\x09*/" },
#endif
		{ "CPP_Default_bDeactivateChildren", "true" },
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear an active Mix State.\nThis function will look for a specific MixState and clear it. If it cannot find it, then there was no need to clear the state.\n@param MixState The MixState to clear.\n@param bDeactivateChildren When set to true, this function will also clear all associated siblings and children of the stated MixState.\nCalling clear at the top MixState namespace when this is true, will clear all active MixStates." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossfaderSubsystem, nullptr, "ClearMixState", nullptr, nullptr, Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::CrossfaderSubsystem_eventClearMixState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::CrossfaderSubsystem_eventClearMixState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics
	{
		struct CrossfaderSubsystem_eventRemoveBank_Parms
		{
			const UMixStateBank* MixStateBank;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixStateBank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MixStateBank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::NewProp_MixStateBank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::NewProp_MixStateBank = { "MixStateBank", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventRemoveBank_Parms, MixStateBank), Z_Construct_UClass_UMixStateBank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::NewProp_MixStateBank_MetaData), Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::NewProp_MixStateBank_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::NewProp_MixStateBank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Add bank data to the Crossfader Master Bank \n\x09* @param MixStateBank The MixStateBank to remove from the Crossfader Master Bank\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add bank data to the Crossfader Master Bank\n@param MixStateBank The MixStateBank to remove from the Crossfader Master Bank" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossfaderSubsystem, nullptr, "RemoveBank", nullptr, nullptr, Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::CrossfaderSubsystem_eventRemoveBank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::CrossfaderSubsystem_eventRemoveBank_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics
	{
		struct CrossfaderSubsystem_eventSetMixState_Parms
		{
			const UObject* WorldContextObject;
			FGameplayTag MixState;
			bool bFallBackToNearestParent;
			bool bDeactivateChildren;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixState;
		static void NewProp_bFallBackToNearestParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallBackToNearestParent;
		static void NewProp_bDeactivateChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeactivateChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventSetMixState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_MixState = { "MixState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrossfaderSubsystem_eventSetMixState_Parms, MixState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bFallBackToNearestParent_SetBit(void* Obj)
	{
		((CrossfaderSubsystem_eventSetMixState_Parms*)Obj)->bFallBackToNearestParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bFallBackToNearestParent = { "bFallBackToNearestParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrossfaderSubsystem_eventSetMixState_Parms), &Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bFallBackToNearestParent_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bDeactivateChildren_SetBit(void* Obj)
	{
		((CrossfaderSubsystem_eventSetMixState_Parms*)Obj)->bDeactivateChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bDeactivateChildren = { "bDeactivateChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrossfaderSubsystem_eventSetMixState_Parms), &Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bDeactivateChildren_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CrossfaderSubsystem_eventSetMixState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CrossfaderSubsystem_eventSetMixState_Parms), &Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_MixState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bFallBackToNearestParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_bDeactivateChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::Function_MetaDataParams[] = {
		{ "Categories", "Crossfader" },
		{ "Category", "Crossfader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set a new Mix State.\n\x09* If two MixStates share the same Parent Namespace, they will be mutually exclusive. For example\n\x09* if you have an active MixState whose namespace is Crossfader.Location.A and you set the MixState to\n\x09* Crossfader.Location.B, then Crossfader.Location.A will be deactivated and Crossfader.Location.B will\n\x09* take its place. However if they don't share the same parent, they will not be mutually exclusive.\n\x09* @param MixState The new MixState to set on the Crossfader Subsystem\n\x09* @param bFallBackToNearestParent When set to true, it will attempt to move up the MixState namespace until it finds\n\x09* a match. So for example, if you set Crossfader.Location.A and that Bank data isn't found, it will try Crossfader.Location, and continue\n\x09* up until a match is found or there are no more namespaces.\n\x09* @param bDeactivateChildren When set to true, as the state is set, that state's parent namespace and all children beneath it will\n\x09* be deactivated (not just siblings).\n\x09* @return Will return true if a MixState was set, otherwise it will return false if no matching MixState was found.\n\x09*/" },
#endif
		{ "CPP_Default_bDeactivateChildren", "true" },
		{ "CPP_Default_bFallBackToNearestParent", "false" },
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a new Mix State.\nIf two MixStates share the same Parent Namespace, they will be mutually exclusive. For example\nif you have an active MixState whose namespace is Crossfader.Location.A and you set the MixState to\nCrossfader.Location.B, then Crossfader.Location.A will be deactivated and Crossfader.Location.B will\ntake its place. However if they don't share the same parent, they will not be mutually exclusive.\n@param MixState The new MixState to set on the Crossfader Subsystem\n@param bFallBackToNearestParent When set to true, it will attempt to move up the MixState namespace until it finds\na match. So for example, if you set Crossfader.Location.A and that Bank data isn't found, it will try Crossfader.Location, and continue\nup until a match is found or there are no more namespaces.\n@param bDeactivateChildren When set to true, as the state is set, that state's parent namespace and all children beneath it will\nbe deactivated (not just siblings).\n@return Will return true if a MixState was set, otherwise it will return false if no matching MixState was found." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossfaderSubsystem, nullptr, "SetMixState", nullptr, nullptr, Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::CrossfaderSubsystem_eventSetMixState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::CrossfaderSubsystem_eventSetMixState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrossfaderSubsystem);
	UClass* Z_Construct_UClass_UCrossfaderSubsystem_NoRegister()
	{
		return UCrossfaderSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCrossfaderSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedUserMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedUserMix;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedDefaultMixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedDefaultMixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivatedDefaultMixes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveMixes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveMixes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMixes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveMixes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossfaderSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Crossfader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrossfaderSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrossfaderSubsystem_AddBank, "AddBank" }, // 1876959037
		{ &Z_Construct_UFunction_UCrossfaderSubsystem_ClearMixState, "ClearMixState" }, // 1222042292
		{ &Z_Construct_UFunction_UCrossfaderSubsystem_RemoveBank, "RemoveBank" }, // 1073818374
		{ &Z_Construct_UFunction_UCrossfaderSubsystem_SetMixState, "SetMixState" }, // 297131756
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CrossfaderSubsystem is the high-level manager that filters GameplayTag MixStates and activates/deactivates associated SoundControlBusMixes.\n */" },
#endif
		{ "IncludePath", "CrossfaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CrossfaderSubsystem is the high-level manager that filters GameplayTag MixStates and activates/deactivates associated SoundControlBusMixes." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedUserMix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached pointer to User SoundControlBusMix\n" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointer to User SoundControlBusMix" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedUserMix = { "ActivatedUserMix", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSubsystem, ActivatedUserMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedUserMix_MetaData), Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedUserMix_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes_Inner = { "ActivatedDefaultMixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached pointers to Default SoundControlBusMixes\n" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointers to Default SoundControlBusMixes" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes = { "ActivatedDefaultMixes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSubsystem, ActivatedDefaultMixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes_MetaData), Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_ValueProp = { "ActiveMixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair, METADATA_PARAMS(0, nullptr) }; // 3370827497
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_Key_KeyProp = { "ActiveMixes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A Map of Active Mixes, the Mix State Parent (x.y) is used as a key to a struct containing both the Active State (x.y.z or x.y) and a Control Bus Mix. */" },
#endif
		{ "ModuleRelativePath", "Public/CrossfaderSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Map of Active Mixes, the Mix State Parent (x.y) is used as a key to a struct containing both the Active State (x.y.z or x.y) and a Control Bus Mix." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes = { "ActiveMixes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossfaderSubsystem, ActiveMixes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_MetaData), Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_MetaData) }; // 2083603574 3370827497
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossfaderSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedUserMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActivatedDefaultMixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossfaderSubsystem_Statics::NewProp_ActiveMixes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossfaderSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossfaderSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrossfaderSubsystem_Statics::ClassParams = {
		&UCrossfaderSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrossfaderSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrossfaderSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrossfaderSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrossfaderSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCrossfaderSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrossfaderSubsystem.OuterSingleton, Z_Construct_UClass_UCrossfaderSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrossfaderSubsystem.OuterSingleton;
	}
	template<> CROSSFADER_API UClass* StaticClass<UCrossfaderSubsystem>()
	{
		return UCrossfaderSubsystem::StaticClass();
	}
	UCrossfaderSubsystem::UCrossfaderSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossfaderSubsystem);
	UCrossfaderSubsystem::~UCrossfaderSubsystem() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FCrossfaderMixBusStatePair::StaticStruct, Z_Construct_UScriptStruct_FCrossfaderMixBusStatePair_Statics::NewStructOps, TEXT("CrossfaderMixBusStatePair"), &Z_Registration_Info_UScriptStruct_CrossfaderMixBusStatePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrossfaderMixBusStatePair), 3370827497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrossfaderSettings, UCrossfaderSettings::StaticClass, TEXT("UCrossfaderSettings"), &Z_Registration_Info_UClass_UCrossfaderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrossfaderSettings), 3964885667U) },
		{ Z_Construct_UClass_UCrossfaderSubsystem, UCrossfaderSubsystem::StaticClass, TEXT("UCrossfaderSubsystem"), &Z_Registration_Info_UClass_UCrossfaderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrossfaderSubsystem), 3886796495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_281081591(TEXT("/Script/Crossfader"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_Crossfader_Public_CrossfaderSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
