//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSLock, NSString;

@interface BigDataConfigManager : NSObject
{
    NSLock *_lock;
    _Bool _signalInAdvance;
    NSData *_videoUKey;
    NSString *_sessionKeyBDH;
    NSDictionary *_configDic;
    long long _channelType;
    long long _ptvCannelType;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(readonly) long long channelType; // @synthesize channelType=_channelType;
- (void)clean;
@property(readonly, retain) NSDictionary *configDic; // @synthesize configDic=_configDic;
- (void)gainBDHCfg;
- (id)init;
- (id)ipAddrArr:(long long)arg1;
@property(readonly) long long ptvCannelType; // @synthesize ptvCannelType=_ptvCannelType;
- (void)refresh:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)saveConfigDic:(id)arg1;
@property(readonly, retain) NSString *sessionKeyBDH; // @synthesize sessionKeyBDH=_sessionKeyBDH;
@property(readonly) _Bool signalInAdvance; // @synthesize signalInAdvance=_signalInAdvance;
@property(readonly, retain) NSData *videoUKey; // @synthesize videoUKey=_videoUKey;

@end
