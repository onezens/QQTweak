//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQFriendShareModel;

@interface QQSiriShareEngine : NSObject
{
    NSString *_curUin;
    QQFriendShareModel *_friendModel;
    NSString *_messageContent;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)curUin;
@property(retain, nonatomic) QQFriendShareModel *friendModel; // @synthesize friendModel=_friendModel;
- (id)getSiriKitNeedInfo;
@property(retain, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;

@end

