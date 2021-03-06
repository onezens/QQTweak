//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, QRParaAttributeInfo;

@interface QRTextView : UIView
{
    long long _lineAmount;
    NSAttributedString *_attStr;
    double _viewWidth;
    QRParaAttributeInfo *_attInfo;
    NSString *_textInfoStr;
    int _xo;
}

+ (double)getAscent:(struct __CTLine *)arg1;
+ (double)getDescent:(struct __CTLine *)arg1;
+ (double)getLeading:(struct __CTLine *)arg1;

// Remaining properties
@property(retain, nonatomic) QRParaAttributeInfo *attInfo; // @dynamic attInfo;
@property(retain, nonatomic) NSAttributedString *attStr; // @dynamic attStr;
@property(nonatomic) long long lineAmount; // @dynamic lineAmount;
@property(copy, nonatomic) NSString *textInfoStr; // @dynamic textInfoStr;
@property(nonatomic) double viewWidth; // @dynamic viewWidth;

@end

