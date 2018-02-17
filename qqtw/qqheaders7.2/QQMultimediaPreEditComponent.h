//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditComponent.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, QQPhotoPreEditView;

@interface QQMultimediaPreEditComponent : TBMultimediaEditComponent <UIGestureRecognizerDelegate>
{
    long long _componentStatus;
}

@property(nonatomic) long long componentStatus; // @synthesize componentStatus=_componentStatus;
- (void)editModeEnterAnimation;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleBlankEventRespond:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (id)initWithCaptureEditMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak QQPhotoPreEditView *editView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
