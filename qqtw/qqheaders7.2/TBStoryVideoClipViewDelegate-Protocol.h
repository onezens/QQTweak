//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBStoryVideoClipView, UIButton;

@protocol TBStoryVideoClipViewDelegate <NSObject>

@optional
- (void)TBStoryVideoClipView:(TBStoryVideoClipView *)arg1 backBtnClicked:(UIButton *)arg2;
- (void)TBStoryVideoClipView:(TBStoryVideoClipView *)arg1 nextBtnClickedWithVideoPath:(NSString *)arg2 startTime:(double)arg3 endTime:(double)arg4;
@end

