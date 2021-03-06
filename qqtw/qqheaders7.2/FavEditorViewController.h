//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "FavEditorToolbarDelegate.h"
#import "FavRichTextDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIWebViewDelegate.h"

@class BaseInfoModel, EnlargeView, FavEditorToolbar, FavImagePicker, FavWebViewEx, FavoritesRichText, NSString, QQTextFieldView, RichMediaModel, UIImageView;

@interface FavEditorViewController : QQViewController <UIWebViewDelegate, UITextFieldDelegate, FavRichTextDelegate, FavEditorToolbarDelegate>
{
    FavWebViewEx *_webView;
    QQTextFieldView *_titleEdit;
    UIImageView *_titleSeperator;
    EnlargeView *_titleView;
    FavEditorToolbar *_toolbarForTitle;
    FavEditorToolbar *_toolbarForEditor;
    BaseInfoModel *_itemInfoModel;
    RichMediaModel *_editingInfoModel;
    FavoritesRichText *_richHtml;
    _Bool _forAdding;
    _Bool _emotionPanelShown;
    _Bool _inputPanelVisible;
    FavImagePicker *_imagePicker;
    float _lastKeyboardHeight;
    QQViewController *_favController;
    NSString *_originTitle;
    _Bool _domChanged;
    _Bool _titleChanged;
    _Bool _changedSinceLastSave;
    unsigned long long _contentLength;
}

- (void)addImages:(id)arg1;
- (void)adjustWebViewAndContent;
- (void)adjustWebViewAndContentAsync;
- (void)backSpaceFace;
- (id)cachedPhoto:(id)arg1 defaultPath:(id)arg2;
- (void)calculateContentLength;
- (void)clickCancelBtn:(id)arg1;
- (void)clickSaveBtn:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)faceChoosed:(id)arg1;
@property(retain, nonatomic) QQViewController *favController; // @synthesize favController=_favController;
- (void)handleDomChangedFromJs:(id)arg1;
- (void)handlePasteFromJs:(id)arg1;
- (void)handleSelectionRectChangedFromJs:(id)arg1;
- (id)init;
- (void)initKeyboardToolbar;
- (void)initTitleView;
- (void)initWebView;
- (void)insertImage:(id)arg1 name:(id)arg2;
- (void)insertSysface:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
@property(retain, nonatomic) BaseInfoModel *itemInfoModel; // @synthesize itemInfoModel=_itemInfoModel;
- (void)loadData;
- (void)loadView;
- (void)onFavModifyTimeChanged:(id)arg1;
- (id)parametersFromURL:(id)arg1;
- (void)saveDraft:(_Bool)arg1;
- (void)scrollToCaret:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)toolbarButtonClick:(id)arg1;
- (void)toolbarPositionChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidBecomeFirstResponder:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidResignFirstResponder:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)willDismissFromScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

