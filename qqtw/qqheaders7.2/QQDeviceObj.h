//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDeviceObj : NSObject
{
    _Bool _bgStatusRefreshed;
    long long _bgRefreshStatus;
}

+ (id)getInstance;
- (void)appEnterBackground;
@property long long bgRefreshStatus; // @synthesize bgRefreshStatus=_bgRefreshStatus;
@property _Bool bgStatusRefreshed; // @synthesize bgStatusRefreshed=_bgStatusRefreshed;
- (id)bgrefreshstatusKey;
- (void)dealloc;
- (long long)getBgrefreshStatus;
- (id)init;

@end

