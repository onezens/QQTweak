//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface PSHorizontalTableCell : UIView
{
    unsigned long long _columIndex;
    NSString *_reusableIdentifier;
}

+ (double)cellWidth;
- (void)accessibilityElementDidBecomeFocused;
@property(nonatomic) unsigned long long columIndex; // @synthesize columIndex=_columIndex;
- (id)initWithTableView:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)reloadData;
@property(copy, nonatomic) NSString *reusableIdentifier; // @synthesize reusableIdentifier=_reusableIdentifier;

@end
