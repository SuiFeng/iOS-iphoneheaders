/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	/*^block*/id fActivityHandler;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	BOOL fSubscribedToMotionState;
	NSObject*<OS_dispatch_semaphore> fSidebandOverrideSemaphore;
	NSObject*<OS_dispatch_queue> fSidebandOverrideQueue;
	BOOL fSidebandOverrideWaiting;
	long long fSidebandOverrideResult;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startActivityUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopActivityUpdatesPrivate;
-(void)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connect;
-(void)disconnect;
@end

