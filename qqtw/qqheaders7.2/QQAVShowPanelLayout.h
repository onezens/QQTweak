//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQAVShowPanelLayout : NSObject
{
    struct CGSize _bigViewSize;
    struct CGSize _smallViewSize;
    double _horizontalSpacing;
    struct UIEdgeInsets _edgeInsets;
    int _positionType;
    double _smallViewMoveDistance;
    int _xo;
    int _orientation;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (struct CGRect)frameForIndex:(int)arg1;
- (struct CGRect)frameForIndex:(int)arg1 viewCount:(int)arg2 viewMode:(int)arg3;
- (id)init;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;

// Remaining properties
@property(nonatomic) struct CGSize bigViewSize; // @dynamic bigViewSize;
@property(nonatomic) double horizontalSpacing; // @dynamic horizontalSpacing;
@property(nonatomic) int positionType; // @dynamic positionType;
@property(nonatomic) double smallViewMoveDistance; // @dynamic smallViewMoveDistance;
@property(nonatomic) struct CGSize smallViewSize; // @dynamic smallViewSize;

@end

