//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQAsset, QQMultiImagePickerController, QZPreviewVideoModel, UIImage;

@protocol MQZMultiImagePickerWrapperDelegate <NSObject>

@optional
- (void)MQZMultiImagePicker:(QQMultiImagePickerController *)arg1 didSelectPhotoList:(id)arg2;
- (void)MQZMultiImagePickerClickBackBtn:(QQMultiImagePickerController *)arg1;
- (void)MQZMultiImagePickerClickPhotoInPreviewView:(QQMultiImagePickerController *)arg1;
- (void)MQZMultiImagePickerClickPreviewBtn:(QQMultiImagePickerController *)arg1;
- (void)MQZMultiImagePickerClickSendBtnInPreviewView:(QQMultiImagePickerController *)arg1;
- (void)MQZMultiImagePickerController:(QQMultiImagePickerController *)arg1 didSendEditedPhoto:(UIImage *)arg2;
- (void)MQZMultiImagePickerDidCancel:(QQMultiImagePickerController *)arg1;
- (void)MQZMultiImagePickerDidSelectVideo:(QZPreviewVideoModel *)arg1;
- (void)MQZMultiImagePickerDidSelectVideoModel:(QQAsset *)arg1;
- (void)MQZMultiImagePickerDidSelectVideoUrl:(NSString *)arg1;
@end
