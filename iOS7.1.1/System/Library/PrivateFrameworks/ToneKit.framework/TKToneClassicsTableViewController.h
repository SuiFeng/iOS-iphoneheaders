/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol TKTonePickerStyleProvider, TKToneClassicsTableViewControllerDelegate;
@class NSArray, TKToneTableController, NSIndexPath, UIImage;

@interface TKToneClassicsTableViewController : UITableViewController {

	<TKTonePickerStyleProvider>* _styleProvider;
	<TKToneClassicsTableViewControllerDelegate>* delegate;
	NSArray* toneIdentifiers;
	TKToneTableController* toneTableController;
	NSIndexPath* selectedIndexPath;
	UIImage* checkmarkImage;

}

@property (nonatomic,retain) <TKTonePickerStyleProvider> * styleProvider;                         //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) <TKToneClassicsTableViewControllerDelegate> * delegate; 
@property (nonatomic,retain) NSArray * toneIdentifiers; 
@property (nonatomic,retain) TKToneTableController * toneTableController; 
@property (nonatomic,retain) NSIndexPath * selectedIndexPath; 
@property (nonatomic,retain) UIImage * checkmarkImage; 
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 ;
-(id)selectedIndexPath;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setToneTableController:(id)arg1 ;
-(void)setCheckmarkImage:(id)arg1 ;
-(void)setToneIdentifiers:(id)arg1 ;
-(id)toneTableController;
-(id)toneIdentifiers;
-(id)checkmarkImage;
-(id)initWithDelegate:(id)arg1 toneTableController:(id)arg2 ;
@end

