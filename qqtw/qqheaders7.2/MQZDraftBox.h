//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQZDraftItemText, NSMutableDictionary;

@interface MQZDraftBox : NSObject
{
    NSMutableDictionary *_itemsIndex;
    NSMutableDictionary *_itemsCache;
    MQZDraftItemText *_editItem;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)addIndexItem:(id)arg1;
- (_Bool)addItem:(id)arg1 key:(id)arg2;
- (_Bool)beginEditing:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)endEditing;
- (_Bool)finishEditing;
- (id)getEditItem;
- (id)getItem:(id)arg1;
- (id)getItemWithKey:(id)arg1;
- (id)init;
- (void)initialize;
- (_Bool)load:(id *)arg1 key:(id)arg2;
- (id)makeKey:(long long)arg1 primaryKey:(id)arg2 subKey:(id)arg3 cmtID:(id)arg4;
- (void)onAppEnterBackground:(id)arg1;
- (void)onCrashed;
- (void)removeDraftItem:(id)arg1;
- (void)removeItemByKey:(id)arg1;
- (void)save:(id)arg1;
- (void)saveItemIndex;
- (_Bool)updateEditing;
- (_Bool)updateIndexItem:(id)arg1 item:(id)arg2;

@end

