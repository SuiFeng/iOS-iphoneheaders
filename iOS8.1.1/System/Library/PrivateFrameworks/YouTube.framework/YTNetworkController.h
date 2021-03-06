/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface YTNetworkController : NSObject {

	BOOL _registered;
	BOOL _isCellular;
	BOOL _isReachable;
	NSTimer* _notificationTimer;
	int _networkType;

}
+(id)sharedNetworkController;
-(int)networkType;
-(void)start;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_checkForNetworkWithDataStatus:(id)arg1 ;
-(BOOL)serviceIsReachable;
-(void)recheckNetwork;
-(BOOL)allowsHighQuality3GPlayback;
-(void)_carrierBundleChangeNotification:(id)arg1 ;
@end

