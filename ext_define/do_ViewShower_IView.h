//
//  TYPEID_UI.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol do_ViewShower_IView <NSObject>

@required
//属性方法

//同步或异步方法
- (void)addViews:(NSArray *)parms;
- (void)removeView:(NSArray *)parms;
- (void)showView:(NSArray *)parms;
- (void)getView:(NSArray *)parms;
@end
