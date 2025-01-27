//
//  Yodo1MasPresentationBaseVC.h
//
//  Created by 周玉震 on 2021/11/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasPresentationBaseVC : UIViewController<UIPopoverPresentationControllerDelegate>

- (void)setContentSize;
- (void)showPopoverInVC:(UIViewController *)vc sourceView:(UIView *)view;
- (void)showPopoverInVC:(UIViewController *)vc sourceView:(UIView *)view animated:(BOOL)animated;
- (void)showDialogInVC:(UIViewController *)controller;
- (void)showDialogInVC:(UIViewController *)controller animated:(BOOL)animated;

// 此方法放在子模块的类中，用于定位SDK中的语言文件
+ (NSBundle *)LocalizedBundle;
+ (NSString *)localizedString:(NSString *)key defaultString:(NSString *)value;

@end

NS_ASSUME_NONNULL_END
