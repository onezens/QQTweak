//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteBaseModel.h"

@interface SpriteClothesModel : SpriteBaseModel
{
    unsigned int ts;
}

+ (id)colothesFolderPathWithId:(id)arg1;
+ (id)colothesModuleRootPath;
+ (id)colothesPlayPathWithId:(id)arg1;
- (id)getModelFolderName;
- (id)getPlayResFileUnifiedName;
- (id)initWithDic:(id)arg1;
- (void)setPlayResDataWithAnother:(id)arg1;
@property(nonatomic) unsigned int ts; // @synthesize ts;
- (void)wearLightRes;

@end

