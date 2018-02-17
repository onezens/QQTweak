//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol IQQVoicePlayerDelegate <NSObject>
- (NSData *)getAudioData:(unsigned int)arg1;
- (void)onPlayBegin;
- (void)onPlayEnd;

@optional
- (_Bool)getAudioData:(unsigned int)arg1 intoBuffer:(struct AudioQueueBuffer *)arg2;
- (NSData *)getAudioData:(unsigned int)arg1 useForPlay:(_Bool)arg2;
- (_Bool)getAudioStreamDescription:(struct AudioStreamBasicDescription *)arg1;
@end
