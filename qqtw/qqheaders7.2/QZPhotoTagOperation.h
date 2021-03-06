//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSDictionary;

@interface QZPhotoTagOperation : NSOperation
{
    NSArray *_images;
    NSDictionary *_resultDict;
    unsigned long long _operationType;
    CDUnknownBlockType _tagResultBlock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImages:(id)arg1;
- (_Bool)isReady;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onNotifyUploadOPFinished:(id)arg1;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(copy, nonatomic) CDUnknownBlockType tagResultBlock; // @synthesize tagResultBlock=_tagResultBlock;

@end

