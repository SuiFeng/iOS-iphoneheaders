/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MSASServerSideModel, NSObject, MSTimerGate;

@interface MSASGroupedQueue : NSObject {

	bool _isShuttingDown;
	bool _isAssertingBusyAssertion;
	int _maxGroupedCallbackEventBatchCount;
	MSASServerSideModel* _model;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSObject<OS_dispatch_queue>* _memberQueue;
	double _maxGroupedCallbackEventIdleInterval;
	double _maxGroupedCallbackEventStaleness;
	MSTimerGate* _idleTimerGate;
	MSTimerGate* _stalenessTimerGate;

}

@property (assign,nonatomic,__weak) MSASServerSideModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) int maxGroupedCallbackEventBatchCount;                   //@synthesize maxGroupedCallbackEventBatchCount=_maxGroupedCallbackEventBatchCount - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventIdleInterval;              //@synthesize maxGroupedCallbackEventIdleInterval=_maxGroupedCallbackEventIdleInterval - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventStaleness;                 //@synthesize maxGroupedCallbackEventStaleness=_maxGroupedCallbackEventStaleness - In the implementation block
@property (nonatomic,readonly) bool isAssertingBusyAssertion;                         //@synthesize isAssertingBusyAssertion=_isAssertingBusyAssertion - In the implementation block
@property (assign,nonatomic) bool isShuttingDown;                                     //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,retain) MSTimerGate * idleTimerGate;                             //@synthesize idleTimerGate=_idleTimerGate - In the implementation block
@property (nonatomic,retain) MSTimerGate * stalenessTimerGate;                        //@synthesize stalenessTimerGate=_stalenessTimerGate - In the implementation block
-(void)dealloc;
-(id)init;
-(id)model;
-(void).cxx_destruct;
-(id)workQueue;
-(int)maxGroupedCallbackEventBatchCount;
-(void)setMaxGroupedCallbackEventBatchCount:(int)arg1 ;
-(double)maxGroupedCallbackEventIdleInterval;
-(void)setMaxGroupedCallbackEventIdleInterval:(double)arg1 ;
-(double)maxGroupedCallbackEventStaleness;
-(void)setMaxGroupedCallbackEventStaleness:(double)arg1 ;
-(void)setWorkQueue:(id)arg1 ;
-(id)memberQueue;
-(void)setModel:(id)arg1 ;
-(void)setMemberQueue:(id)arg1 ;
-(void)shutDownFlush:(bool)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(bool)hasEnqueuedItems;
-(void)flushQueueCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setIsShuttingDown:(bool)arg1 ;
-(bool)isShuttingDown;
-(void)workQueueFlushQueue;
-(void)workQueueDidEnqueueFirstItem;
-(void)workQueueDidEnqueueSubsequentItem;
-(void)assertBusyAssertion;
-(void)deassertBusyAssertion;
-(void)workQueueAssertBusyAssertion;
-(void)workQueueDeassertBusyAssertion;
-(bool)memberQueueIsAssertingBusyAssertion;
-(void)memberQueueSetIsAssertingBusyAssertion:(bool)arg1 ;
-(void)workQueueClearIdleTimer;
-(void)workQueueClearStalenessTimer;
-(id)idleTimerGate;
-(void)setIdleTimerGate:(id)arg1 ;
-(id)stalenessTimerGate;
-(void)setStalenessTimerGate:(id)arg1 ;
-(void)workQueueRestartStalenessTimer;
-(void)workQueueRestartIdleTimer;
-(bool)isAssertingBusyAssertion;
@end

