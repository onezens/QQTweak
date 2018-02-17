//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBExtendedHitButton, TBMultimediaEditSaveComponent, TBMultimediaEditView, UIButton, UIScrollView;

@interface TBMultimediaEditPanel : UIView
{
    double _spaceBetweenComponentButtons;
    UIScrollView *_componentButtonsView;
    TBMultimediaEditView *_editView;
    UIButton *_remakeButton;
    TBExtendedHitButton *_sendButton;
    double _componentButtonsViewLeftMargin;
    double _scrollViewRightMargin;
    TBMultimediaEditSaveComponent *_saveComponent;
}

- (void).cxx_destruct;
- (struct CGRect)componentButtonFrame:(id)arg1;
- (struct CGRect)componentButtonFrameWithIndex:(long long)arg1;
@property(retain, nonatomic) UIScrollView *componentButtonsView; // @synthesize componentButtonsView=_componentButtonsView;
@property(nonatomic) double componentButtonsViewLeftMargin; // @synthesize componentButtonsViewLeftMargin=_componentButtonsViewLeftMargin;
- (void)dealloc;
@property(nonatomic) __weak TBMultimediaEditView *editView; // @synthesize editView=_editView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withInitParam:(id)arg2;
- (void)onRemakeButtonClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onSendBtnNormale:(id)arg1;
- (void)onSendBtnPressed:(id)arg1;
- (void)registerComponents:(id)arg1;
@property(retain, nonatomic) UIButton *remakeButton; // @synthesize remakeButton=_remakeButton;
- (void)reset;
@property(retain, nonatomic) TBMultimediaEditSaveComponent *saveComponent; // @synthesize saveComponent=_saveComponent;
@property(nonatomic) double scrollViewRightMargin; // @synthesize scrollViewRightMargin=_scrollViewRightMargin;
@property(retain, nonatomic) TBExtendedHitButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) double spaceBetweenComponentButtons; // @synthesize spaceBetweenComponentButtons=_spaceBetweenComponentButtons;
- (void)showSendButtonAnimation;

@end
