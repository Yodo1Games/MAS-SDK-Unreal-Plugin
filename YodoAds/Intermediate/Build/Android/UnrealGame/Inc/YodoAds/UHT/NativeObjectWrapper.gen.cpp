// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YodoAds/Public/NativeObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeObjectWrapper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_YodoAds();
YODOADS_API UClass* Z_Construct_UClass_UNativeObjectWrapper();
YODOADS_API UClass* Z_Construct_UClass_UNativeObjectWrapper_NoRegister();
// End Cross Module References

// Begin Class UNativeObjectWrapper Function IsNativeObjectValid
struct Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics
{
	struct NativeObjectWrapper_eventIsNativeObjectValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Yodo Ads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convenience function to check whether the native object is valid.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NativeObjectWrapper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience function to check whether the native object is valid." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NativeObjectWrapper_eventIsNativeObjectValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NativeObjectWrapper_eventIsNativeObjectValid_Parms), &Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeObjectWrapper, nullptr, "IsNativeObjectValid", nullptr, nullptr, Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NativeObjectWrapper_eventIsNativeObjectValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::NativeObjectWrapper_eventIsNativeObjectValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNativeObjectWrapper::execIsNativeObjectValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNativeObjectValid();
	P_NATIVE_END;
}
// End Class UNativeObjectWrapper Function IsNativeObjectValid

// Begin Class UNativeObjectWrapper
void UNativeObjectWrapper::StaticRegisterNativesUNativeObjectWrapper()
{
	UClass* Class = UNativeObjectWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsNativeObjectValid", &UNativeObjectWrapper::execIsNativeObjectValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNativeObjectWrapper);
UClass* Z_Construct_UClass_UNativeObjectWrapper_NoRegister()
{
	return UNativeObjectWrapper::StaticClass();
}
struct Z_Construct_UClass_UNativeObjectWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NativeObjectWrapper.h" },
		{ "ModuleRelativePath", "Public/NativeObjectWrapper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNativeObjectWrapper_IsNativeObjectValid, "IsNativeObjectValid" }, // 2223119371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeObjectWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNativeObjectWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_YodoAds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeObjectWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNativeObjectWrapper_Statics::ClassParams = {
	&UNativeObjectWrapper::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeObjectWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UNativeObjectWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNativeObjectWrapper()
{
	if (!Z_Registration_Info_UClass_UNativeObjectWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNativeObjectWrapper.OuterSingleton, Z_Construct_UClass_UNativeObjectWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNativeObjectWrapper.OuterSingleton;
}
template<> YODOADS_API UClass* StaticClass<UNativeObjectWrapper>()
{
	return UNativeObjectWrapper::StaticClass();
}
UNativeObjectWrapper::UNativeObjectWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeObjectWrapper);
// End Class UNativeObjectWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_NativeObjectWrapper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNativeObjectWrapper, UNativeObjectWrapper::StaticClass, TEXT("UNativeObjectWrapper"), &Z_Registration_Info_UClass_UNativeObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNativeObjectWrapper), 1740131282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_NativeObjectWrapper_h_2821322284(TEXT("/Script/YodoAds"),
	Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_NativeObjectWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_NativeObjectWrapper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
