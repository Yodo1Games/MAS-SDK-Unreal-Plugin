//
//  YDYTTEncryptManager.h
//  YDYThinkingSDK
//
//  Created by wwango on 2022/1/21.
//  加密插件管理类

#import <Foundation/Foundation.h>

#import "YDYTTConfig.h"

@class YDYTTEventRecord;

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTEncryptManager : NSObject

/// 是否可以用，yes: 加密插件可用，no：插件未生成，需检查配置
@property(nonatomic, assign, getter=isValid) BOOL valid;

/// 初始化
- (instancetype)initWithConfig:(YDYTTConfig *)config;

/// 更新远程密钥信息
- (void)handleEncryptWithConfig:(NSDictionary *)encryptConfig;

/// 加密数据
- (NSDictionary *)encryptJSONObject:(NSDictionary *)obj;

@end

NS_ASSUME_NONNULL_END
