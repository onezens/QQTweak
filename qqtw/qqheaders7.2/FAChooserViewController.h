//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CloudVerifyIndiePasswdDelegate.h"
#import "IFACategoryTableViewDelegate.h"
#import "IFADataSourceDelegate.h"
#import "IFATableViewDelegate.h"
#import "QQTabMenuDelegate.h"
#import "UIAlertViewDelegate.h"

@class CloudVerifyIndiePasswdView, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQTabMenu, UIButton, UIImageView, UILabel, UIView;

@interface FAChooserViewController : QQViewController <QQTabMenuDelegate, IFATableViewDelegate, IFADataSourceDelegate, IFACategoryTableViewDelegate, CloudVerifyIndiePasswdDelegate, UIAlertViewDelegate>
{
    QQTabMenu *_tabMenu;
    NSMutableDictionary *_faTableViews;
    NSMutableArray *_faDataSources;
    UILabel *_labSelectedSize;
    UIButton *_sendButton;
    UIButton *_imagePreviewButton;
    UIImageView *_bottomView;
    UILabel *_maxCountTips;
    NSTimer *_tipTimer;
    _Bool _isCurPicCategory;
    int _filterCatalog;
    _Bool _bSendClicked;
    int _filterRecent;
    int _filterMedia;
    _Bool _isFilterAlbum;
    int _smartDeviceSupportFlag;
    int _smartDeviceSwitchFlag;
    unsigned long long _uin;
    _Bool _bInNearFile;
    id <IFAChooserDelegate> _delegate;
    NSString *_bottomBtnTitle;
    NSString *_forceTitle;
    _Bool _rememberLastPhoto;
    int _curMenuIndex;
    CloudVerifyIndiePasswdView *_verifyView;
    unsigned long long _serviceType;
}

+ (void)saveCategoryInfo:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewClicked:(long long)arg1;
@property(nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void)clearCheckbox;
- (void)cloudVerifyIndiePasswdSucc;
- (_Bool)containExistSmartDeviceFlag:(int)arg1;
- (void)createBottomView;
- (void)createDataSources;
- (void)createTabMenu;
- (void)dealloc;
- (void)didDeleteFileWithErrMsg:(id)arg1;
- (void)didFileAdd;
- (void)didLoadListDoneWithCode:(int)arg1 msg:(id)arg2;
- (void)didSelectFiles;
- (void)didSelectIndex:(int)arg1;
- (void)fileSelected:(id)arg1;
- (id)getCategoryTableView:(int)arg1;
- (id)getCurSelectedPicture;
- (int)getDeviceCanSwitchFlag;
- (int)getFileSourceFromListType:(int)arg1;
- (void)iconSelected:(id)arg1;
- (id)initWithDelegate:(id)arg1 filterCatalog:(int)arg2 filterRecent:(int)arg3 filterAlbum:(_Bool)arg4;
- (id)initWithDelegate:(id)arg1 filterCatalog:(int)arg2 filterRecent:(int)arg3 filterAlbum:(_Bool)arg4 smartDeviceSupportFlag:(int)arg5 smartDeviceSwitchFlag:(int)arg6;
- (void)internalIconSelected:(id)arg1;
- (id)loadCurrentTableView;
- (void)loadView;
- (void)onCategoryClick:(int)arg1;
- (void)onNearFileTipClick;
- (void)onPreviewButtonClick:(id)arg1;
- (int)queryCategoryInfo;
- (void)resetElementForPicPreView;
- (void)rightButtonClick:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool bInNearFile; // @dynamic bInNearFile;
- (void)setElementForPicPreView;
- (void)setMaxSelectedCount:(int)arg1;
@property(nonatomic) _Bool rememberLastPhoto; // @dynamic rememberLastPhoto;
- (void)showMaxCountTips:(id)arg1;
- (void)showMaxTotalFileSizeTips:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bottomBtnTitle; // @dynamic bottomBtnTitle;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <IFAChooserDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *forceTitle; // @dynamic forceTitle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) QQTabMenu *tabMenu; // @dynamic tabMenu;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

