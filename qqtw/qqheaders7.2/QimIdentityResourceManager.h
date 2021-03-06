//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface QimIdentityResourceManager : NSObject
{
    _Bool _isDownloading;
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)_downloadResource;
- (_Bool)checkFileExist:(id)arg1;
- (_Bool)checkFileMD5:(id)arg1;
- (_Bool)checkZipFileExist:(id)arg1;
- (void)creatDirAndCleanFile:(id)arg1;
- (void)downLoadWithModel:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void)downloadResource;
- (id)getImage:(long long)arg1;
- (id)init;
- (_Bool)isAIOBubbleSwitchOn;
- (_Bool)isAIOSwitchOn;
- (_Bool)isAvatarSwitchOn;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
- (_Bool)isResourceDownloaded;
- (void)parseConfig:(id)arg1;
- (void)unzipFile:(id)arg1;

@end

