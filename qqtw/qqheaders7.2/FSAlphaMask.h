//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface FSAlphaMask : NSObject
{
    struct CGContext *_context;
    double _lineWidth;
    _Bool _isEraser;
    struct CGSize _contentSize;
    UIColor *_strokeColor;
}

- (void)addCurveWithPoints:(id)arg1;
- (void)clearContent;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)data;
- (void)dealloc;
- (void)drawImage:(id)arg1;
- (id)init;
- (_Bool)isEraser;
- (void)setData:(id)arg1 contentSize:(struct CGSize)arg2;
- (void)setIsEraser:(_Bool)arg1;
- (void)setLineWidth:(double)arg1;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (id)toCIImage;
- (id)toUIImage;

@end
