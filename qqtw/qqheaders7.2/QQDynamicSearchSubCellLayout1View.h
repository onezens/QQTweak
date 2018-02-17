//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDynamicSearchSubCellBaseView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface QQDynamicSearchSubCellLayout1View : QQDynamicSearchSubCellBaseView
{
    double _contentViewHeight;
    UILabel *_titleLabel;
    UIImageView *_moreImageView;
    NSMutableArray *_summaryLabelArray;
}

- (void).cxx_destruct;
- (double)calContentViewHeight;
- (double)calContentViewWidth;
- (double)calHeightForCell;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutContentView;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
- (void)resetContentViewFrame;
@property(retain, nonatomic) NSMutableArray *summaryLabelArray; // @synthesize summaryLabelArray=_summaryLabelArray;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
