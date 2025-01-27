//
//  YDYTTPresetProperties+TDDisProperties.h
//  YDYThinkingSDK
//
//  Created by wwango on 2021/12/7.
//  不能使用的

#import "YDYTTPresetProperties.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTPresetProperties (YDYTDDisProperties)

@property(class, nonatomic, readonly) BOOL ydy_disableStartReason;
@property(class, nonatomic, readonly) BOOL ydy_disableDisk;
@property(class, nonatomic, readonly) BOOL ydy_disableRAM;
@property(class, nonatomic, readonly) BOOL ydy_disableFPS;
@property(class, nonatomic, readonly) BOOL ydy_disableSimulator;

/// 需要过滤的预置属性
+ (NSArray*)disPresetProperties;

/// 过滤预置属性
/// @param dataDic 外层property
+ (void)handleFilterDisPresetProperties:(NSMutableDictionary *)dataDic;

@end

NS_ASSUME_NONNULL_END
