#import <Foundation/Foundation.h>

#import "YDYTTCalibratedTime.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTCalibratedTimeWithNTP : YDYTTCalibratedTime

- (void)recalibrationWithNtps:(NSArray *)ntpServers;

@end

NS_ASSUME_NONNULL_END
