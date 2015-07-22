/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBAlertItem, NSString, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem {

	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	long long _displayedButtonIndex;
	BOOL _isAlarm;

}
-(id)initWithSystemAlert:(id)arg1 ;
-(BOOL)isAlarm;
-(void)dealloc;
-(id)init;
-(id)title;
-(id)message;
-(id)sortDate;
-(id)iconImage;
-(id)currentAlert;
-(void)setCurrentAlert:(id)arg1 ;
-(void)buttonPressed;
@end
