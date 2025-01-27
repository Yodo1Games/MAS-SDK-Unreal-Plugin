#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSObject (YDYYDYTDSwizzle)

+ (BOOL)ydy_td_swizzleMethod:(SEL)origSel withMethod:(SEL)altSel error:(NSError **)error;
+ (BOOL)ydy_td_swizzleClassMethod:(SEL)origSel withClassMethod:(SEL)altSel error:(NSError **)error;

@end
NS_ASSUME_NONNULL_END
