//
//  YDYTTAppState.h
//  YDYThinkingSDK
//
//  Created by wwango on 2021/9/24.
//  Copyright © 2021 thinkingdata. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ydy_TDApplicationStateActive @"active"
#define ydy_TDApplicationStateInactive @"inactive"
#define ydy_TDApplicationStateBackground @"background"
#define ydy_TDApplicationStateExtension @"extension"
#define ydy_TDApplicationStateUnknown @"unknown"

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTAppState : NSObject

+ (NSString *)lastAppState;

+ (BOOL)isStateBackground;

+ (NSString *)currentAppState;

+ (nullable UIApplication *)sharedApplication;

@end

NS_ASSUME_NONNULL_END
