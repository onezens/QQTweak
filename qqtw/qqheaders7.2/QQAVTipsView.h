//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface QQAVTipsView : UIView
{
    UILabel *_tipsLabel;
    NSTimer *_tipstimer;
    NSTimer *_timer;
    int _timerCount;
    double _interval;
    _Bool _isTimeHidden;
    id <QQAVTipsViewDelegate> _delegate;
    NSTimer *_timerShowMonitor;
    int _counterShowMonitor;
    _Bool _isShowMonitorTimerStarted;
    _Bool _isShowMonitorInfo;
    struct CGRect _frame;
}

- (void)clearCounter;
- (void)dealloc;
@property(nonatomic) id <QQAVTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)fitToTextSize;
- (double)getTimeInterval;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly) double interval; // @synthesize interval=_interval;
- (_Bool)isTimerStarted;
- (void)pauseTimer;
- (void)resetTimer;
- (void)restartTimer;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLabelFont:(int)arg1;
- (void)setMonitorHidden:(_Bool)arg1;
- (void)setTimer:(double)arg1;
- (void)setTimerHidden:(_Bool)arg1;
- (void)setTips:(id)arg1;
- (void)setTips:(id)arg1 withAccessLable:(id)arg2;
- (void)setTips:(id)arg1 withFont:(int)arg2 withBoldFont:(_Bool)arg3;
- (void)setTips:(id)arg1 withTipsTimer:(float)arg2;
@property(nonatomic) struct CGRect tipsFrame; // @synthesize tipsFrame=_frame;
- (void)showTime;
- (void)startTimer;
- (void)stopTimeTimer;
- (void)stopTimer;
- (void)stopTipsTimer;
@property(readonly) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)tipsTimerDone;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateTimer;

@end

