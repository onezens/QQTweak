//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ARMapNewGuideOperation, UIButton, UIImageView, UILabel;

@interface ARMapNewGuideView : UIView
{
    UIButton *_button2;
    UIView *_backgroundView;
    UILabel *_tipsLabel;
    UIImageView *_imageView;
    ARMapNewGuideOperation *_operation;
}

- (void).cxx_destruct;
- (void)actionBtnTapped1:(id)arg1;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)initWithOperation:(id)arg1;
- (void)logoutNotification;
- (void)registerNotification;
- (struct CGSize)sizeWithFont:(id)arg1 withString:(id)arg2;

@end
