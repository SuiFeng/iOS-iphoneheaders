/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UITextField, PSListController;

@interface SafeDomainsPane : PSListController {

	UITextField* _textField;
	PSListController* _parentListController;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(void)_setDomainsList:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_domainsListWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end

