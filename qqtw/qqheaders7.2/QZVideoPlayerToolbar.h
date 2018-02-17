//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZVideoPlayerSlider, UIButton, UIImageView, UILabel;

@interface QZVideoPlayerToolbar : UIView
{
    long long _duration;
    UIImageView *_backgroundView;
    _Bool _showZoomButton;
    _Bool _showHdIcon;
    _Bool _noLeftMargin;
    _Bool _noBackgroundColor;
    _Bool _durationFormatHHMMSS;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIButton *_hdIcon;
    UIButton *_zoomButton;
    double _hMargin;
    double _textSliderSpace;
    double _textZoomSpace;
    QZVideoPlayerSlider *_slider;
    long long _zoomState;
    long long _currentShowSeconds;
    struct CGSize _zoomImageSize;
}

- (void).cxx_destruct;
- (id)createLabelWithFrame:(struct CGRect)arg1 font:(id)arg2 textAlign:(long long)arg3;
@property(nonatomic) long long currentShowSeconds; // @synthesize currentShowSeconds=_currentShowSeconds;
@property(nonatomic) _Bool durationFormatHHMMSS; // @synthesize durationFormatHHMMSS=_durationFormatHHMMSS;
@property(nonatomic) double hMargin; // @synthesize hMargin=_hMargin;
@property(retain, nonatomic) UIButton *hdIcon; // @synthesize hdIcon=_hdIcon;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) _Bool noBackgroundColor; // @synthesize noBackgroundColor=_noBackgroundColor;
@property(nonatomic) _Bool noLeftMargin; // @synthesize noLeftMargin=_noLeftMargin;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
- (void)setDuration:(double)arg1;
- (void)setPlayTime:(double)arg1;
- (void)setQZoneDetaultSytle;
@property(nonatomic) _Bool showHdIcon; // @synthesize showHdIcon=_showHdIcon;
@property(nonatomic) _Bool showZoomButton; // @synthesize showZoomButton=_showZoomButton;
@property(retain, nonatomic) QZVideoPlayerSlider *slider; // @synthesize slider=_slider;
- (void)setTextLabel:(id)arg1 time:(double)arg2;
@property(nonatomic) double textSliderSpace; // @synthesize textSliderSpace=_textSliderSpace;
@property(nonatomic) double textZoomSpace; // @synthesize textZoomSpace=_textZoomSpace;
- (void)setTimeLabelFontSize:(double)arg1;
@property(retain, nonatomic) UIButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(nonatomic) struct CGSize zoomImageSize; // @synthesize zoomImageSize=_zoomImageSize;
@property(nonatomic) long long zoomState; // @synthesize zoomState=_zoomState;
- (void)sliderDraggingAction;

@end
