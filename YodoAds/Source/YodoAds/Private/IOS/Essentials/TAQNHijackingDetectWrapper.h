//
//  TAQNHijackingDetectWrapper.h
//  TAHappyDNS
//
//  Created by bailong on 15/7/16.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TAQNResolverDelegate.h"

@class TAQNResolver;
@interface TAQNHijackingDetectWrapper : NSObject <TAQNResolverDelegate>
- (NSArray *)query:(TAQNDomain *)domain networkInfo:(TAQNNetworkInfo *)netInfo error:(NSError *__autoreleasing *)error;
- (instancetype)initWithResolver:(TAQNResolver *)resolver;
@end
