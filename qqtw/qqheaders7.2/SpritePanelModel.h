//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SpritePanelModel : NSObject
{
    _Bool _isC2C;
    NSMutableArray *_muArrCollectionNeedShow;
    NSArray *_allArrayCollection;
    NSArray *_arrAllActivity;
    NSArray *_todayFreeActivityArray;
    unsigned int _actionTimeStamp;
    NSMutableArray *_packgeList;
    NSMutableArray *_actionsList;
}

- (id)actionSetListInPagePointer:(struct SpritePanelPagePointer)arg1;
@property(nonatomic) unsigned int actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(retain, nonatomic) NSMutableArray *actionsList; // @synthesize actionsList=_actionsList;
- (void)checkNeedUpdateActionJSON;
- (void)constructActivityActionData:(id)arg1;
- (id)convertFavDicToActionSetList:(id)arg1;
- (void)dealloc;
- (void)filterGameDataForPanelView:(id)arg1;
- (void)filterUncludeActionSet;
- (void)filterUncludeCollectionActionSet;
- (void)filterUselessDataForPanelView:(id)arg1;
- (void)filterWorldActionsFrom:(id)arg1;
- (int)indexAtCurrentPageByActionIndex:(int)arg1;
- (id)indexByPkgID:(id)arg1 actionID:(id)arg2;
- (id)initWithConfigData:(id)arg1 isC2C:(_Bool)arg2;
- (id)itemModelsInPagePointer:(struct SpritePanelPagePointer)arg1;
- (struct SpritePanelPagePointer)leftPointerOf:(struct SpritePanelPagePointer)arg1;
- (void)p_clearActionData;
- (void)p_clearData;
- (void)p_clearGameData;
- (void)p_filterActions:(id)arg1;
- (id)packageModelWithPackageId:(int)arg1;
@property(retain, nonatomic) NSMutableArray *packgeList; // @synthesize packgeList=_packgeList;
- (int)packgeTypeInPagePointer:(struct SpritePanelPagePointer)arg1;
- (int)pageIndexByIndex:(int)arg1;
- (struct SpritePanelPagePointer)pointerWithPackageId:(int)arg1 pageIndex:(int)arg2;
- (void)removeActivityActionFromPkgModel:(id)arg1;
- (struct SpritePanelPagePointer)rightPointerOf:(struct SpritePanelPagePointer)arg1;
- (void)setupAndSortWithFavoriteList;
- (int)totalPages;
- (void)updateFavPackActionSetList:(id)arg1;

@end

