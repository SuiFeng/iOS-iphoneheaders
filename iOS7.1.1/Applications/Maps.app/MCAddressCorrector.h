/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/geocorrectiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, ACAccount, GEOAddressCorrectionRequester, NSString, GEOLocation, MCRoutineHelper, GEOSignificantLocation, NSArray;

@interface MCAddressCorrector : NSObject {

	double _lastRunTime;
	ACAccountStore* _store;
	ACAccount* _primaryAccount;
	int _daysToNextRun;
	GEOAddressCorrectionRequester* _initRequester;
	GEOAddressCorrectionRequester* _updateRequester;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	unsigned _numberOfVisitsBucketSize;
	MCRoutineHelper* _routineHelper;
	GEOSignificantLocation* _exactMatchLocation;
	NSArray* _nearbyLocations;

}

@property (nonatomic,retain) GEOLocation * addressLocation;                            //@synthesize addressLocation=_addressLocation - In the implementation block
@property (nonatomic,retain) NSString * addressID;                                     //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,retain) GEOSignificantLocation * exactMatchLocation;              //@synthesize exactMatchLocation=_exactMatchLocation - In the implementation block
@property (nonatomic,retain) NSArray * nearbyLocations;                                //@synthesize nearbyLocations=_nearbyLocations - In the implementation block
-(void)startProcessing;
-(id)_primaryAccount;
-(void)_startAddressCorrection;
-(void)_findExactSignificantLocationAtLocation;
-(void)_findNearbySignificantLocationAtAddressLocation;
-(void)setExactMatchLocation:(id)arg1 ;
-(void)_sendUpdateResponse;
-(void)setNearbyLocations:(id)arg1 ;
-(id)exactMatchLocation;
-(id)nearbyLocations;
-(id)init;
-(void).cxx_destruct;
-(void)setAddressID:(id)arg1 ;
-(id)addressID;
-(void)setAddressLocation:(id)arg1 ;
-(id)addressLocation;
@end

