/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SALocation, NSNumber, NSString;

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapViewItem;
+(id)mapViewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(NSNumber *)zoomLevel;
@end
