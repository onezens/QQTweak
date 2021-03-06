//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QQOIDBSSORequest;

@interface NearbyVideoChatAuthorityManager : NSObject
{
    _Bool _isRequestingAuthority;
    _Bool _isRequestingReport;
    QQOIDBSSORequest *_authorityReq;
    NSArray *_authResults;
    QQOIDBSSORequest *_reportReq;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *authResults; // @synthesize authResults=_authResults;
@property(retain, nonatomic) QQOIDBSSORequest *authorityReq; // @synthesize authorityReq=_authorityReq;
- (id)getAuthorityWithType:(unsigned int)arg1;
@property(nonatomic) _Bool isRequestingAuthority; // @synthesize isRequestingAuthority=_isRequestingAuthority;
@property(nonatomic) _Bool isRequestingReport; // @synthesize isRequestingReport=_isRequestingReport;
- (void)loadAuthority;
@property(retain, nonatomic) QQOIDBSSORequest *reportReq; // @synthesize reportReq=_reportReq;
- (void)reportWithUin:(unsigned long long)arg1 reportType:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestAuthorityWithFilterType:(unsigned long long)arg1;

@end

