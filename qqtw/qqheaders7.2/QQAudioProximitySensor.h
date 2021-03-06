//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioRouteChangeProtocol.h"
#import "ICoreMotionObserver.h"

@class CMAccelerometerData, NSString;

@interface QQAudioProximitySensor : NSObject <AudioRouteChangeProtocol, ICoreMotionObserver>
{
    struct set<__unsafe_unretained id<QQAudioProximitySensorProtocol>, std::less<__unsafe_unretained id<QQAudioProximitySensorProtocol>>, std::allocator<__unsafe_unretained id<QQAudioProximitySensorProtocol>>> _listenners;
    CMAccelerometerData *_accelerometerdata;
    _Bool _proximityState;
    int _audioRouteType;
}

+ (id)GetInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)init;
- (void)notifyAccelermoterUpdated:(id)arg1;
- (void)notifyListenerWithState:(_Bool)arg1;
- (void)onOutputDeviceChanged:(int)arg1;
- (void)onSensorMoved;
- (void)onSensorStateChange:(id)arg1;
- (void)onSensorStoped;
- (void)removeListener:(id)arg1;
- (void)startProximitySensor;
- (void)stopProximitySensor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

