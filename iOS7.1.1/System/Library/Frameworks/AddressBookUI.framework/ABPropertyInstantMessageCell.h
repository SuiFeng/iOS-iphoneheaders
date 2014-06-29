/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertySimpleCell.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>

@class CNInstantMessageAddress;

@interface ABPropertyInstantMessageCell : ABPropertySimpleCell <ABPickerControllerDelegate>

@property (nonatomic,readonly) CNInstantMessageAddress * profile; 
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)labelButtonClicked:(id)arg1 ;
-(id)profile;
@end
