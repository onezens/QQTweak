//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQStoryBaseLoadingModel.h"

@class TBStoryDesModel;

@interface QQStoryUserDisplayModel : QQStoryBaseLoadingModel
{
    _Bool _isLast;
    int _downloadState;
    TBStoryDesModel *_userInfo;
}

- (void)dealloc;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
- (id)initWithStoryDesModel:(id)arg1 withPredownloadState:(int)arg2;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) TBStoryDesModel *userInfo; // @synthesize userInfo=_userInfo;

@end

