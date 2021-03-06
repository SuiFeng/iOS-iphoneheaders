/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/CLLocationManagerDelegate.h>

@protocol FMFFencesMgrDelegate;
@class NSString, NSMutableDictionary, CLLocationManager;

@interface FMFFencesMgr : NSObject <CLLocationManagerDelegate> {

	NSString* _triggerURL;
	NSString* _fenceVersion;
	<FMFFencesMgrDelegate>* _delegate;
	NSMutableDictionary* _monitoredFences;
	CLLocationManager* _locMgr;
	double _triggerValidityDuration;
	double _monitorFenceDelay;

}

@property (nonatomic,retain) NSString * triggerURL;                                 //@synthesize triggerURL=_triggerURL - In the implementation block
@property (nonatomic,retain) NSString * fenceVersion;                               //@synthesize fenceVersion=_fenceVersion - In the implementation block
@property (assign,nonatomic) double triggerValidityDuration;                        //@synthesize triggerValidityDuration=_triggerValidityDuration - In the implementation block
@property (assign,nonatomic) double monitorFenceDelay;                              //@synthesize monitorFenceDelay=_monitorFenceDelay - In the implementation block
@property (assign,nonatomic,__weak) <FMFFencesMgrDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * monitoredFences;                 //@synthesize monitoredFences=_monitoredFences - In the implementation block
@property (nonatomic,retain) CLLocationManager * locMgr;                            //@synthesize locMgr=_locMgr - In the implementation block
+(id)sharedInstance;
-(id)initSingleton;
-(void)_fmfAppUninstalled;
-(void)setFencesToMonitor:(id)arg1 withFenceVersion:(id)arg2 triggerValidityDuration:(double)arg3 monitorFenceDelay:(double)arg4 andTriggerURL:(id)arg5 ;
-(id)fenceVersion;
-(id)triggerURL;
-(double)triggerValidityDuration;
-(void)setTriggerURL:(id)arg1 ;
-(void)_readMonitoredFencesCache;
-(id)monitoredFences;
-(id)locMgr;
-(void)_deinitializeLocationManager;
-(void)_synchronizeFencesWithCL;
-(void)removeMonitoredFences;
-(void)_updateMonitoredFencesCache;
-(void)setFenceVersion:(id)arg1 ;
-(void)setTriggerValidityDuration:(double)arg1 ;
-(void)setMonitorFenceDelay:(double)arg1 ;
-(void)setMonitoredFences:(id)arg1 ;
-(void)setLocMgr:(id)arg1 ;
-(double)monitorFenceDelay;
-(void)didEnterRegion:(id)arg1 atLocation:(id)arg2 ;
-(void)didExitRegion:(id)arg1 atLocation:(id)arg2 ;
-(BOOL)isFenceBeingMonitored:(id)arg1 ;
-(void)dumpMonitoredFences;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
@end

