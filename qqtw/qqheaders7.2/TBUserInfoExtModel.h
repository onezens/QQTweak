//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface TBUserInfoExtModel : NSObject <NSCoding>
{
    _Bool _isHiddenMyStory;
    _Bool _isHiddenHisStory;
    _Bool _isDenyComment;
}

+ (id)creatWithQQStoryCPBMessageDecoder:(struct CPBMessageDecoder *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isDenyComment; // @synthesize isDenyComment=_isDenyComment;
@property(nonatomic) _Bool isHiddenHisStory; // @synthesize isHiddenHisStory=_isHiddenHisStory;
@property(nonatomic) _Bool isHiddenMyStory; // @synthesize isHiddenMyStory=_isHiddenMyStory;

@end
