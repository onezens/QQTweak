//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface TBFeedVideoAttribModel : QQModel
{
    _Bool _isPicture;
    _Bool _isLocal;
    unsigned int _videoHeight;
    unsigned int _videoWidth;
    unsigned int _videoSize;
    int _latitude;
    int _longitude;
    int _timezoneOffset;
    NSString *_doodleText;
    unsigned long long _captureTime;
    NSString *_location;
    NSString *_videoLocation;
    NSString *_videoGpsFilter;
    NSArray *_mentionList;
}

+ (id)createFeedVideoAttribModel:(id)arg1;
@property(nonatomic) unsigned long long captureTime; // @synthesize captureTime=_captureTime;
- (void)dealloc;
@property(retain, nonatomic) NSString *doodleText; // @synthesize doodleText=_doodleText;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) _Bool isPicture; // @synthesize isPicture=_isPicture;
- (_Bool)isVallidTimeZoneOffset;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSArray *mentionList; // @synthesize mentionList=_mentionList;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(retain, nonatomic) NSString *videoGpsFilter; // @synthesize videoGpsFilter=_videoGpsFilter;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(retain, nonatomic) NSString *videoLocation; // @synthesize videoLocation=_videoLocation;
@property(nonatomic) unsigned int videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;

@end
