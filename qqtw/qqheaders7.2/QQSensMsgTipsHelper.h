//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGrayTipsManagerDelegate.h"

@class NSString;

@interface QQSensMsgTipsHelper : NSObject <QQGrayTipsManagerDelegate>
{
    id _transferZone;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)extractTipsFromHostMessage:(id)arg1 forChat:(_Bool)arg2;
- (void)graytipsManagerDidProcessAIO:(id)arg1 results:(id)arg2;
- (id)paramWithHostMsg:(id)arg1 forChat:(_Bool)arg2;
@property(retain, nonatomic) id transferZone; // @synthesize transferZone=_transferZone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

