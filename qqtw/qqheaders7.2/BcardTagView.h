//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface BcardTagView : UIView
{
    UIImageView *_imageViewTagLeft;
    UIImageView *_imageViewTagMiddle;
    UIImageView *_imageViewTagRight;
    UILabel *_labelTag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageViewTagLeft; // @synthesize imageViewTagLeft=_imageViewTagLeft;
@property(retain, nonatomic) UIImageView *imageViewTagMiddle; // @synthesize imageViewTagMiddle=_imageViewTagMiddle;
@property(retain, nonatomic) UIImageView *imageViewTagRight; // @synthesize imageViewTagRight=_imageViewTagRight;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *labelTag; // @synthesize labelTag=_labelTag;
- (void)setLabelText:(id)arg1;

@end

