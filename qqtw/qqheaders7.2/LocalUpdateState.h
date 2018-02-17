//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSDictionary, NSString;

@interface LocalUpdateState : QQGroupPropertyModel
{
}

- (id)LtoString:(id)arg1;
- (int)escapedSeconds;
- (id)init;
- (_Bool)isChecking;
- (_Bool)isForceUpdate;
- (_Bool)serverNeedUpdate;

// Remaining properties
@property(nonatomic) long long mCheckTimeStamp; // @dynamic mCheckTimeStamp;
@property(nonatomic) int mDeviceResult; // @dynamic mDeviceResult;
@property(copy, nonatomic) NSDictionary *mDeviceUpdateInfo; // @dynamic mDeviceUpdateInfo;
@property(nonatomic) NSString *mDin; // @dynamic mDin;
@property(nonatomic) _Bool mIsAutoCheck; // @dynamic mIsAutoCheck;
@property(nonatomic) _Bool mIsDeviceChecking; // @dynamic mIsDeviceChecking;
@property(nonatomic) _Bool mIsServerChecking; // @dynamic mIsServerChecking;
@property(nonatomic) _Bool mIsUpdateDeviceStatus; // @dynamic mIsUpdateDeviceStatus;
@property(nonatomic) int mLastCheckVersion; // @dynamic mLastCheckVersion;
@property(nonatomic) int mServerResult; // @dynamic mServerResult;
@property(copy, nonatomic) NSDictionary *mServerUpdateInfo; // @dynamic mServerUpdateInfo;
@property(nonatomic) long long mUpgradeTimeout; // @dynamic mUpgradeTimeout;
@property(nonatomic) int mode; // @dynamic mode;

@end
