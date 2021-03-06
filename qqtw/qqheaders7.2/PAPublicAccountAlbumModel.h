//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, PAPhotoFirstItem;

@interface PAPublicAccountAlbumModel : NSObject
{
    _Bool _enableComment;
    _Bool _isLike;
    NSString *_articleUrl;
    NSString *_rowKey;
    unsigned long long _pUin;
    NSString *_articleImgUrl;
    NSString *_articleTitle;
    NSString *_commentUrl;
    NSArray *_dataArray;
    NSMutableArray *_recommandArray;
    PAPhotoFirstItem *_photoFirstItem;
    unsigned long long _likeCount;
    unsigned long long _commentCount;
    unsigned long long _readCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *articleImgUrl; // @synthesize articleImgUrl=_articleImgUrl;
@property(retain, nonatomic) NSString *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(retain, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *commentUrl; // @synthesize commentUrl=_commentUrl;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)dealloc;
- (id)description;
@property(nonatomic) _Bool enableComment; // @synthesize enableComment=_enableComment;
- (id)initWithDBModel:(id)arg1;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
- (_Bool)isValidModel;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long pUin; // @synthesize pUin=_pUin;
@property(retain, nonatomic) PAPhotoFirstItem *photoFirstItem; // @synthesize photoFirstItem=_photoFirstItem;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSMutableArray *recommandArray; // @synthesize recommandArray=_recommandArray;
@property(retain, nonatomic) NSString *rowKey; // @synthesize rowKey=_rowKey;

@end

