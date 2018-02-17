//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class EmotionParseResult, NSArray, NSObject, NSString;

@interface QQAIORichModel : QQAIOMsgModel
{
    NSArray *_textContent;
    NSObject *_maskData;
    _Bool _loading;
    _Bool _uploading;
    NSString *_process;
    float _realprogress;
    NSString *_imageDone;
    NSString *_fileName;
    NSString *_percent;
    NSString *_stateCurrent;
    _Bool _isExistPic;
    struct CGRect _rectImage;
    EmotionParseResult *_layoutResult1;
    EmotionParseResult *_layoutResult2;
    NSString *_content;
    double _richCellHeight;
    NSString *_thumbPath;
    _Bool _isMarioGif;
    _Bool _isGif;
    int _uploadSecondTransfer;
    unsigned long long _preuploadState;
    NSString *_marioText;
}

+ (id)getImageMetaInfo:(id)arg1;
+ (id)getImageMetaInfo:(id)arg1 isShare:(_Bool)arg2;
+ (id)modeWithMessageModelAsync:(id)arg1;
+ (id)modelWithMessageModel:(id)arg1;
+ (id)paseImage:(id)arg1;
- (void).cxx_destruct;
- (id)cellClassName;
- (id)cellViewClassName;
- (void)dealloc;
- (id)eventHandleClassName;
- (id)favoritesInfoModel;
- (id)getAvailableRichModelPictureName;
- (long long)getFontIdFromMsgModel;
- (id)getRichModelPictureName;
- (id)initWithMessageModel:(id)arg1;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property _Bool isMarioGif; // @synthesize isMarioGif=_isMarioGif;
- (_Bool)isRichModelImageExist;
- (void)magicFontWordSegmentFinished:(id)arg1;
@property(retain, nonatomic) NSString *marioText; // @synthesize marioText=_marioText;
- (id)paseImage:(id)arg1;
@property(nonatomic) unsigned long long preuploadState; // @synthesize preuploadState=_preuploadState;
- (void)refreshQQAIORichModel:(id)arg1;
- (void)reloadLayoutResult:(long long)arg1;
@property(nonatomic) int uploadSecondTransfer; // @synthesize uploadSecondTransfer=_uploadSecondTransfer;
- (_Bool)shouldDisplaySelfNick;
- (void)startDownImageProgress;
@property(readonly, copy, nonatomic) NSString *thumbPath;
- (void)updateUploadState:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) NSString *imageDone; // @dynamic imageDone;
@property(nonatomic) _Bool isExistPic; // @dynamic isExistPic;
@property(retain, nonatomic) EmotionParseResult *layoutResult1; // @dynamic layoutResult1;
@property(retain, nonatomic) EmotionParseResult *layoutResult2; // @dynamic layoutResult2;
@property(nonatomic) _Bool loading; // @dynamic loading;
@property(retain, nonatomic) NSObject *maskData; // @dynamic maskData;
@property(retain, nonatomic) NSString *percent; // @dynamic percent;
@property(retain, nonatomic) NSString *process; // @dynamic process;
@property(nonatomic) float realprogress; // @dynamic realprogress;
@property(nonatomic) struct CGRect rectImage; // @dynamic rectImage;
@property(retain, nonatomic) NSString *stateCurrent; // @dynamic stateCurrent;
@property(retain, nonatomic) NSArray *textContent; // @dynamic textContent;
@property(nonatomic) _Bool uploading; // @dynamic uploading;

@end
