//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PLTopPopNetworkTipsView : UIControl
{
    id <PLTopPopNetworkTipsViewDelegate> _delegate;
    UILabel *_tipsLabel;
    UIActivityIndicatorView *_activityView;
    UIButton *_quitBtn;
    UIImageView *_imageView;
    long long _currentState;
}

+ (void)closeAllTopView;
+ (void)closeNetworkView;
+ (void)showNetworkView:(long long)arg1 parentView:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <PLTopPopNetworkTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)init;
- (void)layoutSubviews;
- (void)onClick;
- (void)quit;
@property(retain, nonatomic) UIButton *quitBtn; // @synthesize quitBtn=_quitBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;

@end
