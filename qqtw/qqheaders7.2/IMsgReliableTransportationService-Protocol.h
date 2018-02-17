//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QQSendingMsgModel;

@protocol IMsgReliableTransportationService <NSObject>
- (NSArray *)getAllPiecesOfOneLongMsg:(QQSendingMsgModel *)arg1;
- (NSString *)getLicence:(id <IPacketSendResultHandler>)arg1;
- (_Bool)isMsgSending:(QQSendingMsgModel *)arg1;
- (_Bool)isMultiMessageSentOutCompletely:(QQSendingMsgModel *)arg1;
- (void)markMultiMessageAllFailed:(QQSendingMsgModel *)arg1;
- (void)notifyMsgCacheLoadFinished;
- (NSString *)registerSendResultHandler:(id <IPacketSendResultHandler>)arg1;
- (void)removeMultiMessagesFromSendQueue:(QQSendingMsgModel *)arg1;
- (QQSendingMsgModel *)removeSendingMsgBySeq:(int)arg1;
- (int)sendMessage:(QQSendingMsgModel *)arg1 transportLicence:(NSString *)arg2;
- (void)unregisterSendResultHandler:(id <IPacketSendResultHandler>)arg1;
@end
