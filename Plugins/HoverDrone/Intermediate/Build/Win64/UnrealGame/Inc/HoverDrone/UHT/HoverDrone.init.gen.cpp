// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDrone_init() {}
	HOVERDRONE_API UFunction* Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoverDrone;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoverDrone()
	{
		if (!Z_Registration_Info_UPackage__Script_HoverDrone.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoverDrone",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF01BE44F,
				0x62BC5661,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoverDrone.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoverDrone.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoverDrone(Z_Construct_UPackage__Script_HoverDrone, TEXT("/Script/HoverDrone"), Z_Registration_Info_UPackage__Script_HoverDrone, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF01BE44F, 0x62BC5661));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
