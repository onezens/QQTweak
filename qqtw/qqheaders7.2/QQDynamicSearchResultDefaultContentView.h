//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NearbyFriendCellTag, QQAsynUrlImageView, QQAvatarView, QQDynamicDefaultItemModel, UIImageView, UILabel;

@interface QQDynamicSearchResultDefaultContentView : UIView
{
    UIView *_leftView;
    QQAvatarView *_avatarView;
    UIImageView *_richMediaIcon;
    UIImageView *_leftMaskView;
    UIView *_rightView;
    UILabel *_headLine;
    UILabel *_middleLine;
    UILabel *_footLine;
    QQAsynUrlImageView *_headLineIcon;
    UILabel *_timeLabel;
    NearbyFriendCellTag *_categoryTag;
    NSMutableArray *_starIconArray;
    QQDynamicDefaultItemModel *_datasource;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(retain, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (double)calHeightForCell;
- (double)calLeftPartHeight;
- (double)calRightPartHeight;
- (double)calRightPartWidth;
- (id)createSimpleAttributedLabel;
- (id)createSimpleLabel;
- (id)createSimpleTagView;
@property(retain, nonatomic) QQDynamicDefaultItemModel *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UILabel *footLine; // @synthesize footLine=_footLine;
- (id)genMainContentView:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *headLine; // @synthesize headLine=_headLine;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLeftPart;
- (void)layoutRightPart;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UILabel *middleLine; // @synthesize middleLine=_middleLine;
- (struct CGSize)preferredLeftViewSize;
- (void)resetRightViewFrame;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
- (void)setDatasourceAndUpdateAppearance:(id)arg1;
- (void)updateCellView;
- (void)updateHeightForCell;

@end

