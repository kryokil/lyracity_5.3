// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundScape/Public/SoundscapeSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SoundScape/Public/SoundscapeColorPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscapeSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapePalette_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashCellDensity();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMap();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapePalette_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSubsystem();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSubsystem_NoRegister();
	SOUNDSCAPE_API UEnum* Z_Construct_UEnum_Soundscape_ESoundscapeLOD();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPointCollection();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteCollection();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection;
class UScriptStruct* FSoundscapePaletteCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapePaletteCollection, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapePaletteCollection"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapePaletteCollection>()
{
	return FSoundscapePaletteCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundscapePaletteCollection_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapePaletteCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SoundscapePaletteCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct \n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapePaletteCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection_ElementProp = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection_MetaData[] = {
		{ "AllowedClasses", "/Script/Soundscape.SoundscapePalette" },
		{ "Category", "SoundscapePaletteCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soundscape Palette Collection\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soundscape Palette Collection" },
#endif
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapePaletteCollection, SoundscapePaletteCollection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection_MetaData), Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewProp_SoundscapePaletteCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapePaletteCollection",
		Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::PropPointers),
		sizeof(FSoundscapePaletteCollection),
		alignof(FSoundscapePaletteCollection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded;
class UScriptStruct* FSoundscapePaletteCollectionLoaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapePaletteCollectionLoaded"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapePaletteCollectionLoaded>()
{
	return FSoundscapePaletteCollectionLoaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapePaletteCollection_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapePaletteCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SoundscapePaletteCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct \n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapePaletteCollectionLoaded>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection_ElementProp = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundscapePalette_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection_MetaData[] = {
		{ "Category", "SoundscapePaletteCollectionLoaded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soundscape Palette Collection\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soundscape Palette Collection" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection = { "SoundscapePaletteCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapePaletteCollectionLoaded, SoundscapePaletteCollection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection_MetaData), Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewProp_SoundscapePaletteCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapePaletteCollectionLoaded",
		Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::PropPointers),
		sizeof(FSoundscapePaletteCollectionLoaded),
		alignof(FSoundscapePaletteCollectionLoaded),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection;
class UScriptStruct* FSoundscapeColorPointCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorPointCollection, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorPointCollection"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorPointCollection>()
{
	return FSoundscapeColorPointCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPointCollection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointCollection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorPointCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorPointCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection_Inner = { "ColorPointCollection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray, METADATA_PARAMS(0, nullptr) }; // 358437650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection_MetaData[] = {
		{ "Category", "SoundscapeColorPointCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soundscape Color Point Collection\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soundscape Color Point Collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection = { "ColorPointCollection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorPointCollection, ColorPointCollection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection_MetaData) }; // 358437650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewProp_ColorPointCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorPointCollection",
		Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::PropPointers),
		sizeof(FSoundscapeColorPointCollection),
		alignof(FSoundscapeColorPointCollection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPointCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection.InnerSingleton;
	}
	void USoundscapeColorPointHashCellDensity::StaticRegisterNativesUSoundscapeColorPointHashCellDensity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColorPointHashCellDensity);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister()
	{
		return USoundscapeColorPointHashCellDensity::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorPointHashCellDensity_ValueProp;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_ColorPointHashCellDensity_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashCellDensity_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColorPointHashCellDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class\n" },
#endif
		{ "IncludePath", "SoundscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_ValueProp = { "ColorPointHashCellDensity", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_Key_KeyProp = { "ColorPointHashCellDensity_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_MetaData[] = {
		{ "Category", "SoundscapeColorPointHashCellDensity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soundscape Color Point Density for a Hash Cell\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soundscape Color Point Density for a Hash Cell" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity = { "ColorPointHashCellDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashCellDensity, ColorPointHashCellDensity), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_MetaData), Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::NewProp_ColorPointHashCellDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColorPointHashCellDensity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::ClassParams = {
		&USoundscapeColorPointHashCellDensity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashCellDensity()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColorPointHashCellDensity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColorPointHashCellDensity.OuterSingleton, Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColorPointHashCellDensity.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeColorPointHashCellDensity>()
	{
		return USoundscapeColorPointHashCellDensity::StaticClass();
	}
	USoundscapeColorPointHashCellDensity::USoundscapeColorPointHashCellDensity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColorPointHashCellDensity);
	USoundscapeColorPointHashCellDensity::~USoundscapeColorPointHashCellDensity() {}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execSetGridCenterpoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridCenterpoint(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execCalculateHashIndex)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint64*)Z_Param__Result=P_THIS->CalculateHashIndex(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execAddColorPointArrayToHash)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_GET_STRUCT(FGameplayTag,Z_Param_ColorPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddColorPointArrayToHash(Z_Param_Out_Locations,Z_Param_ColorPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execAddColorPointToHash)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT(FGameplayTag,Z_Param_ColorPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddColorPointToHash(Z_Param_Out_Location,Z_Param_ColorPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execNumColorPointsInCell)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT(FGameplayTag,Z_Param_ColorPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumColorPointsInCell(Z_Param_Out_Location,Z_Param_ColorPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execClearHash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeColorPointHashMap::execInitializeHash)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HashCellSizeIn);
		P_GET_STRUCT(FVector,Z_Param_GridCenterIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHash(Z_Param_HashCellSizeIn,Z_Param_GridCenterIn);
		P_NATIVE_END;
	}
	void USoundscapeColorPointHashMap::StaticRegisterNativesUSoundscapeColorPointHashMap()
	{
		UClass* Class = USoundscapeColorPointHashMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddColorPointArrayToHash", &USoundscapeColorPointHashMap::execAddColorPointArrayToHash },
			{ "AddColorPointToHash", &USoundscapeColorPointHashMap::execAddColorPointToHash },
			{ "CalculateHashIndex", &USoundscapeColorPointHashMap::execCalculateHashIndex },
			{ "ClearHash", &USoundscapeColorPointHashMap::execClearHash },
			{ "InitializeHash", &USoundscapeColorPointHashMap::execInitializeHash },
			{ "NumColorPointsInCell", &USoundscapeColorPointHashMap::execNumColorPointsInCell },
			{ "SetGridCenterpoint", &USoundscapeColorPointHashMap::execSetGridCenterpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics
	{
		struct SoundscapeColorPointHashMap_eventAddColorPointArrayToHash_Parms
		{
			TArray<FVector> Locations;
			FGameplayTag ColorPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventAddColorPointArrayToHash_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventAddColorPointArrayToHash_Parms, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_ColorPoint_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_ColorPoint_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_Locations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::NewProp_ColorPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if ColorPoint added to hash, false if failed (likely location is out of Hash Bounds)\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if ColorPoint added to hash, false if failed (likely location is out of Hash Bounds)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "AddColorPointArrayToHash", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::SoundscapeColorPointHashMap_eventAddColorPointArrayToHash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::SoundscapeColorPointHashMap_eventAddColorPointArrayToHash_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics
	{
		struct SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms
		{
			FVector Location;
			FGameplayTag ColorPoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ColorPoint_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ColorPoint_MetaData) }; // 2083603574
	void Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms), &Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if ColorPoint added to hash, false if failed (likely location is out of Hash Bounds)\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if ColorPoint added to hash, false if failed (likely location is out of Hash Bounds)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "AddColorPointToHash", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::SoundscapeColorPointHashMap_eventAddColorPointToHash_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics
	{
		struct SoundscapeColorPointHashMap_eventCalculateHashIndex_Parms
		{
			FVector Location;
			uint64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventCalculateHashIndex_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventCalculateHashIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculates Hash Index\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates Hash Index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "CalculateHashIndex", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::SoundscapeColorPointHashMap_eventCalculateHashIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::SoundscapeColorPointHashMap_eventCalculateHashIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears hash map\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears hash map" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "ClearHash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics
	{
		struct SoundscapeColorPointHashMap_eventInitializeHash_Parms
		{
			float HashCellSizeIn;
			FVector GridCenterIn;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HashCellSizeIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCenterIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::NewProp_HashCellSizeIn = { "HashCellSizeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventInitializeHash_Parms, HashCellSizeIn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::NewProp_GridCenterIn = { "GridCenterIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventInitializeHash_Parms, GridCenterIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::NewProp_HashCellSizeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::NewProp_GridCenterIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears and initializes hash map, sizes grid to HashCellWidth in Uunits\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears and initializes hash map, sizes grid to HashCellWidth in Uunits" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "InitializeHash", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::SoundscapeColorPointHashMap_eventInitializeHash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::SoundscapeColorPointHashMap_eventInitializeHash_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics
	{
		struct SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms
		{
			FVector Location;
			FGameplayTag ColorPoint;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ColorPoint_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ColorPoint_MetaData) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of ColorPoints in a Cell containing the Location\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of ColorPoints in a Cell containing the Location" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "NumColorPointsInCell", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::SoundscapeColorPointHashMap_eventNumColorPointsInCell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics
	{
		struct SoundscapeColorPointHashMap_eventSetGridCenterpoint_Parms
		{
			FVector Location;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeColorPointHashMap_eventSetGridCenterpoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets ceterpoint of grid to Location\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets ceterpoint of grid to Location" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeColorPointHashMap, nullptr, "SetGridCenterpoint", nullptr, nullptr, Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::SoundscapeColorPointHashMap_eventSetGridCenterpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::SoundscapeColorPointHashMap_eventSetGridCenterpoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColorPointHashMap);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister()
	{
		return USoundscapeColorPointHashMap::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColorPointHashMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPointHashMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColorPointHashMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HashCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NumCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashCellFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HashCellFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridOriginOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridOriginOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointArrayToHash, "AddColorPointArrayToHash" }, // 130493227
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_AddColorPointToHash, "AddColorPointToHash" }, // 1819645002
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_CalculateHashIndex, "CalculateHashIndex" }, // 3686929088
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_ClearHash, "ClearHash" }, // 2275663135
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_InitializeHash, "InitializeHash" }, // 2646582148
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_NumColorPointsInCell, "NumColorPointsInCell" }, // 183853589
		{ &Z_Construct_UFunction_USoundscapeColorPointHashMap_SetGridCenterpoint, "SetGridCenterpoint" }, // 840696692
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_ValueProp = { "ColorPointHashMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_Key_KeyProp = { "ColorPointHashMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color Point Hash Map\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Point Hash Map" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap = { "ColorPointHashMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, ColorPointHashMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellSize = { "HashCellSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, HashCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellSize_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxGridWidth / Hash Cell Size\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxGridWidth / Hash Cell Size" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridWidth_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_NumCells_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Width Cubed\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Width Cubed" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, NumCells), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_NumCells_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_NumCells_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellFactor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cell Size Inverted\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cell Size Inverted" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellFactor = { "HashCellFactor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, HashCellFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellFactor_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridCenter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Grid Centerpoint\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Grid Centerpoint" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridCenter = { "GridCenter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, GridCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridCenter_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridOriginOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Origin Offset\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Origin Offset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridOriginOffset = { "GridOriginOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMap, GridOriginOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridOriginOffset_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridOriginOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_ColorPointHashMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_HashCellFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::NewProp_GridOriginOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColorPointHashMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::ClassParams = {
		&USoundscapeColorPointHashMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashMap()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColorPointHashMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColorPointHashMap.OuterSingleton, Z_Construct_UClass_USoundscapeColorPointHashMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColorPointHashMap.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeColorPointHashMap>()
	{
		return USoundscapeColorPointHashMap::StaticClass();
	}
	USoundscapeColorPointHashMap::USoundscapeColorPointHashMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColorPointHashMap);
	USoundscapeColorPointHashMap::~USoundscapeColorPointHashMap() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundscapeLOD;
	static UEnum* ESoundscapeLOD_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundscapeLOD.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundscapeLOD.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Soundscape_ESoundscapeLOD, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("ESoundscapeLOD"));
		}
		return Z_Registration_Info_UEnum_ESoundscapeLOD.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UEnum* StaticEnum<ESoundscapeLOD>()
	{
		return ESoundscapeLOD_StaticEnum();
	}
	struct Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enumerators[] = {
		{ "ESoundscapeLOD::LOD1", (int64)ESoundscapeLOD::LOD1 },
		{ "ESoundscapeLOD::LOD2", (int64)ESoundscapeLOD::LOD2 },
		{ "ESoundscapeLOD::LOD3", (int64)ESoundscapeLOD::LOD3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enum_MetaDataParams[] = {
		{ "LOD1.DisplayName", "LOD 1" },
		{ "LOD1.Name", "ESoundscapeLOD::LOD1" },
		{ "LOD2.DisplayName", "LOD 2" },
		{ "LOD2.Name", "ESoundscapeLOD::LOD2" },
		{ "LOD3.DisplayName", "LOD 3" },
		{ "LOD3.Name", "ESoundscapeLOD::LOD3" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		"ESoundscapeLOD",
		"ESoundscapeLOD",
		Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Soundscape_ESoundscapeLOD()
	{
		if (!Z_Registration_Info_UEnum_ESoundscapeLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundscapeLOD.InnerSingleton, Z_Construct_UEnum_Soundscape_ESoundscapeLOD_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundscapeLOD.InnerSingleton;
	}
	void USoundscapeColorPointHashMapCollection::StaticRegisterNativesUSoundscapeColorPointHashMapCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColorPointHashMapCollection);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister()
	{
		return USoundscapeColorPointHashMapCollection::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD3ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD3ColorPointHashWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color Point Hash Maps\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Point Hash Maps" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD1 = { "ColorPointHashMapLOD1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, ColorPointHashMapLOD1), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD1_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD2_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD2 = { "ColorPointHashMapLOD2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, ColorPointHashMapLOD2), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD2_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD3_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD3 = { "ColorPointHashMapLOD3", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, ColorPointHashMapLOD3), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD3_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD1\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD1" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashWidth = { "LOD1ColorPointHashWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, LOD1ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashWidth_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD1 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD1 Max Distance" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashDistance = { "LOD1ColorPointHashDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, LOD1ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashDistance_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD2\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD2" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashWidth = { "LOD2ColorPointHashWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, LOD2ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashWidth_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD2 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD2 Max Distance" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashDistance = { "LOD2ColorPointHashDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, LOD2ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashDistance_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD3ColorPointHashWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD3\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD3" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD3ColorPointHashWidth = { "LOD3ColorPointHashWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColorPointHashMapCollection, LOD3ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD3ColorPointHashWidth_MetaData), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD3ColorPointHashWidth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_ColorPointHashMapLOD3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD1ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD2ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::NewProp_LOD3ColorPointHashWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColorPointHashMapCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::ClassParams = {
		&USoundscapeColorPointHashMapCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColorPointHashMapCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColorPointHashMapCollection.OuterSingleton, Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColorPointHashMapCollection.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeColorPointHashMapCollection>()
	{
		return USoundscapeColorPointHashMapCollection::StaticClass();
	}
	USoundscapeColorPointHashMapCollection::USoundscapeColorPointHashMapCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColorPointHashMapCollection);
	USoundscapeColorPointHashMapCollection::~USoundscapeColorPointHashMapCollection() {}
	DEFINE_FUNCTION(USoundscapeSubsystem::execCheckColorPointDensity)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FGameplayTag,Z_Param_ColorPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CheckColorPointDensity(Z_Param_Location,Z_Param_ColorPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execRemoveColorPointCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ColorPointCollectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveColorPointCollection(Z_Param_ColorPointCollectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execAddColorPointCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ColorPointCollectionName);
		P_GET_STRUCT(FSoundscapeColorPointCollection,Z_Param_ColorPointCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddColorPointCollection(Z_Param_ColorPointCollectionName,Z_Param_ColorPointCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execRemovePaletteCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PaletteCollectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePaletteCollection(Z_Param_PaletteCollectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execAddPaletteCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PaletteCollectionName);
		P_GET_STRUCT(FSoundscapePaletteCollection,Z_Param_PaletteCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPaletteCollection(Z_Param_PaletteCollectionName,Z_Param_PaletteCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execRestartSoundscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartSoundscape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execClearState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SoundscapeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearState(Z_Param_SoundscapeState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundscapeSubsystem::execSetState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SoundscapeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_SoundscapeState);
		P_NATIVE_END;
	}
	void USoundscapeSubsystem::StaticRegisterNativesUSoundscapeSubsystem()
	{
		UClass* Class = USoundscapeSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddColorPointCollection", &USoundscapeSubsystem::execAddColorPointCollection },
			{ "AddPaletteCollection", &USoundscapeSubsystem::execAddPaletteCollection },
			{ "CheckColorPointDensity", &USoundscapeSubsystem::execCheckColorPointDensity },
			{ "ClearState", &USoundscapeSubsystem::execClearState },
			{ "RemoveColorPointCollection", &USoundscapeSubsystem::execRemoveColorPointCollection },
			{ "RemovePaletteCollection", &USoundscapeSubsystem::execRemovePaletteCollection },
			{ "RestartSoundscape", &USoundscapeSubsystem::execRestartSoundscape },
			{ "SetState", &USoundscapeSubsystem::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics
	{
		struct SoundscapeSubsystem_eventAddColorPointCollection_Parms
		{
			FName ColorPointCollectionName;
			FSoundscapeColorPointCollection ColorPointCollection;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColorPointCollectionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPointCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::NewProp_ColorPointCollectionName = { "ColorPointCollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventAddColorPointCollection_Parms, ColorPointCollectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::NewProp_ColorPointCollection = { "ColorPointCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventAddColorPointCollection_Parms, ColorPointCollection), Z_Construct_UScriptStruct_FSoundscapeColorPointCollection, METADATA_PARAMS(0, nullptr) }; // 1974378096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::NewProp_ColorPointCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::NewProp_ColorPointCollection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add a Color Point Collection to the Subsystem, returns true if successful\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a Color Point Collection to the Subsystem, returns true if successful" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "AddColorPointCollection", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::SoundscapeSubsystem_eventAddColorPointCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::SoundscapeSubsystem_eventAddColorPointCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics
	{
		struct SoundscapeSubsystem_eventAddPaletteCollection_Parms
		{
			FName PaletteCollectionName;
			FSoundscapePaletteCollection PaletteCollection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PaletteCollectionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaletteCollection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_PaletteCollectionName = { "PaletteCollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventAddPaletteCollection_Parms, PaletteCollectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_PaletteCollection = { "PaletteCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventAddPaletteCollection_Parms, PaletteCollection), Z_Construct_UScriptStruct_FSoundscapePaletteCollection, METADATA_PARAMS(0, nullptr) }; // 581605580
	void Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeSubsystem_eventAddPaletteCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundscapeSubsystem_eventAddPaletteCollection_Parms), &Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_PaletteCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_PaletteCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "AddPaletteCollection", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::SoundscapeSubsystem_eventAddPaletteCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::SoundscapeSubsystem_eventAddPaletteCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics
	{
		struct SoundscapeSubsystem_eventCheckColorPointDensity_Parms
		{
			FVector Location;
			FGameplayTag ColorPoint;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventCheckColorPointDensity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventCheckColorPointDensity_Parms, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventCheckColorPointDensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check Color Point Density for a Location Cell\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check Color Point Density for a Location Cell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "CheckColorPointDensity", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::SoundscapeSubsystem_eventCheckColorPointDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::SoundscapeSubsystem_eventCheckColorPointDensity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics
	{
		struct SoundscapeSubsystem_eventClearState_Parms
		{
			FGameplayTag SoundscapeState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundscapeState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::NewProp_SoundscapeState = { "SoundscapeState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventClearState_Parms, SoundscapeState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::NewProp_SoundscapeState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "ClearState", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::SoundscapeSubsystem_eventClearState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::SoundscapeSubsystem_eventClearState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_ClearState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_ClearState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics
	{
		struct SoundscapeSubsystem_eventRemoveColorPointCollection_Parms
		{
			FName ColorPointCollectionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColorPointCollectionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ColorPointCollectionName = { "ColorPointCollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventRemoveColorPointCollection_Parms, ColorPointCollectionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeSubsystem_eventRemoveColorPointCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundscapeSubsystem_eventRemoveColorPointCollection_Parms), &Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ColorPointCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove a Color Point Collection from the Subsystem, returns true if successful\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a Color Point Collection from the Subsystem, returns true if successful" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "RemoveColorPointCollection", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::SoundscapeSubsystem_eventRemoveColorPointCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::SoundscapeSubsystem_eventRemoveColorPointCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics
	{
		struct SoundscapeSubsystem_eventRemovePaletteCollection_Parms
		{
			FName PaletteCollectionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PaletteCollectionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_PaletteCollectionName = { "PaletteCollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventRemovePaletteCollection_Parms, PaletteCollectionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundscapeSubsystem_eventRemovePaletteCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundscapeSubsystem_eventRemovePaletteCollection_Parms), &Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_PaletteCollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "RemovePaletteCollection", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::SoundscapeSubsystem_eventRemovePaletteCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::SoundscapeSubsystem_eventRemovePaletteCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "RestartSoundscape", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics
	{
		struct SoundscapeSubsystem_eventSetState_Parms
		{
			FGameplayTag SoundscapeState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundscapeState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::NewProp_SoundscapeState = { "SoundscapeState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundscapeSubsystem_eventSetState_Parms, SoundscapeState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::NewProp_SoundscapeState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundscapeSubsystem, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::SoundscapeSubsystem_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::SoundscapeSubsystem_eventSetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USoundscapeSubsystem_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundscapeSubsystem_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeSubsystem);
	UClass* Z_Construct_UClass_USoundscapeSubsystem_NoRegister()
	{
		return USoundscapeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedPaletteCollectionSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPaletteCollectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedPaletteCollectionSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnloadedPaletteCollections_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnloadedPaletteCollections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadedPaletteCollections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UnloadedPaletteCollections;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePalettes_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePalettes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePalettes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActivePalettes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorPointHashMapCollections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPointHashMapLOD3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorPointHashMapLOD3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColorPointHashMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveColorPointHashMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundscapeSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundscapeSubsystem_AddColorPointCollection, "AddColorPointCollection" }, // 986437210
		{ &Z_Construct_UFunction_USoundscapeSubsystem_AddPaletteCollection, "AddPaletteCollection" }, // 4080558440
		{ &Z_Construct_UFunction_USoundscapeSubsystem_CheckColorPointDensity, "CheckColorPointDensity" }, // 808584831
		{ &Z_Construct_UFunction_USoundscapeSubsystem_ClearState, "ClearState" }, // 2399185410
		{ &Z_Construct_UFunction_USoundscapeSubsystem_RemoveColorPointCollection, "RemoveColorPointCollection" }, // 1924829618
		{ &Z_Construct_UFunction_USoundscapeSubsystem_RemovePaletteCollection, "RemovePaletteCollection" }, // 1099415509
		{ &Z_Construct_UFunction_USoundscapeSubsystem_RestartSoundscape, "RestartSoundscape" }, // 3391362709
		{ &Z_Construct_UFunction_USoundscapeSubsystem_SetState, "SetState" }, // 2769615963
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SoundscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet_ElementProp = { "LoadedPaletteCollectionSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundscapePalette_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet = { "LoadedPaletteCollectionSet", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, LoadedPaletteCollectionSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_ValueProp = { "UnloadedPaletteCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoundscapePaletteCollection, METADATA_PARAMS(0, nullptr) }; // 581605580
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_Key_KeyProp = { "UnloadedPaletteCollections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections = { "UnloadedPaletteCollections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, UnloadedPaletteCollections), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_MetaData) }; // 581605580
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_ValueProp = { "ActivePalettes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActiveSoundscapePalette_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_Key_KeyProp = { "ActivePalettes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundscapePalette_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes = { "ActivePalettes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ActivePalettes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections_Inner = { "ColorPointHashMapCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stored Hash Map Collections\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stored Hash Map Collections" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections = { "ColorPointHashMapCollections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ColorPointHashMapCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color Point Hash Maps\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Point Hash Maps" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD1 = { "ColorPointHashMapLOD1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ColorPointHashMapLOD1), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD1_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD2_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD2 = { "ColorPointHashMapLOD2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ColorPointHashMapLOD2), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD2_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD3_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD3 = { "ColorPointHashMapLOD3", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ColorPointHashMapLOD3), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD3_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActiveColorPointHashMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundscapeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActiveColorPointHashMap = { "ActiveColorPointHashMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeSubsystem, ActiveColorPointHashMap), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActiveColorPointHashMap_MetaData), Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActiveColorPointHashMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_LoadedPaletteCollectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_UnloadedPaletteCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActivePalettes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ColorPointHashMapLOD3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeSubsystem_Statics::NewProp_ActiveColorPointHashMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeSubsystem_Statics::ClassParams = {
		&USoundscapeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundscapeSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundscapeSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundscapeSubsystem()
	{
		if (!Z_Registration_Info_UClass_USoundscapeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeSubsystem.OuterSingleton, Z_Construct_UClass_USoundscapeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeSubsystem.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeSubsystem>()
	{
		return USoundscapeSubsystem::StaticClass();
	}
	USoundscapeSubsystem::USoundscapeSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeSubsystem);
	USoundscapeSubsystem::~USoundscapeSubsystem() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::EnumInfo[] = {
		{ ESoundscapeLOD_StaticEnum, TEXT("ESoundscapeLOD"), &Z_Registration_Info_UEnum_ESoundscapeLOD, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3109499261U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FSoundscapePaletteCollection::StaticStruct, Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics::NewStructOps, TEXT("SoundscapePaletteCollection"), &Z_Registration_Info_UScriptStruct_SoundscapePaletteCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapePaletteCollection), 581605580U) },
		{ FSoundscapePaletteCollectionLoaded::StaticStruct, Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics::NewStructOps, TEXT("SoundscapePaletteCollectionLoaded"), &Z_Registration_Info_UScriptStruct_SoundscapePaletteCollectionLoaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapePaletteCollectionLoaded), 3389193287U) },
		{ FSoundscapeColorPointCollection::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics::NewStructOps, TEXT("SoundscapeColorPointCollection"), &Z_Registration_Info_UScriptStruct_SoundscapeColorPointCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorPointCollection), 1974378096U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeColorPointHashCellDensity, USoundscapeColorPointHashCellDensity::StaticClass, TEXT("USoundscapeColorPointHashCellDensity"), &Z_Registration_Info_UClass_USoundscapeColorPointHashCellDensity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColorPointHashCellDensity), 2868034529U) },
		{ Z_Construct_UClass_USoundscapeColorPointHashMap, USoundscapeColorPointHashMap::StaticClass, TEXT("USoundscapeColorPointHashMap"), &Z_Registration_Info_UClass_USoundscapeColorPointHashMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColorPointHashMap), 3320903886U) },
		{ Z_Construct_UClass_USoundscapeColorPointHashMapCollection, USoundscapeColorPointHashMapCollection::StaticClass, TEXT("USoundscapeColorPointHashMapCollection"), &Z_Registration_Info_UClass_USoundscapeColorPointHashMapCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColorPointHashMapCollection), 3671970014U) },
		{ Z_Construct_UClass_USoundscapeSubsystem, USoundscapeSubsystem::StaticClass, TEXT("USoundscapeSubsystem"), &Z_Registration_Info_UClass_USoundscapeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeSubsystem), 1099555063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_2310078951(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
