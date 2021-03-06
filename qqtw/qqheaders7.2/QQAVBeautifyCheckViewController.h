//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVChatBaseController.h"

#import "QQAVBeautifyGLViewDelegate.h"

@class NSString, QAVFilter, QQAVBeautifyGLView, UIButton;

@interface QQAVBeautifyCheckViewController : QQAVChatBaseController <QQAVBeautifyGLViewDelegate>
{
    _Bool _isOnBackGround;
    float _beautifyLevel;
    QQAVBeautifyGLView *_beautifyView;
    UIButton *_backButton;
    UIButton *_startButton;
    char *_pSelfVideoBuffer;
    NSString *_smotthingFilterPath;
    _Bool _isUseBeautify30;
    QAVFilter *_filter;
    _Bool _isStoped;
}

- (void)becomeActive;
- (void)closeBeautifyView;
- (void)dealloc;
- (void)displayBeautifyFrame:(id)arg1;
- (id)getSmotthingFilter;
- (id)init;
- (void)initFunchatMgr;
- (void)initInterface;
- (void)initNotification;
- (void)initVideo;
- (void)onActionButton;
- (void)onBack;
- (void)onBeautify:(float)arg1;
- (void)onDisplayBeautifyView:(id)arg1;
- (void)onVideoEnterBackground;
- (void)onVideoEnterFrontground;
- (void)resignActive;
- (void)startPlay;
- (void)stopFunchatMgr;
- (void)stopPlay;
- (void)transmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

