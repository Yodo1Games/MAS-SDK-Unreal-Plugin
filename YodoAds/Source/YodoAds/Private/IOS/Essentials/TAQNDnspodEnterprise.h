//
//  TAQNDnspodEnterprise.h
//  TAHappyDNS
//
//  Created by bailong on 15/7/31.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNResolverDelegate.h"
#import <Foundation/Foundation.h>

extern const int kTAQN_ENCRYPT_FAILED;
extern const int kTAQN_DECRYPT_FAILED;

@interface TAQNDnspodEnterprise : NSObject <TAQNResolverDelegate>

- (instancetype)initWithId:(NSString *)userId
                       key:(NSString *)key;

- (instancetype)initWithId:(NSString *)userId
                       key:(NSString *)key
                    server:(NSString *)server;

- (instancetype)initWithId:(NSString *)userId
                       key:(NSString *)key
                    server:(NSString *)server
                   timeout:(NSUInteger)time;

- (NSArray *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo error:(NSError *__autoreleasing *)error;
@end
