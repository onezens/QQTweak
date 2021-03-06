//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQBaseChatViewController, QQMsgRecallFile, QQMsgRecallText, QQRichMsgRecallImage, QQRichMsgRecallMarketFace, QQRichMsgRecallPtt, QQRichMsgRecallShortVideo, QQRichMsgRecallSprite;

@interface QQAIORecallHandler : NSObject
{
    QQMsgRecallText *msgRecallText;
    QQBaseChatViewController *_supViewController;
    QQRichMsgRecallImage *_msgRecallImage;
    QQRichMsgRecallShortVideo *_msgRecallShortVideo;
    QQRichMsgRecallPtt *_msgRecallPtt;
    QQRichMsgRecallMarketFace *_msgRecallMarketFace;
    QQMsgRecallFile *_msgRecallFile;
    QQRichMsgRecallSprite *_msgRecallSprite;
    int _xo;
}

- (void).cxx_destruct;
- (id)chatViewTable;
- (void)dealloc;
- (void)doRecallOperation:(id)arg1;
- (id)getMsgRecall:(int)arg1;
- (void)initModel;
- (id)initWithChatViewController:(id)arg1;
- (_Bool)isUnderCurrentChatView:(long long)arg1 uin:(id)arg2;
@property(retain, nonatomic) QQRichMsgRecallSprite *msgRecallSprite; // @synthesize msgRecallSprite=_msgRecallSprite;
- (void)onAccept:(id)arg1;
- (void)onRecallMsgModifyNick:(id)arg1;
- (void)onReceiveRecallMsg:(id)arg1;
- (void)onReject:(id)arg1;
- (void)onReplay:(id)arg1;
- (void)regNotify;

// Remaining properties
@property(retain, nonatomic) QQMsgRecallFile *msgRecallFile; // @dynamic msgRecallFile;
@property(retain, nonatomic) QQRichMsgRecallImage *msgRecallImage; // @dynamic msgRecallImage;
@property(retain, nonatomic) QQRichMsgRecallMarketFace *msgRecallMarketFace; // @dynamic msgRecallMarketFace;
@property(retain, nonatomic) QQRichMsgRecallPtt *msgRecallPtt; // @dynamic msgRecallPtt;
@property(retain, nonatomic) QQRichMsgRecallShortVideo *msgRecallShortVideo; // @dynamic msgRecallShortVideo;
@property(nonatomic) __weak QQBaseChatViewController *supViewController; // @dynamic supViewController;

@end

