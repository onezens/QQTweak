//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSIndexPath, NSLayoutConstraint, NSString, QZJNsQqradioProtocolStarPageItem, QZLVCountDownView, QZLVThemeController, UIButton, UICollectionView, UIFont, UIImage, UILabel, UITextView;

@interface QZLVStartView : UIView <UITextViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    double _horizontalMargin;
    double _textViewTop;
    double _coverBtnTop;
    double _coverBtnHeight;
    double _coverBtnTitleBottomInset;
    double _themeCellMargin;
    double _startBtnBottom;
    double _startBtnBottomKeyBoard;
    double _protocolBottom;
    double _protocolBottomKeyBoard;
    double _locationTop;
    double _themeTitleTop;
    double _kStartBtnHeight;
    double _kPlaceHoldInsetX;
    double _kExitButtonWidth;
    double _moreLiveBtnHeight;
    _Bool _isHolderTextViewAutoBecomeActive;
    _Bool _isSmallScreen;
    QZLVCountDownView *_countDownView;
    UIButton *_cameraSwitchBtn;
    UIButton *_coverChooseBtn;
    UIView *_cameraView;
    UIButton *_locationBtn;
    UIButton *_authorityBtn;
    UIButton *_startBtn;
    UITextView *_descTextView;
    UILabel *_placeHolderLabel;
    UILabel *_themeTitleLabel;
    UICollectionView *_themeCollectionView;
    UIButton *_protocolBtn;
    UIButton *_moveLivesBtn;
    UIButton *_myprofitBtn;
    NSLayoutConstraint *_placeHolerHeightC;
    NSLayoutConstraint *_textViewHeightC;
    NSLayoutConstraint *_textViewTopC;
    NSLayoutConstraint *_coverBtnTopC;
    NSLayoutConstraint *_startBtnBottomC;
    NSLayoutConstraint *_protocalBottomC;
    UIFont *_fontLarge;
    UIFont *_fontSmall;
    NSIndexPath *_indexPath;
    QZJNsQqradioProtocolStarPageItem *_watechLiveItem;
    _Bool _keyboardIsShowing;
    id <QZLVStartLiveViewDelegate> _delegate;
    NSString *_liveDesc;
    UIImage *_coverImg;
    NSString *_location;
    UIView *_authenWebviewContainer;
    QZLVThemeController *_themeController;
    NSString *_cashTitle;
    NSArray *_items;
}

@property(readonly, retain, nonatomic) UIView *authenWebviewContainer; // @synthesize authenWebviewContainer=_authenWebviewContainer;
@property(copy, nonatomic) NSString *cashTitle; // @synthesize cashTitle=_cashTitle;
@property(readonly, retain, nonatomic) UIImage *coverImg; // @synthesize coverImg=_coverImg;
@property(nonatomic) id <QZLVStartLiveViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool keyboardIsShowing; // @synthesize keyboardIsShowing=_keyboardIsShowing;
@property(readonly, copy, nonatomic) NSString *liveDesc; // @synthesize liveDesc=_liveDesc;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
- (double)maxHeight;
- (long long)notFound;
@property(retain, nonatomic) QZLVThemeController *themeController; // @synthesize themeController=_themeController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

