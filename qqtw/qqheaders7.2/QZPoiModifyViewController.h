//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZoneLBSPOIViewController.h"

@class NSArray, UIButton;

@interface QZPoiModifyViewController : MQZoneLBSPOIViewController
{
    NSArray *_poiArray;
    _Bool _showSearchBar;
    UIButton *_maskButton;
    id <QZPoiModifyViewControllerDelegate> _poiDelegate;
}

- (void).cxx_destruct;
- (_Bool)onRefresh;
@property(nonatomic) __weak id <QZPoiModifyViewControllerDelegate> poiDelegate; // @synthesize poiDelegate=_poiDelegate;

@end

