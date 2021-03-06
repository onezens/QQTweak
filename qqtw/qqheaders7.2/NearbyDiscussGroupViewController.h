//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "NearFieldDiscussDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, NearFieldDiscussEngine, QQNobodyView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView;

@interface NearbyDiscussGroupViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, NearFieldDiscussDelegate>
{
    UILabel *_tipLable;
    UILabel *_numLable;
    UILabel *_numTipLable;
    UIButton *_enterDiscussButton;
    UIButton *_enterGroupButton;
    UILabel *_enterButtonTipLabel;
    UITableView *_personInfotable;
    UIImageView *_lineTop;
    UIImageView *_lineBottome;
    NSMutableArray *_personInfoArr;
    UIImageView *_dotArr[4];
    UILabel *_numArr[4];
    int _currerntIndex;
    UIActivityIndicatorView *_loadingView;
    NSTimer *_timer;
    UILabel *_keyboardLab;
    _Bool _bEnableKeyBorad;
    _Bool _bClickEnter;
    NearFieldDiscussEngine *_discussEngine;
    QQNobodyView *_nobodyView;
    unsigned int _buttonSwitch;
    unsigned int _hasCreated;
    unsigned long long _uinOfCreator;
    UILabel *_tipNextLable;
    _Bool _isFromQQRecentController;
}

+ (void)clickReport:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;
- (void)LBSServiceResult:(id)arg1;
- (_Bool)canCreateLocationDisplayView;
- (void)checkLocationEnabledAndShowGuidWithBlock:(CDUnknownBlockType)arg1;
- (void)clearKeyBoard;
- (void)createLocationDisplayView;
- (void)dealloc;
- (void)didJoinDiscussWithDiscussID:(unsigned int)arg1 isCreater:(_Bool)arg2 result:(id)arg3 joinType:(unsigned int)arg4;
- (void)didReceiveDiscussMembers:(id)arg1 result:(id)arg2 buttonSwitch:(unsigned int)arg3 hasCreated:(unsigned int)arg4 uinOfCreator:(unsigned long long)arg5;
- (void)endInputNum;
- (void)enterDiscussGrp;
- (void)enterGroup;
- (id)init;
- (void)inputEndAnimation:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool isFromQQRecentController; // @synthesize isFromQQRecentController=_isFromQQRecentController;
- (void)loadView;
- (void)onCancelClick;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)timeOut:(id)arg1;
- (void)touchKeyBoard:(id)arg1;
- (void)updateButton:(id)arg1 title:(id)arg2 bgImageNormal:(id)arg3 bgImageHighlighted:(id)arg4 titleColorNormal:(int)arg5 titleColorHighlighted:(int)arg6;
- (void)updateEnterButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPushViewController;
@property(readonly) Class superclass;

@end

