//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface QQRedPointReqItem : SAMRequestItem
{
    NSArray *_pullReqList;
    NSArray *_unfinishedReqList;
}

- (void).cxx_destruct;
- (void)dealloc;
- (char *)getRequestBuffer;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)nsdataFromCString:(basic_string_075b6133)arg1;
- (id)nsstringFromCString:(basic_string_075b6133)arg1;
@property(retain, nonatomic) NSArray *pullReqList; // @synthesize pullReqList=_pullReqList;
- (id)serviceCmd;
@property(retain, nonatomic) NSArray *unfinishedReqList; // @synthesize unfinishedReqList=_unfinishedReqList;

@end

