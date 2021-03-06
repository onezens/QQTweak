//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsynDownloadImageObserver.h"
#import "ResourceDownloadDelegate.h"

@class NSMutableArray, NSString;

@interface DynaDoodleTempManager : NSObject <IAsynDownloadImageObserver, ResourceDownloadDelegate>
{
    NSMutableArray *_downloadTaskArray;
    unsigned int _u32DownloadTaskCount;
    _Bool _isTemplateIntegrityChecked;
    NSString *_isDoodleEnabled;
    id <DynaDoodleTempManagerDelegate> _delegate;
}

+ (long long)getConfigGifVersion;
+ (id)getConfigInfo:(long long)arg1;
+ (long long)getConfigLineVersion;
+ (id)getConfigSubVersion:(long long)arg1;
+ (long long)getConfigVersion;
+ (long long)getDoodleConfigVersion:(id)arg1;
+ (id)getIconFileName:(long long)arg1 sourceId:(id)arg2;
+ (id)getResourceFileName:(long long)arg1 sourceId:(id)arg2 pathType:(long long)arg3;
+ (id)getResourcePath:(long long)arg1;
+ (id)itemArrayFrom:(id)arg1 ResourceType:(long long)arg2;
+ (void)saveConfigInfo:(id)arg1 configType:(long long)arg2;
+ (void)saveConfigSubVersion:(id)arg1 verType:(long long)arg2;
+ (void)saveConfigVersion:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)OnRescourceDownloadComplete:(unsigned int)arg1 item:(id)arg2 withErr:(id)arg3;
- (void)checkDoodleTemplateIntegrity;
- (void)checkTemplatesFor:(long long)arg1;
@property(nonatomic) __weak id <DynaDoodleTempManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadIconResource:(long long)arg1 iconUrl:(id)arg2 iconMd5:(id)arg3;
- (void)downloadResource:(long long)arg1 item:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)downloadTempResource:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)getGifTemplateResPathFromID:(unsigned int)arg1;
- (id)getLineTemplateResPathFromID:(unsigned int)arg1;
- (id)getTemplateItemArray:(long long)arg1;
- (id)init;
- (_Bool)isDynaDoodleEnabled;
- (void)logoutNotification;
- (void)setNeedToCheckTemplateIntegrity;
- (void)updateDynaDoodleEnabledStatus;
- (void)updateResourceFromResInfo:(long long)arg1 resInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

