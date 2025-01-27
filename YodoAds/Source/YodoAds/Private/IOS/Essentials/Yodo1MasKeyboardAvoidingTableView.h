

#import <UIKit/UIKit.h>
#import "UIScrollView+Yodo1MasKeyboardAvoidingAdditions.h"

@interface Yodo1MasKeyboardAvoidingTableView : UITableView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
