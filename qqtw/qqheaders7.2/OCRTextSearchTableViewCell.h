//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NMAsynUrlImageView, NSString, UILabel;

@interface OCRTextSearchTableViewCell : UITableViewCell
{
    NSString *_keyWord;
    UILabel *_titleLabel;
    UILabel *_summaryLabel;
    UILabel *_sourceLabel;
    UILabel *_timeLabel;
    NMAsynUrlImageView *_pictureView;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NMAsynUrlImageView *pictureView; // @synthesize pictureView=_pictureView;
- (id)rangesOfString:(id)arg1 inString:(id)arg2;
- (id)resizeImage:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setup;
- (void)updateDataWithModel:(id)arg1;
- (void)updateLayout;

@end
