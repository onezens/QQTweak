//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface QQRecommendFriendsRequestItem : SAMRequestItem
{
    _Bool _isPushReason;
    unsigned long long _friendsCount;
}

@property(nonatomic) unsigned long long friendsCount; // @synthesize friendsCount=_friendsCount;
- (char *)getRequestBuffer;
@property(nonatomic) _Bool isPushReason; // @synthesize isPushReason=_isPushReason;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (int)parseRespBuffer:(const char *)arg1 len:(int)arg2 hasMore:(_Bool *)arg3 array:(id *)arg4;
- (char *)requestBufferWithItem:(id)arg1;
- (id)serviceCmd;

@end

