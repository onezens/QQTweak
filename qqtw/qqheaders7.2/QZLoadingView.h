//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

@interface QZLoadingView : UIView
{
    _Bool _showingAnimation;
    UIImageView *_qzoneFilledView;
    UIImageView *_qzoneUnFilledView;
    UIImageView *_wave1;
    UIImageView *_wave2;
    NSTimer *_longPressTimer;
    double _time;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationToBackground:(id)arg1;
- (void)applicationToForeground:(id)arg1;
- (void)dealloc;
- (void)hideLoading;
- (id)init;
- (_Bool)isLoading;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
- (void)postLoadingWithTime:(double)arg1;
@property(retain, nonatomic) UIImageView *qzoneFilledView; // @synthesize qzoneFilledView=_qzoneFilledView;
- (id)qzoneMaskLayer;
@property(retain, nonatomic) UIImageView *qzoneUnFilledView; // @synthesize qzoneUnFilledView=_qzoneUnFilledView;
- (void)removeLoadingView;
@property(nonatomic) _Bool showingAnimation; // @synthesize showingAnimation=_showingAnimation;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) UIImageView *wave1; // @synthesize wave1=_wave1;
@property(retain, nonatomic) UIImageView *wave2; // @synthesize wave2=_wave2;
- (void)showLoading;
- (void)showLoadingAndAnimation;
- (void)startMaskAnimation;
- (void)stopLoading;
- (void)stopLoadingAndAnimation;
- (void)stopTimer;

@end

