//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface PAAdMsgViewModel : NSObject
{
    NSString *_adMsgId;
    unsigned long long _adMsgTime;
    NSArray *_videoModels;
    NSString *_articleUrl;
    unsigned long long _volumeMode;
    unsigned long long _preDownloadType;
    NSDictionary *_adInfo;
}

+ (id)getAdMsgViewModelWithMsgModel:(id)arg1;
+ (_Bool)isValidModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSString *adMsgId; // @synthesize adMsgId=_adMsgId;
@property(nonatomic) unsigned long long adMsgTime; // @synthesize adMsgTime=_adMsgTime;
@property(copy, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
- (id)description;
@property(nonatomic) unsigned long long preDownloadType; // @synthesize preDownloadType=_preDownloadType;
- (void)setAdMsgDataWithSmMsg:(id)arg1;
@property(copy, nonatomic) NSArray *videoModels; // @synthesize videoModels=_videoModels;
@property(nonatomic) unsigned long long volumeMode; // @synthesize volumeMode=_volumeMode;

@end

