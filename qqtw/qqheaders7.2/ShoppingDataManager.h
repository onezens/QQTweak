//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "IEngineDispatchDelegate.h"
#import "IQQDBOperationBase.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, ShoppingAdMsgModel, ShoppingConfigModel;

@interface ShoppingDataManager : NSObject <IEngineDispatchDelegate, DBAccountChangedProtocol, IQQDBOperationBase>
{
    NSMutableArray *attentionShoppings;
    NSMutableArray *friendShoppings;
    NSMutableArray *recommendShoppings;
    ShoppingConfigModel *configShopping;
    _Bool isShowShoppingViewRedPoint;
    id <ShoppingDataManagerDelegate> delegate;
    _Bool wonderfulLife;
    NSMutableDictionary *_jdUrls;
    NSArray *curNeedMatchModels;
    NSString *currentMainDocumentURL;
    NSMutableArray *recodeUrls;
    NSMutableArray *recodeTimes;
    NSDictionary *oldBindRelations;
    NSObject<OS_dispatch_queue> *dispathcQueue;
    NSArray *orgModels;
    NSMutableDictionary *_reqDics;
    _Bool isLoadedLocalConfig;
    NSMutableDictionary *_shopUinDics;
    NSMutableArray *_firstShowUpUins;
    NSMutableDictionary *_shouldShowUpUins;
    ShoppingAdMsgModel *_adMsgModle;
    NSMutableDictionary *_loadingRichPicKeys;
    _Bool _showShopingAndJinXuan;
    int topHeaderRedPointTpye;
    NSMutableArray *shoppingDetailReqArray;
    struct CLLocationCoordinate2D _coordinate;
}

+ (void)clearDataWhenDeleteFolder;
+ (id)getInstance;
- (void)ActionGetQQMessage:(id)arg1;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (_Bool)addAdMsgToList:(id)arg1;
- (void)addLbsNotices;
- (void)addLbsNotification;
- (void)addReqId:(int)arg1 WithKey:(id)arg2;
- (void)asyncLoadPicUrlsFromDB:(id)arg1;
- (int)asyncSavePicUrlToDB:(id)arg1;
- (void)changeAccount;
- (void)clearAdMsgModleCache;
- (void)clearCurWebViewUrl;
- (void)clearLoadingRichPicKeys:(unsigned long long)arg1;
- (void)clearShoppingFolderUnreadInfo;
- (id)configJsonPath;
@property(retain, nonatomic) ShoppingConfigModel *configShopping; // @synthesize configShopping;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)creatAdMsgModle:(id)arg1;
- (void)createAllFolders;
- (void)createTable:(id)arg1;
@property(retain, nonatomic) NSArray *curNeedMatchModels; // @synthesize curNeedMatchModels;
@property(retain, nonatomic) NSString *currentMainDocumentURL; // @synthesize currentMainDocumentURL;
@property(nonatomic) id <ShoppingDataManagerDelegate> delegate; // @synthesize delegate;
- (void)deleteAdMsgModle;
- (void)deleteFolderRedPointClearFlag;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)fetchBindUins;
- (int)fetchRecommendShoppings;
- (int)fetchShopCustomerService:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *firstShowUpUins; // @synthesize firstShowUpUins=_firstShowUpUins;
- (void)freshShoppingData;
- (void)freshShoppingDataHandleWithOrgModel:(id)arg1 isGetRecommend:(_Bool)arg2;
- (id)getAdKey;
- (id)getAllPuinis;
- (id)getBindShoppingUinsWithQQUin:(id)arg1;
- (id)getCacheJdAutoCode;
- (id)getJingXianKey;
- (void)getShopAccountMsgPicture:(id)arg1;
- (id)getShopWindowUrlsArrayByPuin:(id)arg1;
- (unsigned long long)getShoppingCustomerService:(unsigned long long)arg1;
- (id)getShoppingModelWithUin:(unsigned long long)arg1;
- (id)getShoppingNewstMsg;
- (id)getShoppingOrgModels;
- (unsigned long long)getShoppingTopTabReadLastTime;
- (unsigned long long)getTableSign;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleUpdateLocation:(id)arg1;
- (void)iniNativeAdMsgModle;
- (id)init;
- (void)initReadyDB;
- (void)initSwitch;
- (_Bool)isCanShowDeleteButtion;
- (_Bool)isCanShowFolderRedPoint:(_Bool)arg1;
- (_Bool)isExistJingXianMsg;
- (_Bool)isShoppingCustomerServiceTimeout:(unsigned long long)arg1;
- (_Bool)isShoppingMsg:(id)arg1;
@property(nonatomic) _Bool isShowShoppingViewRedPoint; // @synthesize isShowShoppingViewRedPoint;
- (_Bool)isValidPuin:(unsigned long long)arg1;
- (id)lastModifiedTimePath;
- (void)loadBindRelationInfo:(_Bool)arg1;
- (void)loadJsonConfigFile;
- (void)loadMainHeadImageWihtModel:(id)arg1;
- (void)loadNativeConfigJson;
- (void)loadPicUrlWithInfoArray:(id)arg1 db:(id)arg2;
- (void)loadShopAccountMsgUrlWithModels:(id)arg1;
- (void)loadShouldShowUpUins;
- (void)loadUserHehaviorJsonConfigFile;
- (id)mainImageFolderPath;
- (char *)makeUpGetBindUinBufWithPuins:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)notifyFreshData;
- (void)notifyQQLbsGetLocFieldFail:(id)arg1;
- (void)notifyQQLbsGetLocFieldSucc:(id)arg1;
@property(retain, nonatomic) NSDictionary *oldBindRelations; // @synthesize oldBindRelations;
- (void)onAccountLogout:(id)arg1;
- (void)onDBChanged:(id)arg1;
@property(retain, nonatomic) NSArray *orgModels; // @synthesize orgModels;
- (void)parseMoniterUrl:(id)arg1;
- (id)parseShopWindowUrls:(id)arg1;
- (void)postNotifyShoppingVcListFresh:(id)arg1;
- (void)postShopingMsgFresh_delay;
- (void)preLoadShopAccountMsgUrlWithModels:(id)arg1;
- (void)preRepoerUserHehavior;
- (id)readBindRelationFile;
- (unsigned long long)readClearRedPointLastMsgTime;
- (id)readJingXianMsgInfo;
- (id)readLastModifiedTime;
- (void)recodeUserHehavior:(id)arg1 time:(double)arg2;
- (id)relationInfoPath;
- (void)removeCacheJdAutoCode;
- (void)removeJingXianInfo;
- (void)removeLbsNotices;
- (void)removeLbsNotification;
- (_Bool)removeReqId:(int)arg1 WithKey:(id)arg2;
- (void)repoerUserHehavior:(id)arg1 times:(id)arg2 matchM:(id)arg3;
- (void)reporetDataEvent:(id)arg1 tvalue:(unsigned int)arg2 ad:(unsigned long long)arg3;
- (int)reportAdClickEvent:(id)arg1;
- (int)reportClickEvent:(unsigned long long)arg1 type:(int)arg2;
- (int)reportCloseEvent;
- (void)reportJdMoniter:(id)arg1 tavalue:(unsigned long long)arg2;
- (int)reportNearbyShopClickEvent:(unsigned long long)arg1;
- (id)rootDirectoryPath;
- (void)saveCacheJdAutoCode:(unsigned long long)arg1 code:(id)arg2;
- (void)saveJingXianMsg:(id)arg1;
- (_Bool)savePicUrlWithPicInfo:(id)arg1 db:(id)arg2;
- (void)saveShoppingVSwitch:(_Bool)arg1;
- (void)saveShouldShowUpUins;
- (void)sendAutoCodeReq:(id)arg1 appId:(int)arg2;
- (void)setCurWebViewMatchUrls:(id)arg1 documentURL:(id)arg2;
- (void)setFolderRedPointClearFlag;
@property(retain, nonatomic) NSMutableArray *shoppingDetailReqArray; // @synthesize shoppingDetailReqArray;
- (void)setShoppingTopTabRedPointReadLastTime;
@property(retain, nonatomic) NSMutableDictionary *shouldShowUpUins; // @synthesize shouldShowUpUins=_shouldShowUpUins;
- (void)setShouldShowUpUinsDic:(id)arg1;
- (void)setShowAdFlag;
@property(nonatomic) int topHeaderRedPointTpye; // @synthesize topHeaderRedPointTpye;
@property(nonatomic) _Bool wonderfulLife; // @synthesize wonderfulLife;
@property(readonly, nonatomic) _Bool showShopingAndJinXuan; // @synthesize showShopingAndJinXuan=_showShopingAndJinXuan;
- (void)updateGPSForFetch;
- (id)userHeHaviorConfigJsonPath;
- (void)writeBindRelationToFile:(id)arg1;
- (void)writeLastModfied:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

