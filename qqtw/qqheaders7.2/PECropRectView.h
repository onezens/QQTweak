//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PEResizeControl;

@interface PECropRectView : UIView
{
    id _delegate;
    _Bool _showsGridMajor;
    _Bool _showsGridMinor;
    int _xo;
    PEResizeControl *_topLeftCornerView;
    PEResizeControl *_topRightCornerView;
    PEResizeControl *_bottomLeftCornerView;
    PEResizeControl *_bottomRightCornerView;
    PEResizeControl *_topEdgeView;
    PEResizeControl *_leftEdgeView;
    PEResizeControl *_bottomEdgeView;
    PEResizeControl *_rightEdgeView;
    struct CGRect _initialRect;
    _Bool _liveResizing;
}

- (struct CGRect)cropRectMakeWithResizeControlView:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isLiveResizing) _Bool liveResizing; // @synthesize liveResizing=_liveResizing;
- (void)layoutSubviews;
- (void)resizeConrolViewDidBeginResizing:(id)arg1;
- (void)resizeConrolViewDidEndResizing:(id)arg1;
- (void)resizeConrolViewDidResize:(id)arg1;
@property(nonatomic) _Bool showsGridMajor; // @dynamic showsGridMajor;
@property(nonatomic) _Bool showsGridMinor; // @dynamic showsGridMinor;

// Remaining properties
@property(nonatomic) id delegate; // @dynamic delegate;

@end
