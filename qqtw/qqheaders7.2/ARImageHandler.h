//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AvatarServiceDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ARImageHandler : NSObject <AvatarServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_processQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)asynSaveAvatar:(id)arg1 identity:(id)arg2;
- (id)asyncGetHeadIconPath:(CDUnknownBlockType)arg1;
- (void)cleanAvatars;
- (void)dealloc;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)downloadAvatarWithIdentity:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

