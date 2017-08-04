//
//  CommentContentView.h
//  HYFriendCircle
//
//  Created by hoy's on 2017/8/4.
//  Copyright © 2017年 olivemouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HYCommentContentView : UIView

@property (strong ,nonatomic) UILabel * CommentPeople;

@property (strong, nonatomic) UILabel * CommentList;

- (void)initCommentContentViewWithList: (NSDictionary *)CommentList;

@end
