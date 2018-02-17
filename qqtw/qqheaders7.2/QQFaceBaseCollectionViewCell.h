//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, QQFaceCell;

@interface QQFaceBaseCollectionViewCell : UICollectionViewCell
{
    NSString *_supportVoiceString;
    QQFaceCell *_faceCell;
}

- (id)accessibilityLabel;
- (void)dealloc;
@property(retain, nonatomic) QQFaceCell *faceCell; // @synthesize faceCell=_faceCell;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
@property(copy, nonatomic) NSString *supportVoiceString; // @synthesize supportVoiceString=_supportVoiceString;

@end
