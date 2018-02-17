//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCellView.h"

#import "NIAttributedLabelDelegate.h"
#import "QQApplePayManagerDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "VASLocalPayHelperDelegate.h"

@class NIAttributedLabel, NSString, QQGroupMemberCardViewController, UIImageView, UILabel, VASLocalPayHelper;

@interface QQAIOTipCellView : QQAIOCellView <NIAttributedLabelDelegate, VASLocalPayHelperDelegate, QQApplePayManagerDelegate, SimpleAlertViewDelegate>
{
    NSString *_msgContent;
    UIImageView *_bgView;
    NIAttributedLabel *_contentLabel;
    UILabel *_defaultContentLabel;
    int _xo;
    struct CGSize _contentSize;
    NIAttributedLabel *_lable;
    QQGroupMemberCardViewController *_memberCardCtr;
    VASLocalPayHelper *_localPayHelper;
}

- (void).cxx_destruct;
- (void)addLoadingView;
- (void)addSensMsgTipsActionLink;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)dealloc;
- (void)doSensMsgTipsAction:(id)arg1;
- (void)drawAttributedLabel;
- (void)generateMsg;
- (struct CGRect)getBgRect;
- (void)initAttributedLabel;
- (void)initLabel;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) VASLocalPayHelper *localPayHelper; // @synthesize localPayHelper=_localPayHelper;
- (void)localPayHelperDidPaySuccess:(id)arg1;
- (void)localPayHelperUIShouldFinishLoading:(id)arg1;
- (void)payAction:(int)arg1;
- (void)pushViewController:(id)arg1;
- (void)recommendCompleteWithResult:(id)arg1;
- (id)recommendParentViewController;
- (id)recommendSource;
- (void)removeLoadingView;
- (void)reportSensMsgTipsClick:(id)arg1 forId:(unsigned long long)arg2 andAttribute:(unsigned long long)arg3;
@property(copy, nonatomic) NSString *msgContent; // @dynamic msgContent;
- (void)setNeedsLocalPayHelper;
- (_Bool)skipOpenGuideIfNeeded;
- (void)tipBtAction:(id)arg1;
- (void)troopNickSetAction:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImageView *bgView; // @dynamic bgView;
@property(retain, nonatomic) NIAttributedLabel *contentLabel; // @dynamic contentLabel;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UILabel *defaultContentLabel; // @dynamic defaultContentLabel;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
