//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseVideoProxyManager.h"

@class NSMutableDictionary;

@interface ShortVideoPlayerManager : QZBaseVideoProxyManager
{
    int _sessionID;
    NSMutableDictionary *_videoDownloadReqDict;
    id <ShortVideoPlayerManagerDelegate> _delegate;
    NSMutableDictionary *_videoDownloadResponseDict;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)TVHttpProxyDidStopAllPreload;
- (long long)buildPlayID:(id)arg1 fileId:(id)arg2 savePath:(id)arg3 withFileType:(long long)arg4 withFileSize:(long long)arg5 withFileDuration:(long long)arg6 extraInfo:(id)arg7;
- (void)cancelVideoDownloadTask:(int)arg1;
- (id)createFileId:(id)arg1 videoFormat:(id)arg2 videoUrl:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <ShortVideoPlayerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAppWillPending;
- (id)getHttpHeaderValue:(id)arg1 key:(id)arg2;
- (id)init:(int)arg1;
- (void)initData;
- (id)multCDNUrls:(id)arg1 videoInfo:(id)arg2;
- (void)pausePlayerVideoJKofflineDownloadTask:(id)arg1;
- (void)processCallBack_DownloadError:(id)arg1;
- (void)processCallBack_DownloadFinish:(id)arg1;
- (void)processCallBack_DownloadProgress:(id)arg1;
- (void)processCallBack_GotFileSize:(id)arg1;
- (void)processCallBack_StorageError:(id)arg1;
- (void)processCallBack_StorageFileComplete:(id)arg1;
- (void)processCallBack_StorageFileConfict:(id)arg1;
- (_Bool)sdkEnableCache;
- (long long)sdkMaxCacheSize;
@property(nonatomic) int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSMutableDictionary *videoDownloadReqDict; // @synthesize videoDownloadReqDict=_videoDownloadReqDict;
@property(retain, nonatomic) NSMutableDictionary *videoDownloadResponseDict; // @synthesize videoDownloadResponseDict=_videoDownloadResponseDict;
- (int)startVideoDownloadTask:(id)arg1 resp:(id)arg2 downloadURLs:(id)arg3 delegate:(id)arg4;
- (void)stopPlay:(long long)arg1;

@end
