//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZoneCoverHeaderView.h"

#import "CAAnimationDelegate.h"
#import "IQZUrlDownloaderDelegate.h"
#import "MQZoneMusicCellDelegate.h"

@class MQZoneHomepageHeadButton, MQZoneMusicPlayView, MQzoneFollowTipView, NSString, NSTimer, QZJMainPageSCampusQz, QZJMainPageSRedComm, QZJNsQmallCoverQzmallCustomNavi, UIImageView, UIView, UIViewController;

@interface MQZoneHomepageHeaderView : MQZoneCoverHeaderView <MQZoneMusicCellDelegate, IQZUrlDownloaderDelegate, CAAnimationDelegate>
{
    MQZoneHomepageHeadButton *_buttons[5];
    UIView *_lines[4];
    NSTimer *_timer;
    QZJMainPageSRedComm *_redinfo;
    int _currentPos;
    QZJMainPageSRedComm *_sweetRedInfo;
    QZJMainPageSCampusQz *_campusRedInfo;
    QZJNsQmallCoverQzmallCustomNavi *_naviDeco;
    UIImageView *_bgImageView;
    double _transparency;
    UIImageView *_redBonusView;
    MQzoneFollowTipView *_tipView;
    _Bool _intimacyViewNeedHidden;
    _Bool _buttonsHidden;
    _Bool _hasPermission;
    _Bool _isManualCloseMusicBar;
    UIView *_myFansView;
    UIView *_myFollowView;
    UIView *_personalizeView;
    UIView *_giftView;
    MQZoneMusicPlayView *_musicPlayView;
    UIView *_loversSpaceView;
    UIView *_campusSpaceView;
    UIView *_famousQZoneView;
    UIView *_intimacyView;
    UIView *_barbgview;
    UIViewController *_homePageViewController;
}

+ (_Bool)isShowHomePageView:(long long)arg1 HomePageType:(long long)arg2;
- (void).cxx_destruct;
- (void)adjustCrossBarLineWidth:(id)arg1 isTop:(_Bool)arg2;
- (void)adjustCrossBarNaviDeco:(id)arg1 naviDeco:(id)arg2;
- (void)adjustNaviDeco:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(retain, nonatomic) UIView *barbgview; // @synthesize barbgview=_barbgview;
@property(nonatomic) _Bool buttonsHidden; // @synthesize buttonsHidden=_buttonsHidden;
@property(retain, nonatomic) UIView *campusSpaceView; // @synthesize campusSpaceView=_campusSpaceView;
- (id)checkShouldShowCell:(_Bool)arg1 naviDeco:(id)arg2 originX:(double)arg3 isTop:(_Bool *)arg4 headerCellType:(long long)arg5;
- (void)clearCell:(id)arg1;
- (void)clickButton:(id)arg1;
- (void)clickCampusSpaceView:(id)arg1;
- (void)clickFamousQZoneView:(id)arg1;
- (void)clickGiftView:(id)arg1;
- (void)clickLoversSpaceView:(id)arg1;
- (void)clickMusicCellView:(id)arg1;
- (void)clickMyFansFollow:(id)arg1;
- (void)clickMyFansView:(id)arg1;
- (void)clickMyFollowView:(id)arg1;
- (void)clickPersonalizeView:(id)arg1;
- (int)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
- (id)createHeaderCellView:(long long)arg1 offy:(long long)arg2 lineX:(_Bool)arg3 headerCellType:(long long)arg4;
- (void)dealloc;
- (void)doFollow;
@property(retain, nonatomic) UIView *famousQZoneView; // @synthesize famousQZoneView=_famousQZoneView;
@property(retain, nonatomic) UIView *giftView; // @synthesize giftView=_giftView;
@property(nonatomic) _Bool hasPermission; // @synthesize hasPermission=_hasPermission;
- (void)hideRebonusTip;
- (void)hideRedBonusView;
@property(nonatomic) __weak UIViewController *homePageViewController; // @synthesize homePageViewController=_homePageViewController;
- (id)initWithFrame:(struct CGRect)arg1 withUin:(long long)arg2 withViewControler:(id)arg3 withProfile:(id)arg4 hasPermission:(_Bool)arg5 hybridCover:(_Bool)arg6;
@property(nonatomic) __weak UIView *intimacyView; // @synthesize intimacyView=_intimacyView;
@property(nonatomic) _Bool intimacyViewNeedHidden; // @synthesize intimacyViewNeedHidden=_intimacyViewNeedHidden;
- (void)invalidateTimer;
@property(nonatomic) _Bool isManualCloseMusicBar; // @synthesize isManualCloseMusicBar=_isManualCloseMusicBar;
@property(retain, nonatomic) UIView *loversSpaceView; // @synthesize loversSpaceView=_loversSpaceView;
- (void)magicColor:(id)arg1;
@property(retain, nonatomic) MQZoneMusicPlayView *musicPlayView; // @synthesize musicPlayView=_musicPlayView;
@property(retain, nonatomic) UIView *myFansView; // @synthesize myFansView=_myFansView;
@property(retain, nonatomic) UIView *myFollowView; // @synthesize myFollowView=_myFollowView;
- (void)nextUser;
- (void)onClickRedBonus;
@property(retain, nonatomic) UIView *personalizeView; // @synthesize personalizeView=_personalizeView;
- (void)removeIntimacyView;
- (void)removeRedBounusTip;
- (void)requestFinished:(id)arg1;
- (void)resumeTimer;
- (void)setBirthdayRedinfo:(id)arg1;
- (void)setCampusRedInfo:(id)arg1;
@property(nonatomic) __weak id <MQZoneHomepageHeaderViewDelegate> delegate; // @dynamic delegate;
- (void)setHiddenBarBGView:(_Bool)arg1;
- (void)setHomePageHeadertransparency:(double)arg1;
- (void)setProfile:(id)arg1;
- (void)setSweetRedInfo:(id)arg1;
- (void)setTotal:(id)arg1;
- (_Bool)shouldShowGuide;
- (void)showIntimacyView;
- (void)showRedBonusView:(_Bool)arg1;
- (void)showRedBounusTip;
- (void)startRedBonusShake;
- (void)startRedBonusTipScale;
- (void)startShakeAnimation;
- (void)stopRedBonusShake;
- (void)stopTimer;
- (void)updateFollowButtonImage:(id)arg1;
- (void)updateFollowFansNum:(id)arg1;
- (void)updateHeaderCells;
- (void)updateHeaderWithProfile:(id)arg1;
- (void)updateNaviDeco:(id)arg1;
- (void)updatePersonalizeBarPoint;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
