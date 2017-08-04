//
//  HYSingCellView.h
//  HYFriendCircle
//
//  Created by hoy's on 2017/8/4.
//  Copyright © 2017年 olivemouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HYCommentContentView.h"

@interface HYSingCellView : UIView

@property (strong, nonatomic) UIImageView * HeadView;

@property (strong, nonatomic) UILabel * UserName;

@property (strong, nonatomic) UILabel * Message;

@property (strong, nonatomic) NSArray * Photos;

@property (strong, nonatomic) UILabel * ShowTime;

@property (strong, nonatomic) UILabel * Loaction;

@property (strong, nonatomic) UIButton * LikeButton;

@property (strong, nonatomic) UIButton * CommentButton;

@property (strong, nonatomic) HYCommentContentView * CommentView;

@end
