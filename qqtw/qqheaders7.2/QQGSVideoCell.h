//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "QQGSCellProtocol.h"
#import "QQMoreOptionTableViewCellDelegate.h"

@class NSString, QQAvatarView, QQGroupStoryDetaiCellModel, QQStoryUrlImageView, UIActivityIndicatorView, UIImageView, UILabel;

@interface QQGSVideoCell : QQMoreOptionTableViewCell <QQMoreOptionTableViewCellDelegate, QQGSCellProtocol>
{
    _Bool _isCaptureMode;
    _Bool _needDeleteOption;
    QQGroupStoryDetaiCellModel *_model;
    id <QQGSVideoCellDelegate> _gsDelegate;
    QQStoryUrlImageView *_thumbImgView;
    QQAvatarView *_avatarImgView;
    UILabel *_nickNameLabel;
    UILabel *_timeLabel;
    UILabel *_captureLabel;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_retryIcon;
    QQAvatarView *_bigVIconView;
}

+ (double)height;
- (void).cxx_destruct;
- (void)addObserver;
@property(retain, nonatomic) QQAvatarView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) QQAvatarView *bigVIconView; // @synthesize bigVIconView=_bigVIconView;
@property(retain, nonatomic) UILabel *captureLabel; // @synthesize captureLabel=_captureLabel;
- (void)dealloc;
@property(nonatomic) __weak id <QQGSVideoCellDelegate> gsDelegate; // @synthesize gsDelegate=_gsDelegate;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)initCaptureUI;
- (void)initVideoUI;
- (id)initWithReuseIdentifier:(id)arg1 isCaptureCell:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isCaptureMode; // @synthesize isCaptureMode=_isCaptureMode;
- (_Bool)isSelfBigV;
@property(retain, nonatomic) QQGroupStoryDetaiCellModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool needDeleteOption; // @synthesize needDeleteOption=_needDeleteOption;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)onHandleGetBigVUserInfo;
- (void)p_layoutCommon;
- (void)p_layoutUserInfoAsBigV;
- (void)p_layoutUserInfoAsNormal;
- (void)p_layoutVideoUploadFailed;
- (void)p_layoutVideoUploaded;
- (void)p_layoutVideoUploading;
- (void)prepareForReuse;
- (void)removeObserver;
@property(retain, nonatomic) UIImageView *retryIcon; // @synthesize retryIcon=_retryIcon;
- (void)setNick:(id)arg1 uin:(id)arg2;
@property(retain, nonatomic) QQStoryUrlImageView *thumbImgView; // @synthesize thumbImgView=_thumbImgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)showBigVIcon:(_Bool)arg1 iconUrl:(id)arg2;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 skinImageNormalForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)updateCellState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

