//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWalletBaseViewController.h"

#import "QQWalletCardViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, QQBankCard, QQWalletCardView;

@interface QQWalletCardDetailViewController : QQWalletBaseViewController <QQWalletCardViewDelegate, UIActionSheetDelegate>
{
    QQBankCard *_card;
    QQWalletCardView *_cardView;
    struct CGRect _beginRect;
    _Bool showAppearAnimation;
    NSMutableArray *_extraInfoList;
}

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeButtonDidTap;
- (void)dealloc;
- (void)didEntryBtnClicked:(int)arg1;
- (void)didRepaymentBtnClicked;
- (id)initWithCardInfo:(id)arg1 cardRectInWindow:(struct CGRect)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (void)moreButtonDidTap;
- (void)removeBinding;
- (void)requestBankExtraInfo;
- (void)resetLeftButtonWithoutTheme;
- (void)securityTips;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
