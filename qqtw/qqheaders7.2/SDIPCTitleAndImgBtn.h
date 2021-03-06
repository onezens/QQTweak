//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQVerticalAlignmentLabel, SDImageManager, UIImageView;

@interface SDIPCTitleAndImgBtn : UIView
{
    _Bool _enable;
    int _touchState;
    int _preTouchState;
    QQVerticalAlignmentLabel *_label;
    UIImageView *_imgV;
    UIView *_imgVCover;
    SDImageManager *_imageManager;
    id _delegate;
    NSString *_title;
    NSString *_imageName;
    NSString *_preTitle;
    NSString *_preImageName;
    UIImageView *_aniView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *aniView; // @synthesize aniView=_aniView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) SDImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImageView *imgV; // @synthesize imgV=_imgV;
@property(retain, nonatomic) UIView *imgVCover; // @synthesize imgVCover=_imgVCover;
@property(retain, nonatomic) QQVerticalAlignmentLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *preImageName; // @synthesize preImageName=_preImageName;
@property(retain, nonatomic) NSString *preTitle; // @synthesize preTitle=_preTitle;
@property(nonatomic) int preTouchState; // @synthesize preTouchState=_preTouchState;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int touchState; // @synthesize touchState=_touchState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

