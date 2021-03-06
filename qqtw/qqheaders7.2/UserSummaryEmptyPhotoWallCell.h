//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface UserSummaryEmptyPhotoWallCell : UserSummaryBaseCell
{
    NSMutableArray *_assetsList;
    NSMutableArray *_allAssetsList;
    NSMutableArray *_imageViewsArray;
    UIView *_subView;
    UIImageView *_starImageView;
    _Bool _isFriendCard;
    id <UserSummaryEmptyPhotoWallDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_button;
    NSString *_title;
    NSString *_subTitle;
    long long _section;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (id)backgroundViewRectsArray;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <UserSummaryEmptyPhotoWallDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editButtonClick:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isFriendCard; // @synthesize isFriendCard=_isFriendCard;
- (void)layoutSubviews;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

