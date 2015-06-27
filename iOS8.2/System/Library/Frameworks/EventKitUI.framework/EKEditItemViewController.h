/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@protocol EKStyleProvider, EKEditItemViewControllerDelegate;
@class EKUIRecurrenceAlertController;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {

	CGRect _initialFrame;
	unsigned _subitem;
	char _modal;
	id<EKStyleProvider> _styleProvider;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	char _showsDoneButton;

}

@property (assign,nonatomic) unsigned subitem;                                                      //@synthesize subitem=_subitem - In the implementation block
@property (assign,nonatomic) char modal;                                                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) char showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) char presentModally; 
@property (assign,nonatomic) char editItemShouldBeAskedForInjectableViewController; 
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setModal:(char)arg1 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(void)setSubitem:(unsigned)arg1 ;
-(unsigned)subitem;
-(char)modal;
-(void)saveAndDismiss;
-(void)setCell:(id)arg1 checked:(char)arg2 ;
-(char)fitsPopoverWhenKeyboardActive;
-(void)popIfNonModal;
-(char)showsDoneButton;
-(char)validateAllowingAlert:(char)arg1 ;
-(void)_saveAndDismissWithForce:(char)arg1 ;
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(unsigned)supportedInterfaceOrientations;
-(float)marginForTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end
