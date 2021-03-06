//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView;

@interface BCardDetailHeaderView : UIView
{
    unsigned long long _cardDetailHeadType;
    UIButton *_buttonTop;
    UIImageView *_imageViewTop;
    id <BCardDetailHeaderViewDelegate> _delegate;
    NSString *_picUrl;
    struct CGRect _rectImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *buttonTop; // @synthesize buttonTop=_buttonTop;
@property(nonatomic) unsigned long long cardDetailHeadType; // @synthesize cardDetailHeadType=_cardDetailHeadType;
@property(nonatomic) __weak id <BCardDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getImageFromURL:(id)arg1;
@property(retain, nonatomic) UIImageView *imageViewTop; // @synthesize imageViewTop=_imageViewTop;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 info:(id)arg3;
- (void)onDetailHeaderImageView:(id)arg1;
- (void)onDetailHeaderViewButton:(id)arg1;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) struct CGRect rectImage; // @synthesize rectImage=_rectImage;
- (void)setImageURL:(id)arg1;

@end

