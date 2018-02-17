//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSDictionary, NSString, QQMessageReadTagView, QZCImageView, UIAlertView, UIButton, UICollectionView, UIImageView, UILabel, UIPageControl, UITextField, UIViewController;

@interface QQGroupGiftSelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    unsigned long long _uin;
    UICollectionView *_personalGiftGridView;
    UICollectionView *_publicGiftGridView;
    unsigned long long _personalGiftCount;
    unsigned long long _publicGiftCount;
    UIView *_catagroryIndicatorView;
    UIButton *_personalButton;
    UIButton *_publicButton;
    QZCImageView *_currencyIconView;
    long long _flowerCount;
    UIAlertView *_payAlertView;
    NSDictionary *_coinInfo;
    NSDictionary *_operatonInfo;
    UIImageView *_payArrowView;
    _Bool _isAnonymous;
    int _giveGift;
    NSArray *_rewardStocks;
    UIView *_loadingView;
    QQMessageReadTagView *_redTagView;
    _Bool _needHidePublicGifts;
    long long _giftCurrentPage;
    int _giftViewType;
    UITextField *_numberTextField;
    id <QQGroupGiftSelectionViewDelegate> _delegate;
    UIViewController *_viewController;
    unsigned long long _businessType;
    UIButton *_actionButton;
    UIPageControl *_pageControll;
    UIButton *_numberButton;
    UILabel *_flowerCountLabel;
    NSArray *_personalGifts;
    NSArray *_publicGifts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (id)addGiftCollectionViewWithOffsetX:(double)arg1;
- (id)addRedTagViewAtParentView:(id)arg1;
- (id)addSectionButtonWithIndex:(long long)arg1 title:(id)arg2;
- (void)adjustPage:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (void)cancelInputNumber;
- (void)checkInventory:(unsigned long long)arg1 isUseReward:(_Bool)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)conformInputNumber;
- (void)dealloc;
@property(nonatomic) __weak id <QQGroupGiftSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *flowerCountLabel; // @synthesize flowerCountLabel=_flowerCountLabel;
- (id)formatURLString:(id)arg1;
@property(readonly, nonatomic) unsigned long long giftCount;
- (void)giftSelectionPageChange;
@property(nonatomic) int giftViewType; // @synthesize giftViewType=_giftViewType;
- (void)gotoPay;
- (void)gotoPayAction;
- (id)groupCode;
- (void)hideInputNumber;
- (id)initWithFrame:(struct CGRect)arg1 businessType:(unsigned long long)arg2 uin:(unsigned long long)arg3;
- (void)inputNumberAction;
- (_Bool)isPublic;
- (_Bool)isShowRedDotOutDate:(id)arg1;
- (void)loadData;
- (void)loadGiftConfigData;
@property(retain, nonatomic) UIButton *numberButton; // @synthesize numberButton=_numberButton;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) UITextField *numberTextField; // @synthesize numberTextField=_numberTextField;
- (void)operationAction;
@property(retain, nonatomic) UIPageControl *pageControll; // @synthesize pageControll=_pageControll;
@property(retain, nonatomic) NSArray *personalGifts; // @synthesize personalGifts=_personalGifts;
- (void)pickPersionAction;
@property(retain, nonatomic) NSArray *publicGifts; // @synthesize publicGifts=_publicGifts;
- (void)refreshFooterStatus;
- (void)reloadStock;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(readonly, nonatomic) NSDictionary *selectedGiftInfo;
- (void)setFlowerCountHighlight;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)showPersonal;
- (void)showPublic;
- (void)showRetryView;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldClicked:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
