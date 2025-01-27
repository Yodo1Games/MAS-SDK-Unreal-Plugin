//
//  Yodo1MasAppOpenAdAdapterBase.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2022/9/26.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdAdapterBase.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasAppOpenAdAdapterBase;
@protocol Yodo1MasAppOpenAdAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdLoad:(id)ad;
- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdError:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdClick:(id)ad;
- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdOpen:(id)ad;
- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdClose:(id)ad;

- (void)adapter:(Yodo1MasAppOpenAdAdapterBase *)adapter didOpenAdPayRevenue:(id)ad;

@end

@interface Yodo1MasAppOpenAdAdapterBase : Yodo1MasAdAdapterBase

@property (nonatomic, assign, readonly) BOOL isOpenAdLoaded;
@property (nonatomic, weak) id<Yodo1MasAppOpenAdAdapterDelegate> openDelegate;

- (NSDictionary *)getAdRequestV2;
- (NSArray *)getAdRequestV2Waterfalls;

- (instancetype)initWithAdUnitId:(Yodo1MasAdId *)unitId;

#pragma mark - public
- (void)loadOpenAd;
- (void)showOpenAdFromRootController:(UIViewController * _Nullable)controller;
- (void)destroy;

#pragma mark - private
- (id)getAdUnitId;
- (Yodo1MasAdId *)getAdId;

- (NSComparisonResult)compareTo:(Yodo1MasAppOpenAdAdapterBase *)adapter;

@end

NS_ASSUME_NONNULL_END
