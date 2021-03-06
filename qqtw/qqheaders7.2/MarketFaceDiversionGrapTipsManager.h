//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MarketFaceDiversionGrapTipsManager : NSObject
{
    _Bool _isReadingFile;
    NSMutableDictionary *_showDiversionGrapTipsCache;
}

+ (id)getInstance;
- (void)dealloc;
- (id)fileDirPath;
- (id)filePath;
- (id)getTypeStringFromDiversionType:(long long)arg1;
- (id)init;
- (void)initCacheFromFile;
@property(retain, nonatomic) NSMutableDictionary *showDiversionGrapTipsCache; // @synthesize showDiversionGrapTipsCache=_showDiversionGrapTipsCache;
- (_Bool)showDiversionGrapTipsWithModel:(id)arg1;
- (void)syncCacheToFile;

@end

