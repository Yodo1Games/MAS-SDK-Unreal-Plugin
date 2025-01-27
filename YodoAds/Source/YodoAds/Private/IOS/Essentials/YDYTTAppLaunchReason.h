//
//  YDYTTAppLaunchReason.h
//  YDYThinkingSDK
//
//  Created by wwango on 2021/11/17.
//  Copyright © 2021 thinkingdata. All rights reserved.
//  用来收集link、推送、3dtouch下的启动原因

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTAppLaunchReason : NSObject

@property(nonatomic, copy) NSDictionary *appLaunchParams;

+ (YDYTTAppLaunchReason *)sharedInstance;

@end

NS_ASSUME_NONNULL_END
