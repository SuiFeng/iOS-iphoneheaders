/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic,retain) SAReminderDateTimeTrigger * dateTimeTrigger; 
@property (nonatomic,retain) SAReminderLocationTrigger * locationTrigger; 
+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderDateTimeTrigger *)dateTimeTrigger;
-(SAReminderLocationTrigger *)locationTrigger;
-(void)setDateTimeTrigger:(SAReminderDateTimeTrigger *)arg1 ;
-(void)setLocationTrigger:(SAReminderLocationTrigger *)arg1 ;
@end
