//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIViewController;

@protocol ILTMultiAVService <NSObject>
- (NSString *)getMultiBillNotEnoughConfirm:(_Bool)arg1;
- (NSString *)getMultiBillNotEnoughMessage:(_Bool)arg1;
- (NSString *)getMultiBillNotEnoughTitle:(_Bool)arg1;
- (void)reqMultiAVWithDiscussUin:(long long)arg1 withMembers:(NSArray *)arg2 needAddMember:(_Bool)arg3 withCallSource:(long long)arg4 withVC:(UIViewController *)arg5;
- (_Bool)shouldShowConfirmAlertViewWithEntrance:(long long)arg1 andDiscussUin:(long long)arg2 andQQMembers:(NSArray *)arg3;
- (void)showConfirmAlertView:(void (^)(_Bool))arg1;
@end
