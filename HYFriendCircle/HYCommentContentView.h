//
//  CommentContentView.h
//  HYFriendCircle
//
//  Created by hoy's on 2017/8/4.
//  Copyright © 2017年 olivemouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"

@interface HYCommentContentView : UIView
//点赞者清单
@property (strong ,nonatomic) UILabel * LikePeople;
//评论列表
@property (strong, nonatomic) UILabel * CommentList;
//接口函数
- (void)initCommentContentViewWithList: (NSDictionary *)CommentList;

@end
