//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class NSMutableArray, NSString, NSTimer;

@interface TVKResourceLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    _Bool _isSeeking;
    int _playId;
    int _clipNo;
    int _requestId;
    NSMutableArray *_loadingRequestArray;
    NSTimer *_cacheTimer;
    long long _lastOffset;
    long long _fileSize;
    NSString *_contentType;
}

+ (id)loaderOperatQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *cacheTimer; // @synthesize cacheTimer=_cacheTimer;
- (void)cancelAllRequest;
- (void)cancelRequest:(int)arg1;
- (void)checkCache;
- (void)cleanResource;
@property(nonatomic) int clipNo; // @synthesize clipNo=_clipNo;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void)dealloc;
- (void)deletePreviousRequest:(id)arg1;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (_Bool)finishLoadingWithLoadingRequest:(id)arg1;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) long long lastOffset; // @synthesize lastOffset=_lastOffset;
@property(retain, nonatomic) NSMutableArray *loadingRequestArray; // @synthesize loadingRequestArray=_loadingRequestArray;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) int requestId; // @synthesize requestId=_requestId;
- (int)requestWithRequestStart:(long long)arg1 withRequestEnd:(long long)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setPlayId:(int)arg1 andClipNo:(int)arg2;
- (void)setupCacheTimer;
- (void)stopCacheTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

