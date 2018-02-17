//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DynamicAvatarScalor : NSObject
{
    NSMutableDictionary *_outputUrls;
    int _sWidth;
    int _sHeight;
    int _mWidth;
    int _mHeight;
    int _sBitrate;
    int _mBitrate;
    id <DynamicAvatarScalorDelegate> _delegate;
    long long _orientation;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DynamicAvatarScalorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)scaleVideoWithUrl:(id)arg1;
- (void)scaleVideoWithUrl:(id)arg1 resolutionArray:(id)arg2 bitrateArray:(id)arg3;

@end
