//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSString, QQHttpClientSession;

@interface QQHistorySearchSvr : NSObject <IEngineDispatchDelegate>
{
    NSMutableArray *_friends;
    NSString *_keyWord;
    long long trycount;
    QQHttpClientSession *_cloudSearchCfgSession;
    _Bool _isCanSearchCloud;
    QQHttpClientSession *_roamConfigCfgSession;
    NSMutableArray *_msgArray;
    id <QQSearchRoamMsgProtocol> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cancelCoudSearchSession;
- (void)cancelRoamSession;
- (_Bool)checkIfLegal:(id)arg1;
- (void)clearMsgArr;
- (void)dealloc;
@property(nonatomic) __weak id <QQSearchRoamMsgProtocol> delegate; // @synthesize delegate=_delegate;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (_Bool)isCanSearchCloud;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
- (void)notifyError:(id)arg1;
- (_Bool)parseSearchCloudDict:(id)arg1;
- (void)qqHttpClientSessionFailWithError:(id)arg1 error:(id)arg2;
- (void)qqHttpClientSessionRequestDidLoad:(id)arg1 respObj:(id)arg2;
- (void)qqHttpRoamCfgSessionRequestDidLoad:(id)arg1 respObj:(id)arg2;
- (id)readCloudSearchConfig;
- (id)readLastModifiedTime;
- (void)requestCloudSearchSwitch;
- (void)requestCloudSearchSwitch:(_Bool)arg1;
- (void)requestRoamConfig;
- (void)requestSearchSvr;
- (void)requestSearchSvr:(id)arg1 friends:(id)arg2;
- (void)responseSearchResult:(struct CPBMessageDecoder *)arg1 ret:(int)arg2;
- (void)useLocalConfig;
- (void)writeCloudSearchConfig:(id)arg1;
- (void)writeLastModfied:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

