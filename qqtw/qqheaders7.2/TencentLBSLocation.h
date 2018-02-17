//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, NSArray, NSDictionary, NSString;

@interface TencentLBSLocation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _wifiConfidence;
    CLLocation *_location;
    double _magneticHeading;
    unsigned long long _sourceProvider;
    unsigned long long _fakeType;
    unsigned long long _state;
    NSString *_verifyKey;
    NSString *_timestamp;
    NSDictionary *_rawData;
    long long _areaStat;
    NSString *_name;
    NSString *_address;
    NSString *_code;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_town;
    NSString *_village;
    NSString *_street;
    NSString *_street_no;
    NSArray *_poiList;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long areaStat; // @synthesize areaStat=_areaStat;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)distanceFromLocation:(id)arg1;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long fakeType; // @synthesize fakeType=_fakeType;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) double magneticHeading; // @synthesize magneticHeading=_magneticHeading;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(nonatomic) unsigned long long sourceProvider; // @synthesize sourceProvider=_sourceProvider;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *street_no; // @synthesize street_no=_street_no;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(copy, nonatomic) NSString *verifyKey; // @synthesize verifyKey=_verifyKey;
@property(copy, nonatomic) NSString *village; // @synthesize village=_village;
@property(nonatomic) _Bool wifiConfidence; // @synthesize wifiConfidence=_wifiConfidence;

@end
