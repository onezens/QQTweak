//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSetupRelatedViewController.h"

#import "UITableViewDelegate.h"

@class NSString;

@interface zanSetupViewController : QQSetupRelatedViewController <UITableViewDelegate>
{
}

- (void)GetCardSwitch:(id)arg1;
- (void)GetJoinZanRankingSwitch:(id)arg1;
- (void)GetRecZanRankingSwitch:(id)arg1;
- (void)GetStateSwitch:(id)arg1;
- (void)GetZanNoticeSwitch:(id)arg1;
- (void)handleJoinZanRankingSwitchChange:(id)arg1;
- (id)init;
- (void)loadView;
- (void)restoreDataAfterViewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

