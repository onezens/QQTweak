//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCoding.h"

@class NSString, PGCStoryCoverModel, PGCStoryUGCDesModel, TBQQUserInfoModel, TBStoryNowTopicDesModel, TBStoryPostDesModel, TBStoryRoomDesModel, TBStoryVideoDesModel;

@interface PGCStoryModel : QQModel <NSCoding>
{
    unsigned int _contentType;
    NSString *_storyId;
    NSString *_title;
    TBQQUserInfoModel *_user;
    unsigned long long _createTime;
    PGCStoryCoverModel *_recommendCover;
    PGCStoryCoverModel *_cover;
    TBStoryVideoDesModel *_video;
    TBStoryRoomDesModel *_room;
    TBStoryPostDesModel *_post;
    PGCStoryUGCDesModel *_ugcInfo;
    unsigned long long _lastReadPage;
    TBStoryNowTopicDesModel *_nowTopic;
    NSString *_contentTip;
    NSString *_brief;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(retain, nonatomic) NSString *contentTip; // @synthesize contentTip=_contentTip;
@property(nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) PGCStoryCoverModel *cover; // @synthesize cover=_cover;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long lastReadPage; // @synthesize lastReadPage=_lastReadPage;
@property(retain, nonatomic) TBStoryNowTopicDesModel *nowTopic; // @synthesize nowTopic=_nowTopic;
@property(retain, nonatomic) TBStoryPostDesModel *post; // @synthesize post=_post;
@property(retain, nonatomic) PGCStoryCoverModel *recommendCover; // @synthesize recommendCover=_recommendCover;
@property(retain, nonatomic) TBStoryRoomDesModel *room; // @synthesize room=_room;
@property(retain, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PGCStoryUGCDesModel *ugcInfo; // @synthesize ugcInfo=_ugcInfo;
@property(retain, nonatomic) TBQQUserInfoModel *user; // @synthesize user=_user;
@property(retain, nonatomic) TBStoryVideoDesModel *video; // @synthesize video=_video;

@end

