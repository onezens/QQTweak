//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, QQLockDictionary;

@interface VASFontEngine : NSObject
{
    QQLockDictionary *_fontDic;
    NSMutableSet *_activingFontInfos;
    QQLockDictionary *_founderColorFontDic;
}

+ (id)getInstance;
- (void)dealDownloadFailed:(long long)arg1;
- (void)dealDownloadSuccess:(long long)arg1;
- (void)dealFounderColorFontDownloadFailed:(long long)arg1;
- (void)dealFounderColorFontDownloadSuccess:(long long)arg1;
- (void)dealloc;
- (id)getActiveFontWithFontId:(long long)arg1 withSize:(double)arg2;
- (id)getActiveFounderColorFontWithFontId:(long long)arg1 withSize:(double)arg2;
- (id)getActivingFontInfo:(long long)arg1;
- (_Bool)hasActiveFont:(long long)arg1;
- (_Bool)hasActiveFont:(long long)arg1 withSize:(double)arg2;
- (_Bool)hasActiveFounderColorFont:(long long)arg1;
- (_Bool)hasActiveFounderColorFont:(long long)arg1 withSize:(double)arg2;
- (id)init;
- (_Bool)loadFont:(long long)arg1 fontPath:(id)arg2 size:(double)arg3;
- (_Bool)loadFont:(long long)arg1 size:(double)arg2 loadFail:(CDUnknownBlockType)arg3;
- (_Bool)loadFounderColorFont:(long long)arg1 fontPath:(id)arg2 size:(double)arg3;
- (_Bool)loadFounderColorFont:(long long)arg1 size:(double)arg2 loadFail:(CDUnknownBlockType)arg3;
- (void)removeActiveFontWithFontId:(long long)arg1 withSize:(double)arg2;
- (void)removeActivingFont:(id)arg1;
- (_Bool)setActiveFont:(long long)arg1 size:(double)arg2;
- (_Bool)setActiveFounderColorFont:(long long)arg1 size:(double)arg2;

@end
