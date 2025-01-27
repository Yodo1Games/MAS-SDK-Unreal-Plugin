//
//  YDYTTAESEncryptor.h
//  YDYThinkingSDK
//
//  Created by wwango on 2022/1/21.
//

#import <Foundation/Foundation.h>
#import "YDYTTEncryptAlgorithm.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTAESEncryptor : NSObject <YDYTTEncryptAlgorithm>

@property (nonatomic, copy, readonly) NSData *key;

@end

NS_ASSUME_NONNULL_END
