//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface NearbyFollowStatusReqItem : SAMRequestItem
{
    NSArray *_dstUinList;
}

+ (basic_string_075b6133)getNearbyFollowStatusReqBuffer:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSArray *dstUinList; // @synthesize dstUinList=_dstUinList;
- (char *)getRequestBuffer;
- (id)init;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

@end

