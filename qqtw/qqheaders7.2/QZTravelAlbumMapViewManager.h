//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapView;

@interface QZTravelAlbumMapViewManager : NSObject
{
    MKMapView *_mapView;
    CDStruct_b7cb895d _defaultRegion;
    _Bool _isFullyRendered;
}

+ (id)shareManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFullyRendered; // @synthesize isFullyRendered=_isFullyRendered;
- (id)mapView;
- (void)releaseMapView;
- (void)switchToDefalutRegion;
- (void)updateDefaultRegion;

@end

