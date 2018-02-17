//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQWlxNetUtils : NSObject
{
    NSMutableDictionary *_requestDict;
}

+ (_Bool)isNetworkUsable;
+ (id)sharedInstance;
- (_Bool)cancelAllReq;
- (_Bool)cancelReq:(id)arg1;
- (id)commonParams;
- (void)dealloc;
- (id)init;
- (id)privateKeySign:(id)arg1 cert:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *requestDict; // @synthesize requestDict=_requestDict;
- (void)respondHttpFailed:(id)arg1 sessionHttp:(id)arg2;
- (void)respondHttpFinish:(id)arg1 sessionHttp:(id)arg2;
- (id)sendHttpRequest:(id)arg1 withParam:(id)arg2 operationParam:(id)arg3 isSign:(_Bool)arg4 sender:(id)arg5;

@end
