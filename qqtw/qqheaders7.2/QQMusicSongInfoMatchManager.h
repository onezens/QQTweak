//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQMusicSongInfoMatchManager : NSObject <IEngineDispatchDelegate>
{
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)didReceivedMsg:(id)arg1 errorCode:(unsigned int)arg2 requestType:(long long)arg3;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)favouriteSongWithSongID:(id)arg1;
- (char *)getRefreshPBBufWithSongName:(id)arg1 singerName:(id)arg2 albumName:(id)arg3 songID:(id)arg4 duration:(id)arg5 requestType:(long long)arg6;
- (id)init;
- (void)matchSongInfoWithSongName:(id)arg1 singerName:(id)arg2 albumName:(id)arg3 songID:(id)arg4 duration:(id)arg5;
- (void)notifyError:(id)arg1;
- (_Bool)request:(char *)arg1;
- (void)startRequestWithSongName:(id)arg1 singerName:(id)arg2 albumName:(id)arg3 songID:(id)arg4 duration:(id)arg5 requestType:(long long)arg6;
- (void)unfavouriteSongWithSongID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

