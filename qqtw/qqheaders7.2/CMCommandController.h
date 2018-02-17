//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMStack;

@interface CMCommandController : NSObject
{
    CMStack *_tempCMStack;
    _Bool _isInTempOperation;
    CMStack *_undoStack;
    CMStack *_redoStack;
    id <CMCommandOperationDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)cancleTempCmds;
- (id)continiuingCmdForKey:(id)arg1 inStack:(id)arg2;
- (void)dealWithCmd:(id)arg1 toPushToUndoStack:(id)arg2;
@property(nonatomic) __weak id <CMCommandOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)executeCmd:(id)arg1;
- (void)executeTempCmd:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) _Bool isInTempOperation; // @synthesize isInTempOperation=_isInTempOperation;
- (void)redo;
@property(retain, nonatomic) CMStack *redoStack; // @synthesize redoStack=_redoStack;
- (void)saveTempCmds;
@property(retain, nonatomic) CMStack *undoStack; // @synthesize undoStack=_undoStack;
- (void)undo;

@end
