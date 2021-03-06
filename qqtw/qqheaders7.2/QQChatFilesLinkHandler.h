//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQChatFilesBaseHandler.h"

#import "DBAsyncCallbackProtocol.h"

@class ChatFilesEmptyView, NSMutableArray, NSMutableDictionary, NSString, QQBaseChatViewController, UIActivityIndicatorView;

@interface QQChatFilesLinkHandler : QQChatFilesBaseHandler <DBAsyncCallbackProtocol>
{
    NSMutableDictionary *_dataSource;
    NSMutableArray *_sectionKeys;
    long long _minTimeOrSeq;
    unsigned int _validMsgCount;
    QQBaseChatViewController *_aioVC;
    _Bool _firstReload;
    UIActivityIndicatorView *_refreshView;
    ChatFilesEmptyView *_emptyView;
}

- (void).cxx_destruct;
- (void)batchDelete;
- (void)batchDownload;
- (void)batchForward;
- (_Bool)canForward:(id)arg1;
- (void)checkEmptyView;
- (void)clearSelectedMessages;
- (id)getKeyWithSection:(long long)arg1;
- (id)getMessageWithIndexPath:(id)arg1;
- (id)initWithUin:(id)arg1 type:(int)arg2;
- (void)loadDataWithNeedMore:(_Bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)reloadSubViews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)selectedMediaType;
- (id)selectedMesageArray;
- (void)setHostViewCtroller:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

