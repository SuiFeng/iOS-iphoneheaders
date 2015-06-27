/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <SpringBoard/SBBulletinDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSDate, NSTimer, NSString;

@interface SBDefaultDateLabel : UILabel <SBBulletinDateLabel> {

	NSDate* _timeZoneRelativeStartDate;
	NSDate* _timeZoneRelativeEndDate;
	char _allDay;
	char _isTimestamp;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	char _effectiveAllDay;
	char _isCoalescingUpdates;
	char _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) char allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) char isTimestamp;                              //@synthesize isTimestamp=_isTimestamp - In the implementation block
+(id)_currentCalendar;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(char)isTimestamp;
-(void)setIsTimestamp:(char)arg1 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
-(char)isEffectiveAllDay;
-(void)updateTextIfNecessary;
-(void)_forceUpdate;
-(void)_resetEffectiveAllDayState:(char)arg1 ;
-(void)_configureTimer;
-(id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setTimeZoneRelativeEndDate:(id)arg1 ;
-(char)isDateWithinEffectiveAllDayRange:(id)arg1 ;
-(id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(char)arg3 sameDayDates:(char)arg4 eventOngoing:(char)arg5 withCurrentDate:(id)arg6 forStartLabel:(char)arg7 ;
-(void)updateTextIfNecessary:(char)arg1 ;
-(void)_updateEffectiveAllDayTimes;
-(void)_invalidateTimer;
-(char)isAllDay;
-(void)dealloc;
-(void)setDelegate:(id<SBDateLabelDelegate>)arg1 ;
-(id)init;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)update;
-(void)setAllDay:(char)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
@end
