//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LBSEngineStatus : NSObject
{
}

+ (void)getCurrentStatusCallBack:(CDUnknownBlockType)arg1;
+ (_Bool)isAuthorized;
+ (void)isAuthorizedCallBack:(CDUnknownBlockType)arg1;
+ (_Bool)isEnabledAndAuthorize;
+ (void)isEnabledAndAuthorizeCallBack:(CDUnknownBlockType)arg1;
+ (void)isLBSEnabledAndNotDeniedCallBack:(CDUnknownBlockType)arg1;
+ (_Bool)isLocationServerviceEnabled;
+ (void)isLocationServiceEnabledCallBack:(CDUnknownBlockType)arg1;

@end
