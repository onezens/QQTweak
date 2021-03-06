//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

#import "IAccountChangedObsever.h"

@class NSString;

@interface QzoneAppListCache : QZoneModel <IAccountChangedObsever>
{
}

+ (void)cleanAllCache;
+ (id)sharedInstanceForUIN:(long long)arg1 appId:(long long)arg2;
- (void)cacheAppList:(id)arg1;
- (void)cacheAppListToFile:(id)arg1;
- (id)cacheKey;
- (void)dealloc;
- (id)getCachedAppList;
- (id)initWithUIN:(long long)arg1 appId:(long long)arg2;
- (id)loadAppListFromFile;
- (void)onAccountLogin;
- (void)onAccountLogout;

// Remaining properties
@property(nonatomic) long long appid; // @dynamic appid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long uin; // @dynamic uin;

@end

