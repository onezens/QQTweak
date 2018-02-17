//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "FavCheckable.h"
#import "QQMoreOptionTableViewCellDelegate.h"
#import "UIActionSheetDelegate.h"

@class BaseInfoModel, FavCheckbox, NSString, QQAvatarView, UIActivityIndicatorView, UIImageView, UILabel;

@interface FavoritesCell : QQMoreOptionTableViewCell <UIActionSheetDelegate, FavCheckable, QQMoreOptionTableViewCellDelegate>
{
    _Bool _selectable;
    _Bool _showFolderName;
    QQAvatarView *_headView;
    FavCheckbox *_checkbox;
    UILabel *_nickname;
    UILabel *_time;
    UIImageView *_warning;
    UIActivityIndicatorView *_indicator;
    NSString *_uin;
    BaseInfoModel *_model;
    id <FavoritesCellDelegate> _delegate;
}

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool checked;
@property(readonly, nonatomic) double contentWidth;
- (void)dealloc;
- (void)delItem;
- (id)getCellVoiceOverTime;
- (void)handleWarningTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)layoutContent:(_Bool)arg1;
- (void)layoutSubviews;
- (id)newLabelWithFrame:(struct CGRect)arg1 color:(int)arg2 fontSize:(double)arg3;
- (id)newRecentLabelWithFrame:(struct CGRect)arg1 color:(int)arg2 fontSize:(double)arg3 emotionSize:(double)arg4;
@property(readonly, nonatomic) UILabel *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) BaseInfoModel *model; // @dynamic model;
@property(nonatomic) _Bool selectable; // @dynamic selectable;
@property(nonatomic) _Bool showFolderName; // @dynamic showFolderName;
- (void)showLoading:(_Bool)arg1;
- (void)showUploading:(_Bool)arg1;
- (void)showWarning:(_Bool)arg1;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 skinImageNormalForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
@property(readonly, nonatomic) UILabel *time; // @synthesize time=_time;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FavoritesCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
