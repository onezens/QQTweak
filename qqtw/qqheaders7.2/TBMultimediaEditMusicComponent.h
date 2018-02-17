//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditComponent.h"

#import "TBMultimediaEditLBSHandlerDelegate.h"
#import "TBStoryMusicManagerShowDelegate.h"

@class NSString, TBMultimediaEditLBSHandler, TBStoryMusicModel;

@interface TBMultimediaEditMusicComponent : TBMultimediaEditComponent <TBStoryMusicManagerShowDelegate, TBMultimediaEditLBSHandlerDelegate>
{
    _Bool _gifSelected;
    _Bool _isHasSelectedMusic;
    TBStoryMusicModel *_lastHasSelectMusicModel;
    unsigned long long _musicType;
    TBMultimediaEditLBSHandler *_lbsHandler;
}

- (void)buttonClicked;
- (void)clickCancleBtn;
- (void)clickDoneBtn;
- (void)dealloc;
- (void)getEditActionResult:(id)arg1;
- (void)getPublishInfo:(id)arg1;
- (id)init;
@property(retain, nonatomic) TBMultimediaEditLBSHandler *lbsHandler; // @synthesize lbsHandler=_lbsHandler;
- (void)makeVideoAudio;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
- (void)receiveInfo:(id)arg1;
- (void)refreshComponentParam;
- (void)reset;
- (void)start;
- (void)stop;
- (void)storyUpdateMusicIcon:(unsigned long long)arg1;
- (void)tapBlankToHideMusicView;
- (void)userCurrentLocationChanged:(id)arg1;
- (void)userLocationTypeChanged:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
