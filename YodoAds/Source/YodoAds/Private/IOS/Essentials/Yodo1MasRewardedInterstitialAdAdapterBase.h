//
//  Yodo1MasRewardedInterstitialAdapterBase.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2022/9/26.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdAdapterBase.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasRewardedInterstitialAdAdapterBase;
@protocol Yodo1MasRewardedInterstitialAdAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdLoad:(id)ad;
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdError:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdClick:(id)ad;
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdOpen:(id)ad;
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdClose:(id)ad;
- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdEarned:(id)ad;

- (void)adapter:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter didRewardedInterstitialAdPayRevenue:(id)ad;

@end

@class Yodo1MasAdId;
@interface Yodo1MasRewardedInterstitialAdAdapterBase : Yodo1MasAdAdapterBase

@property (nonatomic, assign, readonly) BOOL isRewardedInterstitialAdLoaded;
@property (nonatomic, weak) id<Yodo1MasRewardedInterstitialAdAdapterDelegate> rewardedInterstitialDelegate;

- (instancetype)initWithAdUnitId:(NSArray<Yodo1MasAdId *> *)unitIds;

#pragma mark - public
- (void)loadRewardedInterstitialAd;
- (void)loadNextRewardedInterstitialAd;
- (void)showRewardedInterstitialAdFromRootController:(UIViewController * _Nullable)controller;
- (void)destroy;

#pragma mark - private
- (id)getAdUnitId:(BOOL)next;

- (NSComparisonResult)compareTo:(Yodo1MasRewardedInterstitialAdAdapterBase *)adapter;

@end

NS_ASSUME_NONNULL_END
