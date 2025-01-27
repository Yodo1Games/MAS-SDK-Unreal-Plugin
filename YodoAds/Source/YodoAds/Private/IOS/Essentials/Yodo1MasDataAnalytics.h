//
//  Yodo1MasDataAnalytics.h
//  AFNetworking
//
//  Created by 周玉震 on 2022/11/28.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasCommon.h"

#define EVENT_APP_START         @"AppStart"
#define EVENT_AD_INIT           @"adInit"
#define EVENT_AD_PRIVACY        @"adPrivacy"
#define EVENT_AD_NETWORK_INIT   @"adNetworkInit"
#define EVENT_SDK_CALLBACK      @"sdkInitCallback"
#define EVENT_SDK_INIT          @"sdkInit"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasDataAnalytics : NSObject

+ (void)initThinkingDataSDK:(NSString *)appKey withEnv:(BOOL)debugEnv;
+ (void)setBacklist:(NSArray *)list;
+ (void)trackEvent:(NSString *)eventId properties:(nullable NSDictionary *)properties;

+ (void)trackAdRequestV2:(NSDictionary *)properties;

+ (NSString *)getTypeName:(Yodo1MasAdType)type;
+ (NSString *)getDefaultPlacement:(Yodo1MasAdType)type;

+ (void)setRevenueReportByAdType:(Yodo1MasAdType)type;
+ (BOOL)revenueReportByAdType:(Yodo1MasAdType)type;

@end

NS_ASSUME_NONNULL_END
