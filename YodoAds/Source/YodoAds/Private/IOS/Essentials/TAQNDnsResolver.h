//
//  TAQNDnsResolver.h
//  TAHappyDNS
//
//  Created by yangsen on 2021/7/28.
//  Copyright © 2021 Qiniu Cloud Storage. All rights reserved.
//

#import "TAQNDnsDefine.h"
#import "TAQNRecord.h"
#import "TAQNResolverDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class TAQNDnsResponse;
// 抽象对象，不能直接使用，使用其子类
@interface TAQNDnsResolver : NSObject <TAQNResolverDelegate>

@property(nonatomic, assign, readonly)int recordType;
@property(nonatomic, assign, readonly)int timeout;
@property(nonatomic,   copy, readonly)NSArray *servers;



// 抽象方法，子类实现
- (void)request:(NSString *)server
           host:(NSString *)host 
     recordType:(int)recordType
       complete:(void(^)(TAQNDnsResponse *response, NSError *error))complete;

@end

NS_ASSUME_NONNULL_END
