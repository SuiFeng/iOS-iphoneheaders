/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <CoreAudioKit/ServiceNameEditedDelegate.h>

@class AMSBTLEAdvertisementManager, NSString, UISwitch, UIActivityIndicatorView, NSTimer;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, ServiceNameEditedDelegate> {

	AMSBTLEAdvertisementManager* advertisingManager;
	NSString* statusString;
	UISwitch* advertiseSwitch;
	char advertising;
	char isErrorMessage;
	UIActivityIndicatorView* indicator;
	NSString* theServiceName;
	int advertiseTimeout;
	NSTimer* advertiseTimer;
	NSTimer* messageTimer;
	char didCleanup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)advertisedServiceName;
-(void)advertiseTimerFired:(id)arg1 ;
-(void)updateAdvertiseUI;
-(void)activateController:(id)arg1 ;
-(void)deactivateController:(id)arg1 ;
-(char)advertiseServiceWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)stopAdvertisingServiceWithCompletionBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setStatusString:(id)arg1 animateIndicator:(char)arg2 isError:(char)arg3 ;
-(void)advertiseServiceSwitchToggled:(id)arg1 ;
-(void)messageTimerFired:(id)arg1 ;
-(char)disconnectLocalPeripheral;
-(char)changeServiceNameTo:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)serviceNameEdited:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(void)stopTimers;
-(id)statusString;
@end

