//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PECropViewControllerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class NSString, QUIActionSheet, UINavigationController;

@interface QQVIPFunctionImageChooser : NSObject <UIActionSheetDelegate, UIImagePickerControllerDelegate, PECropViewControllerDelegate, QQMultiImagePickerControllerDelegate, QUIActionSheetDelegate>
{
    QUIActionSheet *_actionSheet;
    _Bool _allowEdit;
    id <QQVipImageChooserDelegate> _delegate;
    UINavigationController *_nav;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
@property(nonatomic) _Bool allowEdit; // @synthesize allowEdit=_allowEdit;
- (void)cancelChoose;
- (void)chooseImageWithDelegate:(id)arg1 withCurNav:(id)arg2;
- (void)clearView;
- (void)completeChoose:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingImage:(id)arg2;
- (void)cropViewControllerDidCancel:(id)arg1;
@property(nonatomic) __weak id <QQVipImageChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleChoosingImage:(id)arg1 previousViewController:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
@property(nonatomic) __weak UINavigationController *nav; // @synthesize nav=_nav;
- (void)showCamera;
- (void)showImagePicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

