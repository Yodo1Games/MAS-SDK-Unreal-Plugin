//
//  Yodo1MasRewardAdapterBase.h
//  AFNetworking
//
//  Created by ZhouYuzhen on 2022/4/28.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdAdapterBase.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasRewardAdapterBase;
@protocol Yodo1MasRewardAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdLoad:(id)ad;
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdError:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdClick:(id)ad;
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdOpen:(id)ad;
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdClose:(id)ad;
- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdEarned:(id)ad;

- (void)adapter:(Yodo1MasRewardAdapterBase *)adapter didRewardAdPayRevenue:(id)ad;

@end

@class Yodo1MasAdId;
@interface Yodo1MasRewardAdapterBase : Yodo1MasAdAdapterBase

@property (nonatomic, assign, readonly) BOOL isRewardAdLoaded;
@property (nonatomic, weak) id<Yodo1MasRewardAdapterDelegate> rewardDelegate;

- (NSDictionary *)getAdRequestV2;
- (NSArray *)getAdRequestV2Waterfalls;

- (instancetype)initWithAdUnitId:(Yodo1MasAdId *)unitId;

#pragma mark - public
- (void)loadRewardAd;
- (void)showRewardAdFromRootController:(UIViewController * _Nullable)controller;
- (void)destroy;

#pragma mark - private
- (id)getAdUnitId;
- (Yodo1MasAdId *)getAdId;

- (NSComparisonResult)compareTo:(Yodo1MasRewardAdapterBase *)adapter;

@end

NS_ASSUME_NONNULL_END
