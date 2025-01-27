//
//  TAQNHosts.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNRecord.h"
#import "TAQNResolverDelegate.h"
#import <Foundation/Foundation.h>

@interface TAQNHosts : NSObject

- (NSArray <TAQNRecord *> *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo;

- (void)put:(NSString *)domain record:(TAQNRecord *)record;
- (void)put:(NSString *)domain record:(TAQNRecord *)record provider:(int)provider;

@end
