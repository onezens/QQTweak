//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteWebViewBaseController.h"

@class SpriteBlurView, UIButton, UIImage;

@interface SpriteTransparentViewController : SpriteWebViewBaseController
{
    UIButton *closeButton;
    _Bool _hasCloseBtn;
    _Bool _isBlur;
    UIImage *_screenShot;
    SpriteBlurView *_backgroundView;
}

@property(retain, nonatomic) SpriteBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)closeBtnClicked;
- (void)closeWebview;
- (void)dealloc;
@property(nonatomic) _Bool hasCloseBtn; // @synthesize hasCloseBtn=_hasCloseBtn;
- (id)initWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 screenShot:(id)arg2;
@property(nonatomic) _Bool isBlur; // @synthesize isBlur=_isBlur;
@property(retain, nonatomic) UIImage *screenShot; // @synthesize screenShot=_screenShot;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;

@end
