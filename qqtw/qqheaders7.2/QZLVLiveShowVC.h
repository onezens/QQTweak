//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneWebViewController.h"

#import "QAVChangeRoleDelegate.h"

@class NSDictionary, NSMutableArray, NSString, QZLiveViewController, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface QZLVLiveShowVC : QZoneWebViewController <QAVChangeRoleDelegate>
{
    NSMutableArray *_debugRoleButtonsArray;
    long long _statusBarStyle;
    _Bool _isMoving;
    _Bool _isInitialPos;
    _Bool _isClearMode;
    _Bool _isAllow;
    QZLiveViewController *_parentController;
    UIPanGestureRecognizer *_slideRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    long long _panDirection;
    NSDictionary *_registerLiveQuery;
    struct CGPoint _startTouchPoint;
    struct CGRect _forbidDragTouchRect;
}

- (void).cxx_destruct;
- (void)OnChangeRoleDelegate:(int)arg1 WithErrinfo:(id)arg2;
- (void)addChangeRoleButton;
- (void)changeRoleDebug:(id)arg1;
- (void)checkLiveState:(id)arg1;
- (float)checkOffsetX:(float)arg1;
- (void)checkPanDirection:(id)arg1;
- (void)configCustomUI;
- (void)configGesture;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dispatchToJsOperationCode:(unsigned long long)arg1;
- (void)dispatchToJsStatusCode:(unsigned long long)arg1;
@property(nonatomic) struct CGRect forbidDragTouchRect; // @synthesize forbidDragTouchRect=_forbidDragTouchRect;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)h5HostLeave;
- (void)hideExitButton:(_Bool)arg1;
- (void)hideInputBar;
- (void)hideOrShowChangeRoleButton;
- (void)initialFrame;
- (void)installPanGestureRecognizer;
@property(nonatomic) _Bool isAllow; // @synthesize isAllow=_isAllow;
- (void)isAllowClean:(id)arg1;
@property(nonatomic) _Bool isClearMode; // @synthesize isClearMode=_isClearMode;
@property(nonatomic) _Bool isInitialPos; // @synthesize isInitialPos=_isInitialPos;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
- (void)moveToInitial;
- (void)moveToTarget;
- (void)moveViewToX:(float)arg1;
- (void)onMicMsg:(id)arg1;
- (void)openOtherLive:(id)arg1 hostUin:(id)arg2;
@property(nonatomic) long long panDirection; // @synthesize panDirection=_panDirection;
- (void)panStart;
- (void)panStop;
- (void)paningGestureReceive:(id)arg1;
@property(nonatomic) __weak QZLiveViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) NSDictionary *registerLiveQuery; // @synthesize registerLiveQuery=_registerLiveQuery;
- (void)registerLiveState:(id)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *slideRecognizer; // @synthesize slideRecognizer=_slideRecognizer;
@property(nonatomic) struct CGPoint startTouchPoint; // @synthesize startTouchPoint=_startTouchPoint;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (void)tapRecognizerReceiver:(id)arg1;
- (void)targetFrame;
- (id)topView;
- (void)uninstallPanGestureRecognizer;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

