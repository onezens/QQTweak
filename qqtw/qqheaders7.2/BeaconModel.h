//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BeaconModel : NSObject
{
    NSString *apn;
    NSString *contact;
    _Bool collectDataInited;
    NSString *imsi;
    NSString *wifiMac;
    NSString *macadd;
    NSString *wifiName;
    NSString *networkType;
    NSString *mbCarrier;
    _Bool isnew;
    _Bool isNewWithVer;
    long long appUseTime;
    long long appAvaTime;
    _Bool isReet;
}

+ (id)getDefualtBeaconAnaModel;
@property(retain) NSString *apn; // @synthesize apn;
@property long long appAvaTime; // @synthesize appAvaTime;
@property long long appUseTime; // @synthesize appUseTime;
@property(retain) NSString *imsi; // @synthesize imsi;
@property(nonatomic) _Bool isNewWithVer; // @synthesize isNewWithVer;
@property(nonatomic) _Bool isReet; // @synthesize isReet;
@property(nonatomic) _Bool isnew; // @synthesize isnew;
@property(retain) NSString *macadd; // @synthesize macadd;
@property(retain) NSString *mbCarrier; // @synthesize mbCarrier;
@property(retain) NSString *networkType; // @synthesize networkType;
@property(retain) NSString *wifiMac; // @synthesize wifiMac;
@property(retain) NSString *wifiName; // @synthesize wifiName;

@end
