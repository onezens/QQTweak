//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AppInPushMgr : NSObject
{
    unsigned long long _viewStateBitmap;
    NSDictionary *_viewShowNotiDic;
    NSDictionary *_viewDismissNotiDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)afterDelayPostAppInPushWith0xeeInfo:(id)arg1;
- (void)checkAndPostAllAppInPush;
- (int)indexOfCurVC;
- (void)insertModelKandianBox:(id)arg1;
- (_Bool)isEnableToPostWith0xeeInfo:(id)arg1;
- (_Bool)isEnableToPostWithCurVC;
- (_Bool)isEnableToPostWithPushSwitch;
- (_Bool)isEnableToPostWithTime:(double)arg1;
- (void)jumpWithWith0xeeInfo:(id)arg1;
- (void)onViewDismissWithNoti:(id)arg1;
- (void)onViewShowWithNoti:(id)arg1;
- (void)postAppInPushWith0xeeInfo:(id)arg1;
- (void)preloadImageWith0xeeInfo:(id)arg1;
- (id)r5ForAppInPushWithNotifyInfo:(id)arg1;
- (void)reportAppInPushWith0xeeInfo:(id)arg1 opType:(id)arg2;
@property(retain, nonatomic) NSDictionary *viewDismissNotiDic; // @synthesize viewDismissNotiDic=_viewDismissNotiDic;
@property(retain, nonatomic) NSDictionary *viewShowNotiDic; // @synthesize viewShowNotiDic=_viewShowNotiDic;
@property(nonatomic) unsigned long long viewStateBitmap; // @synthesize viewStateBitmap=_viewStateBitmap;

@end

