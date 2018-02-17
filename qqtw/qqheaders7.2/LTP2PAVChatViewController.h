//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQP2PAVChatViewController.h"

@class QCAVCSEventModel, QQCallBackView;

@interface LTP2PAVChatViewController : QQP2PAVChatViewController
{
    QQCallBackView *_callBackView;
    QCAVCSEventModel *_avCSEventModel;
}

- (void)CloseWhenNotified;
- (void)ShowFriNetState:(id)arg1;
@property(retain, nonatomic) QCAVCSEventModel *avCSEventModel; // @synthesize avCSEventModel=_avCSEventModel;
@property(retain, nonatomic) QQCallBackView *callBackView; // @synthesize callBackView=_callBackView;
- (void)changeToCallBackStateWithCancelBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dismissCallbackState;
- (id)initWithChatModel:(id)arg1 andAVCSEventModel:(id)arg2;
- (void)loadAvatar;
- (void)onAddMem;
- (void)onCloseAction;
- (void)onReturnAction;
- (void)setAddMemberButtonEnabled:(_Bool)arg1;
- (void)updateCallingTipState:(unsigned long long)arg1;
- (void)updateTipsLayoutForType:(int)arg1;
- (void)viewDidLoad;

@end
