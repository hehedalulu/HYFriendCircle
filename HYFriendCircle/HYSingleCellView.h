//
//  HYSingleCellView.h
//  HYFriendCircle
//
//  Created by hoy's on 2017/8/4.
//  Copyright © 2017年 olivemouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HYCommentContentView.h"
#import "Masonry.h"

@interface HYSingleCellView : UIView
//动态的发布者头像
@property (strong, nonatomic) UIImageView * HeadView;
//动态发布者的昵称
@property (strong, nonatomic) UILabel * UserName;
//动态发布者的动态内容
@property (strong, nonatomic) UILabel * Message;
//动态发布者的图片内容
@property (strong, nonatomic) NSArray * Photos;
//动态发布者的发布时间
@property (strong, nonatomic) UILabel * ShowTime;
//动态发布者的发布地点
@property (strong, nonatomic) UILabel * Loaction;
//发布区的点赞按钮
@property (strong, nonatomic) UIButton * LikeButton;
//发布区的评论按钮
@property (strong, nonatomic) UIButton * CommentButton;
//发布区的评论区域内容
@property (strong, nonatomic) HYCommentContentView * CommentView;
//接口函数
- (void)initSingleCellViewWithHeadView: (UIImage *)headView
                              UserName: (NSString *)userName
                               Message: (NSString *)message
                                Photos: (NSArray *)photos
                              ShowTime: (NSString *)showtime
                              Location: (NSString *)location
                        CommentContent: (NSDictionary *)commentContent;

@end
