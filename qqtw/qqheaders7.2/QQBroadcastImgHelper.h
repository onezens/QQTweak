//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QQBroadcastImgHelper : NSObject
{
    NSArray *_broadcastUins;
}

@property(retain, nonatomic) NSArray *broadcastUins; // @synthesize broadcastUins=_broadcastUins;
- (void)dealloc;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (id)prepareUploadMultiImage:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)uploadImage:(id)arg1;

@end

