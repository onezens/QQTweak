//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CFT_NSImageHelper : NSObject
{
}

+ (id)getRedGiftThemeImgWithType:(id)arg1;
+ (id)getScreenShotsImage;
+ (id)grayImage:(id)arg1;
+ (id)imageLoader:(id)arg1;
+ (id)imageLoader:(id)arg1 stretchWithLeftCapWidth:(long long)arg2 topCapHeight:(long long)arg3;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2;
+ (id)imageWithFilePath:(id)arg1;
+ (id)imageWithURLString:(id)arg1;
+ (void)imageWithURLStringBlock:(id)arg1 defaultImgName:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)isRetinaDevice;
+ (void)removeAllCache;

@end

