//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView;

@interface MQZoneWidgetVip : UIView
{
    UIButton *_button;
    UIImageView *_diamondIcon;
    _Bool doInAnimtaion;
    _Bool _shouldShowFakeAnimation;
    id <MQZoneWidgetDelegate> _delegate;
    id _widgetInfo;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MQZoneWidgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doFakeAnimation;
@property(nonatomic) _Bool shouldShowFakeAnimation; // @synthesize shouldShowFakeAnimation=_shouldShowFakeAnimation;
@property(retain, nonatomic) id widgetInfo; // @synthesize widgetInfo=_widgetInfo;

@end

