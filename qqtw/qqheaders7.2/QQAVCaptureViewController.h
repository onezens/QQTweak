//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LbsPendentEngineDelegate.h"
#import "MQZMultiImagePickerWrapperDelegate.h"
#import "PhotoEditDelegate.h"
#import "QQMediaPickerVideoControlPanelDelegate.h"
#import "QQMultimediaEditBeautyDelegate.h"
#import "QQMultimediaEditFilterDelegate.h"
#import "QQRichMediaPickerDelegate.h"
#import "QQRichTinyVideoGraffitiEditViewDelegate.h"
#import "QQRichTinyVideoScrFilterViewDelegate.h"
#import "TBMultimediaEditComponentDelegate.h"
#import "TBMultimediaEditViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class LbsPendentEngine, MQZMultiImagePickerWrapper, NSArray, NSDictionary, NSString, NSTimer, NightModeTipsView, QQAVCaptureGuideTipsLabel, QQAVDecorationDataModule, QQAsset, QQBubbleTipsView, QQMediaPickerVideoControlPanel, QQPhotoPreEditView, QQRichMediaPicker, QQRichTinyVideoClips, QQRichTinyVideoGraffitiEditView, QQRichTinyVideoGraffitiGuideView, QQRichTinyVideoPreviewView, QQRichTinyVideoScrFilterView, UIButton, UIImage, UIImageView, UILabel, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;

@interface QQAVCaptureViewController : UIViewController <LbsPendentEngineDelegate, QQRichMediaPickerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, MQZMultiImagePickerWrapperDelegate, QQRichTinyVideoScrFilterViewDelegate, QQMultimediaEditFilterDelegate, TBMultimediaEditViewDelegate, QQMediaPickerVideoControlPanelDelegate, PhotoEditDelegate, UIAlertViewDelegate, QQRichTinyVideoGraffitiEditViewDelegate, QQMultimediaEditBeautyDelegate, TBMultimediaEditComponentDelegate>
{
    MQZMultiImagePickerWrapper *_picker;
    _Bool _isFirstSampleBuffer;
    _Bool _snapshotRemoveing;
    double _lastSwitchCameraTime;
    _Bool _switchCameraing;
    _Bool _selfCanceling;
    double _saveDate;
    _Bool _isRecordingVolume;
    int _mcTmpItemCount;
    _Bool _supportLocalVideo;
    _Bool _enableDynamicDecoration;
    _Bool _supportDD;
    _Bool _unfoldDD;
    _Bool _supportFilter;
    _Bool _unfoldFilter;
    _Bool _isFromLocal;
    _Bool _stopResigned;
    _Bool _beForceStop;
    _Bool _showFaceUTemplate;
    _Bool _didRecordVideo;
    _Bool _bTrackGraffiti;
    _Bool _bFaceUEffect;
    _Bool _hasGraffitied;
    _Bool _isForceWaitGestureSDKDownload;
    _Bool _isStartRecord;
    _Bool _isHaveGesture;
    _Bool _needShowBabyQNotify;
    _Bool _isFromBabyQ;
    _Bool _authCamera;
    _Bool _authMic;
    _Bool _firstStartAni;
    _Bool _firstStartAni2Finish;
    _Bool _hasResetPhoto;
    _Bool _hasFisrtShowTips;
    _Bool _enableRealTimeFilter;
    _Bool _hasLoadDefaultVideoItem;
    _Bool _realTimeFilterViewIsShow;
    _Bool _hasFirstCallH5;
    int _sessionType;
    float _currentRecordTime;
    int _clipsPosition;
    int _fps;
    int _fpsFront;
    float _progressOldValue;
    id <QQAVCaptureControllerDelegate> _avCaptureControllerDelegate;
    id <QQRichMediaPickerReportDelegate> _reportDelegate;
    long long _businessType;
    long long _chatBusinessType;
    long long _videoRecordDur;
    NSString *_currentClipsDir;
    double _currentVideoDuration;
    NSArray *_mediaTypes;
    unsigned long long _localVideoMaxDuration;
    unsigned long long _localVideoSizeLimit;
    QQMediaPickerVideoControlPanel *_videoControlPanel;
    QQRichTinyVideoGraffitiEditView *_graffitiEditView;
    QQRichTinyVideoGraffitiGuideView *_graffitiGuideView;
    long long _defaultCameraDevicePosition;
    NSString *_DDCategoryName;
    NSString *_DDItemID;
    long long _DDMenuDefaultStatus;
    long long _beautyStatus;
    NSString *_filterCategoryName;
    NSString *_filterItemID;
    NSString *_activityIDForH5;
    unsigned long long _sessionId;
    QQRichMediaPicker *_mediaPicker;
    QQRichTinyVideoClips *_videoClips;
    UIView *_cameraPreviewView;
    QQRichTinyVideoPreviewView *_perviewPlayer;
    long long _videoOrientation;
    long long _currentVideoClipOrientation;
    UIPinchGestureRecognizer *_zoomGR;
    double _zoomStartValue;
    UIButton *_cameraSwitchButton;
    UIButton *_flashButton;
    UIButton *_cancelButton;
    QQAsset *_videoAssetModle;
    double _zoomLocationY;
    double _zoomOrignY;
    QQBubbleTipsView *_eraseTipsView;
    NSTimer *_graffitiGuideTimer;
    NSTimer *_eraserGuideTimer;
    long long _defaultVideoItemIndex;
    UIButton *_nightModeButton;
    LbsPendentEngine *_lbsPendentEngine;
    NSDictionary *_videoOutputSetting;
    NSDictionary *_audioOutputSetting;
    NSString *_captureSessionPresetName;
    NSString *_captureSessionPresetNameFront;
    QQAVDecorationDataModule *_decorationDataModule;
    QQPhotoPreEditView *_preEditView;
    UIView *_funcButtonsBar;
    UIImage *_pickingImage;
    CDUnknownBlockType _switchCameraAniFinishHandle;
    UIView *_previewBlurEffectView;
    UITapGestureRecognizer *_tapGR;
    UITapGestureRecognizer *_doubleTapGR;
    UILabel *_faceDetectingWording;
    UIImageView *_faceImageDetectingWording;
    UILabel *_faceStatDetectingWording;
    UILabel *_gestureDetectingWording;
    UIImageView *_gestureImageDetectingWording;
    UIView *_flashView;
    double _currentScreenBrightness;
    QQAVCaptureGuideTipsLabel *_captureGuideTipsLabel;
    QQRichTinyVideoScrFilterView *_filterSelectView;
    NightModeTipsView *_nightModeTipsView;
    UILabel *_guideLabel;
    struct CGSize _deviceCaptureSolution;
    struct CGSize _deviceCaptureSolutionFront;
    struct CGSize _deviceNightModeSolution;
}

+ (void)preloadAIOCaptureSession;
+ (void)preloadCaptureSession:(struct CGSize)arg1 frontResolution:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)ApplicationDidBecomeActive:(id)arg1;
- (void)ApplicationDidEnterBackground:(id)arg1;
@property(retain, nonatomic) NSString *DDCategoryName; // @synthesize DDCategoryName=_DDCategoryName;
@property(retain, nonatomic) NSString *DDItemID; // @synthesize DDItemID=_DDItemID;
@property(nonatomic) long long DDMenuDefaultStatus; // @synthesize DDMenuDefaultStatus=_DDMenuDefaultStatus;
- (void)DealWithTouchEndEvent:(id)arg1 withEvent:(id)arg2;
- (void)FaceDetectStatHideTips:(id)arg1;
- (void)FaceDetectStatShowTips:(id)arg1 text:(id)arg2 withDuration:(double)arg3;
- (void)MQZMultiImagePickerDidCancel:(id)arg1;
- (void)MQZMultiImagePickerDidSelectVideoModel:(id)arg1;
- (void)MQZMultiImagePickerDidSelectVideoUrl:(id)arg1;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 beginDraging:(_Bool)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 downloadFailTemplItem:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 onCustomButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 onFaceUButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 onRemakeButtonClick:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 recordButtonCancel:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 recordButtonDown:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 recordButtonUp:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 selectGridVideoTemplItem:(id)arg2;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 selectTemplItem:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQRichMediaPicker:(id)arg1 error:(id)arg2;
- (void)QQRichMediaPickerStartPreview:(id)arg1;
- (void)QQRichPTVFaceNumChange:(int)arg1;
- (void)QQRichTinyVideoWriter:(id)arg1 didAppendSampleToOutput:(id)arg2;
- (void)QQRichTinyVideoWriter:(id)arg1 didFinishWriteInOutput:(id)arg2 error:(id)arg3;
- (Class)RichMediaPickerClass;
- (void)SampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stage:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSString *activityIDForH5; // @synthesize activityIDForH5=_activityIDForH5;
- (void)addDoubleTapGesture;
- (void)addQQpreEditView;
- (void)addRenderView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applySettingAndStart;
@property(copy, nonatomic) NSDictionary *audioOutputSetting; // @synthesize audioOutputSetting=_audioOutputSetting;
@property(nonatomic) _Bool authCamera; // @synthesize authCamera=_authCamera;
@property(nonatomic) _Bool authMic; // @synthesize authMic=_authMic;
@property(nonatomic) __weak id <QQAVCaptureControllerDelegate> avCaptureControllerDelegate; // @synthesize avCaptureControllerDelegate=_avCaptureControllerDelegate;
@property(nonatomic) _Bool bFaceUEffect; // @synthesize bFaceUEffect=_bFaceUEffect;
@property(nonatomic) _Bool bTrackGraffiti; // @synthesize bTrackGraffiti=_bTrackGraffiti;
@property(nonatomic) _Bool beForceStop; // @synthesize beForceStop=_beForceStop;
@property(nonatomic) long long beautyStatus; // @synthesize beautyStatus=_beautyStatus;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) UIView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(retain, nonatomic) UIButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) QQAVCaptureGuideTipsLabel *captureGuideTipsLabel; // @synthesize captureGuideTipsLabel=_captureGuideTipsLabel;
@property(copy, nonatomic) NSString *captureSessionPresetName; // @synthesize captureSessionPresetName=_captureSessionPresetName;
@property(copy, nonatomic) NSString *captureSessionPresetNameFront; // @synthesize captureSessionPresetNameFront=_captureSessionPresetNameFront;
@property(nonatomic) long long chatBusinessType; // @synthesize chatBusinessType=_chatBusinessType;
- (void)checkUpDecoration;
@property(nonatomic) int clipsPosition; // @synthesize clipsPosition=_clipsPosition;
- (void)closeMediaPicker;
- (void)closePerviewPlayer:(_Bool)arg1;
- (void)componentButtonClicked:(id)arg1;
- (void)creatRealTimeFilterView;
- (void)createControlPanel;
- (_Bool)createCurrentClipsDir;
- (void)createGuideLabel;
- (void)createNavigationBar;
- (void)createPreviewView;
@property(retain, nonatomic) NSString *currentClipsDir; // @synthesize currentClipsDir=_currentClipsDir;
- (long long)currentDevicePosition;
@property(nonatomic) float currentRecordTime; // @synthesize currentRecordTime=_currentRecordTime;
@property(nonatomic) double currentScreenBrightness; // @synthesize currentScreenBrightness=_currentScreenBrightness;
@property(nonatomic) long long currentVideoClipOrientation; // @synthesize currentVideoClipOrientation=_currentVideoClipOrientation;
@property(nonatomic) double currentVideoDuration; // @synthesize currentVideoDuration=_currentVideoDuration;
- (void)dealloc;
@property(retain, nonatomic) QQAVDecorationDataModule *decorationDataModule; // @synthesize decorationDataModule=_decorationDataModule;
@property(nonatomic) long long defaultCameraDevicePosition; // @synthesize defaultCameraDevicePosition=_defaultCameraDevicePosition;
@property(nonatomic) long long defaultVideoItemIndex; // @synthesize defaultVideoItemIndex=_defaultVideoItemIndex;
@property(nonatomic) struct CGSize deviceCaptureSolution; // @synthesize deviceCaptureSolution=_deviceCaptureSolution;
@property(nonatomic) struct CGSize deviceCaptureSolutionFront; // @synthesize deviceCaptureSolutionFront=_deviceCaptureSolutionFront;
@property(nonatomic) struct CGSize deviceNightModeSolution; // @synthesize deviceNightModeSolution=_deviceNightModeSolution;
- (void)didFaceSDKStart;
- (void)didFinishWriteInOutput:(id)arg1 error:(id)arg2;
@property(nonatomic) _Bool didRecordVideo; // @synthesize didRecordVideo=_didRecordVideo;
- (void)dismissGuideLabel;
- (void)doSwitchCamera;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGR; // @synthesize doubleTapGR=_doubleTapGR;
- (void)downLoadSDKFinish:(id)arg1;
- (void)editView:(id)arg1 OnChooseSameComponent:(id)arg2;
- (void)editView:(id)arg1 componentChanged:(id)arg2;
- (void)editView:(id)arg1 editAreaChanged:(struct CGRect)arg2;
- (void)editView:(id)arg1 mosaicMaskImage:(id)arg2;
- (void)editViewDidCancel:(id)arg1;
- (void)editViewRejectCancel:(id)arg1;
- (void)editViewWillCancel:(id)arg1;
- (_Bool)enableCustomButton;
@property(nonatomic) _Bool enableDynamicDecoration; // @synthesize enableDynamicDecoration=_enableDynamicDecoration;
- (_Bool)enablePhotoGraphType;
@property(nonatomic) _Bool enableRealTimeFilter; // @synthesize enableRealTimeFilter=_enableRealTimeFilter;
- (void)enableRealTimeFilter:(_Bool)arg1;
- (_Bool)enableVideoType;
- (id)entranceForH5:(id)arg1;
@property(retain, nonatomic) QQBubbleTipsView *eraseTipsView; // @synthesize eraseTipsView=_eraseTipsView;
@property(retain, nonatomic) NSTimer *eraserGuideTimer; // @synthesize eraserGuideTimer=_eraserGuideTimer;
- (void)eventWithAction:(long long)arg1;
@property(retain, nonatomic) UILabel *faceDetectingWording; // @synthesize faceDetectingWording=_faceDetectingWording;
@property(retain, nonatomic) UIImageView *faceImageDetectingWording; // @synthesize faceImageDetectingWording=_faceImageDetectingWording;
@property(retain, nonatomic) UILabel *faceStatDetectingWording; // @synthesize faceStatDetectingWording=_faceStatDetectingWording;
@property(retain, nonatomic) NSString *filterCategoryName; // @synthesize filterCategoryName=_filterCategoryName;
@property(retain, nonatomic) NSString *filterItemID; // @synthesize filterItemID=_filterItemID;
@property(retain, nonatomic) QQRichTinyVideoScrFilterView *filterSelectView; // @synthesize filterSelectView=_filterSelectView;
@property(nonatomic) _Bool firstStartAni; // @synthesize firstStartAni=_firstStartAni;
@property(nonatomic) _Bool firstStartAni2Finish; // @synthesize firstStartAni2Finish=_firstStartAni2Finish;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIView *flashView; // @synthesize flashView=_flashView;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) int fpsFront; // @synthesize fpsFront=_fpsFront;
@property(retain, nonatomic) UIView *funcButtonsBar; // @synthesize funcButtonsBar=_funcButtonsBar;
@property(retain, nonatomic) UILabel *gestureDetectingWording; // @synthesize gestureDetectingWording=_gestureDetectingWording;
@property(retain, nonatomic) UIImageView *gestureImageDetectingWording; // @synthesize gestureImageDetectingWording=_gestureImageDetectingWording;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getEditComponent:(id)arg1 inArray:(id)arg2;
- (long long)getIndexFromViedoItemID:(id)arg1;
- (id)getLastGraffitiColor:(id)arg1;
@property(retain, nonatomic) QQRichTinyVideoGraffitiEditView *graffitiEditView; // @synthesize graffitiEditView=_graffitiEditView;
@property(retain, nonatomic) NSTimer *graffitiGuideTimer; // @synthesize graffitiGuideTimer=_graffitiGuideTimer;
@property(retain, nonatomic) QQRichTinyVideoGraffitiGuideView *graffitiGuideView; // @synthesize graffitiGuideView=_graffitiGuideView;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
- (void)handleDoubleTap:(id)arg1;
- (void)handleFlashTurnOn:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)handleZoom:(id)arg1;
- (void)handleZoomByTouch:(id)arg1;
@property(nonatomic) _Bool hasFirstCallH5; // @synthesize hasFirstCallH5=_hasFirstCallH5;
@property(nonatomic) _Bool hasFisrtShowTips; // @synthesize hasFisrtShowTips=_hasFisrtShowTips;
@property(nonatomic) _Bool hasGraffitied; // @synthesize hasGraffitied=_hasGraffitied;
@property(nonatomic) _Bool hasLoadDefaultVideoItem; // @synthesize hasLoadDefaultVideoItem=_hasLoadDefaultVideoItem;
@property(nonatomic) _Bool hasResetPhoto; // @synthesize hasResetPhoto=_hasResetPhoto;
- (void)hiddenRecordUI;
- (void)hideFaceStatDetectingWording;
- (void)hideFilterSelectView;
- (void)hideGraffitiEditView;
- (void)hideGraffitiGuideView;
- (void)hidePreEditViewPanel;
- (void)hideTopBarButtonsWithAnimate:(_Bool)arg1;
- (void)hideVideoControlPanel;
- (id)init;
- (_Bool)isEnableSmooth;
@property(nonatomic) _Bool isForceWaitGestureSDKDownload; // @synthesize isForceWaitGestureSDKDownload=_isForceWaitGestureSDKDownload;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(nonatomic) _Bool isFromLocal; // @synthesize isFromLocal=_isFromLocal;
@property(nonatomic) _Bool isHaveGesture; // @synthesize isHaveGesture=_isHaveGesture;
- (_Bool)isLowDevice;
- (_Bool)isRecordingVideo;
- (_Bool)isRunning;
@property(nonatomic) _Bool isStartRecord; // @synthesize isStartRecord=_isStartRecord;
@property(retain, nonatomic) LbsPendentEngine *lbsPendentEngine; // @synthesize lbsPendentEngine=_lbsPendentEngine;
- (void)loadDefaultVideoItemIndex;
- (void)loadFilterSelectView;
- (void)loadRecentLocalVideoThumb;
- (void)loadView;
@property(nonatomic) unsigned long long localVideoMaxDuration; // @synthesize localVideoMaxDuration=_localVideoMaxDuration;
@property(nonatomic) unsigned long long localVideoSizeLimit; // @synthesize localVideoSizeLimit=_localVideoSizeLimit;
@property(retain, nonatomic) QQRichMediaPicker *mediaPicker; // @synthesize mediaPicker=_mediaPicker;
@property(copy, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
- (void)muteAudio:(_Bool)arg1;
@property(nonatomic) _Bool needShowBabyQNotify; // @synthesize needShowBabyQNotify=_needShowBabyQNotify;
@property(retain, nonatomic) UIButton *nightModeButton; // @synthesize nightModeButton=_nightModeButton;
- (void)nightModeDetected:(_Bool)arg1;
- (_Bool)nightModeEnabled;
- (_Bool)nightModeShown;
@property(retain, nonatomic) NightModeTipsView *nightModeTipsView; // @synthesize nightModeTipsView=_nightModeTipsView;
- (void)notifySelectGraffiti:(_Bool)arg1;
- (void)onCameraSwitchButtonClick:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onFlashButtonClick:(id)arg1;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onLbsActivityInfoFailed;
- (void)onLbsActivityInfoSuccess;
- (void)onLogoutOrVideoCall;
- (void)onModelReadyNotify:(id)arg1;
- (void)onNightModeButtonClick:(id)arg1;
- (void)onPickerControllerCancel;
- (void)onRecordTimeout;
- (void)onSelectRealTimeFilter:(id)arg1;
- (void)onSelectViewShowEnd;
- (void)onSelectViewShowStart;
- (void)onSwitchCameraBeauty:(long long)arg1;
- (void)onVideoDurationChange:(double)arg1;
@property(retain, nonatomic) QQRichTinyVideoPreviewView *perviewPlayer; // @synthesize perviewPlayer=_perviewPlayer;
- (void)photoEditorDidCancel:(id)arg1;
- (void)photoEditorSave:(id)arg1 hasEdit:(_Bool)arg2;
- (void)photoEditorSend:(id)arg1 hasEdit:(_Bool)arg2;
@property(retain, nonatomic) UIImage *pickingImage; // @synthesize pickingImage=_pickingImage;
@property(retain, nonatomic) QQPhotoPreEditView *preEditView; // @synthesize preEditView=_preEditView;
- (void)preEditViewPanelVisiableChange:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) __weak UIView *previewBlurEffectView; // @synthesize previewBlurEffectView=_previewBlurEffectView;
- (void)previewVideo;
- (struct CGRect)previewViewFrame;
@property(nonatomic) float progressOldValue; // @synthesize progressOldValue=_progressOldValue;
- (void)qqBackFromPreviewToCapture;
- (void)qqMultimediaAfterShowWording;
- (void)qqMultimediaBeautyUpdate:(id)arg1;
- (void)qqMultimediaSelectFilters:(id)arg1;
- (void)qqMultimediaWillShowWording;
- (void)qqRichTinyVideoGraffitiEditViewClear:(id)arg1;
- (void)qqRichTinyVideoGraffitiEditViewPickColor:(id)arg1 pickColor:(id)arg2 times:(long long)arg3;
- (void)qqRichTinyVideoGraffitiEditViewUndo:(id)arg1;
@property(nonatomic) _Bool realTimeFilterViewIsShow; // @synthesize realTimeFilterViewIsShow=_realTimeFilterViewIsShow;
- (id)recordDefaultWording;
- (void)releaseAudioSession;
- (void)removeCaptureGuideTipsLabel;
- (void)removeDoubleTapGesture;
- (void)removeNightModeTipsView;
- (void)removeRenderView;
- (void)removeTapGesture;
@property(nonatomic) __weak id <QQRichMediaPickerReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)reportOFcurrentPandentAndFilter:(id)arg1 hasEdit:(_Bool)arg2 opName:(id)arg3;
- (void)resetCaptureUI;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) _Bool showFaceUTemplate; // @synthesize showFaceUTemplate=_showFaceUTemplate;
@property(nonatomic) _Bool stopResigned; // @synthesize stopResigned=_stopResigned;
@property(nonatomic) _Bool supportDD; // @synthesize supportDD=_supportDD;
@property(nonatomic) _Bool supportFilter; // @synthesize supportFilter=_supportFilter;
@property(nonatomic) _Bool supportLocalVideo; // @synthesize supportLocalVideo=_supportLocalVideo;
@property(copy, nonatomic) CDUnknownBlockType switchCameraAniFinishHandle; // @synthesize switchCameraAniFinishHandle=_switchCameraAniFinishHandle;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(nonatomic) _Bool unfoldDD; // @synthesize unfoldDD=_unfoldDD;
@property(nonatomic) _Bool unfoldFilter; // @synthesize unfoldFilter=_unfoldFilter;
@property(retain, nonatomic) QQAsset *videoAssetModle; // @synthesize videoAssetModle=_videoAssetModle;
@property(retain, nonatomic) QQRichTinyVideoClips *videoClips; // @synthesize videoClips=_videoClips;
@property(retain, nonatomic) QQMediaPickerVideoControlPanel *videoControlPanel; // @synthesize videoControlPanel=_videoControlPanel;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(copy, nonatomic) NSDictionary *videoOutputSetting; // @synthesize videoOutputSetting=_videoOutputSetting;
@property(nonatomic) long long videoRecordDur; // @synthesize videoRecordDur=_videoRecordDur;
@property(retain, nonatomic) UIPinchGestureRecognizer *zoomGR; // @synthesize zoomGR=_zoomGR;
@property(nonatomic) double zoomLocationY; // @synthesize zoomLocationY=_zoomLocationY;
@property(nonatomic) double zoomOrignY; // @synthesize zoomOrignY=_zoomOrignY;
@property(nonatomic) double zoomStartValue; // @synthesize zoomStartValue=_zoomStartValue;
- (void)setupCaptureGuideTipsLabel;
- (void)setupCustomButton:(id)arg1;
- (void)setupMediaPicker;
- (_Bool)shouldAutorotate;
- (_Bool)shouldDelayPresentController;
- (void)showCancelConfirmAlert;
- (void)showCaptureGuideTips:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showFaceDetectingWording:(_Bool)arg1;
- (void)showFaceStatDetectingWording:(_Bool)arg1 tips:(id)arg2;
- (void)showFilterGuideView;
- (void)showFilterSelectView;
- (void)showGestureDetectingWording:(_Bool)arg1 wording:(id)arg2;
- (void)showGraffitiEditView;
- (void)showGraffitiGuideView;
- (void)showPreEditViewPanel;
- (void)showRecordInvalidToast;
- (void)showTopBarButtonsWithAnimate:(_Bool)arg1;
- (void)showVideoControlPanel;
- (_Bool)shutdown;
- (void)startRecord;
- (void)startSelfieRecordFlash;
- (_Bool)startup;
- (void)stopPreviewPlayer;
- (void)stopRecord;
- (void)stopSelfieRecordFlash;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePhoto;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateFaceDetectingWordingStatus;
- (void)updateRecordProgress:(double)arg1;
- (void)updateRecordTime;
- (void)videoEditorControllerSave:(id)arg1 hasEdit:(_Bool)arg2;
- (void)videoEditorControllerSend:(id)arg1 hasEdit:(_Bool)arg2;
- (void)videoRecordDelayStart;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewForH5;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willEnterForeGroundLbsPendentEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

