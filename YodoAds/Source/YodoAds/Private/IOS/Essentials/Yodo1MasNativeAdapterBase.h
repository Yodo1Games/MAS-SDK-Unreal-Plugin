//
//  Yodo1MasNativeAdapterBase.h
//  Yodo1MasMediationApplovin
//
//  Created by 周玉震 on 2022/1/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasAdapterBase.h"
#import "Yodo1MasAdAdapterBase.h"
#import "Yodo1MasNativeAdViewBuilder.h"

NS_ASSUME_NONNULL_BEGIN


@class Yodo1MasNativeAdapterBase;
@protocol Yodo1MasNativeAdapterDelegate <NSObject>

@optional
- (void)adapter:(Yodo1MasNativeAdapterBase *)adapter didNativeAdLoad:(UIView *)nativeView;
- (void)adapter:(Yodo1MasNativeAdapterBase *)adapter didNativeAdLoadFail:(Yodo1MasError *)error;
- (void)adapter:(Yodo1MasNativeAdapterBase *)adapter didNativeAdClick:(UIView *)nativeView;

- (void)adapter:(Yodo1MasNativeAdapterBase *)adapter didNativeAdPayRevenue:(UIView *)nativeView;

@end

@class Yodo1MasAdId;
@interface Yodo1MasNativeAdapterBase : Yodo1MasAdAdapterBase

@property (nonatomic, strong, readonly) UIView *nativeView;
@property (nonatomic, assign, readonly) BOOL isNativeAdLoaded;
@property (nonatomic, weak) id<Yodo1MasNativeAdapterDelegate> nativeDelegate;
@property (nonatomic, strong) Yodo1MasNativeAdViewBuilder *builder;
@property (nonatomic, copy) NSString *adSize;

- (instancetype)initWithAdUnitId:(NSArray<Yodo1MasAdId *> *)unitIds;

- (void)loadNativeAdWithController:(UIViewController *)controller;
- (void)loadNativeAdWithController:(UIViewController *)controller xib:(NSString *)name;
- (void)loadNativeAdWithController:(UIViewController *)controller view:(Class)view;
- (void)loadNextNativeAd;
- (void)destroyNative;

- (id)getAdUnitId:(BOOL)next;

@end

NS_ASSUME_NONNULL_END
