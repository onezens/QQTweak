//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZHomePagePermissionView, QZProfileModel, UIView;

@interface QZHomePagePermissionViewManager : NSObject
{
    QZHomePagePermissionView *_premissionView;
    struct CGRect _permissionViewFrame;
    long long _relationType;
    _Bool _isFacade;
    id <QZHomePagePermissionViewDelegate> _delegate;
    UIView *_superView;
    QZProfileModel *_profile;
}

- (void).cxx_destruct;
- (void)addFriend;
- (void)applyFollow:(id)arg1;
- (void)applyVisit;
- (void)dealloc;
@property(nonatomic) __weak id <QZHomePagePermissionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteVisitRecord;
- (void)deletedVisitRecord;
- (void)doFollow;
- (id)init;
@property(nonatomic) _Bool isFacade; // @synthesize isFacade=_isFacade;
- (void)layoutForFriendButNotAllowIn;
- (void)layoutForNeedAnswerQuestion;
- (void)layoutForNotFriendAndNotAllowIn;
- (void)onEnterQuestion:(id)arg1 answer:(id)arg2;
- (void)onInvite;
- (void)onNotifyKeyboardHide:(id)arg1;
- (void)onNotifyKeyboardShow:(id)arg1;
@property(retain, nonatomic) QZProfileModel *profile; // @synthesize profile=_profile;
- (void)removePermissionView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
- (void)showHomePagePermissionViewWithType:(long long)arg1 isFriend:(_Bool)arg2 andFrame:(struct CGRect)arg3;

@end
