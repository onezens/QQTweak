//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

#import "ArkCardModelsOperationDelegate.h"

@class ArkCardsListView, EmotionParseResult, NSArray, NSDictionary, NSMutableArray, NSString;

@interface QQAIOTextModel : QQAIOMsgModel <ArkCardModelsOperationDelegate>
{
    NSMutableArray *_subMsgList;
    _Bool _disPlayAccView;
    double _AccViewLocal_Y;
    EmotionParseResult *_layoutResult;
    NSMutableArray *_cardModels;
    _Bool _ignoreRelayout;
    _Bool _arkKeyWordUnderLineHidden;
    _Bool _arkKeyWordReported;
    _Bool _cardListViewExpanded;
    _Bool _didParsedKeywords;
    ArkCardsListView *_cardListView;
    NSDictionary *_vipGrayTipInfo;
    long long _lastFrameIndex;
    NSString *_detailUrl;
    CDStruct_f9c2ea2a _cardPosition;
}

+ (id)modelWithMessageModel:(id)arg1;
- (void).cxx_destruct;
- (void)addCardModel:(id)arg1 afterCardModel:(id)arg2;
@property(nonatomic) _Bool arkKeyWordReported; // @synthesize arkKeyWordReported=_arkKeyWordReported;
@property(nonatomic) _Bool arkKeyWordUnderLineHidden; // @synthesize arkKeyWordUnderLineHidden=_arkKeyWordUnderLineHidden;
@property(nonatomic) __weak ArkCardsListView *cardListView; // @synthesize cardListView=_cardListView;
@property(nonatomic) _Bool cardListViewExpanded; // @synthesize cardListViewExpanded=_cardListViewExpanded;
@property(retain, nonatomic) NSArray *cardModels;
@property(nonatomic) CDStruct_f9c2ea2a cardPosition; // @synthesize cardPosition=_cardPosition;
- (id)cellClassName;
- (id)cellDataForRow:(unsigned long long)arg1;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (void)clearLongMessageList;
- (void)dealloc;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) _Bool didParsedKeywords; // @synthesize didParsedKeywords=_didParsedKeywords;
- (id)eventHandleClassName;
- (id)favoritesInfoModel;
- (long long)getFontIdFromMsgModel;
- (id)getLargeContent;
- (id)getLayoutResult:(id)arg1 fromLine:(int)arg2 toLine:(int)arg3;
@property(readonly, nonatomic, getter=getSubMsgList) NSMutableArray *subMsgList; // @synthesize subMsgList=_subMsgList;
@property(nonatomic) _Bool ignoreRelayout; // @synthesize ignoreRelayout=_ignoreRelayout;
- (id)initWithMessageModel:(id)arg1;
- (_Bool)isLongSplitMessage;
- (_Bool)isLongSplitMessageAndReLayout;
@property(nonatomic) long long lastFrameIndex; // @synthesize lastFrameIndex=_lastFrameIndex;
@property(retain) EmotionParseResult *layoutResult;
- (void)magicFontWordSegmentFinished:(id)arg1;
- (id)makeLayoutResultWithMaxWidth:(double)arg1;
- (long long)numberOfRowsInSection;
- (void)reloadLayoutResult;
@property(retain, nonatomic) NSDictionary *vipGrayTipInfo; // @synthesize vipGrayTipInfo=_vipGrayTipInfo;
- (_Bool)shouldDisplaySelfNick;
- (id)voiceOverText;

// Remaining properties
@property(nonatomic) double AccViewLocal_Y; // @dynamic AccViewLocal_Y;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disPlayAccView; // @dynamic disPlayAccView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

