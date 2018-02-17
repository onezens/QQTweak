//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AKNetworkReachability : NSObject
{
    NSString *key_;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (id)detailedMSFNetworkStatus;
+ (id)detailedNetworkStatus;
+ (id)getNetTypeStr;
+ (id)makeAddressKey:(unsigned int)arg1;
+ (int)networkStatus;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (_Bool)connectionRequired;
- (int)currentReachabilityStatus;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (_Bool)isConnectionRequired;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInterventionRequired;
- (_Bool)isReachable;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachableViaWiFi;
@property(copy) NSString *key; // @synthesize key=key_;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (unsigned int)reachabilityFlags;
- (_Bool)startNotifier;
- (void)stopNotifier;

@end
