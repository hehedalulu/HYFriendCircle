//
//  HYTopView.h
//  HYFriendCircle
//
//  Created by hoy's on 2017/8/4.
//  Copyright © 2017年 olivemouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"

@interface HYTopView : UIView
//朋友圈顶部的背景图片
@property (strong, nonatomic) UIImageView * BackgroundImageView;
//用户的头像
@property (strong, nonatomic) UIImageView * HeadShowView;
//用户的名字
@property (strong, nonatomic) UILabel * NameShowView;
//接口函数
- (void)initTopViewWithBackground: (UIImage *)backgroundImage
                        HeadImage: (UIImage *)headImage
                         UserName: (NSString *)userName;

@end
