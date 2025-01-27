//
//  Yodo1MasDebuggerIntegrationDetailController.h
//  Yodo1MasCore
//
//  Created by 周玉震 on 2023/4/25.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasPresentationBaseVC.h"

NS_ASSUME_NONNULL_BEGIN

@class Yodo1MasDebuggerNetwork;
@interface Yodo1MasDebuggerIntegrationDetailController : Yodo1MasPresentationBaseVC

- (instancetype)initWithNetwork:(Yodo1MasDebuggerNetwork *)network;

@end

NS_ASSUME_NONNULL_END
