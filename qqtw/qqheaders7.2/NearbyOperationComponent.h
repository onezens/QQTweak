//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NearbyComponent.h"

#import "QUIActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UserSummaryTouchControlDelegate.h"

@class NSArray, NSString;

@interface NearbyOperationComponent : NearbyComponent <UIAlertViewDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, UserSummaryTouchControlDelegate>
{
    _Bool _supportWpa;
    long long _groupUin;
    NSArray *_disabledButtons;
    long long _summaryEntry;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)convertTouchControlWithUin:(long long)arg1 type:(int)arg2 subtype:(int)arg3 supportWpa:(_Bool)arg4 entryType:(long long)arg5;
- (void)disableButton:(id)arg1;
- (void)goToChat;
- (id)loadOperationTabBarWithSupportWpa:(_Bool)arg1;
- (void)onInformButtonTouched:(id)arg1;
- (void)onNearbyCancelFollowButtonTouched:(id)arg1;
- (void)onNearbyFollowButtonTouched:(id)arg1;
- (void)onNearbySendFlowersTouched:(id)arg1;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)pushToTribeSettingView;
- (void)reloadDataWithModel:(id)arg1 editingModel:(id)arg2 summaryType:(int)arg3 uin:(long long)arg4 tinyID:(long long)arg5 groupUin:(unsigned long long)arg6 editing:(_Bool)arg7;
- (void)requestFollow:(_Bool)arg1;
@property(nonatomic) long long summaryEntry; // @synthesize summaryEntry=_summaryEntry;
- (void)showMoreActionSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
