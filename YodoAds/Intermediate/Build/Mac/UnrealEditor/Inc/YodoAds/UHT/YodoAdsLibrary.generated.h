// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YodoAdsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYodoAdsBanner;
struct FYodoAdsConfig;
#ifdef YODOADS_YodoAdsLibrary_generated_h
#error "YodoAdsLibrary.generated.h already included, missing '#pragma once' in YodoAdsLibrary.h"
#endif
#define YODOADS_YodoAdsLibrary_generated_h

#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYodoAdsConfig_Statics; \
	YODOADS_API static class UScriptStruct* StaticStruct();


template<> YODOADS_API UScriptStruct* StaticStruct<struct FYodoAdsConfig>();

#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_41_DELEGATE \
YODOADS_API void FYAVoidDelegate_DelegateWrapper(const FScriptDelegate& YAVoidDelegate);


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_42_DELEGATE \
YODOADS_API void FYAErrorDelegate_DelegateWrapper(const FScriptDelegate& YAErrorDelegate, const FString& Error);


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeBannerAd); \
	DECLARE_FUNCTION(execShowInterstitialAd); \
	DECLARE_FUNCTION(execIsInterstitialAdLoaded); \
	DECLARE_FUNCTION(execSetInterstitialAdListener); \
	DECLARE_FUNCTION(execShowRewardedAd); \
	DECLARE_FUNCTION(execIsRewardedAdLoaded); \
	DECLARE_FUNCTION(execSetRewardedAdListener); \
	DECLARE_FUNCTION(execIsCCPADontSell); \
	DECLARE_FUNCTION(execSetCCPA); \
	DECLARE_FUNCTION(execIsCOPPAAgeRestricted); \
	DECLARE_FUNCTION(execSetCOPPA); \
	DECLARE_FUNCTION(execIsGDPRUserConsent); \
	DECLARE_FUNCTION(execSetGDPR); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetConfig);


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYodoAdsLibrary(); \
	friend struct Z_Construct_UClass_UYodoAdsLibrary_Statics; \
public: \
	DECLARE_CLASS(UYodoAdsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YodoAds"), NO_API) \
	DECLARE_SERIALIZER(UYodoAdsLibrary)


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYodoAdsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYodoAdsLibrary(UYodoAdsLibrary&&); \
	UYodoAdsLibrary(const UYodoAdsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYodoAdsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYodoAdsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYodoAdsLibrary) \
	NO_API virtual ~UYodoAdsLibrary();


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_49_PROLOG
#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_INCLASS_NO_PURE_DECLS \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YODOADS_API UClass* StaticClass<class UYodoAdsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
