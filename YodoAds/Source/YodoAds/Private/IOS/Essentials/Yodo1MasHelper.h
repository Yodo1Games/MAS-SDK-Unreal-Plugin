//
//  Yodo1MasHelper.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2022/5/17.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasCallback.h"
#import "Yodo1MasBanner.h"
#import "Yodo1MasCommon.h"

#if __has_include(<Yodo1MasCore/Yodo1MasSdkInfo.h>)
#import <Yodo1MasCore/Yodo1MasSdkInfo.h>
#else
#import "Yodo1MasSdkInfo.h"
#endif

#define Yodo1MasGDPRUserConsent             @"Yodo1MasGDPRUserConsent"
#define Yodo1MasCOPPAAgeRestricted          @"Yodo1MasCOPPAAgeRestricted"
#define Yodo1MasCCPADoNotSell               @"Yodo1MasCCPADoNotSell"
#define Yodo1MasPersonalizedAdStateDefine   @"Yodo1MasPersonalizedAdState"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasAdapterBase;
@class Yodo1MasAdBuildConfig;
@class Yodo1MasNetworkConfig;
@interface Yodo1MasHelper : NSObject

@property (nonatomic, assign, readonly) BOOL isInit;
@property (nonatomic, assign, readonly) NSInteger userAge;
@property (nonatomic, assign, readonly) Yodo1MasATTrackingStatus attrackingStatus;

@property (nonatomic, strong, readonly) Yodo1MasSdkConfiguration *configuration;

@property (nonatomic, assign) BOOL isGDPRUserConsent;
@property (nonatomic, assign) BOOL isCOPPAAgeRestricted;
@property (nonatomic, assign) BOOL isCCPADoNotSell;

@property (nonatomic, assign) Yodo1MasPersonalizedAdState isPersonalizedState;

@property (nonatomic, copy, nullable) NSString *userIdentifier;

@property (nonatomic, assign) BOOL isFullScreenAdShowing;
@property (nonatomic, assign, readonly) BOOL isTestDevice;
@property (nonatomic, assign, readonly) BOOL isTestMode;
@property (nonatomic, strong) Yodo1MasNetworkConfig *masNetworkConfig;
@property (nonatomic, weak) id<Yodo1MasAppStatusDelegate> appStatusDelegate;

@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, copy, readonly) NSString *idfa;

+ (Yodo1MasHelper *)sharedInstance;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (BOOL)isDebug;

- (void)initWithSuccessful:(Yodo1MasInitSuccessful _Nullable)successful fail:(Yodo1MasInitFail _Nullable)fail;
- (void)initWithAppKey:(NSString *)appKey successfulHandler:(Yodo1MasInitSuccessfulHandler _Nullable)successfulHandler failHandler:(Yodo1MasInitFail _Nullable)failHandler;
- (void)setAdBuildConfig:(Yodo1MasAdBuildConfig *)buildConfig;

- (void)showPopupToReportAd;
- (void)showDebugger;

- (NSArray<Yodo1MasAdapterBase *> *)getRewardAdapter;
- (NSArray<Yodo1MasAdapterBase *> *)getInterstitialAdapter;
- (NSArray<Yodo1MasAdapterBase *> *)getNativeAdapter;
- (NSArray<Yodo1MasAdapterBase *> *)getBannerAdapter;
- (NSArray<Yodo1MasAdapterBase *> *)getAppOpenAdapter;
- (NSArray<Yodo1MasAdapterBase *> *)getRewardedInterstitialAdapter;

@end

NS_ASSUME_NONNULL_END
