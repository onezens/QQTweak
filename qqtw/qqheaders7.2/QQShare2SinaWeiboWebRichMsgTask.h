//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQShareWebRichMsgTaskBase.h"

#import "QQShareWeChatNotificationDelegate.h"

@class NSString;

@interface QQShare2SinaWeiboWebRichMsgTask : QQShareWebRichMsgTaskBase <QQShareWeChatNotificationDelegate>
{
}

- (_Bool)canShareToSinaWeiboAndShowTipsIfNot;
- (void)dealloc;
- (void)doShare:(id)arg1;
- (void)shareToSinaWeibo:(id)arg1;
- (void)shareToWeDoReport:(int)arg1 with2dKey:(int)arg2;
- (void)shareToWeibo2:(id)arg1 andImage:(id)arg2;
- (id)urlEncode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
