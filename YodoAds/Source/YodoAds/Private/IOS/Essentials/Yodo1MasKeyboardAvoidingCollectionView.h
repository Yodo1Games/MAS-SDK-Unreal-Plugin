
#import <UIKit/UIKit.h>

#if ! TARGET_OS_TV

#import "UIScrollView+Yodo1MasKeyboardAvoidingAdditions.h"

@interface Yodo1MasKeyboardAvoidingCollectionView : UICollectionView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end

#endif
