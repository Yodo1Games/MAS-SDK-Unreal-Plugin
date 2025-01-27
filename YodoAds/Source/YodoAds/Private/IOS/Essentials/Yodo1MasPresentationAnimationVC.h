//
//  Yodo1MasPresentationAnimationVC.h
//
//  Created by 周玉震 on 2021/11/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasPresentationAnimationVC : UIPresentationController<UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIColor *dimmingColor;
@property (nonatomic, assign) CGPoint dimmingOffest;
@property (nonatomic, assign) CGPoint contentOffest;
@property (nonatomic, assign) BOOL tapDismiss;

@end

NS_ASSUME_NONNULL_END
