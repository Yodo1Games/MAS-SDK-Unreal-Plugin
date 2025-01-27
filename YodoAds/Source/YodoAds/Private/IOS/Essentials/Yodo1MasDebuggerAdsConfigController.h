//
//  Yodo1MasDebuggerAdsConfigController.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/3/17.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasCommon.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasDebuggerItem;
@interface Yodo1MasDebuggerAdsConfigController : UIViewController

@property (nonatomic, assign) Yodo1MasAdType adType;
@property (nonatomic, strong) Yodo1MasDebuggerItem *item;

@end

NS_ASSUME_NONNULL_END
