//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_TPBaseEngine.h"

@class NSMutableDictionary, NSString;

@interface CFT_TPDataReport : CFT_TPBaseEngine
{
    int _processFlag;
    NSString *_orderNo;
    NSString *_totalFee;
    NSString *_comeFrom;
    NSString *_appInfo;
    NSMutableDictionary *_extentDict;
    NSMutableDictionary *_timeConsumig;
}

+ (void)clearExtentValue;
+ (void)commitWithSKey:(id)arg1;
+ (_Bool)isHaveExtentValue;
+ (_Bool)isProcessFlag:(int)arg1;
+ (_Bool)processFlag;
+ (void)report:(id)arg1;
+ (void)reportVIP:(id)arg1;
+ (void)reportVIPDataRport:(id)arg1 resverId:(id)arg2 resverID2:(id)arg3 param:(id)arg4 param2:(id)arg5;
+ (void)setExtentValue:(id)arg1 forKey:(id)arg2;
+ (void)setProcessFlag:(int)arg1;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *extentDict; // @synthesize extentDict=_extentDict;
- (id)getCurrentTime;
- (id)init;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(nonatomic) int processFlag; // @synthesize processFlag=_processFlag;
- (void)recordTimeConsumingBegin;
- (void)recordTimeConsumingEnd:(id)arg1 withErrorCode:(id)arg2;
- (void)report:(id)arg1;
- (void)report:(id)arg1 withParam1:(id)arg2 withErrorCode:(id)arg3;
- (void)reportV2:(id)arg1 withParam:(id)arg2 result:(id)arg3 failReason:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *timeConsumig; // @synthesize timeConsumig=_timeConsumig;
@property(retain, nonatomic) NSString *totalFee; // @synthesize totalFee=_totalFee;

@end

