//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewBase.h"

#import "AVAudioPlayerDelegate.h"
#import "QQAudioSessionManagerDelegate.h"

@class AVAudioPlayer, FASlider, NSString, NSTimerNonRetain, QQProgressBar, UIButton, UIImageView, UILabel;

@interface FAViewAudio : FAViewBase <QQAudioSessionManagerDelegate, AVAudioPlayerDelegate>
{
    UIImageView *_audioBgd;
    UILabel *_audioName;
    UILabel *_sizeTimeLabel;
    UIButton *_playBtn;
    UILabel *_startTimeLabel;
    UILabel *_endTimeLabel;
    FASlider *_audioProgressSlider;
    NSTimerNonRetain *_audioTimer;
    AVAudioPlayer *_audioPlayer;
    UIButton *_cancelButton;
    UIButton *_operateButton;
    UILabel *_progressLabel;
    QQProgressBar *_progressView;
    _Bool _hasAudioSession;
    _Bool _playing;
    NSString *_audioPath;
}

@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)canViewRotate;
- (void)clean;
- (id)createCommonTimeLabel;
- (void)dealloc;
- (void)drag:(double)arg1;
- (void)dragBegin:(id)arg1;
- (void)dragFinish:(id)arg1;
- (void)handleVideoChatStart;
- (void)initView;
- (void)loadView;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onCancelClick:(id)arg1;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onOperateBtnClick:(id)arg1;
- (void)parseViewData:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)requestAudioSession;
- (void)startTimer;
- (void)stopTimer;
- (void)updateAudioPlayerWithInfo:(id)arg1;
- (void)updateAudioSlider;
- (void)updateFileNameWithInfo:(id)arg1;
- (void)updateOperateBtnWithInfo:(id)arg1;
- (void)updateProgressDescWithInfo:(id)arg1;
- (void)updateProgressWithInfo:(id)arg1;
- (void)updateSizeTimeLabel:(id)arg1;
- (void)updateStopIconWithInfo:(id)arg1;
- (void)updateTransferControlWithInfo:(id)arg1;
- (void)updateViewWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
