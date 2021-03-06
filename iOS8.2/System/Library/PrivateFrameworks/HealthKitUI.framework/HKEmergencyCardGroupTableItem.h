/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class NSMutableArray, NSArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {

	NSMutableArray* _cumulativeRowOffsets;
	char _enabled;
	NSArray* _subitems;

}

@property (nonatomic,retain) NSArray * subitems;              //@synthesize subitems=_subitems - In the implementation block
@property (assign,nonatomic) char enabled;                    //@synthesize enabled=_enabled - In the implementation block
-(void)commitEditing;
-(void)setData:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(int)numberOfRows;
-(char)enabled;
-(void)setOwningViewController:(id)arg1 ;
-(void)setSubitems:(NSArray *)arg1 ;
-(char)hasPresentableData;
-(id)titleForFooter;
-(id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2 ;
-(char)shouldHighlightRowAtIndex:(int)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2 ;
-(char)canEditRowAtIndex:(int)arg1 ;
-(int)editingStyleForRowAtIndex:(int)arg1 ;
-(int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2 ;
-(void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2 ;
-(void)_getSubitem:(id*)arg1 andSubitemRow:(int*)arg2 forTableViewRow:(int)arg3 ;
-(NSArray *)subitems;
@end

