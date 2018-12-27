//
//  CommonDef.h
//  SWYDateTimePickerView
//
//  Created by 淘翼购 on 2018/10/17.
//  Copyright © 2018年 shenwuyue. All rights reserved.
//

#ifndef CommonDef_h
#define CommonDef_h

//判断是否是iPad
#define Is_iPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhone4系列
#define Is_iPhone_4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhone5系列
#define Is_iPhone_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhone6系列
#define Is_iPhone_6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhone6 plus系列
#define Is_iPhone_6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhoneX
#define Is_iPhone_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPHoneXR
#define Is_iPhone_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhoneXS
#define Is_iPhone_XS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
//判断iPhoneXS Max
#define Is_iPhone_XS_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !Is_iPad : NO)
// 判断是否有底部area
#define Is_Has_Bottom_Area (Is_iPhone_X==YES || Is_iPhone_XR ==YES || Is_iPhone_XS== YES || Is_iPhone_XS_Max== YES)

#pragma mark - 页面值设置
#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenHeight (([UIScreen mainScreen].bounds.size.height) - (Is_Has_Bottom_Area ? 34. : 0.))

#define StatusBarHeight (Is_Has_Bottom_Area ? 44. : 20.)
#define NavigationBarHeight 44.
#define HeaderHeight (NavigationBarHeight + StatusBarHeight)
#define TabBarHeight 49.0

#pragma mark - 公用函数
#define DDLog(xx, ...)  NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#define SWYNSStringFromFormat(fmt,...) [NSString stringWithFormat:fmt,##__VA_ARGS__]


#endif /* CommonDef_h */
