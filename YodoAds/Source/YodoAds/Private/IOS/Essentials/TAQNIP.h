//
//  TAQNIPV6.h
//  TAHappyDNS
//
//  Created by bailong on 16/5/25.
//  Copyright © 2016年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

extern int ta_qn_localIp(char *buf, int buf_size);
extern void ta_qn_nat64(char *buf, int buf_size, uint32_t ipv4_addr);

@interface TAQNIP : NSObject

+ (BOOL)ta_isV6;

+ (NSString *)adaptiveIp:(NSString *)ipv4;

+ (NSString *)local;

// ipv6 in url like http://[::xxx]/
+ (NSString *)ipHost:(NSString *)ip;

+ (NSString *)nat64:(NSString *)ip;

+ (BOOL)isIpV6FullySupported;

+ (BOOL)mayBeIpV4:(NSString *)domain;

@end
