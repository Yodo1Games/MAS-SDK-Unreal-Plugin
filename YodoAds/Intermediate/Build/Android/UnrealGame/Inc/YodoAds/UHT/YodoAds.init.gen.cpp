// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYodoAds_init() {}
	YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature();
	YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_YodoAds;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_YodoAds()
	{
		if (!Z_Registration_Info_UPackage__Script_YodoAds.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/YodoAds",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x482FADA5,
				0xD4EBC9AD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_YodoAds.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_YodoAds.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_YodoAds(Z_Construct_UPackage__Script_YodoAds, TEXT("/Script/YodoAds"), Z_Registration_Info_UPackage__Script_YodoAds, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x482FADA5, 0xD4EBC9AD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
