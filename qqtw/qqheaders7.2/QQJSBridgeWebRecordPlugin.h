//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "QQGroupTribeRecordProtocol.h"
#import "QQPttTryListtenPlayerDelegate.h"

@class NSDictionary, NSString, QQGroupTribeRecordView, QQLockDictionary, QQPttTryListtenPlayer;

@interface QQJSBridgeWebRecordPlugin : QQWebViewPluginQQBizBase <QQGroupTribeRecordProtocol, QQPttTryListtenPlayerDelegate>
{
    QQGroupTribeRecordView *_recordView;
    QQLockDictionary *_mediaInfo;
    QQPttTryListtenPlayer *_recordPlayer;
    NSString *_todayDirName;
    NSDictionary *_requestQuery;
    NSDictionary *_uploadRequestQuery;
}

- (id)checkRecordDir;
- (void)dealloc;
- (void)executeJSCallbackWithArgument:(id)arg1;
- (void)executeJSCallbackWithArgument:(id)arg1 isUpload:(_Bool)arg2;
- (void)getCurrentRecordDir;
- (void)handleJsBridgeRequest_webRecord_pause:(id)arg1;
- (void)handleJsBridgeRequest_webRecord_play:(id)arg1;
- (void)handleJsBridgeRequest_webRecord_startRecord:(id)arg1;
- (void)handleJsBridgeRequest_webRecord_stop:(id)arg1;
- (void)handleJsBridgeRequest_webRecord_stopRecord:(id)arg1;
- (void)handleJsBridgeRequest_webRecord_upload:(id)arg1;
- (id)init;
- (void)initMediaInfo;
- (_Bool)isMicPhoneAccessable;
- (void)onPlayError:(id)arg1 withErrorCode:(id)arg2;
- (void)onPlayStateChange:(id)arg1 withState:(id)arg2;
- (void)onRecordCanceled:(id)arg1;
- (void)onRecordFailed:(id)arg1;
- (void)onRecordSend:(id)arg1 recordPath:(id)arg2 recordTime:(int)arg3;
@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
@property(retain, nonatomic) NSDictionary *uploadRequestQuery; // @synthesize uploadRequestQuery=_uploadRequestQuery;
- (void)stopRecord;
- (void)uploadWebRecordFileWithRecordID:(id)arg1 withCGI:(id)arg2 andCookie:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

