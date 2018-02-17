//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMPedometer, HKHealthStore, NSObject<OS_dispatch_queue>, NSTimer;

@interface HealthKitManager : NSObject
{
    unsigned int _lastTime;
    unsigned int _lastReadTime;
    long long lastUploadStep;
    long long _repeatTimes;
    NSTimer *m_uploadTimer;
    unsigned long long m_curStepCount;
    unsigned long long m_lastStep;
    HKHealthStore *m_healthStore;
    CMPedometer *m_pedometer;
    NSObject<OS_dispatch_queue> *_healthQue;
}

+ (id)dataTypesToRead;
+ (id)dataTypesToWrite;
+ (void)isCMServiceEnabledCallBack:(CDUnknownBlockType)arg1;
+ (_Bool)isDeviceSupportReadCMData;
+ (_Bool)isDeviceSupportReadHealthData;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)authHealthKitRight:(CDUnknownBlockType)arg1;
- (void)authMStepCounterRight;
- (void)doAutoUploadData;
- (_Bool)doReadHealthKit;
- (void)getHKCalories:(id)arg1 endDate:(id)arg2 dataHandler:(CDUnknownBlockType)arg3;
- (void)getHKDistance:(id)arg1 endDate:(id)arg2 dataHandler:(CDUnknownBlockType)arg3;
- (void)getHKStepsCount:(id)arg1 endDate:(id)arg2 dataHandler:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)getTestStepCountWithCallback:(CDUnknownBlockType)arg1;
- (void)getTodayStepCountFromHealthKitWithCallback:(CDUnknownBlockType)arg1;
- (void)getTodayStepCountWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)hasHKRight;
- (_Bool)hasMCRight;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *healthQue; // @synthesize healthQue=_healthQue;
- (id)hkDetailHandler:(id)arg1 result:(id)arg2 detailDic:(id)arg3;
- (id)init;
- (id)predicateForSamplesToday;
- (_Bool)readBothData:(id)arg1 endDate:(id)arg2;
- (_Bool)readHealthKit;
- (_Bool)readHealthKitData:(id)arg1 endDate:(id)arg2 withDic:(id)arg3;
- (_Bool)readHealthKitFailHandle;
- (void)readHealthKitHandle;
- (_Bool)sendHKdataWithCheck:(long long)arg1 days:(long long)arg2 beginDate:(id)arg3 endDate:(id)arg4 hkDic:(id)arg5;
- (_Bool)setHKRight;
- (_Bool)setMCRight;
- (void)setupAutoUpload;
- (void)startPedometerUpdates:(CDUnknownBlockType)arg1;
- (void)stopPedometerUpdates;
- (void)uploadHKData;
- (void)uploadHKData2H;
- (void)uploadHKDataInQueue;
- (void)verifyCMPedometerPower:(CDUnknownBlockType)arg1;
- (void)verifyHealthKitPower:(CDUnknownBlockType)arg1;

@end
