/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIResourceLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSMutableDictionary, NSMapTable;

@interface SKUIResourceLoader : NSObject {

	SKUIClientContext* _clientContext;
	id<SKUIResourceLoaderDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _operationsByRequestID;
	NSMapTable* _requestsByCacheKey;
	NSMutableDictionary* _resourcesByRequestID;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIResourceLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,nonatomic,readonly) char idle; 
-(void)setDelegate:(id<SKUIResourceLoaderDelegate>)arg1 ;
-(id)init;
-(id<SKUIResourceLoaderDelegate>)delegate;
-(NSOperationQueue *)operationQueue;
-(id)cachedResourceForRequestIdentifier:(unsigned)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(char)isIdle;
-(char)loadResourceWithRequest:(id)arg1 reason:(int)arg2 ;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2 ;
-(void)_sendDidIdleIfNecessary;
-(void)addResource:(id)arg1 forRequestIdentifier:(unsigned)arg2 ;
-(void)cancelAllRequests;
-(void)cancelRequestWithIdentifier:(unsigned)arg1 ;
-(void)removeAllCachedResources;
-(id)requestIdentifierForCacheKey:(id)arg1 ;
-(void)setReason:(int)arg1 forRequestWithIdentifier:(unsigned)arg2 ;
@end
