//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFavAdder.h"

#import "FAUpHttpDelegate.h"
#import "FavFileDelegate.h"

@class FileUpHttp, NSString;

@interface FileFavAdder : BaseFavAdder <FavFileDelegate, FAUpHttpDelegate>
{
    FileUpHttp *_helper;
}

- (void)OnHttpProgress:(id)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
@property(retain, nonatomic) FileUpHttp *helper; // @synthesize helper=_helper;
- (_Bool)isCancelable;
- (void)onCallback_Download:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2 uploadResult:(id)arg3;
- (void)onCallback_OnlinePreview:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Thumbnail:(int)arg1 errorType:(int)arg2;
- (_Bool)startUpload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
