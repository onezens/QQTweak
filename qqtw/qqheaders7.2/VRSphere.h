//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VRSphere : NSObject
{
    float mAngleX;
    float mAngleY;
    int NUMBER_OF_SLICES;
    _Bool inited;
    float *vertices;
    float *textures;
    unsigned long long vCount;
    unsigned long long tCount;
    unsigned int programHandle;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _transformUniform;
    unsigned int _textureUinformY;
    unsigned int _textureUinformUV;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    int angle;
    int mScreenWidth;
    int mScreenHeight;
    float fovy;
    float aspectRatio;
    int _backingWidth;
    int _backingHeight;
}

- (void)checkError:(id)arg1;
- (void)checkError:(id)arg1 outPut:(_Bool)arg2;
- (void)cleanUpTextures;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)compileShaders;
- (void)dealloc;
- (void)drawWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)init:(float)arg1 pieces:(unsigned int)arg2;
- (void)initShader:(id)arg1 layer:(id)arg2;
- (void)initVertexData:(float)arg1;
- (void)resetAngleXAndY;
- (void)setRotateX:(float)arg1 andY:(float)arg2;
- (void)setScale:(float)arg1;
- (void)setWidth:(int)arg1 andHeight:(int)arg2 andOrientation:(long long)arg3;
- (void)setupBuffers:(id)arg1 layer:(id)arg2;
- (void)setupVBOS;
- (float)toRadians:(float)arg1;

@end
