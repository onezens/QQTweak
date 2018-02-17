//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPhotoMultimediaViewController.h"

#import "TBMultimediaEditArtisticComponentDelegate.h"
#import "TBMultimediaEditComponentDelegate.h"
#import "TBMultimediaEditCropComponentDelegate.h"
#import "TBMultimediaEditPituComponentDelegate.h"
#import "TBMultimediaEditSaveComponentDelegate.h"
#import "TBMultimediaEditViewDelegate.h"

@class NSArray, NSDictionary, NSString, QZMoodQuickPublishedEditView;

@interface QZMoodQuickPublishedViewController : QQPhotoMultimediaViewController <TBMultimediaEditViewDelegate, TBMultimediaEditCropComponentDelegate, TBMultimediaEditArtisticComponentDelegate, TBMultimediaEditSaveComponentDelegate, TBMultimediaEditComponentDelegate, TBMultimediaEditPituComponentDelegate>
{
    long long _ugcAuthority;
    QZMoodQuickPublishedEditView *_editView;
    NSArray *_uinList;
    NSDictionary *_jsParam;
}

@property(retain, nonatomic) QZMoodQuickPublishedEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) NSDictionary *jsParam; // @synthesize jsParam=_jsParam;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSArray *uinList; // @synthesize uinList=_uinList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
