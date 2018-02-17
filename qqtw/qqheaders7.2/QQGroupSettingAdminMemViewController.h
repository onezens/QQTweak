//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class NSMutableArray, NSMutableDictionary, QQGroupSettingAdminMemView, QQGroupSettingModel, QQHotChatMemberListManager, QQHotChatModel, UIButton, UIImageView;

@interface QQGroupSettingAdminMemViewController : QQViewController
{
    QQGroupSettingAdminMemView *pView;
    _Bool dataLoaded;
    UIImageView *contentBgImageView;
    UIImageView *shadowImageView;
    UIButton *tButton;
    QQGroupSettingModel *_model;
    QQHotChatModel *_hotChatModel;
    unsigned int _adminMaxNum;
    unsigned long long _refreshPopTime;
    NSMutableArray *_groupAdminMemArray;
    NSMutableArray *_adminArray;
    int _groupType;
    QQHotChatMemberListManager *_hotchatMemberListManager;
    NSMutableArray *_hotchatMemberArray;
    NSMutableDictionary *_hotchatAdminDict;
}

- (void)AddAdmin:(id)arg1;
- (void)actionKickGroupMemberResponse:(id)arg1;
- (void)addNotification;
- (void)clickBack:(id)arg1;
- (void)confirmEdit:(id)arg1;
- (void)dealloc;
- (void)editAdmin:(id)arg1;
- (void)enablePanGesture:(_Bool)arg1;
- (void)gotoUserSummary:(id)arg1;
- (id)init;
- (id)initWithGroupType:(int)arg1;
- (void)loadView;
- (void)requestMemberlist;
- (void)resetNavigationBarBtn;
- (void)restoreData;
@property(nonatomic) int groupType; // @dynamic groupType;
@property(retain, nonatomic) QQGroupSettingModel *model; // @dynamic model;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) unsigned int adminMaxNum; // @dynamic adminMaxNum;
@property(retain, nonatomic) NSMutableDictionary *hotchatAdminDict; // @dynamic hotchatAdminDict;
@property(retain, nonatomic) NSMutableArray *hotchatMemberArray; // @dynamic hotchatMemberArray;
@property(retain, nonatomic) QQHotChatMemberListManager *hotchatMemberListManager; // @dynamic hotchatMemberListManager;

@end
