//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface RequestQueueManager : NSObject
{
    NSMutableDictionary *_requestQueue;
}

+ (id)sharedInstance;
- (void)addRequest:(id)arg1 seqId:(int)arg2 requestData:(id)arg3;
- (id)getRequest:(id)arg1 seqId:(int)arg2;
- (id)init;
- (void)removeRequest:(id)arg1 seqId:(int)arg2;

@end
