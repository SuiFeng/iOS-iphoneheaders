/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSedentaryTimer_Internal : NSObject {

	NSObject*<OS_dispatch_queue> fClientQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fDaemonQueue;
	CLConnectionClient* fLocationdConnection;
	char _timerArmed;

}

@property (assign,getter=isTimerArmed,nonatomic) char timerArmed;              //@synthesize timerArmed=_timerArmed - In the implementation block
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)setTimerArmed:(char)arg1 ;
-(char)isTimerArmed;
-(void)_handleAlarmDataResponse:(CLConnectionMessage*)arg1 withHandler:(/*^block*/id)arg2 ;
-(char)_isActive;
-(void)_handleStartStopTimerResponse:(CLConnectionMessage*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end

