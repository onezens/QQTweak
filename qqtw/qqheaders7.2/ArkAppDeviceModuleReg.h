//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RegModuleBase.h"

#import "IRegModule.h"
#import "QRCodeScanDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class CMMotionManager, NSOperationQueue, NSString, NSTimer;

@interface ArkAppDeviceModuleReg : RegModuleBase <QRCodeScanDelegate, RichMsgPreviewDialogDelegate, IRegModule>
{
    long long _positionCbId;
    long long _motionCbId;
    long long _orientationCbId;
    long long _connectionTypeChangeCbId;
    long long _currentPositionCbId;
    NSString *_appID;
    _Bool _watchingPosition;
    _Bool _watchingNetwork;
    _Bool _scanning;
    CDUnknownBlockType _positionBlock;
    NSTimer *_positionTimer;
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    CDUnknownBlockType _accelerationBlock;
    CDUnknownBlockType _orientationBlock;
    CDUnknownBlockType _networkBlock;
    CDUnknownBlockType _scanCodeBlock;
    struct CLLocationCoordinate2D _prevPosition;
}

+ (const char *)getModuleName;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType accelerationBlock; // @synthesize accelerationBlock=_accelerationBlock;
- (void)addLocationObserver;
- (void)cancelButtonClick;
- (void)cancelScanCode;
- (void)clearAccelerationWatch;
- (void)clearNetworkWatch;
- (void)clearOrientationWatch;
- (void)dealloc;
- (_Bool)doCallback:(long long)arg1 obj:(id)arg2;
- (void)doCallback:(long long)arg1 succ:(_Bool)arg2 obj:(id)arg3;
- (void)doPosiMaskAlert:(_Bool)arg1;
- (void)handleGetLocation:(id)arg1;
- (unsigned int)hasMethod:(const char *)arg1;
- (id)initWithAppID:(const char *)arg1;
- (unsigned int)invokeFunc:(const char *)arg1 args:(const struct tagArkVariant *)arg2 count:(unsigned int)arg3 ret:(struct tagArkVariant *)arg4 helper:(struct tagArkHostFuncs *)arg5;
@property(nonatomic, getter=isScanning) _Bool scanning; // @synthesize scanning=_scanning;
@property(nonatomic, getter=isWatchingNetwork) _Bool watchingNetwork; // @synthesize watchingNetwork=_watchingNetwork;
@property(nonatomic, getter=isWatchingPosition) _Bool watchingPosition; // @synthesize watchingPosition=_watchingPosition;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) CDUnknownBlockType networkBlock; // @synthesize networkBlock=_networkBlock;
- (void)onDeviceMotionChanged:(id)arg1 error:(id)arg2;
- (void)onNetworkTypeChange:(id)arg1;
- (void)openQRVC;
@property(copy, nonatomic) CDUnknownBlockType orientationBlock; // @synthesize orientationBlock=_orientationBlock;
@property(copy, nonatomic) CDUnknownBlockType positionBlock; // @synthesize positionBlock=_positionBlock;
@property(retain, nonatomic) NSTimer *positionTimer; // @synthesize positionTimer=_positionTimer;
@property(nonatomic) struct CLLocationCoordinate2D prevPosition; // @synthesize prevPosition=_prevPosition;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)removeLocationObserver;
@property(copy, nonatomic) CDUnknownBlockType scanCodeBlock; // @synthesize scanCodeBlock=_scanCodeBlock;
- (void)scanCodeWithIdentifier:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)scanViewController:(id)arg1 didScanResult:(id)arg2;
- (void)scanViewController:(id)arg1 failWithReason:(id)arg2;
- (void)scanViewControllerDidCancel:(id)arg1;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)setShowMaskAlertAPPID:(id)arg1;
- (void)setupMotion;
- (void)setupPositionTimer;
- (void)showPosiAuthorizationMaskAlertWithKey:(id)arg1 tips:(id)arg2;
- (void)startDeviceMotionUpdates;
- (void)startPositionUpdates;
- (void)startUpdateLocationWithBlock:(CDUnknownBlockType)arg1;
- (void)stopDeviceMotionUpdates;
- (void)stopUpdateLocation;
- (void)teardownPositionTimer;
- (void)teardownScanCode;
- (void)watchAccelerationWithBlock:(CDUnknownBlockType)arg1;
- (void)watchNetworkWithBlock:(CDUnknownBlockType)arg1;
- (void)watchOrientationWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
