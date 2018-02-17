//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class NSString, QQDataLineMsgData;

@interface QQDataLineModel : QQAIOMsgModel
{
    float _height;
    int _dataType;
    int _shownType;
    QQDataLineMsgData *_msgData;
    NSString *_imagePath;
    NSString *_msgContent;
}

+ (id)modelWithMessageModel:(id)arg1;
- (struct CGSize)GetFitSize:(struct CGSize)arg1 minSize:(struct CGSize)arg2;
@property(readonly, nonatomic, getter=GetProgress) float progress;
@property(readonly, nonatomic, getter=GetStatus) int status;
- (void)Restart;
- (void)Stop;
- (id)cellClassName;
- (double)cellHeight;
- (void)dealloc;
- (id)getFAModelArray;
- (float)heightForString:(id)arg1 fontSize:(float)arg2 andWidth:(float)arg3;
@property(retain, nonatomic, setter=setImagePath:) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (id)initWithMessageModel:(id)arg1;
- (_Bool)isPicMode;
- (_Bool)isSingleMode;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;

// Remaining properties
@property(nonatomic) int dataType; // @dynamic dataType;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) QQDataLineMsgData *msgData; // @dynamic msgData;
@property(nonatomic) int shownType; // @dynamic shownType;

@end
