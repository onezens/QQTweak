//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ARDeviceConfigMgr : NSObject
{
    NSArray *_arDisablePlatformTypeArr;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arDisablePlatformTypeArr; // @synthesize arDisablePlatformTypeArr=_arDisablePlatformTypeArr;
- (void)dealloc;
- (void)getConfigInfo;
- (id)init;
- (_Bool)scanPortNeedHidden;
- (void)setDefault;
- (void)updateDpcConfig:(id)arg1;

@end
