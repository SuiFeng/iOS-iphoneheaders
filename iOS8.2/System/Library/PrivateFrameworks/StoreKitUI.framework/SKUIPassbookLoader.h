/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/PKAddPassesViewControllerDelegate.h>

@protocol SKUIPassbookLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSString;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIPassbookLoaderDelegate> _delegate;
	int _loadCount;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) id<SKUIPassbookLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIPassbookLoaderDelegate>)arg1 ;
-(id<SKUIPassbookLoaderDelegate>)delegate;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithClientContext:(id)arg1 ;
-(void)loadPassWithURL:(id)arg1 ;
-(void)_loadPassWithURL:(id)arg1 ;
-(void)_sendDidFinishIfFinished;
-(void)_didLoadWithPass:(id)arg1 error:(id)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
@end

