//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFImageViewDelegate.h"

@class NSString, SFImageView, TwoDimensionBarcodeManager;

@interface QRCodeCommonBizPlug : NSObject <SFImageViewDelegate>
{
    SFImageView *_gifView;
    NSString *_redpackCodeData;
    TwoDimensionBarcodeManager *_qrcodeMgr;
    NSString *_qrcodeResult;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didAnimationFinished:(_Bool)arg1 loopCount:(int)arg2 error:(id)arg3;
- (void)getF2FRedpack:(id)arg1 vc:(id)arg2;
- (id)getF2FZipPath;
- (void)handelQQWalletQRPayURL:(id)arg1;
- (_Bool)handelQQWalletURL:(id)arg1;
- (_Bool)handleData:(id)arg1;
- (void)handleF2FNotification:(id)arg1;
- (void)handleF2FRedpackURL:(id)arg1;
- (_Bool)isF2FRedpackURL:(id)arg1;
- (_Bool)isQQWalletQRPayURL:(id)arg1;
- (_Bool)isQQWalletURL:(id)arg1;
- (void)outputLog:(id)arg1;
@property(nonatomic) __weak TwoDimensionBarcodeManager *qrcodeMgr; // @synthesize qrcodeMgr=_qrcodeMgr;
@property(copy, nonatomic) NSString *qrcodeResult; // @synthesize qrcodeResult=_qrcodeResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
