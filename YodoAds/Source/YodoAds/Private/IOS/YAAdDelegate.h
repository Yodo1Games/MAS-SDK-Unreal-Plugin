

#pragma once

#import <Foundation/Foundation.h>
#import <Yodo1MasCore/Yodo1Mas.h>
#import <Yodo1MasCore/Yodo1MasInterstitialAd.h>
#import <Yodo1MasCore/Yodo1MasRewardAd.h>
#import <Yodo1MasCore/Yodo1MasAppOpenAd.h>
#import <Yodo1MasCore/Yodo1MasBannerAdView.h>

@interface YAInterstitialAdDelegate : NSObject <Yodo1MasInterstitialDelegate>

@property (nonatomic, assign) NSInteger retryAttempt;

@property (nonatomic, copy) void (^onInterstitialAdOpened)();

@property (nonatomic, copy) void (^onInterstitialAdLoaded)();

@property (nonatomic, copy) void (^onInterstitialAdClosed)();

@property (nonatomic, copy) void (^onInterstitialAdFailedToOpen)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onInterstitialAdFailedToLoad)(Yodo1MasError* error);

@end

@interface YARewardedAdDelegate : NSObject <Yodo1MasRewardDelegate>


@property (nonatomic, assign) NSInteger retryRVAttempt;

@property (nonatomic, copy) void (^onRewardAdOpened)();

@property (nonatomic, copy) void (^onRewardAdLoaded)();

@property (nonatomic, copy) void (^onRewardAdClosed)();

@property (nonatomic, copy) void (^onRewardAdFailedToOpen)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onRewardAdFailedToLoad)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onRewardAdEarned)();

@end

@interface YAAppopenAdDelegate : NSObject <Yodo1MasAppOpenAdDelegate>

@property (nonatomic, assign) NSInteger retryAOAAttempt;

@property (nonatomic, copy) void (^onAppOpenAdLoaded)();

@property (nonatomic, copy) void (^onAppOpenAdOpened)();

@property (nonatomic, copy) void (^onAppOpenAdClosed)();

@property (nonatomic, copy) void (^onAppOpenAdFailedToOpen)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onAppOpenAdFailedToLoad)(Yodo1MasError* error);

@end

@interface YABannerAdDelegate : NSObject <Yodo1MasBannerAdViewDelegate>

@property (nonatomic, copy) void (^onAdOpened)();

@property (nonatomic, copy) void (^onOpenAdError)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onAdLoaded)();

@property (nonatomic, copy) void (^onLoadAdError)(Yodo1MasError* error);

@property (nonatomic, copy) void (^onAdClosed)();

@end
