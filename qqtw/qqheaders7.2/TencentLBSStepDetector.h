//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, TencentLBSAccelerometerData;

@interface TencentLBSStepDetector : NSObject
{
    _Bool _isPeak;
    id <TencentLBSStepDetectorDeleagte> _delegate;
    NSMutableArray *_deltaInfoes;
    TencentLBSAccelerometerData *_lowPassAccData;
    TencentLBSAccelerometerData *_lastAccData;
    double _delta;
    double _lastDelta;
    double _startTime;
    double _diff;
    NSMutableArray *_nonStaticDatas;
    double _lastTimestamp;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (void)addCMAccelerometerDataToStepDetector:(id)arg1;
- (void)checkMotionWithData:(id)arg1;
@property(nonatomic) __weak id <TencentLBSStepDetectorDeleagte> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double delta; // @synthesize delta=_delta;
@property(retain, nonatomic) NSMutableArray *deltaInfoes; // @synthesize deltaInfoes=_deltaInfoes;
@property(nonatomic) double diff; // @synthesize diff=_diff;
- (_Bool)findMaxPeak:(id)arg1;
- (_Bool)findMinPeak:(id)arg1;
- (double)getTimeIntervalBetweenMotion;
- (id)init;
@property(nonatomic) _Bool isPeak; // @synthesize isPeak=_isPeak;
@property(retain, nonatomic) TencentLBSAccelerometerData *lastAccData; // @synthesize lastAccData=_lastAccData;
@property(nonatomic) double lastDelta; // @synthesize lastDelta=_lastDelta;
@property(nonatomic) double lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TencentLBSAccelerometerData *lowPassAccData; // @synthesize lowPassAccData=_lowPassAccData;
- (void)lowPassFilteringWithTime:(double)arg1 data:(CDStruct_31142d93)arg2;
@property(retain, nonatomic) NSMutableArray *nonStaticDatas; // @synthesize nonStaticDatas=_nonStaticDatas;
- (void)reset;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end
