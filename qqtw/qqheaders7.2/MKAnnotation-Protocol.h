//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

