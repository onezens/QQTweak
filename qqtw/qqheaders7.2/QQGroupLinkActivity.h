//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivity.h"

@class NSString, UIImage;

@interface QQGroupLinkActivity : QQActivity
{
    UIImage *_activityImage;
    NSString *_activityTitle;
    int _type;
    id <QQGroupLinkDelegate> _delegate;
    int _xo;
}

- (void)dealloc;
- (void)prepareWithActivityItems:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *activityImage; // @dynamic activityImage;
@property(copy, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property(nonatomic) id <QQGroupLinkDelegate> delegate; // @dynamic delegate;
@property(nonatomic) int type; // @dynamic type;

@end
