//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, SPDYFrameEncoder;

@protocol SPDYFrameEncoderDelegate <NSObject>
- (void)didEncodeData:(NSData *)arg1 frameEncoder:(SPDYFrameEncoder *)arg2;
- (void)didEncodeData:(NSData *)arg1 withTag:(unsigned int)arg2 frameEncoder:(SPDYFrameEncoder *)arg3;
@end

