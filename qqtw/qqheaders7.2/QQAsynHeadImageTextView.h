//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAvatarView.h"

@class NSString, UILabel;

@interface QQAsynHeadImageTextView : QQAvatarView
{
    id <QQAsynHeadImageTextViewDelegate> _delegate;
    NSString *_name;
    _Bool _bNeedShowTextLabel;
    _Bool _hasUrlImage;
    _Bool _isClearMemoryCache;
    UILabel *_labelText;
}

- (void)dealloc;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Name:(id)arg2;
- (void)layoutSubviews;
- (void)loadAvatarByUrl:(id)arg1 shape:(int)arg2;
- (void)loadQQAvatar:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool bNeedShowTextLabel; // @dynamic bNeedShowTextLabel;
@property(nonatomic) id <QQAsynHeadImageTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, nonatomic) _Bool hasUrlImage; // @dynamic hasUrlImage;
@property(nonatomic) _Bool isClearMemoryCache; // @dynamic isClearMemoryCache;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

