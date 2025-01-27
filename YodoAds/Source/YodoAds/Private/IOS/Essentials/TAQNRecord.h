//
//  TAQNRecord.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *    A 记录
 */
extern const int kTAQNTypeA;

/**
 *    AAAA 记录
 */
extern const int kTAQNTypeAAAA;

/**
 *  Cname 记录
 */
extern const int kTAQNTypeCname;

/**
 *  Txt 记录
 */
extern const int kTAQNTypeTXT;

/**
 *  永久有效的 ttl
 */
extern const int kTAQNRecordForeverTTL;

typedef NS_ENUM(NSUInteger, TAQNRecordSource) {
    TAQNRecordSourceUnknown,
    TAQNRecordSourceCustom,
    TAQNRecordSourceDnspodEnterprise,
    TAQNRecordSourceSystem,
    TAQNRecordSourceUdp,
    TAQNRecordSourceDoh,
};


@interface TAQNRecord : NSObject

@property (nonatomic,   copy, readonly) NSString *value;
@property (nonatomic,   copy, readonly) NSString *server;
@property (nonatomic, readonly) int ttl;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) long long timeStamp;
@property (nonatomic, readonly) TAQNRecordSource source;

- (instancetype)init:(NSString *)value
                 ttl:(int)ttl
                type:(int)type
              source:(TAQNRecordSource)source;

- (instancetype)init:(NSString *)value
                 ttl:(int)ttl
                type:(int)type
           timeStamp:(long long)timeStamp
              server:(NSString *)server
              source:(TAQNRecordSource)source;

- (BOOL)expired:(long long)time;

@end
