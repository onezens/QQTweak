//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQTinyVideoProgressView;

@interface QQAIOTinyVideoCellProgressView : UIView
{
    _Bool _isSelf;
    double _progress;
    QQTinyVideoProgressView *_progressView;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isSelf:(_Bool)arg2;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void)layoutAsReceiver;
- (void)layoutAsSender;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) QQTinyVideoProgressView *progressView; // @synthesize progressView=_progressView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupUI;

@end

