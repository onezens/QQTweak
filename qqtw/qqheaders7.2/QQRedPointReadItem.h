//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface QQRedPointReadItem : SAMRequestItem
{
    NSArray *_readReqList;
}

- (void).cxx_destruct;
- (void)dealloc;
- (char *)getRequestBuffer;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(retain, nonatomic) NSArray *readReqList; // @synthesize readReqList=_readReqList;
- (id)serviceCmd;

@end

