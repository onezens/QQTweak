//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQFriendSelectedViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "YellowVCLeakDelegate.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, UIActivityIndicatorView, UIAlertView, UIWindow;

@interface QQVCLeakLogger : NSObject <QQFriendSelectedViewControllerDelegate, UIAlertViewDelegate, YellowVCLeakDelegate>
{
    NSObject<OS_dispatch_queue> *_VCLeakQueue;
    NSString *_leakedVC;
    NSString *_logPath;
    NSString *_QQLogPath;
    _Bool *_beginCreateLog;
    _Bool *_isNeedGoToChatView;
    UIActivityIndicatorView *_indicator;
    UIWindow *_window;
    NSString *_zippath;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_selectedUin;
    int _type;
    _Bool _isFeedBacking;
    _Bool _isUIViewAlert;
    _Bool _isVCAlert;
    NSDate *_feedBackTime;
    UIAlertView *_UIViewAlertView;
    NSString *_UIViewHierarchyInfo;
    NSString *_UIViewStackInfo;
    NSString *_leakedUIView;
    NSTimer *_autoUploadTimer;
    _Bool _enableVCAlert;
    _Bool _enableVCUPLoad;
    _Bool _enableUIViewAlert;
    NSString *_warningLog;
    UIAlertView *_alertView;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void)clearFeedBackTime;
- (void)dealloc;
@property _Bool enableUIViewAlert; // @synthesize enableUIViewAlert=_enableUIViewAlert;
@property _Bool enableVCAlert; // @synthesize enableVCAlert=_enableVCAlert;
@property _Bool enableVCUPLoad; // @synthesize enableVCUPLoad=_enableVCUPLoad;
- (id)init;
- (void)markedAsWhiteObj:(id)arg1;
- (void)setIsFeedBacking:(_Bool)arg1;
@property(retain, nonatomic) NSString *warningLog; // @synthesize warningLog=_warningLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

