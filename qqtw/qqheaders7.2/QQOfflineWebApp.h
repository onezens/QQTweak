//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class NSFileManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, QQLockDictionary;

@interface QQOfflineWebApp : NSObject <NSFileManagerDelegate>
{
    _Bool _isReady;
    _Bool _isVersionChanged;
    _Bool _enableOfflineApp;
    NSString *_pathToWebappCacheInDocuments;
    NSString *_pathToWebappCacheNewInDocuments;
    NSString *_pathToWebappCacheZipInDocuments;
    int _xo;
    QQLockDictionary *_bid2PacketMap;
    NSMutableDictionary *_bidRebuildURLMapLock;
    NSMutableArray *_expiredBids;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_semaphore> *_webappCacheNewSemaphore;
    NSString *_documentPath;
    NSString *_pathToWebappCacheInQQApp;
    NSString *_pathToWebappCacheArchiveInQQApp;
    NSString *_bidVersion;
    NSMutableDictionary *_downloadBeginTimes;
    NSObject<OS_dispatch_queue> *_downloadBeginTimesLocker;
    NSObject<OS_dispatch_queue> *_reportingLocker;
    NSMutableArray *_updatingBusinesses;
    NSString *_clientVersion;
    NSString *_wholeVersion;
    long long _currentBid;
    NSObject<OS_dispatch_queue> *_updateHelperQueue;
    NSObject<OS_dispatch_queue> *_downloadUpdateQueue;
    NSString *_currentDownloadingBid;
    long long _compressZip;
    NSMutableDictionary *_bidFileOperPending;
    NSString *_suspendedUnhandledBid;
}

+ (_Bool)checkUrlHasBid:(id)arg1;
+ (id)getInstance;
- (_Bool)alreadyCopiedBundleFilesToDocuments;
- (void)asyncHandleUpprocessedUpdatesCompletion:(CDUnknownBlockType)arg1;
- (id)bidForUrl:(id)arg1;
- (void)checkUpdateForBids:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkUpdateForBusiness:(id)arg1;
- (void)checkUpdateForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkUpdateForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2 wifiAnd4GUpdate:(_Bool)arg3 ignoreDelay:(_Bool)arg4;
- (void)checkUpdateForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2 wifiUpdate:(_Bool)arg3 ignoreDelay:(_Bool)arg4;
- (void)checkUpdateForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2 wifiUpdate:(_Bool)arg3 ignoreFrequency:(_Bool)arg4;
- (void)checkUpdateForUrl:(id)arg1;
- (void)checkUpdateHelperForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2 wifiUpdate:(_Bool)arg3;
- (void)clearAllCacheResponse;
- (void)clearCheckUpdateRecentlyForBusiness;
- (_Bool)clearWebAppCacheFolder;
- (_Bool)compareClientWholeVersion;
- (_Bool)copyFolderToFolder:(id)arg1 toPath:(id)arg2;
- (_Bool)copyWebappCacheFromQQAppToDocuments;
- (void)dealloc;
- (void)downloadUpdateForBid:(id)arg1 zipUrl:(id)arg2 isDoubleCompressZip:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)ensureCacheFolder0Exists;
- (id)getBid2CfgJsonInfoDic;
- (id)getBid2CfgJsonInfoDicWithPath:(id)arg1;
- (id)getBidFromUrl:(id)arg1;
- (id)getBidPacketJsonInfo:(id)arg1;
- (id)getBidPacketJsonInfo:(id)arg1 basePath:(id)arg2;
- (id)getBidPacketJsonInfoInWebappCache2:(id)arg1;
- (id)getLocalFolderPathWithBid:(id)arg1;
- (void)handleUpprocessedUpdates;
- (_Bool)hasAlreadyCheckUpdateRecentlyForBusiness:(id)arg1;
- (id)init;
- (_Bool)initializeWebAppCacheInDocuments;
- (void)innerDownloadWithBid:(id)arg1 updateInfoModel:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isCurrentlyFileOper;
- (_Bool)isCurrentlyFileOper:(id)arg1;
- (_Bool)isCurrentlyUpdating;
- (_Bool)isCurrentlyUpdating:(id)arg1;
- (id)localFileContentForUrl:(id)arg1;
- (id)localFileContentForUrl:(id)arg1 offlineFileType:(unsigned long long)arg2;
- (id)localInfoForUrl:(id)arg1 offlineFileType:(unsigned long long)arg2;
- (int)localVersionOfBusiness:(id)arg1;
- (long long)localVersionOfUrl:(id)arg1;
- (id)localWebArchiveDataForURL:(id)arg1;
- (void)markBundleFilesAlreadyCopied;
- (void)markCheckUpdateRecentlyForBusiness:(id)arg1;
- (_Bool)moveFromWebappNewToWebappDocmentWithBid:(id)arg1;
- (void)notifyDownloadCompletion:(int)arg1 bid:(id)arg2 bidVersion:(long long *)arg3;
- (void)notifyDownloadStart:(id)arg1;
- (void)notifyUpdateCover:(int)arg1 bid:(id)arg2 version:(long long)arg3;
- (void)preLoadOfflineCache:(id)arg1;
- (void)preRebuldURLMap:(id)arg1;
- (long long)readLocalVersionNumberForBusiness:(id)arg1;
- (long long)readUpdateFrequencyForBusiness:(id)arg1;
- (void)rebuildUrlMap;
- (void)rebuildUrlMapForBid:(id)arg1;
- (_Bool)remoteVersionNumber:(long long)arg1 isBiggerThenLocalVersionNumberOfBusiness:(id)arg2;
- (void)removeExpiredPackageWithBid:(id)arg1;
- (void)removeLocalPackageWithBid:(id)arg1;
- (void)removeUrlMapForBid:(id)arg1;
- (_Bool)removeWebappCacheInDocuments;
- (void)removeZipPkgForBid:(id)arg1;
- (void)saveClientWholeVersion;
- (id)searchPathWithBid:(id)arg1 offlineType:(unsigned long long)arg2 relativePath:(id)arg3 newVersion:(long long)arg4;
- (void)sendUpdateNotification:(id)arg1;
- (void)setBusiness:(id)arg1 isCurrentlyUpdating:(_Bool)arg2;
- (void)setCurrentlyFileOper:(id)arg1 isPending:(_Bool)arg2;
- (void)setExpiredBid:(id)arg1;
@property(retain) NSString *suspendedUnhandledBid; // @synthesize suspendedUnhandledBid=_suspendedUnhandledBid;
- (void)storeLoadOfflineCache:(id)arg1;
- (void)unmarkCheckUpdateRecentlyForBusiness:(id)arg1;
- (int)updateIntervalForBusiness:(id)arg1;
- (void)updateWithBid:(id)arg1 wifiUpdate:(_Bool)arg2 ignoreFrequency:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableOfflineApp; // @dynamic enableOfflineApp;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isReady; // @dynamic isReady;
@property(nonatomic) _Bool isVersionChanged; // @dynamic isVersionChanged;
@property(retain, nonatomic) NSString *pathToWebappCacheInDocuments; // @dynamic pathToWebappCacheInDocuments;
@property(retain, nonatomic) NSString *pathToWebappCacheNewInDocuments; // @dynamic pathToWebappCacheNewInDocuments;
@property(retain, nonatomic) NSString *pathToWebappCacheZipInDocuments; // @dynamic pathToWebappCacheZipInDocuments;
@property(readonly) Class superclass;

@end

