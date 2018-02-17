//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BigThumbSizeManager : NSObject
{
}

+ (id)bigThumbImage:(id)arg1 withMaxSize:(struct CGSize)arg2 minSize:(struct CGSize)arg3 ratio:(double)arg4;
+ (struct CGSize)enlargePicSizeIfSmallThanBigThumbMinSide:(struct CGSize)arg1 minSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 withMaxSize:(struct CGSize)arg2 minSize:(struct CGSize)arg3 ratio:(double)arg4;
+ (struct CGSize)fitSizeNoCut:(struct CGSize)arg1 withMaxSize:(struct CGSize)arg2 minSize:(struct CGSize)arg3;
+ (double)getAIOBigThumbLongImageRatio;
+ (double)getAIOBigThumbMaxSide;
+ (struct CGSize)getAIOBigThumbMaxSize;
+ (double)getAIOBigThumbMinSide;
+ (struct CGSize)getAIOBigThumbMinSize;
+ (unsigned long long)getImageLongType:(struct CGSize)arg1 ratio:(double)arg2;
+ (_Bool)isPicInfoSize:(struct CGSize)arg1 matchWithBigPicSize:(struct CGSize)arg2;
+ (_Bool)isPicInfoSize:(struct CGSize)arg1 matchWithThumbPicSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 withScale:(double)arg2;
+ (id)scaleImage:(id)arg1 withTargetSize:(struct CGSize)arg2;
+ (struct CGSize)shrinkPicSize:(struct CGSize)arg1 ifLargeThan:(struct CGSize)arg2;
+ (id)thumbImageServer:(id)arg1 withMaxSize:(struct CGSize)arg2 minSize:(struct CGSize)arg3 ratio:(double)arg4;

@end
