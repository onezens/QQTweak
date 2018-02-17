//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZonePullingTableViewController.h"

#import "QUIActionSheetDelegate.h"

@class NSString, QUIActionSheet;

@interface MQZoneOperatableViewController : MQZonePullingTableViewController <QUIActionSheetDelegate>
{
    long long _delUgcReqID;
    long long _delCmtReqID;
    long long _delReplyReqID;
    QUIActionSheet *_actionSheet;
}

- (void).cxx_destruct;
- (void)actionDelCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (void)actionDelReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)advReportWithRequestId:(long long)arg1 feedModel:(id)arg2 position:(long long)arg3 isDel:(_Bool)arg4;
- (void)alertTheUserWhenDelAction:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (_Bool)canDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3 fromLongPress:(_Bool)arg4;
- (void)dealloc;
- (void)delCmtWithFeedModel:(id)arg1 comment:(id)arg2;
- (void)delReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)delUgcWithFeedModel:(id)arg1 photoIndex:(long long)arg2 multiDel:(_Bool)arg3;
- (_Bool)enableActionForCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (id)fetchDeleteTips:(id)arg1;
- (void)handleFeedCellCommentReplyDelMenu:(id)arg1 comment:(long long)arg2 reply:(long long)arg3 commentType:(long long)arg4;
- (int)onNotifyDelCmtResult:(id)arg1;
- (int)onNotifyDelReplyResult:(id)arg1;
- (int)onNotifyDelUgcResult:(id)arg1;
- (void)refreshContentWithFeedModel:(id)arg1;
- (void)refreshLikeWithFeedModel:(id)arg1;
- (void)refreshVideoPlayCount:(id)arg1;
- (void)registOperationNotify:(id)arg1;
- (long long)requestDelCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (long long)requestDelReplyWithFeedModel:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)showCommitActionSheetWithMessage:(id)arg1 tag:(long long)arg2 userData:(id)arg3;
- (void)showDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3;
- (void)showDeleteCommentReply:(id)arg1 comment:(id)arg2 reply:(id)arg3 fromLongPress:(_Bool)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
