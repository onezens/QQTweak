//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQLongShareMsgMgr : NSObject
{
    NSMutableDictionary *_sendingMsgs;
}

+ (id)shareInstance;
- (void)dataReportReSend:(id)arg1;
- (void)dataReportReSendFailed:(id)arg1;
- (void)dealloc;
- (id)getMsgActionUrl:(id)arg1;
- (id)init;
- (_Bool)isNeedMarkMsgCtrlFlag:(id)arg1;
- (_Bool)isNeedToReSend:(id)arg1;
- (void)onLongShareMsgUploadFailed:(id)arg1;
- (void)onLongShareMsgUploadSuccess:(id)arg1;
- (_Bool)reSendLongShareMsg:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *sendingMsgs; // @synthesize sendingMsgs=_sendingMsgs;

@end
