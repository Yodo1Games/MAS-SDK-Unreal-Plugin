//
//  TAQNHex.h
//  TAHappyDNS
//
//  Created by bailong on 15/7/31.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

char *ta_qn_encodeHexData(char *output_buf, const char *data, int data_size, BOOL up);

@interface TAQNHex : NSObject

+ (NSString *)encodeHexData:(NSData *)data;
+ (NSString *)encodeHexString:(NSString *)str;

+ (NSData *)ta_decodeHexString:(NSString *)hex;
+ (NSString *)ta_decodeHexToString:(NSString *)hex;

@end
