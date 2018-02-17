//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

@class NSArray, QQAvatarView, QQTwinkleCircleProgressView, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface QQAIOSpriteGameCellView : QQAIOCommonCellView
{
    UIImageView *_gameImageView;
    UIImageView *_maskView;
    UIImageView *_winnerCrown;
    QQAvatarView *_winnerAvatarView;
    UIView *_playerHeadView;
    UILabel *_gameStateLabel;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingActivity;
    UIImageView *_progressMaskView;
    QQTwinkleCircleProgressView *_progressView;
    UILabel *_progressLabel;
    NSArray *_winnerHeaders;
}

- (void)adjustCellViewCenter;
- (void)calBubbleBackRect;
- (void)dealloc;
- (void)downloadImage:(id)arg1 savePath:(id)arg2;
- (int)getAioType;
- (id)getImageNameWithType:(int)arg1;
- (id)getMenuItems;
- (void)handleSpriteDownloadUpdate:(id)arg1;
- (void)handleSpriteMsgStateChanged:(id)arg1;
- (id)headViewWithUin:(long long)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (_Bool)isAllImageExist;
- (void)layoutSubviews;
- (void)p_updateViewWithFinishedStateMutipleWinner:(id)arg1;
- (void)removePreHeads;
- (void)removeSpriteProgressView;
- (void)setAioModel:(id)arg1;
- (void)setBubbleShapeMaskWith:(id)arg1;
- (void)setProgress:(double)arg1;
@property(retain, nonatomic) NSArray *winnerHeaders; // @synthesize winnerHeaders=_winnerHeaders;
- (void)showSpriteProgressViewWithProgress:(float)arg1;
- (void)updateData;
- (void)updatePlayerHeadView;
- (void)updateViewWithFinishedState:(id)arg1;
- (void)willDrawBubble;

@end
