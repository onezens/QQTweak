//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQGroupFileMessageSyncHandler : NSObject
{
    NSMutableDictionary *_taskIdMessageMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeAll;
- (void)removeGroupFileMessage:(id)arg1;
- (void)syncMessage:(id)arg1 withTask:(id)arg2;
- (void)taskStatusChanged:(id)arg1;

@end
