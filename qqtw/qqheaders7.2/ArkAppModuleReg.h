//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQFriendSelectedViewControllerDelegate.h"

@class NSString;

@interface ArkAppModuleReg : NSObject <QQFriendSelectedViewControllerDelegate>
{
}

+ (long long)getAppType:(const char *)arg1;
+ (id)getChatUIN;
+ (id)getMessageModeByViewID:(int)arg1;
+ (void)regModuleClass:(Class)arg1;
+ (void)register:(void *)arg1 wrapper:(struct HARKMODULEREGISTER__ *)arg2 appID:(const char *)arg3;
+ (void)unregister:(void *)arg1 wrapper:(struct HARKMODULEREGISTER__ *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
