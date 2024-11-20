// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YodoAdsBanner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EYABannerHorizontalPosition : uint8;
enum class EYABannerSize : uint8;
enum class EYABannerVerticalPosition : uint8;
#ifdef YODOADS_YodoAdsBanner_generated_h
#error "YodoAdsBanner.generated.h already included, missing '#pragma once' in YodoAdsBanner.h"
#endif
#define YODOADS_YodoAdsBanner_generated_h

#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindOnBannerAdClosedDelegate); \
	DECLARE_FUNCTION(execBindOnBannerAdFailedToOpenDelegate); \
	DECLARE_FUNCTION(execBindOnBannerAdOpenedDelegate); \
	DECLARE_FUNCTION(execBindOnBannerAdFailedToLoadDelegate); \
	DECLARE_FUNCTION(execBindOnBannerAdLoadedDelegate); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execShow); \
	DECLARE_FUNCTION(execLoadAd); \
	DECLARE_FUNCTION(execSetPlacement); \
	DECLARE_FUNCTION(execSetSize);


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYodoAdsBanner(); \
	friend struct Z_Construct_UClass_UYodoAdsBanner_Statics; \
public: \
	DECLARE_CLASS(UYodoAdsBanner, UNativeObjectWrapper, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YodoAds"), NO_API) \
	DECLARE_SERIALIZER(UYodoAdsBanner)


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYodoAdsBanner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYodoAdsBanner(UYodoAdsBanner&&); \
	UYodoAdsBanner(const UYodoAdsBanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYodoAdsBanner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYodoAdsBanner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYodoAdsBanner) \
	NO_API virtual ~UYodoAdsBanner();


#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_54_PROLOG
#define FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_INCLASS_NO_PURE_DECLS \
	FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YODOADS_API UClass* StaticClass<class UYodoAdsBanner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ajithr_Documents_Unreal_Projects_MyTestProject_Plugins_YodoAds_Source_YodoAds_Public_YodoAdsBanner_h


#define FOREACH_ENUM_EYABANNERSIZE(op) \
	op(EYABannerSize::Banner) \
	op(EYABannerSize::LargeBanner) \
	op(EYABannerSize::IABMediumRectangle) \
	op(EYABannerSize::SmartBanner) \
	op(EYABannerSize::AdaptiveBanner) 

enum class EYABannerSize : uint8;
template<> struct TIsUEnumClass<EYABannerSize> { enum { Value = true }; };
template<> YODOADS_API UEnum* StaticEnum<EYABannerSize>();

#define FOREACH_ENUM_EYABANNERHORIZONTALPOSITION(op) \
	op(EYABannerHorizontalPosition::Left) \
	op(EYABannerHorizontalPosition::Center) \
	op(EYABannerHorizontalPosition::Right) 

enum class EYABannerHorizontalPosition : uint8;
template<> struct TIsUEnumClass<EYABannerHorizontalPosition> { enum { Value = true }; };
template<> YODOADS_API UEnum* StaticEnum<EYABannerHorizontalPosition>();

#define FOREACH_ENUM_EYABANNERVERTICALPOSITION(op) \
	op(EYABannerVerticalPosition::Top) \
	op(EYABannerVerticalPosition::Center) \
	op(EYABannerVerticalPosition::Bottom) 

enum class EYABannerVerticalPosition : uint8;
template<> struct TIsUEnumClass<EYABannerVerticalPosition> { enum { Value = true }; };
template<> YODOADS_API UEnum* StaticEnum<EYABannerVerticalPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
