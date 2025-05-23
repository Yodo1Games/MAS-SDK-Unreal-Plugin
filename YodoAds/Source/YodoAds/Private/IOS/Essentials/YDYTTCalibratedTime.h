#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YDYTTCalibratedTime : NSObject

@property (nonatomic, assign) NSTimeInterval systemUptime;
@property (nonatomic, assign) NSTimeInterval serverTime;
@property (nonatomic, assign) BOOL stopCalibrate;

+ (instancetype)sharedInstance;

- (void)recalibrationWithTimeInterval:(NSTimeInterval)timestamp;

@end

NS_ASSUME_NONNULL_END
