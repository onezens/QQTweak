//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class qfDataCenter;

@interface qfDeviceAdapter : NSObject
{
    qfDataCenter *_dc;
}

+ (void)dumpInformation:(const struct qfInformation *)arg1;
+ (void)fillCellInfo:(struct qfCellInfo *)arg1;
+ (void)fillNetInfo:(struct qfNetInfo *)arg1;
+ (int)getAirdropCapability;
+ (unsigned int)getLocalIp;
+ (_Bool)getNetInfo:(struct qfNetInfo *)arg1;
+ (int)getNetType;
+ (id)getWifiName;
+ (_Bool)isApEnable;
+ (_Bool)isWiFiEnabled;
- (void)getInformation:(struct qfInformation *)arg1;
- (id)initWithDc:(id)arg1;

@end

