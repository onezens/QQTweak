//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSTimer;

@interface ARMapCountEngine : NSObject
{
    NSData *_sig;
    NSTimer *_timer;
    int _status;
    NSData *_cookie;
    double _beginTime;
    _Bool _countDownTest;
    _Bool _listTest;
    double _beginTimeTest;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(nonatomic) double beginTimeTest; // @synthesize beginTimeTest=_beginTimeTest;
@property(nonatomic) _Bool countDownTest; // @synthesize countDownTest=_countDownTest;
@property(nonatomic) _Bool listTest; // @synthesize listTest=_listTest;

@end

