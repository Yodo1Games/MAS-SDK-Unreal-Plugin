// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YodoAds/Public/YodoAdsBanner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYodoAdsBanner() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_YodoAds();
YODOADS_API UClass* Z_Construct_UClass_UNativeObjectWrapper();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsBanner();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsBanner_NoRegister();
YODOADS_API UEnum* Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition();
YODOADS_API UEnum* Z_Construct_UEnum_YodoAds_EYABannerSize();
YODOADS_API UEnum* Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition();
YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature();
YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature();
// End Cross Module References

// Begin Enum EYABannerSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYABannerSize;
static UEnum* EYABannerSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYABannerSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYABannerSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YodoAds_EYABannerSize, (UObject*)Z_Construct_UPackage__Script_YodoAds(), TEXT("EYABannerSize"));
	}
	return Z_Registration_Info_UEnum_EYABannerSize.OuterSingleton;
}
template<> YODOADS_API UEnum* StaticEnum<EYABannerSize>()
{
	return EYABannerSize_StaticEnum();
}
struct Z_Construct_UEnum_YodoAds_EYABannerSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdaptiveBanner.Comment", "/*Screen width x 32/50/90*/" },
		{ "AdaptiveBanner.Name", "EYABannerSize::AdaptiveBanner" },
		{ "AdaptiveBanner.ToolTip", "Screen width x 32/50/90" },
		{ "Banner.Comment", "/*320\xc3\x97""50*/" },
		{ "Banner.Name", "EYABannerSize::Banner" },
		{ "Banner.ToolTip", "320\xc3\x97""50" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Possible banner ad sizes.\n*/" },
#endif
		{ "IABMediumRectangle.Comment", "/*300\xc3\x97""250*/" },
		{ "IABMediumRectangle.Name", "EYABannerSize::IABMediumRectangle" },
		{ "IABMediumRectangle.ToolTip", "300\xc3\x97""250" },
		{ "LargeBanner.Comment", "/*320\xc3\x97""100*/" },
		{ "LargeBanner.Name", "EYABannerSize::LargeBanner" },
		{ "LargeBanner.ToolTip", "320\xc3\x97""100" },
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
		{ "SmartBanner.Comment", "/*Full screen width x Adaptive height*/" },
		{ "SmartBanner.Name", "EYABannerSize::SmartBanner" },
		{ "SmartBanner.ToolTip", "Full screen width x Adaptive height" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible banner ad sizes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYABannerSize::Banner", (int64)EYABannerSize::Banner },
		{ "EYABannerSize::LargeBanner", (int64)EYABannerSize::LargeBanner },
		{ "EYABannerSize::IABMediumRectangle", (int64)EYABannerSize::IABMediumRectangle },
		{ "EYABannerSize::SmartBanner", (int64)EYABannerSize::SmartBanner },
		{ "EYABannerSize::AdaptiveBanner", (int64)EYABannerSize::AdaptiveBanner },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YodoAds,
	nullptr,
	"EYABannerSize",
	"EYABannerSize",
	Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YodoAds_EYABannerSize()
{
	if (!Z_Registration_Info_UEnum_EYABannerSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYABannerSize.InnerSingleton, Z_Construct_UEnum_YodoAds_EYABannerSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYABannerSize.InnerSingleton;
}
// End Enum EYABannerSize

// Begin Enum EYABannerHorizontalPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYABannerHorizontalPosition;
static UEnum* EYABannerHorizontalPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYABannerHorizontalPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYABannerHorizontalPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition, (UObject*)Z_Construct_UPackage__Script_YodoAds(), TEXT("EYABannerHorizontalPosition"));
	}
	return Z_Registration_Info_UEnum_EYABannerHorizontalPosition.OuterSingleton;
}
template<> YODOADS_API UEnum* StaticEnum<EYABannerHorizontalPosition>()
{
	return EYABannerHorizontalPosition_StaticEnum();
}
struct Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Center.Name", "EYABannerHorizontalPosition::Center" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Horizontal alignment of the banner.\n*/" },
#endif
		{ "Left.Name", "EYABannerHorizontalPosition::Left" },
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
		{ "Right.Name", "EYABannerHorizontalPosition::Right" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal alignment of the banner." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYABannerHorizontalPosition::Left", (int64)EYABannerHorizontalPosition::Left },
		{ "EYABannerHorizontalPosition::Center", (int64)EYABannerHorizontalPosition::Center },
		{ "EYABannerHorizontalPosition::Right", (int64)EYABannerHorizontalPosition::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YodoAds,
	nullptr,
	"EYABannerHorizontalPosition",
	"EYABannerHorizontalPosition",
	Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition()
{
	if (!Z_Registration_Info_UEnum_EYABannerHorizontalPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYABannerHorizontalPosition.InnerSingleton, Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYABannerHorizontalPosition.InnerSingleton;
}
// End Enum EYABannerHorizontalPosition

// Begin Enum EYABannerVerticalPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYABannerVerticalPosition;
static UEnum* EYABannerVerticalPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYABannerVerticalPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYABannerVerticalPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition, (UObject*)Z_Construct_UPackage__Script_YodoAds(), TEXT("EYABannerVerticalPosition"));
	}
	return Z_Registration_Info_UEnum_EYABannerVerticalPosition.OuterSingleton;
}
template<> YODOADS_API UEnum* StaticEnum<EYABannerVerticalPosition>()
{
	return EYABannerVerticalPosition_StaticEnum();
}
struct Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bottom.Name", "EYABannerVerticalPosition::Bottom" },
		{ "Center.Name", "EYABannerVerticalPosition::Center" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Vertical alignment of the banner.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical alignment of the banner." },
#endif
		{ "Top.Name", "EYABannerVerticalPosition::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYABannerVerticalPosition::Top", (int64)EYABannerVerticalPosition::Top },
		{ "EYABannerVerticalPosition::Center", (int64)EYABannerVerticalPosition::Center },
		{ "EYABannerVerticalPosition::Bottom", (int64)EYABannerVerticalPosition::Bottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YodoAds,
	nullptr,
	"EYABannerVerticalPosition",
	"EYABannerVerticalPosition",
	Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition()
{
	if (!Z_Registration_Info_UEnum_EYABannerVerticalPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYABannerVerticalPosition.InnerSingleton, Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYABannerVerticalPosition.InnerSingleton;
}
// End Enum EYABannerVerticalPosition

// Begin Class UYodoAdsBanner Function BindOnBannerAdClosedDelegate
struct Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics
{
	struct YodoAdsBanner_eventBindOnBannerAdClosedDelegate_Parms
	{
		FScriptDelegate OnBannerAdClosedCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Bind a function to be called after the ad is closed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind a function to be called after the ad is closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBannerAdClosedCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnBannerAdClosedCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::NewProp_OnBannerAdClosedCallback = { "OnBannerAdClosedCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventBindOnBannerAdClosedDelegate_Parms, OnBannerAdClosedCallback), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBannerAdClosedCallback_MetaData), NewProp_OnBannerAdClosedCallback_MetaData) }; // 2515382412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::NewProp_OnBannerAdClosedCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "BindOnBannerAdClosedDelegate", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdClosedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdClosedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execBindOnBannerAdClosedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnBannerAdClosedCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnBannerAdClosedDelegate(FYAVoidDelegate(Z_Param_Out_OnBannerAdClosedCallback));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function BindOnBannerAdClosedDelegate

// Begin Class UYodoAdsBanner Function BindOnBannerAdFailedToLoadDelegate
struct Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics
{
	struct YodoAdsBanner_eventBindOnBannerAdFailedToLoadDelegate_Parms
	{
		FScriptDelegate OnBannerAdFailedToLoadCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Bind a function to be called if the ad loading has failed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind a function to be called if the ad loading has failed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBannerAdFailedToLoadCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnBannerAdFailedToLoadCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::NewProp_OnBannerAdFailedToLoadCallback = { "OnBannerAdFailedToLoadCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventBindOnBannerAdFailedToLoadDelegate_Parms, OnBannerAdFailedToLoadCallback), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBannerAdFailedToLoadCallback_MetaData), NewProp_OnBannerAdFailedToLoadCallback_MetaData) }; // 1885598642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::NewProp_OnBannerAdFailedToLoadCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "BindOnBannerAdFailedToLoadDelegate", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdFailedToLoadDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdFailedToLoadDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execBindOnBannerAdFailedToLoadDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnBannerAdFailedToLoadCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnBannerAdFailedToLoadDelegate(FYAErrorDelegate(Z_Param_Out_OnBannerAdFailedToLoadCallback));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function BindOnBannerAdFailedToLoadDelegate

// Begin Class UYodoAdsBanner Function BindOnBannerAdFailedToOpenDelegate
struct Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics
{
	struct YodoAdsBanner_eventBindOnBannerAdFailedToOpenDelegate_Parms
	{
		FScriptDelegate OnBannerAdFailedToOpenCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Bind a function to be called if the ad has failed to show.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind a function to be called if the ad has failed to show." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBannerAdFailedToOpenCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnBannerAdFailedToOpenCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::NewProp_OnBannerAdFailedToOpenCallback = { "OnBannerAdFailedToOpenCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventBindOnBannerAdFailedToOpenDelegate_Parms, OnBannerAdFailedToOpenCallback), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBannerAdFailedToOpenCallback_MetaData), NewProp_OnBannerAdFailedToOpenCallback_MetaData) }; // 1885598642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::NewProp_OnBannerAdFailedToOpenCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "BindOnBannerAdFailedToOpenDelegate", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdFailedToOpenDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdFailedToOpenDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execBindOnBannerAdFailedToOpenDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnBannerAdFailedToOpenCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnBannerAdFailedToOpenDelegate(FYAErrorDelegate(Z_Param_Out_OnBannerAdFailedToOpenCallback));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function BindOnBannerAdFailedToOpenDelegate

// Begin Class UYodoAdsBanner Function BindOnBannerAdLoadedDelegate
struct Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics
{
	struct YodoAdsBanner_eventBindOnBannerAdLoadedDelegate_Parms
	{
		FScriptDelegate OnBannerAdLoadedCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Bind a function to be called after the ad is loaded.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind a function to be called after the ad is loaded." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBannerAdLoadedCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnBannerAdLoadedCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::NewProp_OnBannerAdLoadedCallback = { "OnBannerAdLoadedCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventBindOnBannerAdLoadedDelegate_Parms, OnBannerAdLoadedCallback), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBannerAdLoadedCallback_MetaData), NewProp_OnBannerAdLoadedCallback_MetaData) }; // 2515382412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::NewProp_OnBannerAdLoadedCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "BindOnBannerAdLoadedDelegate", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdLoadedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdLoadedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execBindOnBannerAdLoadedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnBannerAdLoadedCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnBannerAdLoadedDelegate(FYAVoidDelegate(Z_Param_Out_OnBannerAdLoadedCallback));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function BindOnBannerAdLoadedDelegate

// Begin Class UYodoAdsBanner Function BindOnBannerAdOpenedDelegate
struct Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics
{
	struct YodoAdsBanner_eventBindOnBannerAdOpenedDelegate_Parms
	{
		FScriptDelegate OnBannerAdOpenedCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Bind a function to be called after the ad is opened (shown).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind a function to be called after the ad is opened (shown)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBannerAdOpenedCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnBannerAdOpenedCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::NewProp_OnBannerAdOpenedCallback = { "OnBannerAdOpenedCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventBindOnBannerAdOpenedDelegate_Parms, OnBannerAdOpenedCallback), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBannerAdOpenedCallback_MetaData), NewProp_OnBannerAdOpenedCallback_MetaData) }; // 2515382412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::NewProp_OnBannerAdOpenedCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "BindOnBannerAdOpenedDelegate", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdOpenedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::YodoAdsBanner_eventBindOnBannerAdOpenedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execBindOnBannerAdOpenedDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnBannerAdOpenedCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindOnBannerAdOpenedDelegate(FYAVoidDelegate(Z_Param_Out_OnBannerAdOpenedCallback));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function BindOnBannerAdOpenedDelegate

// Begin Class UYodoAdsBanner Function Destroy
struct Z_Construct_UFunction_UYodoAdsBanner_Destroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Destroy ad.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy ad." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "Destroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_Destroy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYodoAdsBanner_Destroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_Destroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Destroy();
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function Destroy

// Begin Class UYodoAdsBanner Function LoadAd
struct Z_Construct_UFunction_UYodoAdsBanner_LoadAd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Load ad. Make sure to set the size and bind callbacks before loading.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load ad. Make sure to set the size and bind callbacks before loading." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_LoadAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "LoadAd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_LoadAd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_LoadAd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYodoAdsBanner_LoadAd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_LoadAd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execLoadAd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAd();
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function LoadAd

// Begin Class UYodoAdsBanner Function SetPlacement
struct Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics
{
	struct YodoAdsBanner_eventSetPlacement_Parms
	{
		FString PlacementId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the ad placement ID (optional). Call before loading.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the ad placement ID (optional). Call before loading." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlacementId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::NewProp_PlacementId = { "PlacementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventSetPlacement_Parms, PlacementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementId_MetaData), NewProp_PlacementId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::NewProp_PlacementId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "SetPlacement", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::YodoAdsBanner_eventSetPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::YodoAdsBanner_eventSetPlacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_SetPlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_SetPlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execSetPlacement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlacementId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlacement(Z_Param_PlacementId);
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function SetPlacement

// Begin Class UYodoAdsBanner Function SetSize
struct Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics
{
	struct YodoAdsBanner_eventSetSize_Parms
	{
		EYABannerSize Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the banner size. Call before loading.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the banner size. Call before loading." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventSetSize_Parms, Size), Z_Construct_UEnum_YodoAds_EYABannerSize, METADATA_PARAMS(0, nullptr) }; // 846470620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::YodoAdsBanner_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::YodoAdsBanner_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execSetSize)
{
	P_GET_ENUM(EYABannerSize,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(EYABannerSize(Z_Param_Size));
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function SetSize

// Begin Class UYodoAdsBanner Function Show
struct Z_Construct_UFunction_UYodoAdsBanner_Show_Statics
{
	struct YodoAdsBanner_eventShow_Parms
	{
		EYABannerHorizontalPosition HorizontalPosition;
		EYABannerVerticalPosition VerticalPosition;
		FVector2D Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Show ad. Make sure to call this after the ad is loaded.\n\x09*\n\x09* @param HorizontalPosition - horizontal alignment of the banner.\n\x09* @param VerticalPosition - vertical alignment of the banner.\n\x09* @param Offset - offset from the aligned position. Shifts: Negative X - left, Positive X - right, Negative Y - up, Positive Y - down.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show ad. Make sure to call this after the ad is loaded.\n\n@param HorizontalPosition - horizontal alignment of the banner.\n@param VerticalPosition - vertical alignment of the banner.\n@param Offset - offset from the aligned position. Shifts: Negative X - left, Positive X - right, Negative Y - up, Positive Y - down." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HorizontalPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VerticalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_HorizontalPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_HorizontalPosition = { "HorizontalPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventShow_Parms, HorizontalPosition), Z_Construct_UEnum_YodoAds_EYABannerHorizontalPosition, METADATA_PARAMS(0, nullptr) }; // 8620586
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_VerticalPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_VerticalPosition = { "VerticalPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventShow_Parms, VerticalPosition), Z_Construct_UEnum_YodoAds_EYABannerVerticalPosition, METADATA_PARAMS(0, nullptr) }; // 1789631071
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsBanner_eventShow_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_HorizontalPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_HorizontalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_VerticalPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_VerticalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsBanner, nullptr, "Show", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::YodoAdsBanner_eventShow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::YodoAdsBanner_eventShow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsBanner_Show()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsBanner_Show_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsBanner::execShow)
{
	P_GET_ENUM(EYABannerHorizontalPosition,Z_Param_HorizontalPosition);
	P_GET_ENUM(EYABannerVerticalPosition,Z_Param_VerticalPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Show(EYABannerHorizontalPosition(Z_Param_HorizontalPosition),EYABannerVerticalPosition(Z_Param_VerticalPosition),Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class UYodoAdsBanner Function Show

// Begin Class UYodoAdsBanner
void UYodoAdsBanner::StaticRegisterNativesUYodoAdsBanner()
{
	UClass* Class = UYodoAdsBanner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindOnBannerAdClosedDelegate", &UYodoAdsBanner::execBindOnBannerAdClosedDelegate },
		{ "BindOnBannerAdFailedToLoadDelegate", &UYodoAdsBanner::execBindOnBannerAdFailedToLoadDelegate },
		{ "BindOnBannerAdFailedToOpenDelegate", &UYodoAdsBanner::execBindOnBannerAdFailedToOpenDelegate },
		{ "BindOnBannerAdLoadedDelegate", &UYodoAdsBanner::execBindOnBannerAdLoadedDelegate },
		{ "BindOnBannerAdOpenedDelegate", &UYodoAdsBanner::execBindOnBannerAdOpenedDelegate },
		{ "Destroy", &UYodoAdsBanner::execDestroy },
		{ "LoadAd", &UYodoAdsBanner::execLoadAd },
		{ "SetPlacement", &UYodoAdsBanner::execSetPlacement },
		{ "SetSize", &UYodoAdsBanner::execSetSize },
		{ "Show", &UYodoAdsBanner::execShow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYodoAdsBanner);
UClass* Z_Construct_UClass_UYodoAdsBanner_NoRegister()
{
	return UYodoAdsBanner::StaticClass();
}
struct Z_Construct_UClass_UYodoAdsBanner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Wrapper class for the banner ads.\n*/" },
#endif
		{ "IncludePath", "YodoAdsBanner.h" },
		{ "ModuleRelativePath", "Public/YodoAdsBanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper class for the banner ads." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdClosedDelegate, "BindOnBannerAdClosedDelegate" }, // 161479722
		{ &Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToLoadDelegate, "BindOnBannerAdFailedToLoadDelegate" }, // 1596150587
		{ &Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdFailedToOpenDelegate, "BindOnBannerAdFailedToOpenDelegate" }, // 1618838448
		{ &Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdLoadedDelegate, "BindOnBannerAdLoadedDelegate" }, // 4137140464
		{ &Z_Construct_UFunction_UYodoAdsBanner_BindOnBannerAdOpenedDelegate, "BindOnBannerAdOpenedDelegate" }, // 4075501094
		{ &Z_Construct_UFunction_UYodoAdsBanner_Destroy, "Destroy" }, // 3622546642
		{ &Z_Construct_UFunction_UYodoAdsBanner_LoadAd, "LoadAd" }, // 4022870695
		{ &Z_Construct_UFunction_UYodoAdsBanner_SetPlacement, "SetPlacement" }, // 1070720142
		{ &Z_Construct_UFunction_UYodoAdsBanner_SetSize, "SetSize" }, // 3549649607
		{ &Z_Construct_UFunction_UYodoAdsBanner_Show, "Show" }, // 527253347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYodoAdsBanner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYodoAdsBanner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNativeObjectWrapper,
	(UObject* (*)())Z_Construct_UPackage__Script_YodoAds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsBanner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYodoAdsBanner_Statics::ClassParams = {
	&UYodoAdsBanner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsBanner_Statics::Class_MetaDataParams), Z_Construct_UClass_UYodoAdsBanner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYodoAdsBanner()
{
	if (!Z_Registration_Info_UClass_UYodoAdsBanner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYodoAdsBanner.OuterSingleton, Z_Construct_UClass_UYodoAdsBanner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYodoAdsBanner.OuterSingleton;
}
template<> YODOADS_API UClass* StaticClass<UYodoAdsBanner>()
{
	return UYodoAdsBanner::StaticClass();
}
UYodoAdsBanner::UYodoAdsBanner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYodoAdsBanner);
UYodoAdsBanner::~UYodoAdsBanner() {}
// End Class UYodoAdsBanner

// Begin Registration
struct Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYABannerSize_StaticEnum, TEXT("EYABannerSize"), &Z_Registration_Info_UEnum_EYABannerSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 846470620U) },
		{ EYABannerHorizontalPosition_StaticEnum, TEXT("EYABannerHorizontalPosition"), &Z_Registration_Info_UEnum_EYABannerHorizontalPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 8620586U) },
		{ EYABannerVerticalPosition_StaticEnum, TEXT("EYABannerVerticalPosition"), &Z_Registration_Info_UEnum_EYABannerVerticalPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1789631071U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYodoAdsBanner, UYodoAdsBanner::StaticClass, TEXT("UYodoAdsBanner"), &Z_Registration_Info_UClass_UYodoAdsBanner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYodoAdsBanner), 3639033633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_1421254835(TEXT("/Script/YodoAds"),
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
