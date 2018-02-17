//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AACAudioServiceDelegate.h"
#import "SDAudioCodecDelegate.h"
#import "SDIPCVideoWidgetDataSource.h"

@class AACAudioService, AudioHelper, AudioRecordAndPlayer, NSMutableDictionary, NSRecursiveLock, NSString, SDAudioCodec, SDIPCVideoWidget;

@interface SDIPCVideoViewModel : NSObject <SDAudioCodecDelegate, AACAudioServiceDelegate, SDIPCVideoWidgetDataSource>
{
    NSMutableDictionary *_data;
    _Bool _isMultiVideo;
    SDIPCVideoWidget *_videoView;
    AudioHelper *_audioHelper;
    _Bool _isTalking;
    int _speakState;
    int _micState;
    AACAudioService *_audioStreamPlayer;
    unsigned int _audioType;
    _Bool _isMute;
    _Bool _appInBackground;
    _Bool _isAACTalk;
    AudioRecordAndPlayer *_audioRecordAndPlayer;
    SDAudioCodec *_audioCodec;
    NSRecursiveLock *_recursiveLock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(retain, nonatomic) SDAudioCodec *audioCodec; // @synthesize audioCodec=_audioCodec;
@property(retain, nonatomic) AudioRecordAndPlayer *audioRecordAndPlayer; // @synthesize audioRecordAndPlayer=_audioRecordAndPlayer;
- (int)checkAudioDataHeaderType:(long long)arg1 length:(int)arg2;
- (id)dealOCSAudioNotify;
- (void)initAudio;
@property(nonatomic) _Bool isAACTalk; // @synthesize isAACTalk=_isAACTalk;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
