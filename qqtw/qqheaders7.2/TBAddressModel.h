//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, TBGPSModel;

@interface TBAddressModel : NSObject <NSCoding>
{
    _Bool _checked;
    unsigned int _coordinate;
    NSString *_street;
    NSString *_province;
    NSString *_city;
    NSString *_country;
    NSString *_building;
    TBGPSModel *_gps;
}

+ (id)createWithQQStoryCPBMessageDecoder:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *building; // @synthesize building=_building;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
- (_Bool)converQQStory:(struct CPBMessageEncoder *)arg1;
@property(nonatomic) unsigned int coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) TBGPSModel *gps; // @synthesize gps=_gps;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;

@end
