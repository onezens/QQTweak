//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAVAudioDataDelegate.h"
#import "QZLVSoundPlaySourceDelegate.h"

@class AudioDecoderWrapper, AudioMix, AudioVolumeScaler, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, NSTimer, QZLVMusicDownloadManager, QZLVMusicModel, QZLVSoundPlaySource, QZLiveViewController;

@interface QZLVMusicManager : NSObject <QAVAudioDataDelegate, QZLVSoundPlaySourceDelegate>
{
    char *_banzhouBuffer;
    NSTimer *_musicTimer;
    double _musicUsedTime;
    _Bool _isPlayByEnterForground;
    _Bool _isAddKVO;
    long long _isMusicActive;
    _Bool _isBackground;
    QZLVSoundPlaySource *_musicCompanySource;
    NSMutableArray *_mixToPlayDataArray;
    NSMutableArray *_mixToSendDataArray;
    NSObject<OS_dispatch_queue> *_accompanyReadQueue;
    NSObject<OS_dispatch_queue> *_mixQueue;
    NSLock *_accompanyReadLock;
    NSRecursiveLock *_recursiveLock;
    long long _accompanyTotalFrame;
    long long _accompanyDuration;
    long long _curAccompanyFrame;
    long long _mixToSendSkipCount;
    long long _preReadBufferCount;
    NSLock *_sourceListLock;
    _Bool _hasSetupAudioCtrl;
    NSMutableArray *_mtsArray;
    NSString *_accompanyLeftFile;
    NSString *_accompanyRightFile;
    NSMutableArray *_audioSourceList;
    _Bool _isResumeByEnterForground;
    _Bool _isStartByNetwork;
    int _frameErrorCount;
    _Bool _isResumeByUserClick;
    int _audioDecoderChannel;
    long long _curAccompanyState;
    QZLVMusicModel *_musicModel;
    double _voiceChannelVoluem;
    double _musicChannelVoluem;
    QZLiveViewController *_chatVC;
    QZLVMusicDownloadManager *_downloadManager;
    AudioVolumeScaler *_audioVolumeForVoice;
    AudioVolumeScaler *_audioVolumeForMusic;
    AudioDecoderWrapper *_audioDecoderWrapper;
    AudioMix *_audioMix;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int audioDecoderChannel; // @synthesize audioDecoderChannel=_audioDecoderChannel;
@property(retain, nonatomic) AudioDecoderWrapper *audioDecoderWrapper; // @synthesize audioDecoderWrapper=_audioDecoderWrapper;
@property(retain, nonatomic) AudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AudioVolumeScaler *audioVolumeForMusic; // @synthesize audioVolumeForMusic=_audioVolumeForMusic;
@property(retain, nonatomic) AudioVolumeScaler *audioVolumeForVoice; // @synthesize audioVolumeForVoice=_audioVolumeForVoice;
@property(nonatomic) __weak QZLiveViewController *chatVC; // @synthesize chatVC=_chatVC;
@property(nonatomic) long long curAccompanyState; // @synthesize curAccompanyState=_curAccompanyState;
@property(nonatomic) QZLVMusicDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)getCurFrameError;
@property(nonatomic) _Bool isResumeByUserClick; // @synthesize isResumeByUserClick=_isResumeByUserClick;
- (void)memcpyDst:(void *)arg1 src:(const void *)arg2 length:(unsigned long long)arg3;
@property(nonatomic) double musicChannelVoluem; // @synthesize musicChannelVoluem=_musicChannelVoluem;
@property(retain, nonatomic) QZLVMusicModel *musicModel; // @synthesize musicModel=_musicModel;
- (struct __sFILE *)openFileByFileName:(id)arg1;
- (void)reportMusicDataWithFirstActionType:(id)arg1 secondActionType:(id)arg2;
@property(nonatomic) double voiceChannelVoluem; // @synthesize voiceChannelVoluem=_voiceChannelVoluem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

