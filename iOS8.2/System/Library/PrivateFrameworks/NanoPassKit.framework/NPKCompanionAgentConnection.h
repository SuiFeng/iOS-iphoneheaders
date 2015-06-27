/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableDictionary;

@interface NPKCompanionAgentConnection : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableSet* _cachedUniqueIDs;
	NSMutableDictionary* _cachedPasses;

}

@property (readonly) NSXPCConnection * xpcConnection; 
@property (retain) NSMutableSet * cachedUniqueIDs;                  //@synthesize cachedUniqueIDs=_cachedUniqueIDs - In the implementation block
@property (retain) NSMutableDictionary * cachedPasses;              //@synthesize cachedPasses=_cachedPasses - In the implementation block
-(void)_clearCaches;
-(void)dealloc;
-(id)init;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)paymentPassUniqueIDs:(/*^block*/id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removePaymentPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleServerPaymentPassesChanged:(id)arg1 ;
-(void)_handleDefaultCardChanged:(id)arg1 ;
-(id)_cachedUniqueIDs;
-(void)_setCachedUniqueIDs:(id)arg1 ;
-(id)_cachedPassForUniqueID:(id)arg1 ;
-(void)_addPassToCache:(id)arg1 ;
-(void)_removePassWithUniqueIDFromCache:(id)arg1 ;
-(NSMutableSet *)cachedUniqueIDs;
-(void)setCachedUniqueIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)cachedPasses;
-(void)_applyDataAccessorToPass:(id)arg1 ;
-(void)setCachedPasses:(NSMutableDictionary *)arg1 ;
-(void)savePaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultCardUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultCardUniqueID:(/*^block*/id)arg1 ;
-(void)consistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)_sharedPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg1 ;
-(id)sharedPaymentWebServiceContext;
-(NSXPCConnection *)xpcConnection;
@end
