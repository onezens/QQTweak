//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MQZoneMoodEditPermissionCell, NSDictionary, QZMoodComposeViewPresenter, UIViewController;

@interface QZComposerPermissionCell : UITableViewCell
{
    QZMoodComposeViewPresenter *_viewModel;
    MQZoneMoodEditPermissionCell *_button;
    NSDictionary *_params;
    UIViewController *_hostViewController;
}

- (void).cxx_destruct;
- (void)enterPermissionSelectView;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (id)initWithViewModel:(id)arg1;
- (id)onGetJSBridgeParams;
- (void)onSetJSBridgeParams:(id)arg1;
- (void)openUgcPermission;
- (void)resetPermissionCellInfo;

@end
