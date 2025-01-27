//
//  TAQNResolver.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNResolverDelegate.h"
#import <Foundation/Foundation.h>

@interface TAQNResolver : NSObject <TAQNResolverDelegate>
- (NSArray *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo error:(NSError *__autoreleasing *)error;

// @deprecated typo
- (instancetype)initWithAddres:(NSString *)address DEPRECATED_ATTRIBUTE;

- (instancetype)initWithAddress:(NSString *)address;

- (instancetype)initWithAddress:(NSString *)address
                        timeout:(NSUInteger)time;

+ (instancetype)systemResolver;
+ (NSString *)systemDnsServer;
@end

