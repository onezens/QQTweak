//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface QQRecallModelCacheItem : NSObject
{
    NSString *_itemKey;
    struct vector<msg_recall::RecallModel *, std::allocator<msg_recall::RecallModel *>> _modelCache;
    NSLock *_lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)findRecallModelInCache:(struct RecallModel *)arg1 outIt:(__normal_iterator_82891efd *)arg2;
- (id)init;
- (_Bool)insertModel:(struct RecallModel *)arg1;
- (_Bool)isRecallContained:(id)arg1;
@property(retain, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (void)removeAllModel;
- (_Bool)removeModel:(struct RecallModel *)arg1;

@end

