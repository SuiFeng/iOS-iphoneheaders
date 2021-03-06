/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ADSyncManagerDelegate;
@class ADAccount, ADServiceManager, NSObject, NSString, NSMutableArray, SASyncAnchor, ADService, NSUUID, NSArray;

@interface ADSyncManager : NSObject {

	ADAccount* _account;
	ADServiceManager* _serviceManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _anchorsRequestId;
	NSMutableArray* _anchorsToSync;
	NSMutableArray* _syncedAnchors;
	SASyncAnchor* _currentAnchor;
	ADService* _currentSyncService;
	NSUUID* _currentSyncID;
	id<ADSyncManagerDelegate> _delegate;
	/*^block*/id _continueBlock;
	char _currentSyncShouldCancel;
	char _syncNeededOverride;
	char _isAggressivelySyncing;
	NSArray* _queuedAnchors;
	char _forceResetOnNextSync;

}

@property (nonatomic,copy) NSString * anchorsRequestId;                                                //@synthesize anchorsRequestId=_anchorsRequestId - In the implementation block
@property (nonatomic,copy) NSArray * queuedAnchors;                                                    //@synthesize queuedAnchors=_queuedAnchors - In the implementation block
@property (assign,setter=_setForceResetOnNextSync:,nonatomic) char _forceResetOnNextSync;              //@synthesize forceResetOnNextSync=_forceResetOnNextSync - In the implementation block
@property (setter=_setCurrentAnchor:,nonatomic,retain) SASyncAnchor * _currentAnchor;                  //@synthesize currentAnchor=_currentAnchor - In the implementation block
@property (setter=_setContinueBlock:,nonatomic,copy) id _continueBlock;                                //@synthesize continueBlock=_continueBlock - In the implementation block
-(id)initWithAccount:(id)arg1 serviceManager:(id)arg2 serialQueue:(id)arg3 ;
-(void)setAnchorsRequestId:(NSString *)arg1 ;
-(char)isAggressivelySyncing;
-(void)continueSync;
-(NSString *)anchorsRequestId;
-(id)anchorKeysNeedingSync;
-(void)setQueuedAnchors:(NSArray *)arg1 ;
-(void)prepareSyncWithAnchors:(id)arg1 delegate:(id)arg2 ;
-(void)cancelSyncForAnchor:(id)arg1 ;
-(void)setSyncNeeded;
-(void)beginAggressiveSyncWithAnchors:(id)arg1 delegate:(id)arg2 ;
-(NSArray *)queuedAnchors;
-(void)_setForceResetOnNextSync:(char)arg1 ;
-(id)aggressiveSyncKeys;
-(void)_postSyncFinishedNotification;
-(void)_setCurrentAnchor:(id)arg1 ;
-(void)_setContinueBlock:(/*^block*/id)arg1 ;
-(void)_currentAnchorFinishedWithSuccess:(char)arg1 ;
-(void)_setCurrentAnchorToNext;
-(void)_syncFinishedForService:(id)arg1 ;
-(void)_syncingService:(id)arg1 receivedChunk:(id)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)_finishSync;
-(SASyncAnchor *)_currentAnchor;
-(void)_continueSync;
-(id)_preferredSyncKeyOrder;
-(char)_needsSync;
-(id)_sortedAnchorsFromAnchors:(id)arg1 ;
-(void)_setAnchorsToSync:(id)arg1 ;
-(id)_whitelistedAggressiveSyncKeys;
-(void)_invokeContinueBlockWithKeepGoingArgument:(char)arg1 ;
-(char)_forceResetOnNextSync;
-(id)_continueBlock;
-(void)reset;
-(char)isSyncing;
@end

