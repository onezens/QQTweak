//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQShareWebRichMsgTaskBase.h"

#import "QQFriendSelectedViewControllerDelegate.h"

@class NSString, QQFriendSelectedViewController;

@interface QQShare2FriendWebRichMsgTask : QQShareWebRichMsgTaskBase <QQFriendSelectedViewControllerDelegate>
{
    QQFriendSelectedViewController *_friendSelectViewController;
}

- (void)_specialHandleJoinDisGroupData;
- (_Bool)checkShareDataSourceIsValid:(id)arg1;
- (id)creatXMLMessageStringWithRichData:(id)arg1;
- (void)dealloc;
- (void)doShare:(id)arg1;
- (void)headerViewInitCompleted;
- (void)shareToFriend:(id)arg1;
- (void)shareToFriendCancelled;
- (void)shareToFriendDoReport:(id)arg1;
- (void)shareToFriendSuccess;
- (_Bool)shareWebRichMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
