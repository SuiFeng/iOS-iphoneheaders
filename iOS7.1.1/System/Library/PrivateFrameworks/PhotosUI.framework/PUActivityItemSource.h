/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIActivityItemDeferredSource.h>
#import <UIKit/UIActivityItemSource.h>

@protocol OS_dispatch_semaphore;
@class PLManagedAsset, NSData, NSString, PUActivityItemSourceOperation, PLVideoRemaker, NSObject, PUActivityItemSourceController;

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource> {

	PLManagedAsset* _asset;
	bool _isMogul;
	NSData* _data;
	NSString* _utiType;
	PUActivityItemSourceOperation* _operation;
	PLVideoRemaker* _remaker;
	bool _remakingWasCancelled;
	NSObject<OS_dispatch_semaphore>* _remakingSemaphore;
	NSString* _remakerTempPath;
	id _strongSelf;
	float _remakerProgress;
	PUActivityItemSourceController* _controller;

}

@property (nonatomic,readonly) PLManagedAsset * asset;                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUActivityItemSourceController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * utiType; 
@property (assign) float remakerProgress;                                                //@synthesize remakerProgress=_remakerProgress - In the implementation block
-(void)dealloc;
-(id)data;
-(id)controller;
-(void).cxx_destruct;
-(void)_cleanup;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)asset;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(id)utiType;
-(void)cleanupForActivityDidComplete;
-(bool)needsVideoRemakerForActivityType:(id)arg1 ;
-(void)cancelRemaking;
-(float)remakerProgress;
-(void)_cancelRemaking:(id)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)_cleanupRemaker;
-(void)_removeTempFile;
-(void)_getData:(id*)arg1 type:(id*)arg2 forActivityType:(id)arg3 ;
-(bool)_videoRemakerNeededForActivityType:(id)arg1 ;
-(void)_getAssetData:(id*)arg1 type:(id*)arg2 forActivityType:(id)arg3 ;
-(void)_setRemakerProgress:(float)arg1 ;
-(id)initWithAsset:(id)arg1 controller:(id)arg2 ;
-(void)prepareItemForActivityType:(id)arg1 ;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
@end

