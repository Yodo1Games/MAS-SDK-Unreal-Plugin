//
//  Yodo1MasAdReportHelper.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/3/27.
//

#import <Foundation/Foundation.h>
#import "Yodo1MasAdReport.h"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasAdReportHelper : NSObject

+ (Yodo1MasAdReportHelper *)sharedInstance;
- (void)showToast:(NSString *)toast completion:(void (^ __nullable)(BOOL finished))completion;
- (void)sendReportWithAd:(Yodo1MasAdRecord *)record
                   issue:(Yodo1MasAdIssueTypeDesc *)issue
                   email:(NSString * _Nullable)email
                    desc:(NSString * _Nullable)desc
                 success:(nullable void (^)(void))success
                 failure:(nullable void (^)(NSError *error))failure;
- (void)retrySendReport;
- (BOOL)hasRecord;
- (void)addAdRecord:(Yodo1MasAdRecord *)record;
- (NSArray<Yodo1MasAdRecord *> *)getAdList;
- (NSString *)getIP;

@end

NS_ASSUME_NONNULL_END
