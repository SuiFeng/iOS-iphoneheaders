/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/__WorldClockMapViewAccessibility_super.h>

@interface WorldClockMapViewAccessibility : __WorldClockMapViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityAnnounceSolarRegionChange:(CGPoint)arg1 ;
-(void)_accessibilityRemoveSolarTerminatorPath;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
@end
