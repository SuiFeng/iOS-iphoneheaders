/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familycircled/FAFamilyCircleOperation.h>
#import <familycircled/NSURLConnectionDelegate.h>
#import <familycircled/NSURLConnectionDataDelegate.h>

@protocol OS_dispatch_queue;
@class FAFamilyCircle, NSDate, NSError, NSObject, NSArray, NSString;

@interface FAFetchFamilyCircleOperation : FAFamilyCircleOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	FAFamilyCircle* _cachedCircle;
	NSDate* _cachedCircleDate;
	FAFamilyCircle* _serverResponseCircle;
	NSError* _serverResponseError;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BOOL _signedInAccountShouldBeApprover;
	BOOL _forceServerFetch;
	BOOL _doNotFetchFromServer;
	NSArray* _expectedDSIDs;
	/*^block*/id _familyCircleFetchCompletionHandler;

}

@property (copy) NSArray * expectedDSIDs;                             //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;              //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                             //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                         //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (copy) id familyCircleFetchCompletionHandler;               //@synthesize familyCircleFetchCompletionHandler=_familyCircleFetchCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFamilyCircleFetchCompletionHandler:(id)arg1 ;
-(void)didReceivePropertyListResponse:(id)arg1 ;
-(id)_cacheURL;
-(void)fetchCircleFromServer;
-(id)familyCircleFetchCompletionHandler;
-(void)main;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(void)setForceServerFetch:(BOOL)arg1 ;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
-(NSArray *)expectedDSIDs;
-(BOOL)signedInAccountShouldBeApprover;
-(BOOL)forceServerFetch;
-(BOOL)doNotFetchFromServer;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
@end

