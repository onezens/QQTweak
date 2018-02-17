//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKMapViewDelegate.h"
#import "QZPhotoModuleDownloaderInterfaceDelegate.h"
#import "UIScrollViewDelegate.h"

@class MKMapView, NSArray, NSMutableDictionary, NSString, NinePatchPhoto, QZHeartWaveProgressView, QZJPhotoAlbum, UIButton, UIImage, UIImageView, UILabel;

@interface QZAlbumCoverView : UIView <UIScrollViewDelegate, QZPhotoModuleDownloaderInterfaceDelegate, MKMapViewDelegate>
{
    id <QZAlbumCoverViewDelegate> _delegate;
    UIImageView *_albumCoverImgView;
    UIButton *_visitorBtn;
    long long _coverType;
    _Bool _isHost;
    UILabel *_descLabel;
    UILabel *_albumNameLabel;
    UILabel *_bottomDescLabel;
    UIButton *_bottomDescBtn;
    double _bottomDescOriginY;
    UIView *_faceView;
    UIButton *_bindButton;
    UILabel *_photoNum;
    UILabel *_videoNum;
    UIImageView *_photoIcon;
    UIImageView *_videoIcon;
    UIImageView *_titleBgView;
    UIImageView *_dataAndNumBgView;
    UIImageView *_descLeftView;
    UIImageView *_descRightView;
    UIImageView *_parentLogoImgView;
    UIButton *_likeBtn;
    UIButton *_commentBtn;
    UIView *_middleBgView;
    NSString *_previousAlbumCoverUrl;
    NSArray *_templateElement;
    NSMutableDictionary *_tempUrlDic;
    unsigned long long downloadedNum;
    NinePatchPhoto *_titleInfo;
    NinePatchPhoto *_dateAndNumInfo;
    UIButton *_privBtn;
    UIView *_shareUsersView;
    UIButton *_shareUsersButton;
    UIView *_loversInfoView;
    UILabel *_loveInfoLabel;
    UIImageView *_leftLoverAvatar;
    UIImageView *_rightLoverAvatar;
    long long _leftLoverUin;
    long long _rightLoverUin;
    QZHeartWaveProgressView *_loverHeartView;
    NSArray *_annotations;
    UIImageView *_mapMaskView;
    MKMapView *_mkMapView;
    _Bool _shouldShowMapViewScreenShot;
    NSArray *_poiArray;
    long long _previousValidPoiNum;
    _Bool _isRenderingAnnotations;
    struct {
        struct {
            double x;
            double y;
        } origin;
        struct {
            double width;
            double height;
        } size;
    } _previousMapRect;
    UIView *_joinShareAlbumTipView;
    UIView *_recommendInfoView;
    UILabel *_recommendThemeTitle;
    UILabel *_recommendHintLabel;
    UIImageView *_recommendDressImg;
    _Bool _showRecommendInfoFirstTime;
    UIButton *_loveSpaceBtn;
    _Bool _isLoveSpaceBtnFold;
    NSString *_loveSpaceAdvUrl;
    NSString *_loveSpaceQbossTraceInfo;
    _Bool _isIndividual;
    _Bool _isInteracting;
    _Bool _isShareUser;
    _Bool _showJoinShareAlbumBtn;
    NSString *_albumName;
    long long _travelAlbumStartTime;
    long long _travelAlbumEndTime;
    UIImage *_albumCoverImage;
    NSString *_albumCoverUrl;
    long long _visitorNum;
    long long _likeNum;
    long long _commentNum;
    QZJPhotoAlbum *_album;
    long long _uin;
    NSString *_ownerName;
    long long _recommendAlbumType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QZJPhotoAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) UIImage *albumCoverImage; // @synthesize albumCoverImage=_albumCoverImage;
@property(retain, nonatomic) NSString *albumCoverUrl; // @synthesize albumCoverUrl=_albumCoverUrl;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (id)attrStrWithAlbumDesc:(id)arg1;
- (void)autoFoldLoveSpaceBtn;
- (void)bindBtnClick:(id)arg1;
- (id)birthStrFromAlbum:(id)arg1;
- (void)clickLoveSpace;
- (void)closeReommendInfo;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
- (id)createAvatarViewWithUIN:(long long)arg1 frame:(struct CGRect)arg2 tag:(long long)arg3;
- (void)createBindBtnWithFrame:(struct CGRect)arg1;
- (void)createLoverHeartView:(unsigned int)arg1;
- (void)createLoverSpaceBtn:(id)arg1 traceInfo:(id)arg2;
- (void)createLoversInfoView;
- (void)createRecommendInfoView;
- (void)dealloc;
@property(nonatomic) __weak id <QZAlbumCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)descHeight;
- (void)displayMapViewWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 distance:(double)arg2 annotations:(id)arg3;
- (double)distanceFromCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
- (double)getBindButtonBottom;
- (long long)getCoverType;
- (double)getLeftMargin:(long long)arg1 width:(double)arg2;
- (id)getLoveDays:(long long)arg1;
- (id)getLoversAlbumFont:(double)arg1;
- (void)hideRecommendInfoView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 albumName:(id)arg2 type:(long long)arg3 isHost:(_Bool)arg4 isIndividual:(_Bool)arg5;
@property(nonatomic) _Bool isIndividual; // @synthesize isIndividual=_isIndividual;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
- (_Bool)isQualifiedLat:(double)arg1 Lon:(double)arg2;
@property(nonatomic) _Bool isShareUser; // @synthesize isShareUser=_isShareUser;
- (_Bool)isTheHost;
- (void)layoutAlbumName;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (double)maxMapViewLength;
- (void)onClickCommentBtn;
- (void)onClickLikeBtn;
- (void)onClickLoverAvatar:(id)arg1;
- (void)onClickLoverHeartView:(id)arg1;
- (void)onClickMaskPanel:(id)arg1;
- (void)onClickRightLoverAvatarBg:(id)arg1;
- (void)onClickSettingAlbumTypeBtn;
- (void)onClickShareUsersView;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (id)privacyIcon:(long long)arg1;
- (_Bool)qualifiedAndCorrectLat:(double *)arg1 lon:(double *)arg2;
@property(nonatomic) long long recommendAlbumType; // @synthesize recommendAlbumType=_recommendAlbumType;
- (void)removeLoverSpaceBtn;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (void)resetView;
- (void)setAlbumTemplate;
- (void)setLoveInfoHidden:(_Bool)arg1;
- (void)setLoverHeartProgress:(unsigned int)arg1;
- (void)setLoversAlbumTitleFont:(id)arg1;
- (void)setLoversAvatarView:(id)arg1;
- (void)setRecommendAlbumType:(long long)arg1 albumId:(id)arg2;
- (void)setShareUserView:(id)arg1;
@property(nonatomic) _Bool showJoinShareAlbumBtn; // @synthesize showJoinShareAlbumBtn=_showJoinShareAlbumBtn;
@property(nonatomic) long long travelAlbumEndTime; // @synthesize travelAlbumEndTime=_travelAlbumEndTime;
@property(nonatomic) long long travelAlbumStartTime; // @synthesize travelAlbumStartTime=_travelAlbumStartTime;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) long long visitorNum; // @synthesize visitorNum=_visitorNum;
- (void)stopHeartViewAnimation;
- (void)updateComponentsForTravelAlbum;
- (void)updateContentOffset:(double)arg1;
- (void)updateCoverWithPoiArray:(id)arg1;
- (void)updateHeight;
- (void)updateLikeCommentLayout;
- (void)updateLoverAlbumName:(id)arg1;
- (void)updateLoverSpaceBtnStatus:(_Bool)arg1;
- (void)updateMapViewFrame;
- (void)updateRecommendInfoView:(long long)arg1;
- (void)updateRightAvatarView:(id)arg1;
- (void)updateTemplateUIWithType:(long long)arg1 image:(id)arg2;
- (void)updateTitleFont:(id)arg1;
- (void)updateVisitorBtnLayout;
- (void)updateWithLikeNum:(long long)arg1 commentNum:(long long)arg2;
- (void)visitorBtnClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
