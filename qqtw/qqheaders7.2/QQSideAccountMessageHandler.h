//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@interface QQSideAccountMessageHandler : QQBaseMsgHandler
{
}

+ (id)shareInstance;
- (id)handleDiscussTmpMsg:(Msg_f948e9b8 *)arg1;
- (id)handleGroupTmpMsg:(Msg_f948e9b8 *)arg1;
- (id)handleMsgResp:(struct PbGetMsgResp *)arg1 cmd:(const char *)arg2;
- (id)handleTmpSessionMsg:(Msg_f948e9b8 *)arg1;
- (id)parseMsg:(Msg_f948e9b8 *)arg1 WithSUin:(long long)arg2;
- (void)parseSideAccountRichText:(const struct RichText *)arg1 toModel:(id)arg2;
- (id)parseTransElement:(const struct TransElem *)arg1 msgType:(int *)arg2;
- (id)parseUinPairMsg:(struct UinPairMsg *)arg1 WithSUin:(long long)arg2;

@end

