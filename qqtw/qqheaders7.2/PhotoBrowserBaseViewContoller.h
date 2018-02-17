//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActionItemDelegate.h"
#import "PhotoBrowserViewDelegate.h"
#import "PhotoEditDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "QUIActionSheetDelegate.h"

@class NSArray, NSMutableArray, NSString, PhotoBrowserView, QQPageIndicator, QUIActionSheet, UIBarButtonItem, UIButton, UIImage, UINavigationBar, UIView, UIWindow;

@interface PhotoBrowserBaseViewContoller : UIViewController <QQAudioSessionManagerDelegate, PhotoEditDelegate, QUIActionSheetDelegate, PhotoBrowserViewDelegate, ActionItemDelegate>
{
    long long _initPage;
    _Bool _isControlHidden;
    _Bool _isNavigationBarHidden;
    _Bool _isMsgBarShow;
    _Bool _lastStatusBarHidden;
    _Bool _isToolBarViewResident;
    long long _lastStatusBarStyle;
    Class _photoClass;
    UIBarButtonItem *_leftButton;
    UIBarButtonItem *_rightButton;
    UINavigationBar *_navigationBar;
    PhotoBrowserView *_pagePhotosView;
    QQPageIndicator *_pageControl;
    UIView *_toolbarView;
    NSArray *_itemList;
    NSMutableArray *_photoList;
    QUIActionSheet *_actionSheet;
    UIImage *_previewImage;
    struct CGRect _sourceClipRect;
    id <PhotoBrowserViewControllerDelegate> _photoBrowserDelegate;
    UIViewController *_lastViewController;
    UIButton *_moreButton;
    UIButton *_editButton;
    long long _initPicIndex;
    _Bool _enableCorrectThumbnailRect;
    int _xo;
    UIWindow *_maskView;
    _Bool _isNeedSpecialLogicForAVFloatBar;
    _Bool _needRouteAdapterIpList;
    _Bool _isPreviewFlashPic;
    _Bool _isNeedSupportLandScape;
    _Bool _isShareDocxEntry;
    _Bool _isUsedForShowingAvatarView;
    _Bool _hasAudioSession;
    _Bool _viewHasAppear;
    int _menuFrom;
    UIImage *_firstImageViewThumbImage;
}

- (void)ResetToolbarViewFrame;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)allocAndInitPhotoBrowserView;
- (struct CGRect)browserGetThumbImageShowRect:(id)arg1 thumbRegion:(struct CGRect)arg2 inThumbRect:(struct CGRect)arg3;
- (_Bool)canDownloadThisPhoto:(int)arg1 currentPage:(int)arg2;
- (_Bool)canShowPageControl;
- (id)createPhotoBrowserNavigationController;
- (id)currentTinyVideoView;
- (void)deactionAudioSession;
- (void)dealloc;
- (void)deleteCurrentPhoto;
- (void)deletePhotos:(long long)arg1 atIndex:(long long)arg2;
- (void)didRotatePhoto:(id)arg1 toNewOrientation:(long long)arg2;
- (void)didScrollToPage:(int)arg1;
- (void)doDismissMySelf;
@property(retain, nonatomic) UIImage *firstImageViewThumbImage; // @synthesize firstImageViewThumbImage=_firstImageViewThumbImage;
- (id)forwardToQZoneAlbumActionItem;
- (struct CGRect)frameForBackViewAtOrientation:(long long)arg1;
- (struct CGRect)frameForNavigationBarAtOrientation:(long long)arg1;
- (struct CGRect)frameForPageControl:(long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (id)getAllPhotos;
- (id)getCurrentImage;
- (id)getCurrentImagePath;
- (int)getCurrentImageViewImageState;
- (id)getCurrentPhoto;
- (long long)getCurrentPhotoIndex;
- (id)getCurrentViewController;
- (id)getForwardActionItems;
- (struct CGRect)getOriginalRectForPhoto:(id)arg1 atIndex:(int)arg2 thumbRegion:(struct CGRect *)arg3 clipRect:(struct CGRect *)arg4;
- (id)getPageControl;
- (id)getToolbar;
- (id)getToolbarItems;
- (void)gotoPhotoEditControllerWithAsset:(id)arg1;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
@property(nonatomic) _Bool hasAudioSession; // @synthesize hasAudioSession=_hasAudioSession;
- (void)hidePhotoBrowser;
- (void)hidePhotoBrowserAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hidePhotoBrowserIfLongImage;
- (void)hidePhotoBrowserIfNotLongImage;
- (id)imageAtIndex:(int)arg1;
- (id)init;
- (id)initWithPhotoCount:(int)arg1;
- (id)initWithPreviewImage:(id)arg1;
- (void)insertPhotos:(id)arg1 atIndex:(long long)arg2;
@property(nonatomic) _Bool isNeedSpecialLogicForAVFloatBar; // @synthesize isNeedSpecialLogicForAVFloatBar=_isNeedSpecialLogicForAVFloatBar;
@property(nonatomic) _Bool isNeedSupportLandScape; // @synthesize isNeedSupportLandScape=_isNeedSupportLandScape;
@property(nonatomic) _Bool isPreviewFlashPic; // @synthesize isPreviewFlashPic=_isPreviewFlashPic;
- (_Bool)isQQAsset:(id)arg1;
@property(nonatomic) _Bool isShareDocxEntry; // @synthesize isShareDocxEntry=_isShareDocxEntry;
- (_Bool)isToolbarViewShow;
@property(nonatomic) _Bool isUsedForShowingAvatarView; // @synthesize isUsedForShowingAvatarView=_isUsedForShowingAvatarView;
- (void)loadView;
- (void)longPressDetected;
@property(nonatomic) int menuFrom; // @synthesize menuFrom=_menuFrom;
@property(nonatomic) _Bool needRouteAdapterIpList; // @synthesize needRouteAdapterIpList=_needRouteAdapterIpList;
- (_Bool)needShowTopTips;
- (int)numberOfPages;
- (void)onAudioSessionActive;
- (void)onEditButtonClick;
- (void)onForwardToAllBtnClickNotify:(id)arg1;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onLeftButtonClick:(id)arg1;
- (void)onMoreButtonClick;
- (void)onRightButtonClick:(id)arg1;
- (void)onSaveToAlbumRetNotify:(id)arg1;
- (void)onVideoDidSendToQzone:(id)arg1;
- (id)p_GetExistFlashOriImg:(id)arg1;
@property(retain, nonatomic) PhotoBrowserView *pagePhotosView; // @synthesize pagePhotosView=_pagePhotosView;
- (void)pauseTinyVideo;
- (_Bool)photoBrowserDownloadFail;
- (void)photoEditor:(id)arg1 didFinishWithImage:(id)arg2 asset:(id)arg3 shouldOpenDoodle:(_Bool)arg4 hasEdited:(_Bool)arg5;
- (void)playToolbarAnimation;
- (void)popupMenu;
- (void)presentTransitonDidStop;
- (void)releaseActionItems;
- (void)removeMaskView;
- (void)requestAudioSession;
- (void)resetNavigationBarTitle;
- (void)resumeTinyVideo;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCurrentPage:(long long)arg1;
- (void)setLastViewController:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)setPageControlHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPhotoAssets:(id)arg1;
- (void)setPhotoCaptions:(id)arg1;
- (void)setPhotoCount:(int)arg1;
- (void)setPhotoImages:(id)arg1;
- (void)setPhotoPaths:(id)arg1;
- (void)setThumbRects:(id)arg1;
- (void)setToolbarViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolbarViewShow;
@property(nonatomic) _Bool viewHasAppear; // @synthesize viewHasAppear=_viewHasAppear;
- (_Bool)shouldAutorotate;
- (_Bool)shouldPlayCurrentVideo;
- (void)showAvatarInViewController:(id)arg1 showRect:(struct CGRect)arg2;
- (_Bool)showDownloadFaidButton;
- (void)showPhotoBrowserAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showPhotoBrowserInViewController:(id)arg1;
- (void)showPhotoBrowserInViewController:(id)arg1 showRect:(struct CGRect)arg2;
- (void)singleTapDetected;
- (void)tapMaskView;
- (void)updatePageControl;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableCorrectThumbnailRect; // @dynamic enableCorrectThumbnailRect;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <PhotoBrowserViewControllerDelegate> photoBrowserDelegate; // @dynamic photoBrowserDelegate;
@property(nonatomic) struct CGRect sourceClipRect; // @dynamic sourceClipRect;
@property(readonly) Class superclass;

@end
