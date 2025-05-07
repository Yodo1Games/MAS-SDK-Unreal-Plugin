//
//  Yodo1MasAdapterBase.h
//  MAS
//
//  Created by ZhouYuzhen on 2020/12/3.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasHelper.h"
#import "Yodo1MasBanner.h"
#import "Yodo1MasLog.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^Yodo1MasAdapterInitSuccessful)(NSString *);
typedef void(^Yodo1MasAdapterInitFail)(NSString *, NSError *);


typedef NS_ENUM(NSInteger, Yodo1MasAdStatus) {
    Yodo1MasAdStatusNone,
    Yodo1MasAdStatusLoading,
    Yodo1MasAdStatusLoaded,
    Yodo1MasAdStatusOpened,
    Yodo1MasAdStatusError
};

@interface Yodo1MasAdapterConfig : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, strong) id obj;

@end

@interface Yodo1MasAdId : NSObject

@property (nonatomic, copy) NSString *adId;
@property (nonatomic, strong) id object;
@property (nonatomic, copy) NSString *networkName;

- (instancetype)initWitId:(NSString *)adId object:(id __nullable)object;
- (NSComparisonResult)compareTo:(Yodo1MasAdId *)adId;

@end

@class Yodo1MasBannerAdapterBase;
@class Yodo1MasNativeAdapterBase;
@class Yodo1MasInterstitialAdapterBase;
@class Yodo1MasRewardAdapterBase;
@class Yodo1MasAppOpenAdAdapterBase;
@class Yodo1MasRewardedInterstitialAdAdapterBase;
@interface Yodo1MasAdapterBase : NSObject

+ (NSString *)advertCode;
+ (NSString *)networkName;
+ (NSString *)sdkVersion;
+ (NSString *)mediationVersion;
+ (BOOL)isInitialized;

@property (nonatomic, copy) NSString *TAG;
@property (nonatomic, copy, readonly) NSString *advertCode;
@property (nonatomic, copy, readonly) NSString *sdkVersion;
@property (nonatomic, copy, readonly) NSString *mediationVersion;
@property (nonatomic, copy) NSString *mediationName;
@property (nonatomic, copy, readonly) Yodo1MasAdapterInitSuccessful initSuccessfulCallback;
@property (nonatomic, copy, readonly) Yodo1MasAdapterInitFail initFailCallback;

@property (nonatomic, copy, nullable) NSString *userIdentifier;

- (void)initWithConfig:(Yodo1MasAdapterConfig *)config 
            successful:(Yodo1MasAdapterInitSuccessful)successful
                  fail:(Yodo1MasAdapterInitFail)fail;

- (BOOL)isInitSDK;
- (void)updatePrivacy;
- (NSString *)networkName;

#pragma mark - Rewarded Ad
@property (nonatomic, strong) NSMutableArray<Yodo1MasAdId *> *rewardAdIds;
- (Class)rewardAdapterClass;
- (Yodo1MasRewardAdapterBase *)getReward:(Yodo1MasAdId * _Nullable)adId;

#pragma mark - Interstitial Ad
@property (nonatomic, strong) NSMutableArray<Yodo1MasAdId *> *interstitialAdIds;
- (Class)interstitialAdapterClass;
- (Yodo1MasInterstitialAdapterBase *)getInterstitial:(Yodo1MasAdId * _Nullable)adId;

#pragma mark - Banner Ad
@property (nonatomic, strong, readonly) NSMutableArray<Yodo1MasAdId *> *bannerAdIds;
- (Class)bannerAdapterClass;
- (Yodo1MasBannerAdapterBase *)getBanner;
- (BOOL)isBannerSizeSupport:(Yodo1MasBannerAdSize)size;
- (BOOL)isMultipleBannerSupport;

#pragma mark - Native Ad
@property (nonatomic, strong, readonly) NSMutableArray<Yodo1MasAdId *> *nativeAdIds;
@property (nonatomic, copy) NSString *nativeAdSize;
- (Class)nativeAdapterClass;
- (Yodo1MasNativeAdapterBase *)getNative;

#pragma mark - App Open Ad
@property (nonatomic, strong, readonly) NSMutableArray<Yodo1MasAdId *> *appOpenAdIds;
- (Class)appOpenAdapterClass;
- (Yodo1MasAppOpenAdAdapterBase *)getAppOpen:(Yodo1MasAdId * _Nullable)adId;

#pragma mark - Rewarded Interstitial Ad
@property (nonatomic, strong, readonly) NSMutableArray<Yodo1MasAdId *> *rewardedInterstitialAdIds;
- (Class)rewardedInterstitialAdapterClass;
- (Yodo1MasRewardedInterstitialAdAdapterBase *)getRewardedInterstitial;

#pragma mark - Common
+ (UIWindow * _Nullable )getTopWindow;
+ (UIViewController * _Nullable )getTopViewController;

@end

NS_ASSUME_NONNULL_END
