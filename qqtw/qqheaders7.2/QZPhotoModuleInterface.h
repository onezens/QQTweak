//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZPhotoTabBarViewControllerDelegate.h"

@class NSString;

@interface QZPhotoModuleInterface : NSObject <QZPhotoTabBarViewControllerDelegate>
{
}

+ (void)enterAlbumList:(long long)arg1 nickname:(id)arg2 userInfo:(id)arg3 selectedIndex:(long long)arg4 parentCtr:(id)arg5;
+ (void)enterPhotoListWithFeedModel:(id)arg1 param:(id)arg2 parentCtr:(id)arg3;
+ (void)enterTabBarCtr:(long long)arg1 nickname:(id)arg2 userInfo:(id)arg3 selectedIndex:(long long)arg4 parentCtr:(id)arg5;
+ (void)updatePhotoListComment:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

