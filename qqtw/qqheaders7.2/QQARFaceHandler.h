//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface QQARFaceHandler : NSObject
{
    struct YtFaceFeatureExtractSdk *_featureRunner;
    struct FaceDetectionParam _detectParam;
    struct map<unsigned int, TC_FaceAlignmentRunner *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, TC_FaceAlignmentRunner *>>> _alignRunnerMap;
    _Bool _hasInitEnv;
    _Bool _hasTriedInit;
    _Bool _extractingFeature;
    _Bool _detectingFace;
    _Bool _firstRecog;
    int _originTrackingCount;
    int _trackFailedCount;
    NSOperationQueue *_handleQueue;
    NSArray *_originFaces;
    double _lastDetectTime;
    NSMutableArray *_faceInfoList;
    NSString *_mainFaceUin;
}

+ (id)getInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkStarFace:(id)arg1 feature:(vector_be8cf01e)arg2;
@property(nonatomic) _Bool detectingFace; // @synthesize detectingFace=_detectingFace;
- (void)doRecognizeAndTrackWithMat:(const struct Mat *)arg1;
- (void)extractFeatureAndRecognizeStar:(struct Mat)arg1;
@property(nonatomic) _Bool extractingFeature; // @synthesize extractingFeature=_extractingFeature;
@property(retain, nonatomic) NSMutableArray *faceInfoList; // @synthesize faceInfoList=_faceInfoList;
- (_Bool)facePoints:(struct _TC_FaceShape *)arg1 inRGBImage:(const struct Mat *)arg2 inRect:(struct CGRect)arg3 runner:(struct TC_FaceAlignmentRunner *)arg4;
- (_Bool)facePointsTrack:(const struct _TC_FaceShape *)arg1 newShape:(struct _TC_FaceShape *)arg2 inRGBImage:(const struct Mat *)arg3 runner:(struct TC_FaceAlignmentRunner *)arg4;
- (id)faceRectsWithrgbImg:(const struct Mat *)arg1;
@property(nonatomic) _Bool firstRecog; // @synthesize firstRecog=_firstRecog;
- (vector_10c95ae6)get5PointsFromFaceShape:(const struct _TC_FaceShape *)arg1;
- (struct TC_FaceAlignmentRunner *)getAlignRunnerForId:(unsigned long long)arg1;
- (id)getFaceListCopy;
- (id)getSafeFaceInfoList;
- (id)getTrackingFaceListCopy;
- (id)getTrackingFaceModelInRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSOperationQueue *handleQueue; // @synthesize handleQueue=_handleQueue;
@property(nonatomic) _Bool hasInitEnv; // @synthesize hasInitEnv=_hasInitEnv;
@property(nonatomic) _Bool hasTriedInit; // @synthesize hasTriedInit=_hasTriedInit;
- (_Bool)initData;
- (_Bool)isNeedDetectFace;
@property(nonatomic) double lastDetectTime; // @synthesize lastDetectTime=_lastDetectTime;
- (vector_be8cf01e)localRecognizeFace:(const struct Mat *)arg1 faceShape:(struct _TC_FaceShape)arg2;
@property(retain, nonatomic) NSString *mainFaceUin; // @synthesize mainFaceUin=_mainFaceUin;
@property(retain, nonatomic) NSArray *originFaces; // @synthesize originFaces=_originFaces;
@property(nonatomic) int originTrackingCount; // @synthesize originTrackingCount=_originTrackingCount;
- (void)releaseData;
- (void)releaseRunnersMap:(_Bool)arg1;
- (void)resetData;
- (void)setSafeFaceInfoList:(id)arg1;
@property(nonatomic) int trackFailedCount; // @synthesize trackFailedCount=_trackFailedCount;

@end

