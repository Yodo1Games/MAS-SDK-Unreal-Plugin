// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YodoAds/Public/YodoAdsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYodoAdsSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_YodoAds();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsSettings();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsSettings_NoRegister();
// End Cross Module References

// Begin Class UYodoAdsSettings
void UYodoAdsSettings::StaticRegisterNativesUYodoAdsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYodoAdsSettings);
UClass* Z_Construct_UClass_UYodoAdsSettings_NoRegister()
{
	return UYodoAdsSettings::StaticClass();
}
struct Z_Construct_UClass_UYodoAdsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YodoAdsSettings.h" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTargetsKids_MetaData[] = {
		{ "Category", "Yodo Ads|Android" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the application targets audience of 13 years and under. Used for different dependencies on Android*/" },
#endif
		{ "DisplayName", "App targets children under 13 years" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the application targets audience of 13 years and under. Used for different dependencies on Android" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AndroidAppKey_MetaData[] = {
		{ "Category", "Yodo Ads|Android" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Android App Key from the Yodo console. */" },
#endif
		{ "DisplayName", "Android App Key" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Android App Key from the Yodo console." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AndroidAdmobAppId_MetaData[] = {
		{ "Category", "Yodo Ads|Android" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Android Admob ID from Admob console. */" },
#endif
		{ "DisplayName", "Android Admob App ID" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Android Admob ID from Admob console." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iOSAppKey_MetaData[] = {
		{ "Category", "Yodo Ads|iOS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** iOS App Key from the Yodo console. */" },
#endif
		{ "DisplayName", "iOS App Key" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "iOS App Key from the Yodo console." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iOSAdmobAppId_MetaData[] = {
		{ "Category", "Yodo Ads|iOS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** iOS Admob ID from Admob console. */" },
#endif
		{ "DisplayName", "iOS Admob App ID" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "iOS Admob ID from Admob console." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserTrackingUsageDescription_MetaData[] = {
		{ "Category", "Yodo Ads|iOS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Text to be shown to users when requesting User Tracking for personalized ads. */" },
#endif
		{ "DisplayName", "User Tracking Usage Description" },
		{ "ModuleRelativePath", "Public/YodoAdsSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text to be shown to users when requesting User Tracking for personalized ads." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bTargetsKids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetsKids;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidAppKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidAdmobAppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_iOSAppKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_iOSAdmobAppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTrackingUsageDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYodoAdsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_bTargetsKids_SetBit(void* Obj)
{
	((UYodoAdsSettings*)Obj)->bTargetsKids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_bTargetsKids = { "bTargetsKids", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYodoAdsSettings), &Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_bTargetsKids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTargetsKids_MetaData), NewProp_bTargetsKids_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_AndroidAppKey = { "AndroidAppKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYodoAdsSettings, AndroidAppKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AndroidAppKey_MetaData), NewProp_AndroidAppKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_AndroidAdmobAppId = { "AndroidAdmobAppId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYodoAdsSettings, AndroidAdmobAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AndroidAdmobAppId_MetaData), NewProp_AndroidAdmobAppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_iOSAppKey = { "iOSAppKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYodoAdsSettings, iOSAppKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iOSAppKey_MetaData), NewProp_iOSAppKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_iOSAdmobAppId = { "iOSAdmobAppId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYodoAdsSettings, iOSAdmobAppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iOSAdmobAppId_MetaData), NewProp_iOSAdmobAppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_UserTrackingUsageDescription = { "UserTrackingUsageDescription", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYodoAdsSettings, UserTrackingUsageDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserTrackingUsageDescription_MetaData), NewProp_UserTrackingUsageDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYodoAdsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_bTargetsKids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_AndroidAppKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_AndroidAdmobAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_iOSAppKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_iOSAdmobAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYodoAdsSettings_Statics::NewProp_UserTrackingUsageDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYodoAdsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_YodoAds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYodoAdsSettings_Statics::ClassParams = {
	&UYodoAdsSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYodoAdsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UYodoAdsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYodoAdsSettings()
{
	if (!Z_Registration_Info_UClass_UYodoAdsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYodoAdsSettings.OuterSingleton, Z_Construct_UClass_UYodoAdsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYodoAdsSettings.OuterSingleton;
}
template<> YODOADS_API UClass* StaticClass<UYodoAdsSettings>()
{
	return UYodoAdsSettings::StaticClass();
}
UYodoAdsSettings::UYodoAdsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYodoAdsSettings);
UYodoAdsSettings::~UYodoAdsSettings() {}
// End Class UYodoAdsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYodoAdsSettings, UYodoAdsSettings::StaticClass, TEXT("UYodoAdsSettings"), &Z_Registration_Info_UClass_UYodoAdsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYodoAdsSettings), 1604024709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsSettings_h_1828597169(TEXT("/Script/YodoAds"),
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
