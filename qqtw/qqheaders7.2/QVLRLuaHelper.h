//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QVLRLuaHelper : NSObject
{
}

+ (CDStruct_b7cb895d)MKCoordinateRegionMakeWithCenterDistanceCenterlat:(double)arg1 Centerlon:(double)arg2 withlat:(double)arg3 withlon:(double)arg4;
+ (CDStruct_b7cb895d)MKCoordinateRegionMakeWithCenterlat:(double)arg1 Centerlon:(double)arg2 withSpan:(CDStruct_c3b9c2ee)arg3;
+ (CDStruct_c3b9c2ee)MKCoordinateSpanFromMKCoordinateRegion:(CDStruct_b7cb895d)arg1;
+ (struct CLLocationCoordinate2D)MakeLocationCoordinate2D:(double)arg1 withLat:(double)arg2;
+ (struct UIEdgeInsets)MakeUIEdgeInsets:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
+ (id)convertEnglishRegionToLocalWithStr:(id)arg1;
+ (id)getGlobleColor:(id)arg1;
+ (double)getLocationCoordinate2D:(struct CLLocationCoordinate2D)arg1 withDirect:(int)arg2;
+ (void)getPlaceByLocationWithlatitude:(double)arg1 andLongitude:(double)arg2;

@end

