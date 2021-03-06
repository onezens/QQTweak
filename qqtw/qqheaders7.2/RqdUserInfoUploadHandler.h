//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RqdUserInfoUploadHandler : NSObject
{
    long long lastUploadTime;
}

+ (id)sharedInstance;
- (_Bool)checkNeedUpload;
- (_Bool)cleanUserInfoData:(id)arg1;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)getStartUploadData;
- (_Bool)haveUserInfoData;
@property(nonatomic) long long lastUploadTime; // @synthesize lastUploadTime;
- (void)restartUpload;
- (void)startUserInfoUpload;

@end

