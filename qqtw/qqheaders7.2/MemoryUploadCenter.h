//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BlueTaskThread, NSTimer;

@interface MemoryUploadCenter : NSObject
{
    BlueTaskThread *_thread;
    double _freeMemory;
    double _residentMemory;
    double _heapMemory;
    double _maxMemory;
    double _maxHeapMemory;
    double _singleLoginMaxMemory;
    _Bool _hasUpLoadLastData;
    _Bool _hasUpdateUin;
    NSTimer *_watchDogTimer;
    double _fristLaunchTime;
    double _firstOOMTime;
}

+ (id)getInstance;
- (double)appMaxMemory;
- (void)appReceiveMemoryWarning;
- (double)appUsedMemory;
- (void)dealloc;
- (void)doUploadTask;
- (double)freeMemory;
- (double)getThreshold;
- (id)init;
- (void)initMemoryWindow;
- (id)readLastMaxHeapMemory;
- (void)saveLastMaxHeapMemory;
- (void)saveLastSingleLoginMaxMemory;
- (id)singleLoginMaxMemoryDir;
- (void)updateMemory;
- (void)uploadLastSingleLoginMaxMemory;

@end

