//
//  Yodo1MasBannerAdapterBase.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2021/11/22.
//

#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasBanner.h"
#import "Yodo1MasCommon.h"
#import "Yodo1MasError.h"
#import "Yodo1MasAdAdapterBase.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasBannerAdapterBase;
@protocol Yodo1MasBannerAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdLoad:(UIView *)banner;
- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdLoadFail:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdOpen:(UIView *)banner;
- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdOpenFail:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdClick:(UIView *)banner;

- (void)adapter:(Yodo1MasBannerAdapterBase *)adapter didBannerAdPayRevenue:(id)ad;

@end

@class Yodo1MasAdId;
@interface Yodo1MasBannerAdapterBase : Yodo1MasAdAdapterBase

+ (BOOL)isBannerSizeSupport:(Yodo1MasBannerAdSize)size;
+ (BOOL)isMultipleBannerSupport;

@property (nonatomic, assign, readonly) UIView *bannerView;
@property (nonatomic, assign, readonly) BOOL isBannerAdLoaded;
@property (nonatomic, assign) Yodo1MasBannerAdSize masBannerAdSize;
@property (nonatomic, weak) UIViewController *bannerAdController;
@property (nonatomic, weak) id<Yodo1MasBannerAdapterDelegate> bannerDelegate;

- (instancetype)initWithAdUnitId:(NSArray<Yodo1MasAdId *> *)unitIds;
- (CGSize)bannerSize:(Yodo1MasBannerAdSize)size;
- (CGSize)bannerContentSize;

#pragma mark - public
- (void)loadBannerAd:(Yodo1MasBannerAdSize)size controller:(UIViewController *)controller minPrice:(double)minPrice;
- (void)loadNextBannerAd;
- (void)destroyBanner;
- (BOOL)isPriceValuable;

#pragma mark - private
- (id)getAdUnitId:(BOOL)next;
- (Yodo1MasAdId *)getAdId:(BOOL)next;

@end

NS_ASSUME_NONNULL_END
