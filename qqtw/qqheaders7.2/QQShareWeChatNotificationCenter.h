//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQShareWeChatNotificationCenter : NSObject
{
    id <QQShareWeChatNotificationDelegate> _wechatDelegate;
}

+ (id)getInstance;
- (void)clearDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onWeChatResp:(id)arg1;
@property(nonatomic) id <QQShareWeChatNotificationDelegate> wechatDelegate; // @synthesize wechatDelegate=_wechatDelegate;

@end

