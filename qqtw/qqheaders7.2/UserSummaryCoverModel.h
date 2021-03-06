//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface UserSummaryCoverModel : QQModel <NSCopying>
{
    int _timeStamp;
    NSString *_uin;
    NSArray *_photoInfoList;
    NSArray *_selectedList;
    NSString *_defaultImgUrl;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *defaultImgUrl; // @synthesize defaultImgUrl=_defaultImgUrl;
- (void)httpToHttps;
@property(retain, nonatomic) NSArray *photoInfoList; // @synthesize photoInfoList=_photoInfoList;
@property(retain, nonatomic) NSArray *selectedList; // @synthesize selectedList=_selectedList;
@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;

@end

