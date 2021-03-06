//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FADownloadDelegate.h"

@class NSLock, NSMutableArray, NSString;

@interface FATransferMgrDown : NSObject <FADownloadDelegate>
{
    id <FADelegate> _delegate;
    NSMutableArray *_downloadQueue;
    NSLock *_queueLock;
    int _concurrentDownloadingCount;
}

- (_Bool)FADownloadWithTaskInfo:(id)arg1;
- (_Bool)FAUnifiedDownloadWithTaskInfo:(id)arg1;
- (void)OnFADownloadUpdate:(id)arg1 isFinish:(_Bool)arg2 withErr:(id)arg3;
- (_Bool)WYDownloadWithTaskInfo:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)download:(id)arg1;
- (void)downloadUnifedFile:(id)arg1;
- (void)executeNextDownload;
- (id)findFADownloadTask:(unsigned long long)arg1;
- (id)init;
- (_Bool)isFADownloadTaskRunning:(unsigned long long)arg1;
- (_Bool)isWYDownloadTaskDownloading:(id)arg1;
- (void)onFAThumbnailFail:(id)arg1 size:(int)arg2;
- (void)onFAThumbnailProgress:(id)arg1 size:(int)arg2 progress:(double)arg3;
- (void)onFAThumbnailSuccess:(id)arg1 size:(int)arg2;
- (void)stopFADownloadTask:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

