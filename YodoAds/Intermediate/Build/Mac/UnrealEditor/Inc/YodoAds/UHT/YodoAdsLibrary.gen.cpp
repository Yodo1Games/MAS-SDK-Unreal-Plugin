// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YodoAds/Public/YodoAdsLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYodoAdsLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_YodoAds();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsBanner_NoRegister();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsLibrary();
YODOADS_API UClass* Z_Construct_UClass_UYodoAdsLibrary_NoRegister();
YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature();
YODOADS_API UFunction* Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature();
YODOADS_API UScriptStruct* Z_Construct_UScriptStruct_FYodoAdsConfig();
// End Cross Module References

// Begin ScriptStruct FYodoAdsConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YodoAdsConfig;
class UScriptStruct* FYodoAdsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YodoAdsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YodoAdsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYodoAdsConfig, (UObject*)Z_Construct_UPackage__Script_YodoAds(), TEXT("YodoAdsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_YodoAdsConfig.OuterSingleton;
}
template<> YODOADS_API UScriptStruct* StaticStruct<FYodoAdsConfig>()
{
	return FYodoAdsConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYodoAdsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure to pass the config values for Yoda Ads SDK.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to pass the config values for Yoda Ads SDK." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableUserPrivacyDialog_MetaData[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether to show the default user privacy dialog on the first run of the application.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to show the default user privacy dialog on the first run of the application." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAdaptiveBanner_MetaData[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether to enable adaptive banner ads.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to enable adaptive banner ads." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicyUrl_MetaData[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Privacy policy URL to redirect to after the respective hyperlink is clicked on the User Privacy Dialog.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Privacy policy URL to redirect to after the respective hyperlink is clicked on the User Privacy Dialog." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserAgreementUrl_MetaData[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* User agreement URL to redirect to after the respective hyperlink is clicked on the User Privacy Dialog.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User agreement URL to redirect to after the respective hyperlink is clicked on the User Privacy Dialog." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_EnableUserPrivacyDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableUserPrivacyDialog;
	static void NewProp_EnableAdaptiveBanner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAdaptiveBanner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrivacyPolicyUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserAgreementUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYodoAdsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableUserPrivacyDialog_SetBit(void* Obj)
{
	((FYodoAdsConfig*)Obj)->EnableUserPrivacyDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableUserPrivacyDialog = { "EnableUserPrivacyDialog", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FYodoAdsConfig), &Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableUserPrivacyDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableUserPrivacyDialog_MetaData), NewProp_EnableUserPrivacyDialog_MetaData) };
void Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableAdaptiveBanner_SetBit(void* Obj)
{
	((FYodoAdsConfig*)Obj)->EnableAdaptiveBanner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableAdaptiveBanner = { "EnableAdaptiveBanner", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FYodoAdsConfig), &Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableAdaptiveBanner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAdaptiveBanner_MetaData), NewProp_EnableAdaptiveBanner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_PrivacyPolicyUrl = { "PrivacyPolicyUrl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYodoAdsConfig, PrivacyPolicyUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivacyPolicyUrl_MetaData), NewProp_PrivacyPolicyUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_UserAgreementUrl = { "UserAgreementUrl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYodoAdsConfig, UserAgreementUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserAgreementUrl_MetaData), NewProp_UserAgreementUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableUserPrivacyDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_EnableAdaptiveBanner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_PrivacyPolicyUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewProp_UserAgreementUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YodoAds,
	nullptr,
	&NewStructOps,
	"YodoAdsConfig",
	Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::PropPointers),
	sizeof(FYodoAdsConfig),
	alignof(FYodoAdsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYodoAdsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_YodoAdsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YodoAdsConfig.InnerSingleton, Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YodoAdsConfig.InnerSingleton;
}
// End ScriptStruct FYodoAdsConfig

// Begin Delegate FYAVoidDelegate
struct Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YodoAds, nullptr, "YAVoidDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYAVoidDelegate_DelegateWrapper(const FScriptDelegate& YAVoidDelegate)
{
	YAVoidDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FYAVoidDelegate

// Begin Delegate FYAErrorDelegate
struct Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics
{
	struct _Script_YodoAds_eventYAErrorDelegate_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YodoAds_eventYAErrorDelegate_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YodoAds, nullptr, "YAErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::_Script_YodoAds_eventYAErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::_Script_YodoAds_eventYAErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYAErrorDelegate_DelegateWrapper(const FScriptDelegate& YAErrorDelegate, const FString& Error)
{
	struct _Script_YodoAds_eventYAErrorDelegate_Parms
	{
		FString Error;
	};
	_Script_YodoAds_eventYAErrorDelegate_Parms Parms;
	Parms.Error=Error;
	YAErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FYAErrorDelegate

// Begin Class UYodoAdsLibrary Function Initialize
struct Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics
{
	struct YodoAdsLibrary_eventInitialize_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnSuccess,OnError" },
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Initialize the SDK. Make sure to call all functions except SetConfig after the SDK is initialized (OnSuccess callback is invoked).\n\x09 *\n\x09 * @param OnSuccess - callback to be invoked after the successful initialization of the SDK.\n\x09 * @param OnError - callback to be invoked with the error message if something goes wrong.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the SDK. Make sure to call all functions except SetConfig after the SDK is initialized (OnSuccess callback is invoked).\n\n@param OnSuccess - callback to be invoked after the successful initialization of the SDK.\n@param OnError - callback to be invoked with the error message if something goes wrong." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventInitialize_Parms, OnSuccess), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2515382412
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventInitialize_Parms, OnError), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1885598642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::YodoAdsLibrary_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::YodoAdsLibrary_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execInitialize)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::Initialize(FYAVoidDelegate(Z_Param_Out_OnSuccess),FYAErrorDelegate(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function Initialize

// Begin Class UYodoAdsLibrary Function IsCCPADontSell
struct Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics
{
	struct YodoAdsLibrary_eventIsCCPADontSell_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether user has allowed data selling (California only).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether user has allowed data selling (California only)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventIsCCPADontSell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventIsCCPADontSell_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "IsCCPADontSell", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::YodoAdsLibrary_eventIsCCPADontSell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::YodoAdsLibrary_eventIsCCPADontSell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execIsCCPADontSell)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYodoAdsLibrary::IsCCPADontSell();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function IsCCPADontSell

// Begin Class UYodoAdsLibrary Function IsCOPPAAgeRestricted
struct Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics
{
	struct YodoAdsLibrary_eventIsCOPPAAgeRestricted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether user is a child.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether user is a child." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventIsCOPPAAgeRestricted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventIsCOPPAAgeRestricted_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "IsCOPPAAgeRestricted", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::YodoAdsLibrary_eventIsCOPPAAgeRestricted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::YodoAdsLibrary_eventIsCOPPAAgeRestricted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execIsCOPPAAgeRestricted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYodoAdsLibrary::IsCOPPAAgeRestricted();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function IsCOPPAAgeRestricted

// Begin Class UYodoAdsLibrary Function IsGDPRUserConsent
struct Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics
{
	struct YodoAdsLibrary_eventIsGDPRUserConsent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether user has given consent to data gathering.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether user has given consent to data gathering." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventIsGDPRUserConsent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventIsGDPRUserConsent_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "IsGDPRUserConsent", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::YodoAdsLibrary_eventIsGDPRUserConsent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::YodoAdsLibrary_eventIsGDPRUserConsent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execIsGDPRUserConsent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYodoAdsLibrary::IsGDPRUserConsent();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function IsGDPRUserConsent

// Begin Class UYodoAdsLibrary Function IsInterstitialAdLoaded
struct Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics
{
	struct YodoAdsLibrary_eventIsInterstitialAdLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether next interstitial ad is loaded.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether next interstitial ad is loaded." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventIsInterstitialAdLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventIsInterstitialAdLoaded_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "IsInterstitialAdLoaded", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::YodoAdsLibrary_eventIsInterstitialAdLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::YodoAdsLibrary_eventIsInterstitialAdLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execIsInterstitialAdLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYodoAdsLibrary::IsInterstitialAdLoaded();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function IsInterstitialAdLoaded

// Begin Class UYodoAdsLibrary Function IsRewardedAdLoaded
struct Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics
{
	struct YodoAdsLibrary_eventIsRewardedAdLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether next rewarded ad is loaded.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether next rewarded ad is loaded." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventIsRewardedAdLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventIsRewardedAdLoaded_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "IsRewardedAdLoaded", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::YodoAdsLibrary_eventIsRewardedAdLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::YodoAdsLibrary_eventIsRewardedAdLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execIsRewardedAdLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYodoAdsLibrary::IsRewardedAdLoaded();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function IsRewardedAdLoaded

// Begin Class UYodoAdsLibrary Function MakeBannerAd
struct Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics
{
	struct YodoAdsLibrary_eventMakeBannerAd_Parms
	{
		UYodoAdsBanner* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a banner ad.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a banner ad." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventMakeBannerAd_Parms, ReturnValue), Z_Construct_UClass_UYodoAdsBanner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "MakeBannerAd", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::YodoAdsLibrary_eventMakeBannerAd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::YodoAdsLibrary_eventMakeBannerAd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execMakeBannerAd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYodoAdsBanner**)Z_Param__Result=UYodoAdsLibrary::MakeBannerAd();
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function MakeBannerAd

// Begin Class UYodoAdsLibrary Function SetCCPA
struct Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics
{
	struct YodoAdsLibrary_eventSetCCPA_Parms
	{
		bool DontSell;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether user has allowed data selling (California only).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether user has allowed data selling (California only)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_DontSell_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DontSell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::NewProp_DontSell_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventSetCCPA_Parms*)Obj)->DontSell = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::NewProp_DontSell = { "DontSell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventSetCCPA_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::NewProp_DontSell_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::NewProp_DontSell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetCCPA", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::YodoAdsLibrary_eventSetCCPA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::YodoAdsLibrary_eventSetCCPA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetCCPA)
{
	P_GET_UBOOL(Z_Param_DontSell);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetCCPA(Z_Param_DontSell);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetCCPA

// Begin Class UYodoAdsLibrary Function SetConfig
struct Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics
{
	struct YodoAdsLibrary_eventSetConfig_Parms
	{
		FYodoAdsConfig Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the configuration values for SDK before initializing.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the configuration values for SDK before initializing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetConfig_Parms, Config), Z_Construct_UScriptStruct_FYodoAdsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3314640661
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetConfig", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::YodoAdsLibrary_eventSetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::YodoAdsLibrary_eventSetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetConfig)
{
	P_GET_STRUCT_REF(FYodoAdsConfig,Z_Param_Out_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetConfig(Z_Param_Out_Config);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetConfig

// Begin Class UYodoAdsLibrary Function SetCOPPA
struct Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics
{
	struct YodoAdsLibrary_eventSetCOPPA_Parms
	{
		bool AgeRestricted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether user is a child.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether user is a child." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_AgeRestricted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AgeRestricted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::NewProp_AgeRestricted_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventSetCOPPA_Parms*)Obj)->AgeRestricted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::NewProp_AgeRestricted = { "AgeRestricted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventSetCOPPA_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::NewProp_AgeRestricted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::NewProp_AgeRestricted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetCOPPA", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::YodoAdsLibrary_eventSetCOPPA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::YodoAdsLibrary_eventSetCOPPA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetCOPPA)
{
	P_GET_UBOOL(Z_Param_AgeRestricted);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetCOPPA(Z_Param_AgeRestricted);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetCOPPA

// Begin Class UYodoAdsLibrary Function SetGDPR
struct Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics
{
	struct YodoAdsLibrary_eventSetGDPR_Parms
	{
		bool UserConsent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether user has given consent to data gathering.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether user has given consent to data gathering." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_UserConsent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserConsent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::NewProp_UserConsent_SetBit(void* Obj)
{
	((YodoAdsLibrary_eventSetGDPR_Parms*)Obj)->UserConsent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::NewProp_UserConsent = { "UserConsent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YodoAdsLibrary_eventSetGDPR_Parms), &Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::NewProp_UserConsent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::NewProp_UserConsent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetGDPR", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::YodoAdsLibrary_eventSetGDPR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::YodoAdsLibrary_eventSetGDPR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetGDPR)
{
	P_GET_UBOOL(Z_Param_UserConsent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetGDPR(Z_Param_UserConsent);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetGDPR

// Begin Class UYodoAdsLibrary Function SetInterstitialAdListener
struct Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics
{
	struct YodoAdsLibrary_eventSetInterstitialAdListener_Parms
	{
		FScriptDelegate OnOpened;
		FScriptDelegate OnError;
		FScriptDelegate OnClosed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnOpened,OnError,OnClosed" },
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set global interstitial ad callbacks.\n\x09 *\n\x09 * @param OnOpened - callback to be invoked after the ad is opened.\n\x09 * @param OnError - callback to be invoked with the error message if something goes wrong.\n\x09 * @param OnClosed - callback to be invoked after the ad is closed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set global interstitial ad callbacks.\n\n@param OnOpened - callback to be invoked after the ad is opened.\n@param OnError - callback to be invoked with the error message if something goes wrong.\n@param OnClosed - callback to be invoked after the ad is closed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOpened_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnOpened;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnOpened = { "OnOpened", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetInterstitialAdListener_Parms, OnOpened), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOpened_MetaData), NewProp_OnOpened_MetaData) }; // 2515382412
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetInterstitialAdListener_Parms, OnError), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1885598642
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetInterstitialAdListener_Parms, OnClosed), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 2515382412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::NewProp_OnClosed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetInterstitialAdListener", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::YodoAdsLibrary_eventSetInterstitialAdListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::YodoAdsLibrary_eventSetInterstitialAdListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetInterstitialAdListener)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnOpened);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnClosed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetInterstitialAdListener(FYAVoidDelegate(Z_Param_Out_OnOpened),FYAErrorDelegate(Z_Param_Out_OnError),FYAVoidDelegate(Z_Param_Out_OnClosed));
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetInterstitialAdListener

// Begin Class UYodoAdsLibrary Function SetRewardedAdListener
struct Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics
{
	struct YodoAdsLibrary_eventSetRewardedAdListener_Parms
	{
		FScriptDelegate OnOpened;
		FScriptDelegate OnError;
		FScriptDelegate OnClosed;
		FScriptDelegate OnRewardEarned;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnOpened,OnError,OnClosed,OnRewardEarned" },
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set global rewarded ad callbacks.\n\x09 *\n\x09 * @param OnOpened - callback to be invoked after the ad is opened.\n\x09 * @param OnError - callback to be invoked with the error message if something goes wrong.\n\x09 * @param OnClosed - callback to be invoked after the ad is closed.\n\x09 * @param OnRewardEarned - callback to be invoked after the ad has finished playing, and a reward is earned.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set global rewarded ad callbacks.\n\n@param OnOpened - callback to be invoked after the ad is opened.\n@param OnError - callback to be invoked with the error message if something goes wrong.\n@param OnClosed - callback to be invoked after the ad is closed.\n@param OnRewardEarned - callback to be invoked after the ad has finished playing, and a reward is earned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOpened_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRewardEarned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnOpened;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnRewardEarned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnOpened = { "OnOpened", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetRewardedAdListener_Parms, OnOpened), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOpened_MetaData), NewProp_OnOpened_MetaData) }; // 2515382412
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetRewardedAdListener_Parms, OnError), Z_Construct_UDelegateFunction_YodoAds_YAErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1885598642
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetRewardedAdListener_Parms, OnClosed), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 2515382412
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnRewardEarned = { "OnRewardEarned", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventSetRewardedAdListener_Parms, OnRewardEarned), Z_Construct_UDelegateFunction_YodoAds_YAVoidDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRewardEarned_MetaData), NewProp_OnRewardEarned_MetaData) }; // 2515382412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::NewProp_OnRewardEarned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "SetRewardedAdListener", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::YodoAdsLibrary_eventSetRewardedAdListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::YodoAdsLibrary_eventSetRewardedAdListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execSetRewardedAdListener)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnOpened);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnClosed);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnRewardEarned);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::SetRewardedAdListener(FYAVoidDelegate(Z_Param_Out_OnOpened),FYAErrorDelegate(Z_Param_Out_OnError),FYAVoidDelegate(Z_Param_Out_OnClosed),FYAVoidDelegate(Z_Param_Out_OnRewardEarned));
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function SetRewardedAdListener

// Begin Class UYodoAdsLibrary Function ShowInterstitialAd
struct Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics
{
	struct YodoAdsLibrary_eventShowInterstitialAd_Parms
	{
		FString Placement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Show interstitial ad with optional placement.\n\x09*/" },
#endif
		{ "CPP_Default_Placement", "" },
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show interstitial ad with optional placement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Placement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventShowInterstitialAd_Parms, Placement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Placement_MetaData), NewProp_Placement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::NewProp_Placement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "ShowInterstitialAd", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::YodoAdsLibrary_eventShowInterstitialAd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::YodoAdsLibrary_eventShowInterstitialAd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execShowInterstitialAd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Placement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::ShowInterstitialAd(Z_Param_Placement);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function ShowInterstitialAd

// Begin Class UYodoAdsLibrary Function ShowRewardedAd
struct Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics
{
	struct YodoAdsLibrary_eventShowRewardedAd_Parms
	{
		FString Placement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Show rewarded ad with optional placement.\n\x09*/" },
#endif
		{ "CPP_Default_Placement", "" },
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show rewarded ad with optional placement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Placement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YodoAdsLibrary_eventShowRewardedAd_Parms, Placement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Placement_MetaData), NewProp_Placement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::NewProp_Placement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYodoAdsLibrary, nullptr, "ShowRewardedAd", nullptr, nullptr, Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::YodoAdsLibrary_eventShowRewardedAd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::YodoAdsLibrary_eventShowRewardedAd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYodoAdsLibrary::execShowRewardedAd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Placement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYodoAdsLibrary::ShowRewardedAd(Z_Param_Placement);
	P_NATIVE_END;
}
// End Class UYodoAdsLibrary Function ShowRewardedAd

// Begin Class UYodoAdsLibrary
void UYodoAdsLibrary::StaticRegisterNativesUYodoAdsLibrary()
{
	UClass* Class = UYodoAdsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Initialize", &UYodoAdsLibrary::execInitialize },
		{ "IsCCPADontSell", &UYodoAdsLibrary::execIsCCPADontSell },
		{ "IsCOPPAAgeRestricted", &UYodoAdsLibrary::execIsCOPPAAgeRestricted },
		{ "IsGDPRUserConsent", &UYodoAdsLibrary::execIsGDPRUserConsent },
		{ "IsInterstitialAdLoaded", &UYodoAdsLibrary::execIsInterstitialAdLoaded },
		{ "IsRewardedAdLoaded", &UYodoAdsLibrary::execIsRewardedAdLoaded },
		{ "MakeBannerAd", &UYodoAdsLibrary::execMakeBannerAd },
		{ "SetCCPA", &UYodoAdsLibrary::execSetCCPA },
		{ "SetConfig", &UYodoAdsLibrary::execSetConfig },
		{ "SetCOPPA", &UYodoAdsLibrary::execSetCOPPA },
		{ "SetGDPR", &UYodoAdsLibrary::execSetGDPR },
		{ "SetInterstitialAdListener", &UYodoAdsLibrary::execSetInterstitialAdListener },
		{ "SetRewardedAdListener", &UYodoAdsLibrary::execSetRewardedAdListener },
		{ "ShowInterstitialAd", &UYodoAdsLibrary::execShowInterstitialAd },
		{ "ShowRewardedAd", &UYodoAdsLibrary::execShowRewardedAd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYodoAdsLibrary);
UClass* Z_Construct_UClass_UYodoAdsLibrary_NoRegister()
{
	return UYodoAdsLibrary::StaticClass();
}
struct Z_Construct_UClass_UYodoAdsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Main entry point of the Yodo SDK.\n*/" },
#endif
		{ "IncludePath", "YodoAdsLibrary.h" },
		{ "ModuleRelativePath", "Public/YodoAdsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main entry point of the Yodo SDK." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYodoAdsLibrary_Initialize, "Initialize" }, // 4074550540
		{ &Z_Construct_UFunction_UYodoAdsLibrary_IsCCPADontSell, "IsCCPADontSell" }, // 240946902
		{ &Z_Construct_UFunction_UYodoAdsLibrary_IsCOPPAAgeRestricted, "IsCOPPAAgeRestricted" }, // 2278701795
		{ &Z_Construct_UFunction_UYodoAdsLibrary_IsGDPRUserConsent, "IsGDPRUserConsent" }, // 2114212106
		{ &Z_Construct_UFunction_UYodoAdsLibrary_IsInterstitialAdLoaded, "IsInterstitialAdLoaded" }, // 1217618833
		{ &Z_Construct_UFunction_UYodoAdsLibrary_IsRewardedAdLoaded, "IsRewardedAdLoaded" }, // 1523820276
		{ &Z_Construct_UFunction_UYodoAdsLibrary_MakeBannerAd, "MakeBannerAd" }, // 3556882511
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetCCPA, "SetCCPA" }, // 1718792752
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetConfig, "SetConfig" }, // 1287653909
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetCOPPA, "SetCOPPA" }, // 3094760561
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetGDPR, "SetGDPR" }, // 4165907351
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetInterstitialAdListener, "SetInterstitialAdListener" }, // 2655260332
		{ &Z_Construct_UFunction_UYodoAdsLibrary_SetRewardedAdListener, "SetRewardedAdListener" }, // 1940594817
		{ &Z_Construct_UFunction_UYodoAdsLibrary_ShowInterstitialAd, "ShowInterstitialAd" }, // 2529151381
		{ &Z_Construct_UFunction_UYodoAdsLibrary_ShowRewardedAd, "ShowRewardedAd" }, // 2431248457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYodoAdsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYodoAdsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YodoAds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYodoAdsLibrary_Statics::ClassParams = {
	&UYodoAdsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYodoAdsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYodoAdsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYodoAdsLibrary()
{
	if (!Z_Registration_Info_UClass_UYodoAdsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYodoAdsLibrary.OuterSingleton, Z_Construct_UClass_UYodoAdsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYodoAdsLibrary.OuterSingleton;
}
template<> YODOADS_API UClass* StaticClass<UYodoAdsLibrary>()
{
	return UYodoAdsLibrary::StaticClass();
}
UYodoAdsLibrary::UYodoAdsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYodoAdsLibrary);
UYodoAdsLibrary::~UYodoAdsLibrary() {}
// End Class UYodoAdsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FYodoAdsConfig::StaticStruct, Z_Construct_UScriptStruct_FYodoAdsConfig_Statics::NewStructOps, TEXT("YodoAdsConfig"), &Z_Registration_Info_UScriptStruct_YodoAdsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYodoAdsConfig), 3314640661U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYodoAdsLibrary, UYodoAdsLibrary::StaticClass, TEXT("UYodoAdsLibrary"), &Z_Registration_Info_UClass_UYodoAdsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYodoAdsLibrary), 4082285010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_3037847999(TEXT("/Script/YodoAds"),
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
