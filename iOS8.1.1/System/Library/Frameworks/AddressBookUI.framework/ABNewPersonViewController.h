/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol ABNewPersonViewControllerDelegate, ABPresenterDelegate;
@class ABPersonTableViewDataSource, _UIAccessDeniedView, CNContact, ABContactViewController, ABPersonViewControllerHelper, ABContactsFilter;

@interface ABNewPersonViewController : UIViewController {

	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	id _parentGroup;
	id _helper;
	void* _recordForNewPerson;
	BOOL _isRealViewLoaded;
	ABPersonTableViewDataSource* _dataSource;
	_UIAccessDeniedView* _accessDeniedView;
	void* _parentSource;
	CNContact* _mergeContact;
	ABContactViewController* _contactViewController;
	id<ABPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate; 
@property (assign,nonatomic) void* addressBook; 
@property (assign,nonatomic) void* displayedPerson; 
@property (assign,nonatomic) void* parentGroup; 
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                  //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) BOOL savesNewContactOnSuspend; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider; 
@property (nonatomic,retain) ABContactsFilter * parentContactsFilter;                                  //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) ABContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) id<ABPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                 //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) BOOL isRealViewLoaded;                                                    //@synthesize isRealViewLoaded=_isRealViewLoaded - In the implementation block
-(BOOL)ckCanDismissWhenSuspending;
-(BOOL)supportedInterfaceOrientation:(long long)arg1 ;
-(int)abViewControllerType;
-(ABContactViewController *)contactViewController;
-(void)setNewPersonViewDelegate:(id<ABNewPersonViewControllerDelegate>)arg1 ;
-(void)setMergeContact:(CNContact *)arg1 ;
-(id<ABPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<ABPresenterDelegate>)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void*)displayedPerson;
-(void)setParentGroup:(void*)arg1 ;
-(void)setParentSource:(void*)arg1 ;
-(void)setSavesNewContactOnSuspend:(BOOL)arg1 ;
-(void)accessChanged;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(void*)parentGroup;
-(BOOL)isRealViewLoaded;
-(void)setIsRealViewLoaded:(BOOL)arg1 ;
-(void*)parentSource;
-(CNContact *)mergeContact;
-(id<ABNewPersonViewControllerDelegate>)newPersonViewDelegate;
-(BOOL)savesNewContactOnSuspend;
-(ABPersonViewControllerHelper *)helper;
-(ABContactsFilter *)parentContactsFilter;
-(void)setParentContactsFilter:(ABContactsFilter *)arg1 ;
-(void)savePerson:(id)arg1 ;
-(void)saveAndTellDelegate:(BOOL)arg1 ;
-(void*)recordForNewPerson;
-(id)displayedUIPerson;
-(void)attemptSaveAndTellDelegate:(BOOL)arg1 ;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedPerson:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(ABPersonTableViewDataSource *)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)save:(id)arg1 ;
-(void)updateNavigationButtons;
-(void)cancel:(id)arg1 ;
-(void*)addressBook;
@end
