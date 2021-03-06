//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPickerView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString;

@interface QQCampusPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSArray *_titles;
    CDUnknownBlockType _pickerBlock;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType pickerBlock; // @synthesize pickerBlock=_pickerBlock;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

