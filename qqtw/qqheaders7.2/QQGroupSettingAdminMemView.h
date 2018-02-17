//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, QQGroupSettingModel, QQHotChatModel;

@interface QQGroupSettingAdminMemView : UITableView <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    QQGroupSettingModel *_model;
    QQHotChatModel *_hotChatModel;
    unsigned int _adminMaxNum;
    unsigned int _adminNum;
    NSMutableArray *_adminMemlist;
    NSMutableArray *_unrecieveJoinVerifyAdministrators;
    NSString *_selectedUin;
    _Bool _edit;
    unsigned int _selUin;
    int _groupType;
    NSMutableDictionary *_adminDict;
}

- (void)AddAdmin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSMutableDictionary *adminDict; // @synthesize adminDict=_adminDict;
@property(retain, nonatomic) NSMutableArray *adminMemlist; // @synthesize adminMemlist=_adminMemlist;
@property(nonatomic) unsigned int adminNum; // @synthesize adminNum=_adminNum;
- (void)dealloc;
- (void)enableAddingCell:(_Bool)arg1;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
- (void)initAdminMaxNum:(unsigned int)arg1 AdminArray:(id)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 adminMaxNum:(unsigned int)arg2 model:(id)arg3 adminArray:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 hotchatAdminMaxNum:(unsigned int)arg2 hotchatModel:(id)arg3 adminArray:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onQQCancelGroupAdminNotify:(id)arg1;
- (void)onSetGroupAdminResultNotify:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showActionSheet;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)updateAdminArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
