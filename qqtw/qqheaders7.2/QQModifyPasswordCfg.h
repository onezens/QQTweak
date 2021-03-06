//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQSecurityConfigFetcherDelegate.h"

@class NSString;

@interface QQModifyPasswordCfg : NSObject <QQSecurityConfigFetcherDelegate>
{
    unsigned int _currentVersion;
    unsigned int _updTime;
    unsigned int _validTime;
    NSString *_modifyPasswordUrl;
}

+ (id)shareInstance;
- (void)GetModifyPasswordCfg;
@property(retain, nonatomic) NSString *_modifyPasswordUrl; // @synthesize _modifyPasswordUrl;
- (id)configMetaInfo;
- (void)didLoadLocalConfigData:(id)arg1 andMetaInfo:(id)arg2;
- (void)didRecvCloudConfigData:(id)arg1 andMetaInfo:(id)arg2;
- (id)init;
- (_Bool)neededRestoreLocal;
- (_Bool)parseSecCenterConfig:(id)arg1;
- (void)setConfigMetaInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

