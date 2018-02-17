//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NIAttributedLabelDelegate.h"

@class NIAttributedLabel, NSDictionary, NSMutableArray, NSString, QQMessageModel, UIView;

@interface QQGroupAVMsgCell : UIControl <NIAttributedLabelDelegate>
{
    double _maxWidth;
    NIAttributedLabel *_msgTextView;
    NSMutableArray *_actionModels;
    UIView *_msgView;
    _Bool _showOver;
    QQMessageModel *_msgModel;
    NSString *_groupCode;
    NSString *_getInMemberUin;
    id <QQGroupAVChatMessageViewDelegate> _delegate;
    NSDictionary *_needUpdateNickUin;
}

- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)clear;
- (void)delayToFadeout;
- (void)delayToFadeoutInner;
@property(nonatomic) __weak id <QQGroupAVChatMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doInitUI;
- (void)fadein;
- (void)fadeout;
- (double)getHeigh;
@property(retain, nonatomic) NSString *getInMemberUin; // @synthesize getInMemberUin=_getInMemberUin;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (id)initWithMaxWidth:(double)arg1;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(retain) NSDictionary *needUpdateNickUin; // @synthesize needUpdateNickUin=_needUpdateNickUin;
- (_Bool)reloadModelIfNeed;
- (void)resizeCell;
- (void)setMemberGetInUin:(id)arg1;
- (void)setMemberGetInUin:(id)arg1 groupCode:(id)arg2;
- (void)setModel:(id)arg1;
- (void)setMsgContentText:(id)arg1;
@property _Bool showOver; // @synthesize showOver=_showOver;
- (void)setWarningModel;
- (void)setY:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
