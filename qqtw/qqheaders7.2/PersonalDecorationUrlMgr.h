//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSMutableDictionary, NSString;

@interface PersonalDecorationUrlMgr : NSObject <ISCListenerCallback, ISCBusinessCallback>
{
    NSMutableDictionary *_dicUrlConfig;
    NSMutableDictionary *_defaultUrlConfig;
}

+ (id)getInstance;
+ (id)makeUrl:(id)arg1 WithParam:(id)arg2;
+ (id)replaceParams:(id)arg1 type:(id)arg2 bid:(id)arg3 adtag:(id)arg4;
+ (id)replacePublicParams:(id)arg1;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (id)configJsonPath;
- (void)dealloc;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (void)downloadPersonalityUrlConfigJson;
- (id)getBusinessKey:(id)arg1;
- (id)getBusinessKey:(id)arg1 withVipType:(long long)arg2;
- (id)getBusinessKey:(id)arg1 withVipTypeMask:(long long)arg2;
- (id)getConfigUrl:(id)arg1;
- (id)getDefaultUrl:(id)arg1;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (id)init;
- (void)initDefaultUrl;
- (void)initQQComicDefaultUrl;
- (void)initQQReaderDefaultUrl;
- (void)initVipDefaultUrl;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (void)loadPersonalityUrlConfig;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)onLoginSuccess:(id)arg1;
- (void)prasePersonalityUrlConfigData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

