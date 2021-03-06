//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupVideoChatViewController.h"

#import "PLLiveCountDownViewDelegate.h"

@class NSString, NSTimer, PLLiveCountDownView, QQGroupAVBeautifyLogic, UIButton, UILabel;

@interface QQGroupVideoStartupViewController : QQGroupVideoChatViewController <PLLiveCountDownViewDelegate>
{
    UIButton *_inviteBtn;
    UIButton *_launchVideoBtn;
    UILabel *_warningLabel;
    NSTimer *_countDownTimer;
    long long _secondsCountDown;
    UILabel *_timeLabel;
    PLLiveCountDownView *_countDownView;
    QQGroupAVBeautifyLogic *_beautifyLogic;
}

- (void).cxx_destruct;
- (void)countDownAnimationStoped;
- (void)dealloc;
- (void)displayBeautifyFrame:(id)arg1;
- (id)init;
- (void)initInterface;
- (void)onCloseAction;
- (void)setGroupVieoUin:(unsigned long long)arg1;
- (void)startVideoChat:(id)arg1;
- (void)unInitInterface;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

