//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAEAGLLayer;

@protocol QQMFaceESRenderDelegate <NSObject>

@optional
- (void)clear;
- (void)removeContext;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (_Bool)resizeFromLayer:(CAEAGLLayer *)arg1;
@end
