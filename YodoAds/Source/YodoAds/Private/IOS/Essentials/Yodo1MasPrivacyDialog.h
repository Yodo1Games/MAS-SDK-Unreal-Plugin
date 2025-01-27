//
//  Yodo1MasPrivacyDialog.h
//  AFNetworking
//
//  Created by 周玉震 on 2021/8/23.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasPresentationBaseVC.h"

NS_ASSUME_NONNULL_BEGIN

#define kYodo1MasPrivacyDialog      @"Yodo1MasPrivacyDialog"
#define kYodo1MasPrivacyAge         @"Yodo1MasPrivacyAge"

@interface Yodo1MasPrivacyDialog : Yodo1MasPresentationBaseVC

@property (nonatomic, copy) void (^privacyEnterBlock)(NSInteger);

@end

NS_ASSUME_NONNULL_END
