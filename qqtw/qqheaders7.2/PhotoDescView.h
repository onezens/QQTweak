//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface PhotoDescView : UIView
{
    NSMutableDictionary *emotionViews_;
    NSMutableArray *drawItems_;
    NSString *text_;
    double _suitableHeight;
    _Bool _isDefaultText;
    _Bool _lazyLoadGif;
    _Bool _isWrapping;
    long long _uin;
    long long _owerUin;
    UIFont *_font;
    UIColor *_textColor;
    double _lineSpace;
    id <PhotoDescViewDelegate> _delegate;
    long long _maxLine;
}

- (void).cxx_destruct;
- (void)clearEmotions;
@property(nonatomic) __weak id <PhotoDescViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawEmotion:(id)arg1 itemIndex:(int)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)handleTouch:(struct CGPoint)arg1 byTouchesBegan:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isTextEmpty;
@property(nonatomic) _Bool isWrapping; // @synthesize isWrapping=_isWrapping;
- (void)layoutSubviews;
@property(nonatomic) _Bool lazyLoadGif; // @synthesize lazyLoadGif=_lazyLoadGif;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) long long maxLine; // @synthesize maxLine=_maxLine;
@property(nonatomic) long long owerUin; // @synthesize owerUin=_owerUin;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void)startGIFAnimating;
- (double)suitableHeight;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
