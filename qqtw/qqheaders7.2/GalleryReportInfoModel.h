//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GalleryReportInfoModel : NSObject
{
    _Bool _isFromQQ;
    unsigned long long _pUin;
    NSString *_articleUrl;
    NSString *_articleID;
    NSString *_rowKey;
    unsigned long long _siteID;
    unsigned long long _recommendIndex;
    NSString *_echoInfo;
    unsigned long long _browseTime;
    NSArray *_recommendInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(nonatomic) unsigned long long browseTime; // @synthesize browseTime=_browseTime;
- (id)description;
@property(retain, nonatomic) NSString *echoInfo; // @synthesize echoInfo=_echoInfo;
@property(nonatomic) _Bool isFromQQ; // @synthesize isFromQQ=_isFromQQ;
@property(nonatomic) unsigned long long pUin; // @synthesize pUin=_pUin;
@property(nonatomic) unsigned long long recommendIndex; // @synthesize recommendIndex=_recommendIndex;
@property(retain, nonatomic) NSArray *recommendInfos; // @synthesize recommendInfos=_recommendInfos;
@property(retain, nonatomic) NSString *rowKey; // @synthesize rowKey=_rowKey;
@property(nonatomic) unsigned long long siteID; // @synthesize siteID=_siteID;

@end
