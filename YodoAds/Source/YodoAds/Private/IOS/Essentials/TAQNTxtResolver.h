//
//  TAQNTxtResolver.h
//  TAHappyDNS
//
//  Created by bailong on 16/1/5.
//  Copyright © 2016年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNResolverDelegate.h"
#import <Foundation/Foundation.h>

@interface TAQNTxtResolver : NSObject <TAQNResolverDelegate>
- (NSArray *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo error:(NSError *__autoreleasing *)error;

/**
 *    根据服务器地址进行初始化
 *
 *    @param address DNS 服务器地址，nil 表示系统的
 */
- (instancetype)initWithAddress:(NSString *)address;

- (instancetype)initWithAddress:(NSString *)address timeout:(NSUInteger)time;
@end
