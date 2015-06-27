/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface UpdateQueue : NSObject {

	NSMutableDictionary* _updatePrioritiesByItem;
	NSMutableDictionary* _itemInfosByPriority;
	NSTimer* _updateTimer;
	BOOL _willScheduleNextUpdate;
	BOOL _willBroadcastTopPriorities;

}
+(id)sharedQueue;
-(id)keyForItem:(id)arg1 ;
-(id)numberForUpdatePriority:(int)arg1 ;
-(void)performNextUpdate:(id)arg1 ;
-(void)scheduleNextUpdate;
-(void)broadcastTopPriorities;
-(void)item:(id)arg1 needsUpdateAfterDelay:(double)arg2 maximumCoalescingDelay:(double)arg3 ;
-(int)updatePriorityForItem:(id)arg1 ;
-(void)setUpdatePriority:(int)arg1 forItem:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeItem:(id)arg1 ;
-(id)itemForKey:(id)arg1 ;
@end
