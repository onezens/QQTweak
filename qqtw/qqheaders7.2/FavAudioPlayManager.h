//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQPttPlayerDelegate.h"

@class AudioModel, FavAudioPlayer, NSString, QQPttPlayer, QQSilkPlayer;

@interface FavAudioPlayManager : NSObject <QQPttPlayerDelegate>
{
    QQPttPlayer *_pttPlayer;
    AudioModel *_audioModel;
    id <FavAudioPlayManagerDelegate> _delegate;
    _Bool _isInit;
    FavAudioPlayer *_favAudioPlayer;
    QQSilkPlayer *_silkPlayer;
}

+ (id)getInstance;
@property(retain, nonatomic) AudioModel *audioModel; // @synthesize audioModel=_audioModel;
- (_Bool)canPlay:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <FavAudioPlayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyAudio;
- (id)getCellModel:(id)arg1;
- (id)getPttList;
- (id)getRouteTipParentView;
- (struct CGRect)getVoiceRouteBtnFrame;
- (id)getVoiceRouteBtnParentView;
- (_Bool)initAudio;
- (_Bool)initAudioWithQQSilkPlayer;
- (void)onAutoPlay:(id)arg1;
- (void)onPttPlayError:(int)arg1;
- (void)onPttPlayFinish;
- (void)onPttPlayFinish:(id)arg1;
- (void)onPttPlayStart:(id)arg1;
- (void)onUpdateDetail:(id)arg1;
- (_Bool)play:(id)arg1;
@property(retain, nonatomic) QQPttPlayer *pttPlayer; // @synthesize pttPlayer=_pttPlayer;
@property(retain, nonatomic) QQSilkPlayer *silkPlayer; // @synthesize silkPlayer=_silkPlayer;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

