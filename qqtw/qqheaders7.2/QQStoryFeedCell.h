//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MulMemSelBusiProcessDelegate.h"
#import "TBPicListViewDelegate.h"
#import "TBStoryVideoPlayViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, QIMUserIconView, QQAvatarView, QQStoryMultiUserAvatarView, QQStoryUserIconView, QQStoryVideoCoverView, QQStoryVideoPreview, TBBeginGuidanceBubble, TBFeedVideoInfoModel, TBPicListView, TBStoryFeedModel, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface QQStoryFeedCell : UITableViewCell <UIScrollViewDelegate, TBPicListViewDelegate, TBStoryVideoPlayViewDelegate, MulMemSelBusiProcessDelegate>
{
    _Bool _isDragLeftInEnd;
    UIView *_basicInfoView;
    UILabel *_nameLabel;
    UILabel *_accessoryLabel;
    UIImageView *_discoverIcon;
    UIImageView *_retryIcon;
    UILabel *_retryLabel;
    QQAvatarView *_userCover;
    QQStoryMultiUserAvatarView *_shareGroupUserCover;
    QQStoryUserIconView *_identifierIcon;
    TBStoryFeedModel *_cellModel;
    QQStoryVideoCoverView *_singlePicView;
    QQStoryVideoPreview *_previewView;
    _Bool _isRequestMoreVideo;
    UITapGestureRecognizer *_tapGestureLab;
    UITapGestureRecognizer *_tapGestureIcon;
    TBBeginGuidanceBubble *_shareVideoBGBuggle;
    TBBeginGuidanceBubble *_addVideoToShareBGBuggle;
    _Bool _hasAutoPlaying;
    int _lastPlayerStatus;
    id <QQStoryFeedCellDelegate> _cellDelegate;
    unsigned long long _pageSource;
    long long _originalPlaySceneFromPlayer;
    double _autoPlayTime;
    double _autoPlayBeginTime;
    double _videoPlayerTime;
    TBPicListView *_videoCoverScrollView;
    TBFeedVideoInfoModel *_clickVideoInfoModel;
    unsigned long long _retryVideoCount;
    long long _subscribeSeq;
    UIButton *_recommendShareGroupJoinButton;
    UIButton *_recomendUserFollowButton;
    UIButton *_shareGroupAddVideoButton;
    UIButton *_createShareGroupButton;
    QIMUserIconView *_qimUserIcon;
}

+ (long long)getFeedCellHeight:(id)arg1;
- (void).cxx_destruct;
- (void)TBStoryViewPlay:(id)arg1 playStatusChange:(int)arg2;
- (void)TBStoryViewPlayDidStart:(id)arg1 totalTime:(double)arg2;
- (id)accessoryTextForShareGroup:(id)arg1 width:(double)arg2 font:(id)arg3;
@property(nonatomic) double autoPlayBeginTime; // @synthesize autoPlayBeginTime=_autoPlayBeginTime;
@property(nonatomic) double autoPlayTime; // @synthesize autoPlayTime=_autoPlayTime;
@property(nonatomic) __weak id <QQStoryFeedCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)checkIdentifierIcon:(id)arg1;
- (void)checkSubscribeBtn;
- (void)clearAddVideoToShareBeginGuidanceBubble;
- (void)clearShareVideoBeginGuidanceBubble;
@property(retain, nonatomic) TBFeedVideoInfoModel *clickVideoInfoModel; // @synthesize clickVideoInfoModel=_clickVideoInfoModel;
@property(retain, nonatomic) UIButton *createShareGroupButton; // @synthesize createShareGroupButton=_createShareGroupButton;
- (void)dataReportWithAction:(unsigned long long)arg1;
- (void)dealloc;
- (void)doInitNotification;
- (void)doInitRetryUI;
- (void)doInitSinglePicUI;
- (void)doInitUI;
- (void)doInitUserInfoUI;
- (void)doInitVideoListUI;
- (void)editShareGroupNotification:(id)arg1;
- (void)enterMemoryViewController;
- (id)getFeedId;
- (unsigned long long)getFeedTypeReserveItem;
- (id)getLocationStr:(id)arg1;
- (id)getPageSourceReserveItem;
- (id)getTimeLabelStr;
- (id)getUserStateReserveItem;
- (id)getVideoStateReserveItem:(id)arg1;
@property(nonatomic) _Bool hasAutoPlaying; // @synthesize hasAutoPlaying=_hasAutoPlaying;
- (id)initwithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isUserFeed;
- (void)joinShareGroupNotification:(id)arg1;
@property(nonatomic) int lastPlayerStatus; // @synthesize lastPlayerStatus=_lastPlayerStatus;
- (void)layoutAdjust;
- (long long)numberOfPic:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onClickCreatShareGroup:(id)arg1;
- (void)onClickCreatShareGroupBubble:(id)arg1;
- (void)onClickPic:(long long)arg1 withView:(id)arg2;
- (void)onClickRetryBtn;
- (void)onClickSubscribeBtn;
- (void)onClickVideoView:(id)arg1;
- (void)onScrollEndToRight;
- (void)onScrollToRequestMoreData;
- (void)onTapHeader;
- (void)onTapVisitor:(id)arg1;
- (void)onUserRemarkModify;
- (void)openCamera;
- (void)openHistoryStorySelector;
@property(nonatomic) long long originalPlaySceneFromPlayer; // @synthesize originalPlaySceneFromPlayer=_originalPlaySceneFromPlayer;
@property(nonatomic) unsigned long long pageSource; // @synthesize pageSource=_pageSource;
- (void)playFakeAddShareGroup:(id)arg1 withModel:(id)arg2;
- (void)playFirstVideo;
- (long long)playerVideoType;
- (void)presentFormView:(id)arg1 toStoryVideoPlayViewController:(id)arg2 inViewController:(id)arg3;
@property(retain, nonatomic) QIMUserIconView *qimUserIcon; // @synthesize qimUserIcon=_qimUserIcon;
@property(retain, nonatomic) UIButton *recomendUserFollowButton; // @synthesize recomendUserFollowButton=_recomendUserFollowButton;
@property(retain, nonatomic) UIButton *recommendShareGroupJoinButton; // @synthesize recommendShareGroupJoinButton=_recommendShareGroupJoinButton;
- (void)recommendShareGroupJoinButtonTouchUpInside:(id)arg1;
- (void)recommendUserButtonTouchUpInside:(id)arg1;
- (void)reportAutoPlayVideoData;
- (void)resetViewOfPic:(id)arg1 atIndex:(long long)arg2;
- (void)retryPublishFailedGeneralFeed:(id)arg1;
- (void)retryPublishFailedShareGroupFeed:(id)arg1;
@property(nonatomic) unsigned long long retryVideoCount; // @synthesize retryVideoCount=_retryVideoCount;
- (void)rspSubscriptOpetarion:(id)arg1;
- (void)scrollVideoCardToHead:(unsigned long long)arg1;
- (void)scrollVideoCardToHeadByVid:(id)arg1;
- (void)setFeedViewCount:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNameAndLocation;
- (void)setPicList:(_Bool)arg1;
@property(retain, nonatomic) UIButton *shareGroupAddVideoButton; // @synthesize shareGroupAddVideoButton=_shareGroupAddVideoButton;
@property(nonatomic) long long subscribeSeq; // @synthesize subscribeSeq=_subscribeSeq;
@property(retain, nonatomic) TBPicListView *videoCoverScrollView; // @synthesize videoCoverScrollView=_videoCoverScrollView;
@property(nonatomic) double videoPlayerTime; // @synthesize videoPlayerTime=_videoPlayerTime;
- (void)shareGroupAddVideoButtonBubble:(id)arg1;
- (void)shareGroupAddVideoButtonTouchUpInside:(id)arg1;
- (_Bool)shouldAddVideoToShareBeginGuidanceBubble;
- (_Bool)shouldShowShareVideoBeginGuidanceBubble;
- (_Bool)shouldShowSubscribeBtn;
- (void)showAddVideoToShareBeginGuidanceBubble;
- (void)showShareVideoBeginGuidanceBubble;
- (void)stopFirstVideo;
- (void)updateFeedState;
- (id)viewOfPic:(id)arg1 atIndex:(long long)arg2;
- (void)viewWillDisuse:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
