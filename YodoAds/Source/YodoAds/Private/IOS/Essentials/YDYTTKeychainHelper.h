#import <Foundation/Foundation.h>

@interface YDYTTKeychainHelper : NSObject

- (void)saveDeviceId:(NSString *)string;
- (void)saveInstallTimes:(NSString *)string;
- (void)readOldKeychain;

- (NSString *)readDeviceId;
- (NSString *)readInstallTimes;
- (NSString *)getInstallTimesOld;
- (NSString *)getDeviceIdOld;

@end
