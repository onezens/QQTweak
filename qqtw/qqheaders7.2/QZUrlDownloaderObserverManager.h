//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAMultiThreadObject.h"

@class NSMutableDictionary;

@interface QZUrlDownloaderObserverManager : GAMultiThreadObject
{
    NSMutableDictionary *_urlClipperObserverMutlDict;
    NSMutableDictionary *_observerUrlClipperMutlDict;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 reqFinishBlock:(CDUnknownBlockType)arg2 reqProgressBlock:(CDUnknownBlockType)arg3 urlKey:(id)arg4 clipper:(id)arg5;
- (id)getAllUrlKeyOfObserver:(id)arg1;
- (void)handleGetImageSucc:(id)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1 resInfo:(id)arg2;
- (id)removeObserver:(id)arg1;
- (id)removeObserver:(id)arg1 urlKey:(id)arg2 clipper:(id)arg3;
- (void)removeUrlDownloadObserver:(id)arg1;
- (void)requestFinishedAndRmvUrlDldObserver:(id)arg1;
- (void)requestProgress:(id)arg1 bytesOfThisTime:(unsigned long long)arg2 downloadedBytes:(long long)arg3 totalBytes:(long long)arg4;

@end

