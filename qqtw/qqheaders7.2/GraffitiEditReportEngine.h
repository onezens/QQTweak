//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GraffitiEditReportEngine : NSObject
{
    NSString *_departKey;
    long long _opEntry;
}

+ (id)sharedInstance;
- (void)dealloc;
@property(copy, nonatomic) NSString *departKey; // @synthesize departKey=_departKey;
@property(readonly, nonatomic) long long opEntry; // @synthesize opEntry=_opEntry;
- (void)report898WithOpName:(id)arg1;
- (void)report898WithOpName:(id)arg1 reversed2:(long long)arg2;
- (void)report898WithOpName:(id)arg1 reversed:(long long)arg2;

@end

