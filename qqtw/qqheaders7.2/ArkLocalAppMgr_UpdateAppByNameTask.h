//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArkAppPathInfo, NSDate, NSMutableArray, NSString;

@interface ArkLocalAppMgr_UpdateAppByNameTask : NSObject
{
    int _result;
    NSDate *_startTime;
    NSString *_appName;
    ArkAppPathInfo *_localAppInfo;
    NSMutableArray *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSMutableArray *callback; // @synthesize callback=_callback;
- (id)init;
@property(retain, nonatomic) ArkAppPathInfo *localAppInfo; // @synthesize localAppInfo=_localAppInfo;
@property(nonatomic) int result; // @synthesize result=_result;
@property(readonly) NSDate *startTime; // @synthesize startTime=_startTime;

@end
