//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class GSCache, NSObject<GSRequestProtocol>, NSString;

@interface GSBaseRequest : SAMRequestItem
{
    _Bool _isLoading;
    _Bool _openDebugMode;
    _Bool _enableEmptyRequest;
    unsigned int _serviceType;
    unsigned int _pkgResult;
    id <GSRequestCallBackDelegate> _delegate;
    id <GSRequestInterceptor> _interceptor;
    unsigned long long _errorType;
    NSString *_errorMessage;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    NSObject<GSRequestProtocol> *_child;
    GSCache *_cache;
}

- (void).cxx_destruct;
- (void)addAdditionalParameters;
- (void)afterPerformFailWithUserInfo:(id)arg1;
- (void)afterPerformRequest;
- (void)afterPerformSuccessWithUserInfo:(id)arg1;
- (void)beforePerformFailWithUserInfo:(id)arg1;
- (void)beforePerformRequest;
- (void)beforePerformSuccessWithUserInfo:(id)arg1;
@property(retain, nonatomic) GSCache *cache; // @synthesize cache=_cache;
- (id)cacheKey;
- (long long)cacheTimeInSeconds;
- (void)callBackWithUserInfo:(id)arg1;
- (void)cancel;
@property(nonatomic) __weak NSObject<GSRequestProtocol> *child; // @synthesize child=_child;
- (void)cleanStatus;
- (void)dealloc;
@property(nonatomic) __weak id <GSRequestCallBackDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doLoad:(_Bool)arg1;
- (void)doSendRequest;
@property(nonatomic) _Bool enableEmptyRequest; // @synthesize enableEmptyRequest=_enableEmptyRequest;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
- (char *)getRequestBuffer;
- (id)init;
@property(nonatomic) __weak id <GSRequestInterceptor> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (_Bool)isReachable;
- (void)load;
- (void)loadWithCompletionBlockSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loadWithoutCache;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(nonatomic) _Bool openDebugMode; // @synthesize openDebugMode=_openDebugMode;
- (void)performcallBackWithUserInfo:(id)arg1;
@property(nonatomic) unsigned int pkgResult; // @synthesize pkgResult=_pkgResult;
- (id)serviceCmd;
@property(nonatomic) unsigned int serviceType; // @synthesize serviceType=_serviceType;
- (void)setCompletionBlockSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
- (_Bool)shouldCache;
- (_Bool)shouldCallBackOnMainThread;
- (void)showDebugInfo:(id)arg1;
- (id)translateHeaderCode:(unsigned int)arg1;
- (void)willBeginSending;

@end
