// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UIExtensionSystem.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIExtensionSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem();
	UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister();
	UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionAction();
	UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch();
	UIEXTENSION_API UFunction* Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature();
	UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle();
	UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionPointHandle();
	UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionRequest();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UIExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIExtensionPointMatch;
	static UEnum* EUIExtensionPointMatch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("EUIExtensionPointMatch"));
		}
		return Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton;
	}
	template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionPointMatch>()
	{
		return EUIExtensionPointMatch_StaticEnum();
	}
	struct Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enumerators[] = {
		{ "EUIExtensionPointMatch::ExactMatch", (int64)EUIExtensionPointMatch::ExactMatch },
		{ "EUIExtensionPointMatch::PartialMatch", (int64)EUIExtensionPointMatch::PartialMatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Match rule for extension points\n" },
#endif
		{ "ExactMatch.Comment", "// An exact match will only receive extensions with exactly the same point\n// (e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)\n" },
		{ "ExactMatch.Name", "EUIExtensionPointMatch::ExactMatch" },
		{ "ExactMatch.ToolTip", "An exact match will only receive extensions with exactly the same point\n(e.g., registering for \"A.B\" will match a broadcast of A.B but not A.B.C)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
		{ "PartialMatch.Comment", "// A partial match will receive any extensions rooted in the same point\n// (e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)\n" },
		{ "PartialMatch.Name", "EUIExtensionPointMatch::PartialMatch" },
		{ "PartialMatch.ToolTip", "A partial match will receive any extensions rooted in the same point\n(e.g., registering for \"A.B\" will match a broadcast of A.B as well as A.B.C)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match rule for extension points" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIExtension,
		nullptr,
		"EUIExtensionPointMatch",
		"EUIExtensionPointMatch",
		Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch()
	{
		if (!Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton, Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIExtensionAction;
	static UEnum* EUIExtensionAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIExtension_EUIExtensionAction, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("EUIExtensionAction"));
		}
		return Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton;
	}
	template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionAction>()
	{
		return EUIExtensionAction_StaticEnum();
	}
	struct Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enumerators[] = {
		{ "EUIExtensionAction::Added", (int64)EUIExtensionAction::Added },
		{ "EUIExtensionAction::Removed", (int64)EUIExtensionAction::Removed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enum_MetaDataParams[] = {
		{ "Added.Name", "EUIExtensionAction::Added" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Match rule for extension points\n" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
		{ "Removed.Name", "EUIExtensionAction::Removed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match rule for extension points" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIExtension,
		nullptr,
		"EUIExtensionAction",
		"EUIExtensionAction",
		Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionAction()
	{
		if (!Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton, Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionPointHandle;
class UScriptStruct* FUIExtensionPointHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionPointHandle, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionPointHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionPointHandle>()
{
	return FUIExtensionPointHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionPointHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
		nullptr,
		&NewStructOps,
		"UIExtensionPointHandle",
		nullptr,
		0,
		sizeof(FUIExtensionPointHandle),
		alignof(FUIExtensionPointHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionPointHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionHandle;
class UScriptStruct* FUIExtensionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionHandle, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionHandle>()
{
	return FUIExtensionHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIExtensionHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
		nullptr,
		&NewStructOps,
		"UIExtensionHandle",
		nullptr,
		0,
		sizeof(FUIExtensionHandle),
		alignof(FUIExtensionHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionRequest;
class UScriptStruct* FUIExtensionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionRequest, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionRequest>()
{
	return FUIExtensionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIExtensionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle = { "ExtensionHandle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ExtensionHandle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle_MetaData), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle_MetaData) }; // 2147757016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag_MetaData), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject_MetaData), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
		nullptr,
		&NewStructOps,
		"UIExtensionRequest",
		Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers),
		sizeof(FUIExtensionRequest),
		alignof(FUIExtensionRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms
		{
			EUIExtensionAction Action;
			FUIExtensionRequest ExtensionRequest;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms, Action), Z_Construct_UEnum_UIExtension_EUIExtensionAction, METADATA_PARAMS(0, nullptr) }; // 1602125450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionRequest = { "ExtensionRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms, ExtensionRequest), Z_Construct_UScriptStruct_FUIExtensionRequest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionRequest_MetaData), Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionRequest_MetaData) }; // 2417220302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UIExtension, nullptr, "ExtendExtensionPointDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FExtendExtensionPointDynamicDelegate_DelegateWrapper(const FScriptDelegate& ExtendExtensionPointDynamicDelegate, EUIExtensionAction Action, FUIExtensionRequest const& ExtensionRequest)
{
	struct _Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms
	{
		EUIExtensionAction Action;
		FUIExtensionRequest ExtensionRequest;
	};
	_Script_UIExtension_eventExtendExtensionPointDynamicDelegate_Parms Parms;
	Parms.Action=Action;
	Parms.ExtensionRequest=ExtensionRequest;
	ExtendExtensionPointDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionAsDataForContext)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIExtensionHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionAsDataForContext(Z_Param_ExtensionPointTag,Z_Param_ContextObject,Z_Param_Data,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionAsData)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIExtensionHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionAsData(Z_Param_ExtensionPointTag,Z_Param_Data,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionAsWidgetForContext)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIExtensionHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionAsWidgetForContext(Z_Param_ExtensionPointTag,Z_Param_WidgetClass,Z_Param_ContextObject,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionAsWidget)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIExtensionHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionAsWidget(Z_Param_ExtensionPointTag,Z_Param_WidgetClass,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionPoint)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
		P_GET_ENUM(EUIExtensionPointMatch,Z_Param_ExtensionPointTagMatchType);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_AllowedDataClasses);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ExtensionCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUIExtensionPointHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionPoint(Z_Param_ExtensionPointTag,EUIExtensionPointMatch(Z_Param_ExtensionPointTagMatchType),Z_Param_Out_AllowedDataClasses,FExtendExtensionPointDynamicDelegate(Z_Param_ExtensionCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execUnregisterExtensionPoint)
	{
		P_GET_STRUCT_REF(FUIExtensionPointHandle,Z_Param_Out_ExtensionPointHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterExtensionPoint(Z_Param_Out_ExtensionPointHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionSubsystem::execUnregisterExtension)
	{
		P_GET_STRUCT_REF(FUIExtensionHandle,Z_Param_Out_ExtensionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterExtension(Z_Param_Out_ExtensionHandle);
		P_NATIVE_END;
	}
	void UUIExtensionSubsystem::StaticRegisterNativesUUIExtensionSubsystem()
	{
		UClass* Class = UUIExtensionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_RegisterExtensionAsData", &UUIExtensionSubsystem::execK2_RegisterExtensionAsData },
			{ "K2_RegisterExtensionAsDataForContext", &UUIExtensionSubsystem::execK2_RegisterExtensionAsDataForContext },
			{ "K2_RegisterExtensionAsWidget", &UUIExtensionSubsystem::execK2_RegisterExtensionAsWidget },
			{ "K2_RegisterExtensionAsWidgetForContext", &UUIExtensionSubsystem::execK2_RegisterExtensionAsWidgetForContext },
			{ "K2_RegisterExtensionPoint", &UUIExtensionSubsystem::execK2_RegisterExtensionPoint },
			{ "UnregisterExtension", &UUIExtensionSubsystem::execUnregisterExtension },
			{ "UnregisterExtensionPoint", &UUIExtensionSubsystem::execUnregisterExtensionPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics
	{
		struct UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms
		{
			FGameplayTag ExtensionPointTag;
			UObject* Data;
			int32 Priority;
			FUIExtensionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms, Priority), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers the extension as data for any extension point that can make use of it.\n\x09 */" },
#endif
		{ "CPP_Default_Priority", "-1" },
		{ "DisplayName", "Register Extension (Data)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers the extension as data for any extension point that can make use of it." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionAsData", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics
	{
		struct UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms
		{
			FGameplayTag ExtensionPointTag;
			UObject* ContextObject;
			UObject* Data;
			int32 Priority;
			FUIExtensionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers the extension as data for any extension point that can make use of it.\n\x09 */" },
#endif
		{ "CPP_Default_Priority", "-1" },
		{ "DisplayName", "Register Extension (Data For Context)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers the extension as data for any extension point that can make use of it." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionAsDataForContext", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsDataForContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics
	{
		struct UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms
		{
			FGameplayTag ExtensionPointTag;
			TSubclassOf<UUserWidget>  WidgetClass;
			int32 Priority;
			FUIExtensionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms, Priority), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "CPP_Default_Priority", "-1" },
		{ "DisplayName", "Register Extension (Widget)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionAsWidget", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics
	{
		struct UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms
		{
			FGameplayTag ExtensionPointTag;
			TSubclassOf<UUserWidget>  WidgetClass;
			UObject* ContextObject;
			int32 Priority;
			FUIExtensionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers the widget (as data) for a specific player.  This means the extension points will receive a UIExtensionForPlayer data object\n\x09 * that they can look at to determine if it's for whatever they consider their player.\n\x09 */" },
#endif
		{ "CPP_Default_Priority", "-1" },
		{ "DisplayName", "Register Extension (Widget For Context)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers the widget (as data) for a specific player.  This means the extension points will receive a UIExtensionForPlayer data object\nthat they can look at to determine if it's for whatever they consider their player." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionAsWidgetForContext", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics
	{
		struct UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms
		{
			FGameplayTag ExtensionPointTag;
			EUIExtensionPointMatch ExtensionPointTagMatchType;
			TArray<UClass*> AllowedDataClasses;
			FScriptDelegate ExtensionCallback;
			FUIExtensionPointHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtensionPointTagMatchType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtensionPointTagMatchType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedDataClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDataClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDataClasses;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ExtensionCallback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTagMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTagMatchType = { "ExtensionPointTagMatchType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms, ExtensionPointTagMatchType), Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch, METADATA_PARAMS(0, nullptr) }; // 1984880493
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses_Inner = { "AllowedDataClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses = { "AllowedDataClasses", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms, AllowedDataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses_MetaData), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionCallback = { "ExtensionCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms, ExtensionCallback), Z_Construct_UDelegateFunction_UIExtension_ExtendExtensionPointDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4022759708
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(0, nullptr) }; // 988972048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTagMatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionPointTagMatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_AllowedDataClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ExtensionCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "DisplayName", "Register Extension Point" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionPoint", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics
	{
		struct UIExtensionSubsystem_eventUnregisterExtension_Parms
		{
			FUIExtensionHandle ExtensionHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::NewProp_ExtensionHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::NewProp_ExtensionHandle = { "ExtensionHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventUnregisterExtension_Parms, ExtensionHandle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::NewProp_ExtensionHandle_MetaData), Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::NewProp_ExtensionHandle_MetaData) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::NewProp_ExtensionHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "UnregisterExtension", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::UIExtensionSubsystem_eventUnregisterExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::UIExtensionSubsystem_eventUnregisterExtension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics
	{
		struct UIExtensionSubsystem_eventUnregisterExtensionPoint_Parms
		{
			FUIExtensionPointHandle ExtensionPointHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::NewProp_ExtensionPointHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::NewProp_ExtensionPointHandle = { "ExtensionPointHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventUnregisterExtensionPoint_Parms, ExtensionPointHandle), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::NewProp_ExtensionPointHandle_MetaData), Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::NewProp_ExtensionPointHandle_MetaData) }; // 988972048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::NewProp_ExtensionPointHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "UnregisterExtensionPoint", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::UIExtensionSubsystem_eventUnregisterExtensionPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::UIExtensionSubsystem_eventUnregisterExtensionPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionSubsystem);
	UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister()
	{
		return UUIExtensionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUIExtensionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIExtensionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIExtensionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsData, "K2_RegisterExtensionAsData" }, // 1218914758
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsDataForContext, "K2_RegisterExtensionAsDataForContext" }, // 1240853095
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidget, "K2_RegisterExtensionAsWidget" }, // 1480929522
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext, "K2_RegisterExtensionAsWidgetForContext" }, // 2584386469
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionPoint, "K2_RegisterExtensionPoint" }, // 1483767467
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtension, "UnregisterExtension" }, // 496447344
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_UnregisterExtensionPoint, "UnregisterExtensionPoint" }, // 2258537481
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIExtensionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionSubsystem_Statics::ClassParams = {
		&UUIExtensionSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIExtensionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton, Z_Construct_UClass_UUIExtensionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton;
	}
	template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionSubsystem>()
	{
		return UUIExtensionSubsystem::StaticClass();
	}
	UUIExtensionSubsystem::UUIExtensionSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionSubsystem);
	UUIExtensionSubsystem::~UUIExtensionSubsystem() {}
	DEFINE_FUNCTION(UUIExtensionHandleFunctions::execIsValid)
	{
		P_GET_STRUCT_REF(FUIExtensionHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUIExtensionHandleFunctions::IsValid(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionHandleFunctions::execUnregister)
	{
		P_GET_STRUCT_REF(FUIExtensionHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIExtensionHandleFunctions::Unregister(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UUIExtensionHandleFunctions::StaticRegisterNativesUUIExtensionHandleFunctions()
	{
		UClass* Class = UUIExtensionHandleFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UUIExtensionHandleFunctions::execIsValid },
			{ "Unregister", &UUIExtensionHandleFunctions::execUnregister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics
	{
		struct UIExtensionHandleFunctions_eventIsValid_Parms
		{
			FUIExtensionHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionHandleFunctions_eventIsValid_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	void Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIExtensionHandleFunctions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIExtensionHandleFunctions_eventIsValid_Parms), &Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionHandleFunctions, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::UIExtensionHandleFunctions_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::UIExtensionHandleFunctions_eventIsValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics
	{
		struct UIExtensionHandleFunctions_eventUnregister_Parms
		{
			FUIExtensionHandle Handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionHandleFunctions_eventUnregister_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2147757016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionHandleFunctions, nullptr, "Unregister", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::UIExtensionHandleFunctions_eventUnregister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::UIExtensionHandleFunctions_eventUnregister_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionHandleFunctions);
	UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister()
	{
		return UUIExtensionHandleFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid, "IsValid" }, // 1665496209
		{ &Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister, "Unregister" }, // 2742184678
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionHandleFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::ClassParams = {
		&UUIExtensionHandleFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIExtensionHandleFunctions()
	{
		if (!Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton, Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton;
	}
	template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionHandleFunctions>()
	{
		return UUIExtensionHandleFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionHandleFunctions);
	UUIExtensionHandleFunctions::~UUIExtensionHandleFunctions() {}
	DEFINE_FUNCTION(UUIExtensionPointHandleFunctions::execIsValid)
	{
		P_GET_STRUCT_REF(FUIExtensionPointHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUIExtensionPointHandleFunctions::IsValid(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIExtensionPointHandleFunctions::execUnregister)
	{
		P_GET_STRUCT_REF(FUIExtensionPointHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIExtensionPointHandleFunctions::Unregister(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UUIExtensionPointHandleFunctions::StaticRegisterNativesUUIExtensionPointHandleFunctions()
	{
		UClass* Class = UUIExtensionPointHandleFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UUIExtensionPointHandleFunctions::execIsValid },
			{ "Unregister", &UUIExtensionPointHandleFunctions::execUnregister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics
	{
		struct UIExtensionPointHandleFunctions_eventIsValid_Parms
		{
			FUIExtensionPointHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointHandleFunctions_eventIsValid_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(0, nullptr) }; // 988972048
	void Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIExtensionPointHandleFunctions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIExtensionPointHandleFunctions_eventIsValid_Parms), &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointHandleFunctions, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::UIExtensionPointHandleFunctions_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::UIExtensionPointHandleFunctions_eventIsValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics
	{
		struct UIExtensionPointHandleFunctions_eventUnregister_Parms
		{
			FUIExtensionPointHandle Handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointHandleFunctions_eventUnregister_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(0, nullptr) }; // 988972048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointHandleFunctions, nullptr, "Unregister", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::UIExtensionPointHandleFunctions_eventUnregister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::UIExtensionPointHandleFunctions_eventUnregister_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionPointHandleFunctions);
	UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister()
	{
		return UUIExtensionPointHandleFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid, "IsValid" }, // 947892184
		{ &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister, "Unregister" }, // 3628968275
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionPointHandleFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::ClassParams = {
		&UUIExtensionPointHandleFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions()
	{
		if (!Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton, Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton;
	}
	template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionPointHandleFunctions>()
	{
		return UUIExtensionPointHandleFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionPointHandleFunctions);
	UUIExtensionPointHandleFunctions::~UUIExtensionPointHandleFunctions() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::EnumInfo[] = {
		{ EUIExtensionPointMatch_StaticEnum, TEXT("EUIExtensionPointMatch"), &Z_Registration_Info_UEnum_EUIExtensionPointMatch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1984880493U) },
		{ EUIExtensionAction_StaticEnum, TEXT("EUIExtensionAction"), &Z_Registration_Info_UEnum_EUIExtensionAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1602125450U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ScriptStructInfo[] = {
		{ FUIExtensionPointHandle::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::NewStructOps, TEXT("UIExtensionPointHandle"), &Z_Registration_Info_UScriptStruct_UIExtensionPointHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionPointHandle), 988972048U) },
		{ FUIExtensionHandle::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::NewStructOps, TEXT("UIExtensionHandle"), &Z_Registration_Info_UScriptStruct_UIExtensionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionHandle), 2147757016U) },
		{ FUIExtensionRequest::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewStructOps, TEXT("UIExtensionRequest"), &Z_Registration_Info_UScriptStruct_UIExtensionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionRequest), 2417220302U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIExtensionSubsystem, UUIExtensionSubsystem::StaticClass, TEXT("UUIExtensionSubsystem"), &Z_Registration_Info_UClass_UUIExtensionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionSubsystem), 3602517178U) },
		{ Z_Construct_UClass_UUIExtensionHandleFunctions, UUIExtensionHandleFunctions::StaticClass, TEXT("UUIExtensionHandleFunctions"), &Z_Registration_Info_UClass_UUIExtensionHandleFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionHandleFunctions), 381939295U) },
		{ Z_Construct_UClass_UUIExtensionPointHandleFunctions, UUIExtensionPointHandleFunctions::StaticClass, TEXT("UUIExtensionPointHandleFunctions"), &Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionPointHandleFunctions), 3238172406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_647287564(TEXT("/Script/UIExtension"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
