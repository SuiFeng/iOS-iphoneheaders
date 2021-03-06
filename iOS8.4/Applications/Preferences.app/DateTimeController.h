/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, NSTimer, PSSpecifier, PSWallClockMinuteTimer, NSString;

@interface DateTimeController : PSListController <UIPopoverControllerDelegate> {

	UIPopoverController* _setDateAndTimePopoverController;
	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	char _localeForces24HourTime;
	char _setDateAndTimePopoverShouldRePresent;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;
	PSWallClockMinuteTimer* _minuteTimer;

}

@property (retain) PSSpecifier * timeZoneSpecifier;                             //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;                           //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;                          //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSWallClockMinuteTimer * minuteTimer;              //@synthesize minuteTimer=_minuteTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(id)makeTimePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadTimezone;
-(PSWallClockMinuteTimer *)minuteTimer;
-(void)setMinuteTimer:(PSWallClockMinuteTimer *)arg1 ;
-(void)setTimeZoneSpecifier:(PSSpecifier *)arg1 ;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)_createDateTimeFormatters;
-(void)_updateCurrentTime;
-(PSSpecifier *)timeZoneSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(char)arg2 ;
-(PSSpecifier *)currentTimeSpecifier;
-(id)makeCurrentTimeSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(char)shouldDisplayTimezoneSpinner;
-(id)is24HourTime:(id)arg1 ;
-(id)currentTimeString;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)newCarrierNotification;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(id)specifiers;
@end

