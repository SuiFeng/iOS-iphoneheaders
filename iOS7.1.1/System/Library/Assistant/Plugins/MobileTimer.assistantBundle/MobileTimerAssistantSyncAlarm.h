/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/MobileTimer.assistantBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class NSString, NSMutableArray;

@interface MobileTimerAssistantSyncAlarm : NSObject <AFSyncHandler> {

	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)calculateFinalAnchorForLabelsOfAlarms:(id)arg1 ;
-(void)dealloc;
@end

