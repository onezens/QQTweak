//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UIView;

@interface QQStoryMemoryVideoTypeCell : UITableViewCell
{
    UILabel *_storyCountLabel;
    UILabel *_storyNameLabel;
    UILabel *_shareVideoCountLabel;
    UILabel *_shareVideoNameLabel;
    UIButton *_storyContentView;
    UIButton *_shareVideoContentView;
    UIView *_slideMarkView;
    unsigned int _storyNum;
    unsigned int _shareVideoNum;
    long long _videoType;
    id <QQStoryMemoryVideoTypeCellDelagete> _delegate;
}

+ (double)height;
- (void)dealloc;
@property(nonatomic) id <QQStoryMemoryVideoTypeCellDelagete> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onClickShareVideoTab;
- (void)onClickStoryTab;
@property(nonatomic) unsigned int shareVideoNum; // @synthesize shareVideoNum=_shareVideoNum;
@property(nonatomic) unsigned int storyNum; // @synthesize storyNum=_storyNum;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;

@end
