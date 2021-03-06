/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSCalendar, NSDate, NSDateComponents, NSMutableArray, NSMutableDictionary, NSIndexPath, NSString, NSMutableSet, AlarmScheduleLayoutData, NSTimer, NSDictionary;

@interface AlarmScheduleLayout : UICollectionViewLayout {

	char _needsRefreshDateInfo;
	int _firstDayOfWeek;
	NSCalendar* _calendar;
	NSDate* _now;
	NSDateComponents* _nowComps;
	NSMutableArray* _alarmIdForSection;
	NSMutableDictionary* _layoutDataMap;
	NSMutableArray* _itemZOrder[7];
	NSMutableDictionary* _overlappingItemLists[7];
	NSIndexPath* _pendingFrontIndexPath;
	NSString* _pendingUpdatedAlarmId;
	int _pendingUpdatedAlarmAction;
	char _needsRefreshLayout;
	NSMutableSet* _changedAlarmIds;
	NSMutableSet* _pendingSnoozeChangedAlarms;
	int _dragState;
	AlarmScheduleLayoutData* _draggingLayoutData;
	float _dragXStartLocation;
	float _dragYOffset;
	CGPoint _pendingDragLocation;
	/*^block*/id _dragCompletionBlock;
	NSTimer* _nextNonRepeatingAlarmTimer;
	NSMutableDictionary* _cachedAttributes;
	NSDictionary* _previousCachedAttributes;
	NSMutableDictionary* _cachedAttributesAlarmMap[7];
	NSMutableDictionary* _previousCachedAttributesAlarmMap[7];
	NSMutableArray* _previousAlarmIdForSection;
	NSMutableSet* _reloadedAlarms;
	NSMutableDictionary* _dayOfOverlappingReloadedAlarms;

}

@property (nonatomic,readonly) int firstDayOfWeek;                       //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (nonatomic,readonly) int currentDayOfWeek; 
@property (nonatomic,readonly) NSDate * now;                             //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) NSDateComponents * nowComps;              //@synthesize nowComps=_nowComps - In the implementation block
@property (nonatomic,readonly) float leftMargin; 
@property (nonatomic,readonly) float columnWidth; 
+(float)yForTimeInMinutes:(int)arg1 ;
+(int)timeInMinutesForY:(float)arg1 ;
-(void)bringAlarmToFront:(id)arg1 ;
-(char)isAlarmOverlapping:(id)arg1 ;
-(id)cycleAlarmToBack:(id)arg1 ;
-(void)beginDraggingAlarmId:(id)arg1 fromLocationInSuperview:(CGPoint)arg2 ;
-(void)dragAlarmToLocationInSuperview:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)endDraggingAlarmWithInvalidation:(char)arg1 ;
-(void)setPendingUpdatedAlarmId:(id)arg1 action:(int)arg2 ;
-(void)addPendingSnoozeChangedForAlarmId:(id)arg1 ;
-(void)setNeedsRefreshLayoutWithChangedAlarmIds:(id)arg1 ;
-(int)currentDayOfWeek;
-(void)setNeedsRefreshDateInfo;
-(NSDateComponents *)nowComps;
-(char)refreshDateInfo;
-(void)setNeedsRefreshDateInfoWithInvalidation:(char)arg1 ;
-(void)resetEverything;
-(void)handleNextNonRepeatingAlarm;
-(id)fullyOverlappingAlarmsForAlarm:(id)arg1 forDay:(int)arg2 ;
-(void)resetAllAlarmLayout;
-(void)resetAllAlarmOperations;
-(void)calculateLayoutForAllAlarms;
-(void)handleReloadOfAlarm:(id)arg1 ;
-(void)handleInsertOfAlarm:(id)arg1 ;
-(void)handleDeleteOfAlarm:(id)arg1 ;
-(int)columnIndexForX:(float)arg1 ;
-(void)handleDeleteOfAlarm:(id)arg1 forDays:(id)arg2 ;
-(void)handleInsertOfAlarm:(id)arg1 atZIndex:(int)arg2 forDays:(id)arg3 ;
-(void)scheduleTimerForNextNonRepeatingAlarm;
-(void)determineOverlappingItemListsForAlarms:(id)arg1 onDay:(int)arg2 ;
-(id)sortLayoutDataByTime:(id)arg1 forDay:(int)arg2 ;
-(void)handleNoLongerOverlappingAlarm:(id)arg1 forDay:(int)arg2 ;
-(SCD_Struct_Al5)daysVisibleInRect:(CGRect)arg1 ;
-(SCD_Struct_Al6)timesVisibleInRect:(CGRect)arg1 ;
-(NSDate *)now;
-(void)dealloc;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(float)rightMargin;
-(float)columnWidth;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(int)firstDayOfWeek;
-(float)leftMargin;
@end

