//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSArray, NSString;

@interface PublicAccountReporter : NSObject <IEngineDispatchDelegate>
{
    _Bool isLoading;
    _Bool aioVidoSwitch;
    NSArray *whiteList;
    NSArray *gtkList;
}

+ (id)getInstance;
@property(nonatomic) _Bool aioVidoSwitch; // @synthesize aioVidoSwitch;
- (void)dealloc;
- (void)didRecievedInMainMsg:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (long long)getSkeyHash:(id)arg1;
@property(retain, nonatomic) NSArray *gtkList; // @synthesize gtkList;
- (id)init;
- (_Bool)isInGtkListWithPuin:(long long)arg1;
- (_Bool)isInWhiteListWithMsg:(id)arg1;
- (_Bool)isInWhiteListWithPuin:(long long)arg1;
- (id)lastModifiedTimePath;
- (void)loadNativeWhiteListFile;
- (void)loadWhiteListFile;
- (void)notifyError:(id)arg1;
- (void)preReporteWithMsg:(id)arg1 otherParame:(id)arg2;
- (void)preReporteWithPuin:(long long)arg1 count:(unsigned int)arg2 msgId:(id)arg3 otherParame:(id)arg4;
- (id)readLastModifiedTime;
- (void)repReportNowReceivePublicAccountMsg:(id)arg1;
- (void)reportClickAckAppEvent:(id)arg1;
- (void)reportClickEventPublicAccountMsg:(id)arg1 url:(id)arg2 elementIndex:(id)arg3;
- (int)reportDataWithPuin:(long long)arg1 count:(unsigned int)arg2 msgId:(id)arg3 otherParame:(id)arg4;
- (void)reportEntryAioPublicAccountSource:(long long)arg1;
- (void)reportEntyAioUnReadPublicAccount:(long long)arg1;
- (void)reportJDWebWithParame:(id)arg1;
- (void)reportNowReceivePublicAccountMsg:(id)arg1;
- (void)reportPublicAccountClickReceiveMsgEvent:(_Bool)arg1 puin:(long long)arg2;
- (void)reportPublicAccountFlowInfo:(_Bool)arg1 puin:(long long)arg2;
- (id)rootDirectoryPath;
- (void)setAioVidoSwitchInfo:(id)arg1;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList;
- (id)whiteListJsonPath;
- (void)writeLastModifiedTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

