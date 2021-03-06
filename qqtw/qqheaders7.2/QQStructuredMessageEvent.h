//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQStructuredMessageEvent : NSObject
{
    NSString *_templateID;
    NSString *_serviceID;
    NSString *_action;
    NSString *_actionData;
    NSString *_url;
    NSString *_appid;
    unsigned long long _pubAccCustomMsgID;
    int _xo;
}

- (void)dealloc;
- (_Bool)hasAction;
- (id)initWithTemplateID:(id)arg1 serviceID:(id)arg2 action:(id)arg3 actionData:(id)arg4 url:(id)arg5 appid:(id)arg6;

// Remaining properties
@property(retain, nonatomic) NSString *action; // @dynamic action;
@property(retain, nonatomic) NSString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned long long pubAccCustomMsgID; // @dynamic pubAccCustomMsgID;
@property(retain, nonatomic) NSString *serviceID; // @dynamic serviceID;
@property(retain, nonatomic) NSString *templateID; // @dynamic templateID;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

