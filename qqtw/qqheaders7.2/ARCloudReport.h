//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ARCloudReport : NSObject
{
    NSMutableDictionary *_perfDatas;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)addSubData:(id)arg1 subData:(id)arg2;
- (id)calculateTotalSize;
- (id)calculateUploadTimes;
- (void)clearData;
- (id)getDevice;
- (id)getLastValidSubData:(id)arg1;
- (_Bool)isLastSubDataFinish:(id)arg1;
- (_Bool)isLastSubDataStart:(id)arg1;
- (id)netTypeStr;
@property(retain, nonatomic) NSMutableDictionary *perfDatas; // @synthesize perfDatas=_perfDatas;
- (void)performancePointAddExtInfo:(id)arg1 info:(id)arg2;
- (void)performancePointModify:(id)arg1 interval:(double)arg2;
- (void)performancePointStart:(id)arg1;
- (void)performancePointStartOverwrite:(id)arg1;
- (double)performancePointStop:(id)arg1 isSuccess:(_Bool)arg2;
- (void)reportEvent2ServerInternal:(id)arg1 success:(_Bool)arg2 eventData:(id)arg3 subEventData:(id)arg4;
- (void)reportRespCodeEvent:(id)arg1 success:(_Bool)arg2 originParams:(id)arg3;

@end

