/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <MobileCal/InfiniteScrollViewSubview.h>

@class NSArray, NSCalendar, YearViewYearHeader, EKCalendarDate;

@interface YearMultipleMonthView : UIView <InfiniteScrollViewSubview> {

	NSArray* _monthViews;
	NSCalendar* _calendar;
	YearViewYearHeader* _header;
	BOOL _headerIsInViewHierarchy;
	BOOL _containsLastMonthOfYear;
	BOOL _eligibleToShowYearNumber;
	BOOL _needToCalculateEligibleToShowYearNumber;
	EKCalendarDate* _calendarDate;
	float _startX;
	unsigned _maximumNumberOfMonths;
	EKCalendarDate* _endCalendarDate;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                    //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) float interMonthHorizontalSpacing; 
@property (nonatomic,readonly) float startX;                                   //@synthesize startX=_startX - In the implementation block
@property (nonatomic,readonly) unsigned maximumNumberOfMonths;                 //@synthesize maximumNumberOfMonths=_maximumNumberOfMonths - In the implementation block
@property (nonatomic,retain) EKCalendarDate * endCalendarDate;                 //@synthesize endCalendarDate=_endCalendarDate - In the implementation block
+(Class)headerClass;
+(Class)monthClass;
+(float)_heightForViewWithVisibleHeader:(BOOL)arg1 ;
+(BOOL)_headerEligibleForCalendarDate:(id)arg1 ;
+(float)heightForViewWithCalendarDate:(id)arg1 ;
+(float)topInset;
-(void)pulseTodayCircle;
-(void)updateToday;
-(void)setCalendarDate:(id)arg1 ;
-(float)interMonthHorizontalSpacing;
-(float)startX;
-(void)_initializeHeaderView;
-(void)_initializeMonthViews;
-(BOOL)eligibleToShowYearNumber;
-(unsigned)maximumNumberOfMonths;
-(id)monthViewForCalendarDate:(id)arg1 ;
-(BOOL)pointIsAboveMonthNameBaseline:(CGPoint)arg1 ;
-(void)_reloadMonthViews;
-(id)initCalendarDate:(id)arg1 calendar:(id)arg2 maximumNumberOfMonths:(unsigned)arg3 ;
-(BOOL)containsLastMonthOfYear;
-(id)startOfMonthForPoint:(CGPoint)arg1 ;
-(void)hideYearNumberAnimated:(BOOL)arg1 ;
-(void)showYearNumberAnimated:(BOOL)arg1 ;
-(void)setEndCalendarDate:(id)arg1 ;
-(id)endCalendarDate;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)calendarDate;
-(void).cxx_destruct;
-(float)topInset;
-(void)_reloadHeaderView;
@end

