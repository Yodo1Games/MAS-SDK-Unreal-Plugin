

#import <UIKit/UIKit.h>
#import "UIScrollView+Yodo1MasKeyboardAvoidingAdditions.h"

@interface Yodo1MasKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>
- (void)contentSizeToFit;
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
