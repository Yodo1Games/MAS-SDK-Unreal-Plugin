//
//  YDYTTEncryptAlgorithm.h
//  YDYThinkingSDK
//
//  Created by wwango on 2022/1/27.
//  具体的加密遵守的协议

NS_ASSUME_NONNULL_BEGIN

@protocol YDYTTEncryptAlgorithm <NSObject>

/// 加密数据
- (nullable NSString *)encryptData:(NSData *)data;

/// 当前的加密算法
- (NSString *)algorithm;

@end

NS_ASSUME_NONNULL_END
