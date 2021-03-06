/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKSyncRequestHandler.h>
#import <StoreBookkeeper/SBKSyncTransactionProcessing.h>

@class SBKSyncTransaction, NSString;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing> {

	char _loadsRemoteItemCount;
	unsigned _responseItemCount;
	unsigned _itemCount;
	SBKSyncTransaction* _transaction;

}

@property (assign) char loadsRemoteItemCount;                       //@synthesize loadsRemoteItemCount=_loadsRemoteItemCount - In the implementation block
@property (readonly) unsigned responseItemCount;                    //@synthesize responseItemCount=_responseItemCount - In the implementation block
@property (copy) NSString * responseDomainVersion; 
@property (assign) unsigned itemCount;                              //@synthesize itemCount=_itemCount - In the implementation block
@property (retain) SBKSyncTransaction * transaction;                //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)conflictDetectionType;
-(void)setTransaction:(SBKSyncTransaction *)arg1 ;
-(SBKSyncTransaction *)transaction;
-(unsigned)itemCount;
-(void)setItemCount:(unsigned)arg1 ;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)loadsRemoteItemCount;
-(void)setLoadsRemoteItemCount:(char)arg1 ;
-(unsigned)responseItemCount;
@end

