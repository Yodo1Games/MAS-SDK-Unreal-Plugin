//
//  Yodo1MasDebuggerController.h
//  AFNetworking
//
//  Created by 周玉震 on 2023/3/17.
//

#import <UIKit/UIKit.h>
#import "Yodo1MasPresentationBaseVC.h"

NS_ASSUME_NONNULL_BEGIN

@interface Yodo1MasDebuggerItem : NSObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, copy) NSString *arrow;
@property (nonatomic, strong) id obj;

- (instancetype)initWithKey:(NSString *)key title:(NSString *)title value:(NSString * _Nullable)value status:(NSInteger)status arrow:(NSString * _Nullable)arrow;

@end

@interface Yodo1MasDebuggerController : Yodo1MasPresentationBaseVC

@end

NS_ASSUME_NONNULL_END
