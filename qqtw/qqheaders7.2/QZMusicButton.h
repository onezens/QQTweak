//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, QzoneFeedMusic;

@interface QZMusicButton : UIButton
{
    _Bool _isPlaying;
    _Bool _playWithUrl;
    _Bool _isFromFMRecommFeed;
    QzoneFeedMusic *_feedMusic;
    NSString *_title;
    NSString *_author;
    NSString *_playUrl;
    NSString *_pageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
- (void)dealloc;
@property(retain, nonatomic) QzoneFeedMusic *feedMusic; // @synthesize feedMusic=_feedMusic;
- (id)init;
@property(nonatomic) _Bool isFromFMRecommFeed; // @synthesize isFromFMRecommFeed=_isFromFMRecommFeed;
- (void)musicButtonClick;
- (id)musicInfo;
- (void)musicPlayStateChange;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) _Bool playWithUrl; // @synthesize playWithUrl=_playWithUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateButtonImage;

@end

