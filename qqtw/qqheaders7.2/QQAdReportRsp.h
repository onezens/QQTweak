//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQAdReportRsp : NSObject
{
    unsigned int _ret_code;
    NSString *_click_id;
}

+ (id)initWithData:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *click_id; // @synthesize click_id=_click_id;
- (id)init;
- (id)initWith:(struct CPBMessageDecoder *)arg1;
@property(readonly, nonatomic) unsigned int ret_code; // @synthesize ret_code=_ret_code;
- (id)toDictionary;

@end
