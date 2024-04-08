// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSound();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSound_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWADVehAudioPreset_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataSettings_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataSubsystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataSubsystem_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataVehAudioController_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister();
// End Cross Module References
	void UContinuousSoundSystemVectorCollection::StaticRegisterNativesUContinuousSoundSystemVectorCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContinuousSoundSystemVectorCollection);
	UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister()
	{
		return UContinuousSoundSystemVectorCollection::StaticClass();
	}
	struct Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointcloudDataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointcloudDataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorCollection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorCollection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_PointcloudDataKey_MetaData[] = {
		{ "Category", "ContinuousSoundSystemVectorCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointcloud Data Key\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointcloud Data Key" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_PointcloudDataKey = { "PointcloudDataKey", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContinuousSoundSystemVectorCollection, PointcloudDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_PointcloudDataKey_MetaData), Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_PointcloudDataKey_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection_Inner = { "VectorCollection", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection_MetaData[] = {
		{ "Category", "ContinuousSoundSystemVectorCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vector Array\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector Array" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection = { "VectorCollection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContinuousSoundSystemVectorCollection, VectorCollection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection_MetaData), Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_PointcloudDataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::NewProp_VectorCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContinuousSoundSystemVectorCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::ClassParams = {
		&UContinuousSoundSystemVectorCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection()
	{
		if (!Z_Registration_Info_UClass_UContinuousSoundSystemVectorCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContinuousSoundSystemVectorCollection.OuterSingleton, Z_Construct_UClass_UContinuousSoundSystemVectorCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContinuousSoundSystemVectorCollection.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UContinuousSoundSystemVectorCollection>()
	{
		return UContinuousSoundSystemVectorCollection::StaticClass();
	}
	UContinuousSoundSystemVectorCollection::UContinuousSoundSystemVectorCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContinuousSoundSystemVectorCollection);
	UContinuousSoundSystemVectorCollection::~UContinuousSoundSystemVectorCollection() {}
	void UContinuousSound::StaticRegisterNativesUContinuousSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContinuousSound);
	UClass* Z_Construct_UClass_UContinuousSound_NoRegister()
	{
		return UContinuousSound::StaticClass();
	}
	struct Z_Construct_UClass_UContinuousSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContinuousSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSound_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSound_Statics::NewProp_DataKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointcloud data key\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointcloud data key" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContinuousSound_Statics::NewProp_DataKey = { "DataKey", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContinuousSound, DataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::NewProp_DataKey_MetaData), Z_Construct_UClass_UContinuousSound_Statics::NewProp_DataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousSound_Statics::NewProp_AudioComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playing audio component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playing audio component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContinuousSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContinuousSound, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_UContinuousSound_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContinuousSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContinuousSound_Statics::NewProp_DataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContinuousSound_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContinuousSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContinuousSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContinuousSound_Statics::ClassParams = {
		&UContinuousSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContinuousSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::Class_MetaDataParams), Z_Construct_UClass_UContinuousSound_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousSound_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UContinuousSound()
	{
		if (!Z_Registration_Info_UClass_UContinuousSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContinuousSound.OuterSingleton, Z_Construct_UClass_UContinuousSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContinuousSound.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UContinuousSound>()
	{
		return UContinuousSound::StaticClass();
	}
	UContinuousSound::UContinuousSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContinuousSound);
	UContinuousSound::~UContinuousSound() {}
	DEFINE_FUNCTION(UWorldAudioDataSubsystem::execGetWorldAudioDataGameplayScript)
	{
		P_GET_OBJECT_REF(AWorldAudioDataGameplayScript,Z_Param_Out_WorldAudioDataGameplayScriptOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWorldAudioDataGameplayScript(Z_Param_Out_WorldAudioDataGameplayScriptOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataSubsystem::execDeactivateContinuousSoundSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateContinuousSoundSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataSubsystem::execActivateContinuousSoundSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateContinuousSoundSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataSubsystem::execDeactivateVehAudioControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateVehAudioControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldAudioDataSubsystem::execActivateVehAudioControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateVehAudioControllers();
		P_NATIVE_END;
	}
	void UWorldAudioDataSubsystem::StaticRegisterNativesUWorldAudioDataSubsystem()
	{
		UClass* Class = UWorldAudioDataSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateContinuousSoundSystem", &UWorldAudioDataSubsystem::execActivateContinuousSoundSystem },
			{ "ActivateVehAudioControllers", &UWorldAudioDataSubsystem::execActivateVehAudioControllers },
			{ "DeactivateContinuousSoundSystem", &UWorldAudioDataSubsystem::execDeactivateContinuousSoundSystem },
			{ "DeactivateVehAudioControllers", &UWorldAudioDataSubsystem::execDeactivateVehAudioControllers },
			{ "GetWorldAudioDataGameplayScript", &UWorldAudioDataSubsystem::execGetWorldAudioDataGameplayScript },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataSubsystem, nullptr, "ActivateContinuousSoundSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataSubsystem, nullptr, "ActivateVehAudioControllers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataSubsystem, nullptr, "DeactivateContinuousSoundSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataSubsystem, nullptr, "DeactivateVehAudioControllers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics
	{
		struct WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms
		{
			AWorldAudioDataGameplayScript* WorldAudioDataGameplayScriptOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldAudioDataGameplayScriptOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_WorldAudioDataGameplayScriptOut = { "WorldAudioDataGameplayScriptOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms, WorldAudioDataGameplayScriptOut), Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms), &Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_WorldAudioDataGameplayScriptOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldAudioDataSubsystem, nullptr, "GetWorldAudioDataGameplayScript", nullptr, nullptr, Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::WorldAudioDataSubsystem_eventGetWorldAudioDataGameplayScript_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioDataSubsystem);
	UClass* Z_Construct_UClass_UWorldAudioDataSubsystem_NoRegister()
	{
		return UWorldAudioDataSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWorldAudioDataSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAudioDataSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldAudioDataSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAudioDataGameplayScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldAudioDataGameplayScript;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehAudioControllers_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VehAudioControllers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehAudioControllers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VehAudioControllers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VehAudioControllerPresetMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VehAudioControllerPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehAudioControllerPresetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VehAudioControllerPresetMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuousSoundSystemVectorCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousSoundSystemVectorCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContinuousSoundSystemVectorCollections;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveContinuousSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveContinuousSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveContinuousSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuousPawnSoundCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPawnSoundCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContinuousPawnSoundCollections;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldAudioReverbDataCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAudioReverbDataCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldAudioReverbDataCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateContinuousSoundSystem, "ActivateContinuousSoundSystem" }, // 3864279888
		{ &Z_Construct_UFunction_UWorldAudioDataSubsystem_ActivateVehAudioControllers, "ActivateVehAudioControllers" }, // 203177716
		{ &Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateContinuousSoundSystem, "DeactivateContinuousSoundSystem" }, // 2682195895
		{ &Z_Construct_UFunction_UWorldAudioDataSubsystem_DeactivateVehAudioControllers, "DeactivateVehAudioControllers" }, // 2145194756
		{ &Z_Construct_UFunction_UWorldAudioDataSubsystem_GetWorldAudioDataGameplayScript, "GetWorldAudioDataGameplayScript" }, // 1139400806
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorldAudioDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataSettings = { "WorldAudioDataSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, WorldAudioDataSettings), Z_Construct_UClass_UWorldAudioDataSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataSettings_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataGameplayScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataGameplayScript = { "WorldAudioDataGameplayScript", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, WorldAudioDataGameplayScript), Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataGameplayScript_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataGameplayScript_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_ValueProp = { "VehAudioControllers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWorldAudioDataVehAudioController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_Key_KeyProp = { "VehAudioControllers_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers = { "VehAudioControllers", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, VehAudioControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_ValueProp = { "VehAudioControllerPresetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWADVehAudioPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_Key_KeyProp = { "VehAudioControllerPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap = { "VehAudioControllerPresetMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, VehAudioControllerPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached continuous sound data collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached continuous sound data collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, ContinuousSoundSystemVectorCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds_Inner = { "ActiveContinuousSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContinuousSound_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active continuous sound players\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active continuous sound players" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds = { "ActiveContinuousSounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, ActiveContinuousSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections_Inner = { "ContinuousPawnSoundCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached continuous sound data collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached continuous sound data collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections = { "ContinuousPawnSoundCollections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, ContinuousPawnSoundCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections_Inner = { "WorldAudioReverbDataCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached reverb data collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached reverb data collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections = { "WorldAudioReverbDataCollections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSubsystem, WorldAudioReverbDataCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections_MetaData), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioDataGameplayScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_VehAudioControllerPresetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousSoundSystemVectorCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ActiveContinuousSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_ContinuousPawnSoundCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::NewProp_WorldAudioReverbDataCollections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioDataSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::ClassParams = {
		&UWorldAudioDataSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldAudioDataSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWorldAudioDataSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioDataSubsystem.OuterSingleton, Z_Construct_UClass_UWorldAudioDataSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldAudioDataSubsystem.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioDataSubsystem>()
	{
		return UWorldAudioDataSubsystem::StaticClass();
	}
	UWorldAudioDataSubsystem::UWorldAudioDataSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioDataSubsystem);
	UWorldAudioDataSubsystem::~UWorldAudioDataSubsystem() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContinuousSoundSystemVectorCollection, UContinuousSoundSystemVectorCollection::StaticClass, TEXT("UContinuousSoundSystemVectorCollection"), &Z_Registration_Info_UClass_UContinuousSoundSystemVectorCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContinuousSoundSystemVectorCollection), 2725215177U) },
		{ Z_Construct_UClass_UContinuousSound, UContinuousSound::StaticClass, TEXT("UContinuousSound"), &Z_Registration_Info_UClass_UContinuousSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContinuousSound), 3835384149U) },
		{ Z_Construct_UClass_UWorldAudioDataSubsystem, UWorldAudioDataSubsystem::StaticClass, TEXT("UWorldAudioDataSubsystem"), &Z_Registration_Info_UClass_UWorldAudioDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioDataSubsystem), 753282424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSubsystem_h_2920443695(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
