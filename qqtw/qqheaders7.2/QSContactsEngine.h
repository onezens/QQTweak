//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSContactsEngineBase.h"

#import "IEngineDispatchDelegate.h"
#import "IQSContactsEngine.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface QSContactsEngine : QSContactsEngineBase <IQSContactsEngine, IEngineDispatchDelegate>
{
    void *_addressBook;
    NSMutableArray *_serverContacts;
    NSMutableDictionary *_lastLoginContacts;
    _Bool _bNeedSyncContacts;
    _Bool _bIsAnsyFetchingForUploadContacts;
    _Bool _bIsAnsyFetchingForSyncContacts;
    _Bool _isNeedUpdateBindingInfo;
    _Bool _isUploadingAndUpdating;
    unsigned int _syncContactsLoadFailCount;
    int _lastUsedFlag;
    NSMutableSet *_checkUpdateObservers;
    _Bool _bUploadContactResult;
    NSData *_uploadContactSessionSid;
    NSMutableDictionary *_serverContactsDic;
    NSMutableArray *_newAllContactsArray;
    NSMutableArray *_newMatchContactsArray;
    int _numberOfDuplicate;
    _Bool _needSyncOnLoginSuccess;
    NSMutableArray *_sortedContacts;
    _Bool _shouldUpdateCursor;
    int _tempShowedCursor;
    struct _opaque_pthread_rwlock_t _lock_server_contacts;
    struct _opaque_pthread_rwlock_t _lock_binding_info_lock;
    _Bool _isRequestingBindingInfo;
    _Bool _isInBindingAndQueryProcess;
    _Bool _shouldSaveQQContactsWhenUpload;
    int _lastProgress;
    NSMutableDictionary *_bindingInfo;
    struct dispatch_queue_s *_concurrentQueue;
}

- (void)LogoutNotification;
- (void)QsortContactOnSameFriend:(id)arg1 low:(int)arg2 high:(int)arg3;
- (void)addMobilePhoneToBlackList:(id)arg1;
- (void)addNewMatchContacts:(id)arg1;
- (_Bool)bindPhoneCode:(id)arg1 countryCode:(id)arg2 bindType:(int)arg3 uniFlag:(_Bool)arg4 changeFlag:(_Bool)arg5;
- (_Bool)bindWithPhone:(id)arg1 countryCode:(id)arg2 rebind:(_Bool)arg3 bindType:(int)arg4 uniFlag:(_Bool)arg5 changeFlag:(_Bool)arg6;
- (id)bindedContacts;
- (_Bool)cancelBindingWithUniFlag:(_Bool)arg1 andChangeFlag:(_Bool)arg2;
- (void)checkAndUpdateRemarkSetting;
- (_Bool)checkQQContactsStatAndUpdate;
- (_Bool)checkQQContactsStatAndUpdate:(_Bool)arg1;
- (_Bool)checkSafeBindingObjectExistForKey:(id)arg1;
- (void)clearBindingInfo;
- (void)clearNewAllContacts;
- (void)clearNewAllContactsUnread:(id)arg1;
- (void)clearNewMatchContacts;
- (void)clearNewMatchContactsUnread:(id)arg1;
- (void)clearQQContacts;
- (void)commitUpdateShowedCursor;
@property(nonatomic) struct dispatch_queue_s *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void)configPimEngine;
- (void)contactsEngineOnLoginSuccess;
- (void)dealloc;
- (void)deleteOneNewAllContacts:(id)arg1;
- (void)deleteOneNewMatchContacts:(id)arg1;
- (void)didAddressBookChanged;
- (void)didAddressBookChangedDelay;
- (void)didReceivedAddFriendResponse:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)didRespBindMobile:(struct ResponeBindMobileV2 *)arg1 result:(int)arg2;
- (void)didRespCancelBindMobileWithResult:(int)arg1;
- (void)didRespDisableMobileBindWithResult:(int)arg1;
- (void)didRespHideContactsWithResult:(int)arg1;
- (void)didRespNotifyFroRecommendUpdateWithResult:(int)arg1;
- (void)didRespQueryLastLoginState:(struct ResponeQueryLastLoginState *)arg1 result:(int)arg2;
- (void)didRespQueryQQMobileContacts:(struct ResponeQueryQQMobileContactsV3 *)arg1 result:(int)arg2;
- (void)didRespQueryQQMobileContactsNotBind:(struct ResponeQueryQQMobileContactsNotBind *)arg1 result:(int)arg2;
- (void)didRespRebindMobile:(struct ResponeReBindMobile *)arg1 result:(int)arg2;
- (void)didRespResendSmscode:(struct ResponeResendSmscode *)arg1 result:(int)arg2;
- (void)didRespUpdateAddressBook:(struct ResponeUpdateAddressBook *)arg1 result:(int)arg2;
- (void)didRespUpdateAddressBookNotBind:(struct ResponeUpdateAddressBookNotBind *)arg1 result:(int)arg2;
- (void)didRespUploadAddressBookNotBind:(struct ResponeUploadAddressBookNotBind *)arg1 result:(int)arg2;
- (void)didRespUploadAddressBookV2:(struct ResponeUploadAddressBookV2 *)arg1 result:(int)arg2 requestItem:(id)arg3;
- (void)didRespVerifySmscode:(struct ResponeVerifySmscode *)arg1 result:(int)arg2;
- (_Bool)disableContactsFeature;
- (void)doPimEngineLogin;
- (void)doPimEngineWeakLogin:(id)arg1;
- (void)doSaveQQContacts;
- (_Bool)doUpdateContactsOfflineStat;
- (_Bool)doUpdateContactsStat;
- (id)getAllQQContacts;
- (id)getAllQQContactsIncludingNotMatch;
- (id)getAllQQContactsWithoutMerge;
- (id)getBindingCountryCode;
@property(retain, nonatomic, getter=getBindingInfo) NSMutableDictionary *bindingInfo; // @synthesize bindingInfo=_bindingInfo;
- (id)getBindingPhoneCode;
- (id)getBindingQQContacts;
- (id)getBindingQQContacts:(_Bool)arg1;
- (id)getBindingQQContacts:(id)arg1 isFriend:(_Bool)arg2;
- (id)getBindingQQContacts:(id)arg1 isFriend:(_Bool)arg2 isHide:(_Bool)arg3;
- (long long)getChatUINWithMobilePhoneStr:(id)arg1;
- (int)getContactBinderFromWithMobilePhoneStr:(id)arg1;
- (id)getContactErrorCodeTips:(int)arg1;
- (id)getContactLocalPhoneCodesWithPhoneCodes:(id)arg1;
- (id)getContactMobilePhoneWithUIN:(long long)arg1;
- (id)getContactModelWithMd5:(id)arg1;
- (id)getContactModelWithMobilePhoneStr:(id)arg1;
- (id)getContactNameWithMobilePhoneStr:(id)arg1;
- (id)getContactNameWithUIN:(long long)arg1;
- (id)getContactNickNameWithMobilePhoneStr:(id)arg1;
- (id)getContactPhoneLabelsWithPhoneCodes:(id)arg1;
- (long long)getContactUINWithMobilePhoneStr:(id)arg1;
- (int)getContactsErrorCode:(int)arg1;
- (id)getCountryAndPhoneCodeStrWithMobilePhoneStr:(id)arg1;
- (unsigned long long)getHideBindingQQContactsCount;
- (id)getLocalContactModelWithMd5:(id)arg1;
- (id)getLocalContactWithPhone:(id)arg1;
- (id)getLocalContactsDicWithMobliePhoneStr:(id)arg1 source:(id)arg2;
- (id)getLocalQQContacts;
- (id)getMaskedBindingPhoneCode;
- (id)getMobilePhoneWithChatUIN:(long long)arg1;
- (id)getMobilePhoneWithTemporaryUIN:(long long)arg1;
- (id)getMyselfMobilePhone;
- (id)getMyselfMobilePhoneWithoutCountry;
- (id)getNewAllContacts;
- (id)getNewMatchContacts;
- (id)getNoCountryPhoneWithMobilePhone:(id)arg1;
- (id)getOriContactNameWithMobilePhoneStr:(id)arg1;
- (int)getRecommendContactsShowedCursor;
- (id)getSafeBindingObjectForKey:(id)arg1;
- (unsigned long long)getSafeContactsRecommendTime;
- (long long)getTemporaryUINWithMobilePhoneStr:(id)arg1 makeIfNotExist:(_Bool)arg2;
- (id)getUnbindingPhoneCode;
- (id)getunbindingCountryCode;
- (_Bool)hasBindingInfo;
- (_Bool)hasChangeDevInfo;
- (_Bool)hideContacts:(id)arg1 name:(id)arg2 hide:(_Bool)arg3;
- (id)init;
- (_Bool)isBinding;
- (_Bool)isChangeDev;
- (_Bool)isContactsMatched;
- (_Bool)isDisableToChat:(id)arg1;
- (_Bool)isEnableNoBindMatch;
@property(nonatomic) _Bool isInBindingAndQueryProcess; // @synthesize isInBindingAndQueryProcess=_isInBindingAndQueryProcess;
- (_Bool)isInactive;
- (_Bool)isMobilePhoneAtBindContacts:(id)arg1;
- (_Bool)isMobilePhoneAtBlackList:(id)arg1;
- (_Bool)isMobilePhoneAtContacts:(id)arg1;
- (_Bool)isMobilePhoneAtUnbindContacts:(id)arg1;
@property(nonatomic) _Bool isRequestingBindingInfo; // @synthesize isRequestingBindingInfo=_isRequestingBindingInfo;
- (_Bool)isShowLocalContactWhenRecommendContact;
- (_Bool)isUploadedContactsNotBind;
- (_Bool)isUploadingAndUpdatingContacts;
- (_Bool)isUploadingAndUpdatingContactsByAutoMatch;
- (_Bool)isUserAllowToAccessData;
- (_Bool)isUserDenyToAccessData;
- (_Bool)isUserNeedUploadContacts;
@property int lastProgress; // @synthesize lastProgress=_lastProgress;
- (id)loadApplyBindingInfo;
- (void)loadBindingInfo;
- (id)loadChatUINList;
- (id)loadInvitedList;
- (id)loadLastLoginContacts;
- (id)loadMobilePhoneConfig;
- (id)loadMobilePhoneNoCList;
- (void)loadNewAllContacts;
- (void)loadNewMatchContacts;
- (id)loadQQContacts;
- (id)loadTemporaryUINList;
- (id)loadUploadContacts;
- (void)notifyError:(id)arg1;
- (void)notifyErrorWithRequestType:(id)arg1 errorCode:(int)arg2;
- (void)onBindSuccess;
- (_Bool)processBindingInfo:(struct ResponeQueryQQMobileContactsV3 *)arg1;
- (_Bool)processNotBindingInfo:(struct ResponeQueryQQMobileContactsNotBind *)arg1;
- (void)processQueryQQMobileContactsFinished:(struct ResponeQueryQQMobileContactsV3 *)arg1;
- (void)processQueryQQMobileContactsNotBindFinished:(struct ResponeQueryQQMobileContactsNotBind *)arg1;
- (_Bool)rebindPhoneCode:(id)arg1 countryCode:(id)arg2 bindType:(int)arg3 uniFlag:(_Bool)arg4 changeFlag:(_Bool)arg5;
- (void)refreshContactAddState:(id)arg1;
- (void)refreshNewMatchContacts:(id)arg1;
- (void)registerAddressBookChanged;
- (void)registerCheckUpdateObserver:(id)arg1;
- (void)reload;
- (void)removeMobilePhoneAtBlackList:(id)arg1;
- (void)removeSafeBindingObject;
- (void)replaceBlackList:(id)arg1;
- (id)requestBindMobile:(id)arg1 countryCode:(id)arg2 rebind:(_Bool)arg3 bindType:(int)arg4 uniFlag:(_Bool)arg5 changeFlag:(_Bool)arg6;
- (id)requestCancelBindMobile:(id)arg1 countryCode:(id)arg2 uniFlag:(_Bool)arg3 changeFlag:(_Bool)arg4;
- (id)requestDisableMobileBind:(id)arg1 countryCode:(id)arg2;
- (id)requestHideContacts:(id)arg1 name:(id)arg2 hide:(_Bool)arg3;
- (void)requestNewUserRecommendListWithCount:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)requestQueryLastLoginState:(unsigned int)arg1 nextFlag:(unsigned int)arg2 retryCount:(int)arg3 retryPara:(id)arg4;
- (id)requestQueryQQMobileContactsNotBind:(unsigned int)arg1 nextFlag:(unsigned int)arg2 sessionSidData:(id)arg3 queryFlag:(unsigned int)arg4 retryCount:(int)arg5 retryPara:(id)arg6;
- (id)requestQueryQQMobileContactsV3:(unsigned int)arg1 nextFlag:(unsigned int)arg2 sessionSidData:(id)arg3 queryFlag:(unsigned int)arg4 maxSignTimeStamp:(unsigned int)arg5 retryCount:(int)arg6 retryPara:(id)arg7;
- (_Bool)requestResendSMSCode;
- (void)requestTimeout:(id)arg1;
- (id)requestUpdateAddressBookWithContactsToAdd:(id)arg1 contactsToDel:(id)arg2 nextFlag:(unsigned int)arg3 sessionSidData:(id)arg4;
- (id)requestUpdateAddressBookWithContactsToAddNotBind:(id)arg1 contactsToDel:(id)arg2 nextFlag:(unsigned int)arg3 sessionSidData:(id)arg4;
- (id)requestUploadAddressBookWithContactsNotBind:(id)arg1 nextFlag:(unsigned int)arg2 sessionSidData:(id)arg3 retryCount:(int)arg4 retryPara:(id)arg5;
- (id)requestUploadAddressBookWithContactsV2:(id)arg1 nextFlag:(unsigned int)arg2 sessionSidData:(id)arg3 retryCount:(int)arg4 retryPara:(id)arg5;
- (id)requestVerifySmscode:(id)arg1 sessionSidData:(id)arg2 bindType:(int)arg3 uniFlag:(_Bool)arg4 changeFlag:(_Bool)arg5;
- (void)resendContactsRequest:(id)arg1;
- (void)reset;
- (void)resetData;
- (_Bool)resumeUploadContacts;
- (void)saveApplyBindingInfo:(id)arg1;
- (void)saveBindingInfo;
- (void)saveChatUINList:(id)arg1;
- (void)saveContactListWhenFailed:(id)arg1;
- (void)saveContactListWhenUploaded:(id)arg1 resp:(struct ResponeUploadAddressBookV2 *)arg2;
- (void)saveContactListWhenUploadedNotBind:(id)arg1 resp:(struct ResponeUploadAddressBookNotBind *)arg2;
- (void)saveInvitedList:(id)arg1;
- (void)saveLastLoginContacts:(id)arg1;
- (void)saveMobilePhoneConfig:(id)arg1;
- (void)saveMobilePhoneNoCList:(id)arg1;
- (void)saveNewAllContactsArray;
- (void)saveNewAllContactsArrayDelay;
- (void)saveNewMatchContactsArray;
- (void)saveNewMatchContactsArrayDelay;
- (void)saveQQContacts:(id)arg1;
- (void)saveTemporaryUINList:(id)arg1;
- (void)saveUploadContacts:(id)arg1;
- (_Bool)sendServerContacts;
- (_Bool)sendServerContactsForNewUserGuideWithBindPhone:(id)arg1;
- (_Bool)sendServerContactsNotBind;
- (void)setChatUIN:(long long)arg1 withMobilePhoneStr:(id)arg2;
- (void)setContactUIN:(long long)arg1 withMobilePhoneStr:(id)arg2;
- (void)setContactsRecommendTime:(int)arg1;
- (void)setNoCountryPhone:(id)arg1 withMobilePhoneStr:(id)arg2;
- (_Bool)setRecommendContactShowedCursor:(int)arg1;
- (void)setSafeBindingInfo:(id)arg1;
- (void)setSafeBindingObject:(id)arg1 forKey:(id)arg2;
@property _Bool shouldSaveQQContactsWhenUpload; // @synthesize shouldSaveQQContactsWhenUpload=_shouldSaveQQContactsWhenUpload;
- (void)setShouldUpdateRecommendCursor:(_Bool)arg1;
- (void)setTempRecContactShowedCursor:(int)arg1;
@property(nonatomic) unsigned long long timeStamp;
- (_Bool)setUserNeedUploadContacts:(_Bool)arg1;
- (_Bool)shouldUpdateRecommendCursor;
- (_Bool)syncContacts;
- (_Bool)syncContactsNotBind;
- (void)syncContactsWhenDidAnsyFetchContacts:(id)arg1;
- (void)syncContactsWhenDidAnsyFetchContactsNotBind:(id)arg1;
- (void)unregisterAddressBookChanged;
- (void)unregisterCheckUpdateObserver:(id)arg1;
- (void)updateBindPhoneCode;
- (_Bool)updateContactHideTag:(_Bool)arg1 mobilePhoneStr:(id)arg2;
- (_Bool)updateContactNickName:(id)arg1 withMobilePhoneStr:(id)arg2;
- (_Bool)updateContactsStat;
- (void)uploadContactsWhenDidAnsyFetchContactsNotBind:(id)arg1;
- (void)uploadContactsWhenDidAnsyFetchContactsV2:(id)arg1;
- (_Bool)verifyBindingSMSCode:(id)arg1 bindType:(int)arg2 uniFlag:(_Bool)arg3 changeFlag:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
