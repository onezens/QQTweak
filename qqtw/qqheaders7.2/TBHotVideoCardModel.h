//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableArray;

@interface TBHotVideoCardModel : QQModel
{
    NSMutableArray *_videoItemList;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *videoItemList; // @synthesize videoItemList=_videoItemList;

@end

