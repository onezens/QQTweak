//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "TBFeedsDetailMgrDelegate.h"
#import "TBPicListViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, TBFeedsDetailMgr, TBPicListView, TBStoryFeedModel;

@interface TBStoryVideoSelectorViewController : QQViewController <UIScrollViewDelegate, TBPicListViewDelegate, TBFeedsDetailMgrDelegate>
{
    TBPicListView *_videoListScrollView;
    _Bool _isRequesting;
    unsigned int _videoOrder;
    TBFeedsDetailMgr *_feedsDetailMgr;
    NSString *_feedID;
    NSString *_unionID;
    id <TBStoryVideoSelectorDelegate> _delegate;
    double _defaultScrollLeft;
    TBStoryFeedModel *_feedInfo;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) double defaultScrollLeft; // @synthesize defaultScrollLeft=_defaultScrollLeft;
@property(nonatomic) __weak id <TBStoryVideoSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBStoryFeedModel *feedInfo; // @synthesize feedInfo=_feedInfo;
- (void)feedsDetailMgr:(id)arg1 onFeedVideoInfoList:(id)arg2 errorInfo:(id)arg3;
- (id)getSelectedVideoString:(long long)arg1;
- (void)initNotifi;
- (void)initUI;
- (id)initWithUnionID:(id)arg1 feedID:(id)arg2 videoOrder:(unsigned int)arg3;
- (void)loadFeedInfoFromCache;
- (void)loadView;
- (long long)numberOfPic:(id)arg1;
- (void)onCancelBtnClick;
- (void)onClickPic:(long long)arg1 withView:(id)arg2;
- (void)onScrollEndToRight;
- (void)onScrollToRequestMoreData;
- (void)requestFeedInfo;
- (void)requestMoreVideoCover:(id)arg1;
- (void)resetViewOfPic:(id)arg1 atIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)viewOfPic:(id)arg1 atIndex:(long long)arg2;
- (void)viewWillDisuse:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
