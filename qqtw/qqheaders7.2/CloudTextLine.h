//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CloudTextLine : NSObject
{
    double _firstGlyphPos;
    _Bool _vertical;
    unsigned long long _index;
    unsigned long long _row;
    NSArray *_verticalRotateRange;
    const struct __CTLine *_CTLine;
    double _ascent;
    double _descent;
    double _leading;
    double _lineWidth;
    double _trailingWhitespaceWidth;
    struct CGPoint _position;
    struct _NSRange _range;
    struct CGRect _bounds;
}

+ (id)lineWithCTLine:(struct __CTLine *)arg1 position:(struct CGPoint)arg2 vertical:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct __CTLine *CTLine; // @synthesize CTLine=_CTLine;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)dealloc;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) double leading; // @synthesize leading=_leading;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void)reloadBounds;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
- (void)setCTLine:(const struct __CTLine *)arg1;
@property(retain, nonatomic) NSArray *verticalRotateRange; // @synthesize verticalRotateRange=_verticalRotateRange;
@property(readonly, nonatomic) double trailingWhitespaceWidth; // @synthesize trailingWhitespaceWidth=_trailingWhitespaceWidth;
@property(readonly, nonatomic) _Bool vertical; // @synthesize vertical=_vertical;

@end

