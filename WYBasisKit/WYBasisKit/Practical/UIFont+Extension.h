//
//  UIFont+Extension.h
//  WYBasisKit
//
//  Created by jacke－xu on 16/9/4.
//  Copyright © 2016年 jacke-xu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (Extension)

/** 适配不同屏幕字体大小 */
+ (UIFont *)adjustFont:(UIFont *)font;

@end
