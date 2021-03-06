//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView;

@interface QZGiftEggView : UIView
{
    UIImageView *_gifFlashView;
    id _closeTarget;
    id _detailTarget;
    SEL _closeSEL;
    SEL _detailSEL;
    NSArray *_images;
    NSString *_schema;
    double _duration;
    long long _priority;
    NSString *_giftID;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forStyle:(unsigned long long)arg3;
- (void)compassReport:(long long)arg1;
- (void)createView;
- (void)dismiss;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *giftID; // @synthesize giftID=_giftID;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)initWithImages:(id)arg1;
- (void)onBgTap:(id)arg1;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)removeView;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
- (void)start;

@end

