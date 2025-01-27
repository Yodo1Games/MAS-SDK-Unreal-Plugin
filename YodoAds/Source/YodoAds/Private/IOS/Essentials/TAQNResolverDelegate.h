//
//  TAQNResolverDelegate.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNDnsError.h"

#define QN_DNS_DEFAULT_TIMEOUT 20 //seconds

@class TAQNDomain;
@class TAQNNetworkInfo;
@protocol TAQNResolverDelegate <NSObject>

- (NSArray *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo error:(NSError **)error;

@end
