//
//  PAGQueueManagerConfig.h
//  BUFoundation
//
//  Created by Rush.D.Xzj on 2021/8/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PAGQueueManagerConfig : NSObject

@property (nonatomic, copy) NSString *version;

+ (instancetype)defaultConfig;

@end

NS_ASSUME_NONNULL_END
