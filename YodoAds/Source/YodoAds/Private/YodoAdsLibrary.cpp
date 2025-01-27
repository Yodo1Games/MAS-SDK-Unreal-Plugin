
#include "YodoAdsLibrary.h"

#include "YodoAds.h"
#include "YodoAdsLog.h"
#include "YodoAdsBanner.h"

#include "Async/Async.h"

#if PLATFORM_ANDROID
#include "Android/YAMethodCallUtils.h"
#include "Android/YAJavaConvertor.h"
#elif PLATFORM_IOS
#import <Yodo1MasCore/Yodo1Mas.h>
#import <Yodo1MasCore/Yodo1MasInterstitialAd.h>
#import <Yodo1MasCore/Yodo1MasRewardAd.h>
#include "IOS/YAAdDelegate.h"
#include "IOS/YAUtils.h"
static YAInterstitialAdDelegate* InterstitialAdDelegate;
static YARewardedAdDelegate* RewardedAdDelegate;
#endif

FYAVoidDelegate UYodoAdsLibrary::OnInitializeSuccess;
FYAErrorDelegate UYodoAdsLibrary::OnInitializeError;

FYAVoidDelegate UYodoAdsLibrary::OnRewardedAdOpened;
FYAErrorDelegate UYodoAdsLibrary::OnRewardedAdError;
FYAVoidDelegate UYodoAdsLibrary::OnRewardedAdClosed;
FYAVoidDelegate UYodoAdsLibrary::OnRewardedAdRewardEarned;
FYAVoidDelegate UYodoAdsLibrary::OnRewardedAdLoaded;
FYAErrorDelegate UYodoAdsLibrary::OnRewardAdFailedToLoad;

FYAVoidDelegate UYodoAdsLibrary::OnInterstitialAdOpened;
FYAErrorDelegate UYodoAdsLibrary::OnInterstitialAdError;
FYAVoidDelegate UYodoAdsLibrary::OnInterstitialAdClosed;
FYAVoidDelegate UYodoAdsLibrary::OnInterstitialAdLoaded;
FYAErrorDelegate UYodoAdsLibrary::OnInterstitialAdFailedToLoad;

const ANSICHAR* UYodoAdsLibrary::YodoAdsClassName = "com/ninevastudios/yodoads/YodoAds";

void UYodoAdsLibrary::SetConfig(const FYodoAdsConfig& Config)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetConfig"));

#if PLATFORM_ANDROID
	//YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setConfig",
	//	"(ZZLjava/lang/String;Ljava/lang/String;)V", Config.EnableUserPrivacyDialog, Config.EnableAdaptiveBanner, 
	//	YAJavaConvertor::GetJavaString(Config.PrivacyPolicyUrl), YAJavaConvertor::GetJavaString(Config.UserAgreementUrl));
#elif PLATFORM_IOS
	//Yodo1MasAdBuildConfig *config = [Yodo1MasAdBuildConfig instance];
	//config.enableUserPrivacyDialog = false;
	
	//[[Yodo1Mas sharedInstance] setAdBuildConfig:config];
#endif
}

void UYodoAdsLibrary::Initialize(const FYAVoidDelegate& OnSuccess, const FYAErrorDelegate& OnError)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::Initialize"));

	OnInitializeSuccess = OnSuccess;
	OnInitializeError = OnError;

#if PLATFORM_ANDROID
	FString AppKey = FYodoAdsModule::Get().GetSettings()->AndroidAppKey;
	
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "initialize",
		"(Landroid/app/Activity;Ljava/lang/String;)V", FJavaWrapper::GameActivityThis, YAJavaConvertor::GetJavaString(AppKey));
#elif PLATFORM_IOS
	[Yodo1Mas sharedInstance].isCCPADoNotSell = YES;
	[Yodo1Mas sharedInstance].isCOPPAAgeRestricted = NO;
	[Yodo1Mas sharedInstance].isGDPRUserConsent = YES;
	FString AppKey = FYodoAdsModule::Get().GetSettings()->iOSAppKey;
	
	[[Yodo1Mas sharedInstance] initMasWithAppKey:AppKey.GetNSString() successful:^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UYodoAdsLibrary::OnInitializeSuccess.ExecuteIfBound();
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::Initialize Success"));
[Yodo1MasRewardAd sharedInstance].autoDelayIfLoadFail = YES;
			dispatch_async(dispatch_get_main_queue(), ^{		
				[[Yodo1MasRewardAd sharedInstance] loadAd];
			});
			[Yodo1MasInterstitialAd sharedInstance].autoDelayIfLoadFail = YES;
			dispatch_async(dispatch_get_main_queue(), ^{
				[[Yodo1MasInterstitialAd sharedInstance] loadAd];
			});
		});
	} fail:^(Yodo1MasError* error) {
		FString Error = YAUtils::ParseIosError(error);
		UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::Initialize failed"));
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UYodoAdsLibrary::OnInitializeError.ExecuteIfBound(Error);
		});
	}];
#endif
}

void UYodoAdsLibrary::SetGDPR(bool UserConsent)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetGDPR"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setGDPR", "(Z)V", UserConsent);
#elif PLATFORM_IOS
	[Yodo1Mas sharedInstance].isGDPRUserConsent = UserConsent;
#endif
}

bool UYodoAdsLibrary::IsGDPRUserConsent()
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsGDPRUserConsent"));

	bool Result = false;

#if PLATFORM_ANDROID
	Result = YAMethodCallUtils::CallStaticBoolMethod(YodoAdsClassName, "isGDPRUserConsent", "()Z");
#elif PLATFORM_IOS
	Result = [Yodo1Mas sharedInstance].isGDPRUserConsent;
#endif

	return Result;
}

void UYodoAdsLibrary::SetCOPPA(bool AgeRestricted)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetCOPPA"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setCOPPA", "(Z)V", AgeRestricted);
#elif PLATFORM_IOS
	[Yodo1Mas sharedInstance].isCOPPAAgeRestricted = AgeRestricted;
#endif
}

bool UYodoAdsLibrary::IsCOPPAAgeRestricted()
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsCOPPAAgeRestricted"));

	bool Result = false;

#if PLATFORM_ANDROID
	Result = YAMethodCallUtils::CallStaticBoolMethod(YodoAdsClassName, "isCOPPAAgeRestricted", "()Z");
#elif PLATFORM_IOS
	Result = [Yodo1Mas sharedInstance].isCOPPAAgeRestricted;
#endif

	return Result;
}

void UYodoAdsLibrary::SetCCPA(bool DontSell)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetCCPA"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setCCPA", "(Z)V", DontSell);
#elif PLATFORM_IOS
	[Yodo1Mas sharedInstance].isCCPADoNotSell = DontSell;
#endif
}

bool UYodoAdsLibrary::IsCCPADontSell()
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsCCPADoNotSell"));

	bool Result = false;

#if PLATFORM_ANDROID
	Result = YAMethodCallUtils::CallStaticBoolMethod(YodoAdsClassName, "isCCPADoNotSell", "()Z");
#elif PLATFORM_IOS
	Result = [Yodo1Mas sharedInstance].isCCPADoNotSell;
#endif

	return Result;
}

void UYodoAdsLibrary::SetRewardedAdListener(const FYAVoidDelegate& OnOpened, const FYAErrorDelegate& OnError, const FYAVoidDelegate& OnClosed, const FYAVoidDelegate& OnRewardEarned,const FYAVoidDelegate& OnLoaded, const FYAErrorDelegate& OnLoadFailed)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener"));

	OnRewardedAdOpened = OnOpened;
	OnRewardedAdError = OnError;
	OnRewardedAdClosed = OnClosed;
	OnRewardedAdRewardEarned = OnRewardEarned;
	OnRewardedAdLoaded = OnLoaded;
	OnRewardAdFailedToLoad = OnLoadFailed;

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setRewardListener", "(Landroid/app/Activity;)V",FJavaWrapper::GameActivityThis, "");
#elif PLATFORM_IOS
	RewardedAdDelegate = [YARewardedAdDelegate new];
	RewardedAdDelegate.onRewardAdOpened = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener::onRVAdOpened"));
			OnRewardedAdOpened.ExecuteIfBound();
		});
	};
	RewardedAdDelegate.onRewardAdFailedToOpen = ^(Yodo1MasError* error) {
		FString Error = YAUtils::ParseIosError(error);
		
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener::onRVAdError"));
			OnRewardedAdError.ExecuteIfBound(Error);
		});
	};
	RewardedAdDelegate.onRewardAdClosed = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener::onRVAdClosed"));
			OnRewardedAdClosed.ExecuteIfBound();
			UYodoAdsLibrary::LoadRewardedAd();
		});
	};
	RewardedAdDelegate.onRewardAdEarned = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnRewardedAdRewardEarned.ExecuteIfBound();
		});
	};
	RewardedAdDelegate.onRewardAdLoaded = ^() {
	

		AsyncTask(ENamedThreads::GameThread, [=]() {
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener:: onRVAdLoaded::"));
			OnRewardedAdLoaded.ExecuteIfBound();
		});
	};
	RewardedAdDelegate.onRewardAdFailedToLoad = ^(Yodo1MasError* error) {
		FString Error = YAUtils::ParseIosError(error);
		
		AsyncTask(ENamedThreads::GameThread, [=]() {
			UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetRewardedAdListener:: onRVAdLoadFailed::"));
			OnRewardAdFailedToLoad.ExecuteIfBound(Error);
		});
	};
	
	[Yodo1MasRewardAd sharedInstance].adDelegate = RewardedAdDelegate;
#endif
}

bool UYodoAdsLibrary::IsRewardedAdLoaded()
{
	

	bool Result = false;

#if PLATFORM_ANDROID
	Result = YAMethodCallUtils::CallStaticBoolMethod(YodoAdsClassName, "isRewardedAdLoaded", "()Z");
#elif PLATFORM_IOS
	Result = [[Yodo1MasRewardAd sharedInstance] isLoaded];
	if(Result)
	{
		UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsRewardedAdLoaded True"));
	}
	else
	{
		UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsRewardedAdLoaded False"));

	}
#endif

	return Result;
}

void UYodoAdsLibrary::ShowRewardedAd(const FString& Placement)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::ShowRewardedAd"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "showRewardedAd", "(Landroid/app/Activity;Ljava/lang/String;)V", FJavaWrapper::GameActivityThis, YAJavaConvertor::GetJavaString(Placement));
#elif PLATFORM_IOS
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasRewardAd sharedInstance] showAd];
	});
#endif
}
void UYodoAdsLibrary::LoadRewardedAd(const FString& Placement)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::LoadRewardedAd"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "loadRewardedAd", "(Landroid/app/Activity;)V", FJavaWrapper::GameActivityThis);
#elif PLATFORM_IOS
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasRewardAd sharedInstance] loadAd];
	});
#endif
}
void UYodoAdsLibrary::SetInterstitialAdListener(const FYAVoidDelegate& OnOpened, const FYAErrorDelegate& OnError, const FYAVoidDelegate& OnClosed,const FYAVoidDelegate& OnLoaded,const FYAErrorDelegate& OnLoadFailed)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::SetInterstitialAdListener"));

	OnInterstitialAdOpened = OnOpened;
	OnInterstitialAdError = OnError;
	OnInterstitialAdClosed = OnClosed;
	OnInterstitialAdLoaded = OnLoaded;
	OnInterstitialAdFailedToLoad = OnLoadFailed;

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "setInterstitialListener", "(Landroid/app/Activity;)V",FJavaWrapper::GameActivityThis, "");
#elif PLATFORM_IOS
	InterstitialAdDelegate = [YAInterstitialAdDelegate new];
	InterstitialAdDelegate.onInterstitialAdOpened = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnInterstitialAdOpened.ExecuteIfBound();
		});
	};
	InterstitialAdDelegate.onInterstitialAdClosed = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnInterstitialAdClosed.ExecuteIfBound();
			UYodoAdsLibrary::LoadInterstitialAd();
		});
	};
	InterstitialAdDelegate.onInterstitialAdLoaded = ^() {
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnInterstitialAdLoaded.ExecuteIfBound();
		});
	};
	InterstitialAdDelegate.onInterstitialAdFailedToOpen = ^(Yodo1MasError* error) {
		FString Error = YAUtils::ParseIosError(error);
		
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnInterstitialAdError.ExecuteIfBound(Error);
		});
	};
	InterstitialAdDelegate.onInterstitialAdFailedToLoad = ^(Yodo1MasError* error) {
		FString Error = YAUtils::ParseIosError(error);
		
		AsyncTask(ENamedThreads::GameThread, [=]() {
			OnInterstitialAdFailedToLoad.ExecuteIfBound(Error);
		});
	};
	[Yodo1MasInterstitialAd sharedInstance].adDelegate = InterstitialAdDelegate;
#endif
}

bool UYodoAdsLibrary::IsInterstitialAdLoaded()
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::IsInterstitialAdLoaded"));

	bool Result = false;

#if PLATFORM_ANDROID
	Result = YAMethodCallUtils::CallStaticBoolMethod(YodoAdsClassName, "isInterstitialAdLoaded", "()Z");
#elif PLATFORM_IOS
	Result = [[Yodo1MasInterstitialAd sharedInstance] isLoaded];
#endif

	return Result;
}

void UYodoAdsLibrary::ShowInterstitialAd(const FString& Placement)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::ShowInterstitialAd"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "showInterstitialAd", "(Landroid/app/Activity;Ljava/lang/String;)V", FJavaWrapper::GameActivityThis, YAJavaConvertor::GetJavaString(Placement));
#elif PLATFORM_IOS
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasInterstitialAd sharedInstance] showAd];
	});
#endif
}
void UYodoAdsLibrary::LoadInterstitialAd(const FString& Placement)
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::LoadInterstitialAd"));

#if PLATFORM_ANDROID
	YAMethodCallUtils::CallStaticVoidMethod(YodoAdsClassName, "loadInterstitialAd", "(Landroid/app/Activity;Ljava/lang/String;)V", FJavaWrapper::GameActivityThis, YAJavaConvertor::GetJavaString(Placement));
#elif PLATFORM_IOS
	dispatch_async(dispatch_get_main_queue(), ^{
		[[Yodo1MasInterstitialAd sharedInstance] loadAd];
	});
#endif
}
UYodoAdsBanner* UYodoAdsLibrary::MakeBannerAd()
{
	UE_LOG(LogYodoAds, Verbose, TEXT("UYodoAdsLibrary::MakeBannerAd"));

	UYodoAdsBanner* Result = NewObject<UYodoAdsBanner>();

#if PLATFORM_ANDROID
	jobject javaBanner = YAMethodCallUtils::CallStaticObjectMethod(UYodoAdsLibrary::YodoAdsClassName, "addBannerToRootView","(Landroid/app/Activity;I)V", FJavaWrapper::GameActivityThis, 0);

	//jobject javaBanner = YAMethodCallUtils::CallStaticObjectMethod(YodoAdsClassName, "addBannerToRootView", 
		//"(Landroid/app/Activity;)Lcom/yodo1/mas/banner/Yodo1MasBannerAdView;", FJavaWrapper::GameActivityThis);
	Result->Init(javaBanner);
#elif PLATFORM_IOS
	Yodo1MasBannerAdView* Banner = [[Yodo1MasBannerAdView alloc] init];
	Result->Init(Banner);
#endif

	return Result;
}

#if PLATFORM_ANDROID
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInitSuccess(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInitializeSuccess.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInitError(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = YAJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInitializeError.ExecuteIfBound(Error);
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardedAdOpened(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardedAdOpened.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardedAdError(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = YAJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardedAdError.ExecuteIfBound(Error);
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardedAdClosed(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardedAdClosed.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardedAdRewardEarned(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardedAdRewardEarned.ExecuteIfBound();
	});
}
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardedAdLoaded(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardedAdLoaded.ExecuteIfBound();
	});
}
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnRewardAdFailedToLoad(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = YAJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnRewardAdFailedToLoad.ExecuteIfBound(Error);
	});
}
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInterstitialAdOpened(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInterstitialAdOpened.ExecuteIfBound();
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInterstitialAdError(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = YAJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInterstitialAdError.ExecuteIfBound(Error);
	});
}

JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInterstitialAdClosed(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInterstitialAdClosed.ExecuteIfBound();
	});
}
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInterstitialAdLoaded(JNIEnv* env, jclass clazz)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInterstitialAdLoaded.ExecuteIfBound();
	});
}
JNI_METHOD void Java_com_ninevastudios_yodoads_YodoAds_OnInterstitialAdFailedToLoad(JNIEnv* env, jclass clazz, jstring error)
{
	FString Error = YAJavaConvertor::FromJavaString(error);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		UYodoAdsLibrary::OnInterstitialAdFailedToLoad.ExecuteIfBound(Error);
	});
}
#endif
