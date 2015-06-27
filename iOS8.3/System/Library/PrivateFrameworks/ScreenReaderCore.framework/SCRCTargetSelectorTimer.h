/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:26:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {

	CFRunLoopTimerRef _timer;
	id _key;
	char _isCanceled;
	char _isPending;
	id _object;
	NSLock* _lock;
	char _createdTimer;

}
+(void)initialize;
+(void)_runThread;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(char)isCancelled;
-(char)isPending;
-(char)isCanceled;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3 ;
-(char)_createdTimer;
-(void)dispatchAfterDelay:(double)arg1 ;
-(void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
-(oneway void)release;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end
