//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ArkAppRSASign : NSObject
{
    struct __SecKey *pubkeyRef;
}

- (void)dealloc;
- (id)init;
- (_Bool)isKeyLoaded;
- (_Bool)loadPublicKey:(id)arg1;
- (_Bool)verify:(id)arg1 withSign:(id)arg2;

@end

