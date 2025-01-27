
#import <UIKit/UIKit.h>

@protocol Yodo1MasKeyboardAvoidingAdditionsOptions <NSObject>
- (BOOL)Yodo1MasKeyboardAvoiding_idealOffsetForViewAlwaysTop;
@end

@interface UIScrollView (Yodo1MasKeyboardAvoidingAdditions)
- (BOOL)Yodo1MasKeyboardAvoiding_focusNextTextField;
- (void)Yodo1MasKeyboardAvoiding_scrollToActiveTextField;

- (void)Yodo1MasKeyboardAvoiding_keyboardWillShow:(NSNotification*)notification;
- (void)Yodo1MasKeyboardAvoiding_keyboardWillHide:(NSNotification*)notification;
- (void)Yodo1MasKeyboardAvoiding_updateContentInset;
- (void)Yodo1MasKeyboardAvoiding_updateFromContentSizeChange;
- (void)Yodo1MasKeyboardAvoiding_assignTextDelegateForViewsBeneathView:(UIView*)view;
- (UIView*)Yodo1MasKeyboardAvoiding_findFirstResponderBeneathView:(UIView*)view;
-(CGSize)Yodo1MasKeyboardAvoiding_calculatedContentSizeFromSubviewFrames;
@end
