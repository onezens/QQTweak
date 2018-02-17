//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseJob.h"

@class NSString;

@interface QZCommentPhotoUploadJob : QZBaseJob
{
}

+ (id)operationWithJob:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jobTypeName;
- (_Bool)persistent;

// Remaining properties
@property(nonatomic) long long compressionBatchID; // @dynamic compressionBatchID;
@property(copy, nonatomic) NSString *fakePath; // @dynamic fakePath;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) long long imageHeight; // @dynamic imageHeight;
@property(nonatomic) long long imageQuality; // @dynamic imageQuality;
@property(nonatomic) long long imageRotation; // @dynamic imageRotation;
@property(nonatomic) long long imageWidth; // @dynamic imageWidth;
@property(nonatomic) long long index; // @dynamic index;
@property(copy, nonatomic) NSString *lloc; // @dynamic lloc;
@property(nonatomic) long long totalPhotoCount; // @dynamic totalPhotoCount;
@property(nonatomic) long long uploadBatchID; // @dynamic uploadBatchID;
@property(nonatomic) long long uploadEntrance; // @dynamic uploadEntrance;
@property(nonatomic) long long uploadTimestamp; // @dynamic uploadTimestamp;

@end
