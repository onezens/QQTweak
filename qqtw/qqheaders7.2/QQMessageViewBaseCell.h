//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "QQDynamicAvatarViewDelegate.h"
#import "QQMessageViewCellDetailProtocl.h"
#import "QQMessageViewCellLayoutProtocol.h"
#import "QQMessageViewCellMoreOptionProtocol.h"
#import "QQMessageViewCellSetDataProtocol.h"
#import "QQMoreOptionTableViewCellDelegate.h"
#import "QQPreviewActionDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, QQAvatarView, QQRecentLabel, QQRecentMessageModel, QQUnReadCountAnimationView, UIFont, UIImageView, UILabel;

@interface QQMessageViewBaseCell : QQMoreOptionTableViewCell <UIActionSheetDelegate, QQMoreOptionTableViewCellDelegate, QQMessageViewCellDetailProtocl, QQMessageViewCellSetDataProtocol, QQMessageViewCellLayoutProtocol, QQMessageViewCellMoreOptionProtocol, QQPreviewActionDelegate, QQDynamicAvatarViewDelegate>
{
    UILabel *_timeLabel;
    UILabel *_nickLabel;
    QQRecentLabel *_detailLabel;
    QQAvatarView *_headView;
    UILabel *_searchDetailLabel;
    UIImageView *_sendStateView;
    UIImageView *_draftIcon;
    QQUnReadCountAnimationView *_readTagView;
    NSString *_nickname;
    NSString *_uin;
    QQRecentMessageModel *_model;
    _Bool _lastEditState;
    _Bool _noTimeLabel;
    _Bool _sendState;
    _Bool _isDrafting;
    _Bool _simpleType;
    UIFont *_nickFont;
    UIFont *_detailFont;
    UIFont *_timeFont;
    struct CGRect _textRect;
    struct CGRect _detailTotalRect;
    _Bool _isDisplayed;
}

- (void)CancelSendImag:(struct CGRect)arg1;
- (void)SetSendImag:(_Bool)arg1 Frame:(struct CGRect)arg2;
- (void)SetSendTab:(id)arg1;
- (void)calculateDetailLableFrame;
- (id)createMessageViewCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)createVoiceOverLocalizedStringNew:(id)arg1 unReadCount:(int)arg2 unReadText:(id)arg3 content:(id)arg4 time:(id)arg5 localizedKeyName:(id)arg6;
- (id)cutString:(id)arg1 maxWidth:(short)arg2;
- (void)dealloc;
@property(retain, nonatomic) QQRecentLabel *detailLabel; // @dynamic detailLabel;
@property(retain, nonatomic) UIImageView *draftIcon; // @dynamic draftIcon;
- (double)getBaseCellDetailStartX:(double)arg1;
- (double)getC2CCellDetailStartX:(double)arg1;
- (id)getCurrentIndexPathInTable;
- (struct CGRect)getDetailRect;
- (struct CGRect)getDetailRectWithIconSize:(struct CGSize)arg1;
- (double)getGroupDetailStartX:(double)arg1;
- (struct CGRect)getNickRect;
- (id)getRightBtnContext:(int)arg1 customContext:(id)arg2;
- (int)getRightBtnCount;
- (id)getRightButtonTitle:(int)arg1;
- (double)getStartX:(double)arg1;
- (struct CGRect)getTextRect;
- (id)getUnknownMsgTypeContent:(int)arg1 content:(id)arg2;
- (int)getUnreadMarkState;
@property(retain, nonatomic) QQAvatarView *headView; // @dynamic headView;
- (void)initBeforeLayout;
- (void)initBeforeSetData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
- (void)layoutForDetailLabel;
- (void)layoutForFriendSelector;
- (void)layoutForNickAndHeadView;
- (void)layoutForOtherViewWithNoStateView;
- (void)layoutForSendStateView;
- (void)layoutForTencentIcon;
- (void)layoutForTimeLabel;
- (void)layoutForUnreadCountView;
- (void)layoutModelResultFromSession:(id)arg1 label:(id)arg2;
- (void)layoutNickLabelText:(id)arg1 searchDetailText:(id)arg2;
- (void)layoutResultFromLabel:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *nickLabel; // @dynamic nickLabel;
- (void)onDynamicAvatarReadyToPlayOnce:(id)arg1;
- (void)onFontScaleChanged;
- (void)onPreviewActionDidSelect:(int)arg1 actionItem:(id)arg2;
- (id)onPreviewActionItemCreate;
- (void)onRightButtonSelected:(int)arg1 context:(id)arg2;
- (void)prepareForReuse;
@property(retain, nonatomic) QQUnReadCountAnimationView *readTagView; // @dynamic readTagView;
- (void)removeUnreadMarkState;
@property(retain, nonatomic) UILabel *searchDetailLabel; // @dynamic searchDetailLabel;
@property(retain, nonatomic) UIImageView *sendStateView; // @dynamic sendStateView;
- (void)setData:(id)arg1;
- (void)setDataForDetailView;
- (void)setDataForHeadView;
- (void)setDataForNickView;
- (void)setDataForTimeView;
- (void)setDataForUnreadCountView;
- (void)setDataForVoiceOver;
- (void)setDetailLabelFrame:(double)arg1 width:(double)arg2;
@property(nonatomic) _Bool simpleType; // @dynamic simpleType;
- (void)setSkinIsSetDefault:(_Bool)arg1;
- (void)setTopView;
- (_Bool)shouldPlayOnceDynamicAvatar:(id)arg1;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 buttonContextForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 skinImageNormalForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
@property(retain, nonatomic) UILabel *timeLabel; // @dynamic timeLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDrafting; // @dynamic isDrafting;
@property(retain, nonatomic) QQRecentMessageModel *model; // @dynamic model;
@property(nonatomic) _Bool noTimeLabel; // @dynamic noTimeLabel;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

