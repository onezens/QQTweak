//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBBizNetworkLogicDelegate.h"

@class FLLabel, FLView, NSString, QIMUserIconView, QQStoryUserIconView, TBAvatarView, TBStoryPlayerUserinfoModel, UIActivityIndicatorView, UIImageView;

@interface TBStoryPlayerUserinfoView : UIView <TBBizNetworkLogicDelegate>
{
    TBAvatarView *_avatarView;
    FLView *_infoWrap;
    FLLabel *_nickLabel;
    FLLabel *_descriptionLabel;
    QQStoryUserIconView *_plateIconView;
    FLView *_focusBtnView;
    UIActivityIndicatorView *_focusLoadingView;
    UIImageView *_accessAuthorityIconView;
    TBStoryPlayerUserinfoModel *_userInfo;
    long long _userType;
    long long _playMode;
    QIMUserIconView *_qimIconView;
    id <TBStoryPlayerUserinfoViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)accessAuthorityIcon;
- (void)dealloc;
@property(nonatomic) __weak id <TBStoryPlayerUserinfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickAccessAuthorityIcon;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)handleLocationFail;
- (void)handleLocationResult:(id)arg1;
- (void)initUI;
- (id)initWithOrigin:(struct CGPoint)arg1 userType:(long long)arg2 playMode:(long long)arg3 userInfo:(id)arg4;
- (_Bool)isStringValued:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onUserViewClick;
- (void)refreshDescriptionLabel;
- (void)refreshUI;
- (void)rspSubscriptOpetarion:(id)arg1;
- (void)tapGestureFocus;
- (void)updateInfoWrapMaxWidth:(_Bool)arg1;
- (void)updateUIWithUserinfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

