//
//  TAQNNetworkInfo.h
//  TAHappyDNS
//
//  Created by bailong on 15/6/25.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>

extern const int kTAQNNO_NETWORK;
extern const int kTAQNWIFI;
extern const int kTAQNMOBILE;

extern const int kTAQNISP_GENERAL;
extern const int kTAQNISP_CTC;
extern const int kTAQNISP_DIANXIN;
extern const int kTAQNISP_CNC;
extern const int kTAQNISP_LIANTONG;
extern const int kTAQNISP_CMCC;
extern const int kTAQNISP_YIDONG;
extern const int kTAQNISP_OTHER;

@interface TAQNNetworkInfo : NSObject

@property (nonatomic, readonly) int networkConnection;
@property (nonatomic, readonly) int provider;

- (instancetype)init:(int)connecton provider:(int)provider;

- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToInfo:(TAQNNetworkInfo *)info;

+ (instancetype)noNet;

+ (instancetype)normal;

+ (BOOL)isNetworkChanged;

+ (NSString *)getIp;

@end
