//
//  Yodo1MasUMPHelper.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/7/10.
//

#import <Foundation/Foundation.h>

#import "Yodo1MasCallback.h"

typedef NS_ENUM(NSUInteger, Yodo1MasUMPPurposeConsent) {
    Yodo1MasUMPPurposeConsentNull = 0,
    Yodo1MasUMPPurposeConsentOne = 1,
    Yodo1MasUMPPurposeConsentNone = 2,
};

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasError;
typedef void (^Yodo1MasUMPRequestCompletionHandler)(Yodo1MasError * _Nullable, BOOL showPop);

@interface Yodo1MasUMPHelper : NSObject

+ (Yodo1MasUMPHelper *)sharedInstance;
- (void)requestWithUnderAgeOfConsent:(BOOL)isUnderAge completion:(Yodo1MasUMPRequestCompletionHandler)completion;

- (BOOL)isEUCountry;
- (Yodo1MasUMPPurposeConsent)getPurposeConsent;

- (void)showUmpForExistingUser:(Yodo1MasUmpCompletionHandler _Nullable)completionHandler;

@end

NS_ASSUME_NONNULL_END
