//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQRecentExInfo : NSObject
{
    struct QQRecentMessageModelExInfo _recentExInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)convertToPbInfo:(struct QQRecentMessageModelExInfo *)arg1;
- (const struct QQRecentMessageModelExInfo *)getInternalPbInfo;
- (_Bool)getMarkUnread;
- (_Bool)getMarkUnreadAdjust;
- (id)getModelKey;
- (id)initWithPbInfo:(struct QQRecentMessageModelExInfo *)arg1;
- (void)setMarkUnread:(_Bool)arg1;
- (void)setMarkUnreadAdjust:(_Bool)arg1;
- (void)setModelKey:(id)arg1;
- (void)updateExInfoWithInfo:(id)arg1;
- (void)updatePbInfo:(const struct QQRecentMessageModelExInfo *)arg1;

@end
