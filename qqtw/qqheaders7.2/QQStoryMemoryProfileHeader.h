//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQAvatarView;

@interface QQStoryMemoryProfileHeader : UIView
{
    _Bool _bigV;
    QQAvatarView *_headerImageView;
}

- (void)dealloc;
@property(retain, nonatomic) QQAvatarView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isBigV) _Bool bigV; // @synthesize bigV=_bigV;
- (void)updateHeaderWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1;

@end
