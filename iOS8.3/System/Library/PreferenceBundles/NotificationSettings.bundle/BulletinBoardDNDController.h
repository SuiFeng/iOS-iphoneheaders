/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:08:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIPopoverController, NSIndexPath;

@interface BulletinBoardDNDController : PSListController {

	UIPopoverController* _setDateRangePopoverController;
	NSIndexPath* _setDateRangeIndexPath;
	char _dateRangePopoverShouldBePresent;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end

