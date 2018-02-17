//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBStoryVideoClipRangeSliderViewDelegate.h"
#import "TBStoryVideoPreviewViewDelegate.h"

@class AVAsset, NSMutableArray, NSString, TBStoryVideoClipRangeSliderView, TBStoryVideoPreviewView, UIButton, UILabel;

@interface TBStoryVideoClipView : UIView <TBStoryVideoClipRangeSliderViewDelegate, TBStoryVideoPreviewViewDelegate>
{
    double _startTime;
    double _endTime;
    double _reprotStartTime;
    double _reprotEendTime;
    double _minTime;
    double _durationSec;
    id <TBStoryVideoClipViewDelegate> _delegate;
    UIButton *_backBtn;
    UIButton *_nextBtn;
    UILabel *_timeInfoLab;
    TBStoryVideoClipRangeSliderView *_clipRangeView;
    TBStoryVideoPreviewView *_player;
    AVAsset *_asset;
    NSMutableArray *_videoPaths;
}

- (void).cxx_destruct;
- (void)TBStoryVideoClipRangeSliderView:(id)arg1 didClipedToStartTime:(double)arg2 endTime:(double)arg3;
- (void)TBStoryVideoClipRangeSliderView:(id)arg1 didClipingToStartTime:(double)arg2 endTime:(double)arg3;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)assetOfClipedVideo;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void)backBtnClicked:(id)arg1;
@property(retain, nonatomic) TBStoryVideoClipRangeSliderView *clipRangeView; // @synthesize clipRangeView=_clipRangeView;
- (void)configTimeWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)dataReport;
- (void)dealloc;
@property(nonatomic) __weak id <TBStoryVideoClipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)exportVideoWithAsset:(id)arg1;
- (_Bool)initPlayer:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 AVAsset:(id)arg2;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
- (void)nextBtnClicked:(id)arg1;
- (void)pausePlayer;
- (void)playForm:(double)arg1;
@property(retain, nonatomic) TBStoryVideoPreviewView *player; // @synthesize player=_player;
- (void)reset;
- (void)seek:(double)arg1;
@property(retain, nonatomic) UILabel *timeInfoLab; // @synthesize timeInfoLab=_timeInfoLab;
@property(retain, nonatomic) NSMutableArray *videoPaths; // @synthesize videoPaths=_videoPaths;
- (void)startPlayer;
- (void)stopPlayer;
- (void)storyVideoPreview:(id)arg1 changedWithTime:(double)arg2 videoTotalDuration:(double)arg3;
- (void)storyVideoPreview:(id)arg1 preparedStatus:(_Bool)arg2;
- (void)storyVideoPreviewDidPlay:(id)arg1;
- (void)storyVideoPreviewDidStop:(id)arg1;
- (void)storyVideoPreviewReadyToPlay:(id)arg1;
- (id)stringOfTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
