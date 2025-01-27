//
//  TAQNDnsError.h
//  Doh
//
//  Created by yangsen on 2021/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern const int kTAQNDomainHijackingCode;
extern const int kTAQNDomainNotOwnCode;
extern const int kTAQNDomainSeverError;

extern const int kTAQNDnsMethodErrorCode;
extern const int kTAQNDnsInvalidParamCode;
extern const int kTAQNDnsResponseBadTypeCode;
extern const int kTAQNDnsResponseBadClassCode;
extern const int kTAQNDnsResponseFormatCode;

#define kTAQNDnsErrorDomain @"qiniu.dns"

@interface TAQNDnsError : NSObject

+ (NSError *)error:(int)code desc:(NSString *)desc;

@end

#define kTAQNDnsMethodError(description)            [TAQNDnsError error:kTAQNDnsMethodErrorCode desc:description]
#define kTAQNDnsInvalidParamError(description)      [TAQNDnsError error:kTAQNDnsInvalidParamCode desc:description]
#define kTAQNDnsResponseBadTypeError(description)   [TAQNDnsError error:kTAQNDnsResponseBadTypeCode desc:description]
#define kTAQNDnsResponseBadClassError(description)  [TAQNDnsError error:kTAQNDnsResponseBadClassCode desc:description]
#define kTAQNDnsResponseFormatError(description)    [TAQNDnsError error:kTAQNDnsResponseFormatCode desc:description]

NS_ASSUME_NONNULL_END
