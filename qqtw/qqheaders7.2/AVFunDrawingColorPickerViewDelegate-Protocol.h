//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@protocol AVFunDrawingColorPickerViewDelegate <NSObject>

@optional
- (void)onColorTouchesBegin;
- (void)onColorTouchesEnd;
- (void)setColor:(UIColor *)arg1;
- (void)setPickerIndex:(int)arg1;
@end

