//
//  Yodo1MasInterstitialAdapterBase.h
//  AFNetworking
//
//  Created by ZhouYuzhen on 2022/4/28.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdAdapterBase.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasInterstitialAdapterBase;
@protocol Yodo1MasInterstitialAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdLoad:(id)ad;
- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdError:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdClick:(id)ad;
- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdOpen:(id)ad;
- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdClose:(id)ad;

- (void)adapter:(Yodo1MasInterstitialAdapterBase *)adapter didInterstitialAdPayRevenue:(id)ad;

@end

@class Yodo1MasAdId;

@interface Yodo1MasInterstitialAdapterBase : Yodo1MasAdAdapterBase

@property (nonatomic, assign, readonly) BOOL isInterstitialAdLoaded;
@property (nonatomic, weak) id<Yodo1MasInterstitialAdapterDelegate> interstitialDelegate;

- (NSDictionary *)getAdRequestV2;
- (NSArray *)getAdRequestV2Waterfalls;

- (instancetype)initWithAdUnitId:(Yodo1MasAdId *)unitId;

#pragma mark - public
- (void)loadInterstitialAd;
- (void)showInterstitialAdFromRootController:(UIViewController * _Nullable)controller;
- (void)destroy;

#pragma mark - private
- (id)getAdUnitId;
- (Yodo1MasAdId *)getAdId;

- (NSComparisonResult)compareTo:(Yodo1MasInterstitialAdapterBase *)adapter;

@end

NS_ASSUME_NONNULL_END
