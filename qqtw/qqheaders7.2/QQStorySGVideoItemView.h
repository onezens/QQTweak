//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQShareGroupStoryInfo, QQStoryUrlImageView;

@interface QQStorySGVideoItemView : UIView
{
    QQShareGroupStoryInfo *_model;
    NSString *_feedID;
    unsigned long long _index;
    NSString *_groupID;
    NSString *_storyID;
    id <QQStorySGVideoItemViewDelegate> _delegate;
    QQStoryUrlImageView *_coverImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQStoryUrlImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)dealloc;
@property(nonatomic) __weak id <QQStorySGVideoItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void)handleTap:(id)arg1;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) QQShareGroupStoryInfo *model; // @synthesize model=_model;
- (void)openVideoPlayVCWithUin:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void)useDefaultCover;

@end
