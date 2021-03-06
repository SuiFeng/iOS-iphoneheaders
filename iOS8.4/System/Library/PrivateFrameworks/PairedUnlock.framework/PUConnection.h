/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PairedUnlock/PUUnlockClient.h>

@protocol PUConnectionDelegate;
@class NSXPCConnection, NSString;

@interface PUConnection : NSObject <PUUnlockClient> {

	/*^block*/id _getRemoteDevicePasscodeStateHandler;
	/*^block*/id _remoteDeviceRemoveLockoutHandler;
	id<PUConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) id<PUConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<PUConnectionDelegate>)arg1 ;
-(id)init;
-(id<PUConnectionDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)requestRemoteDeviceUnlockNotification;
-(void)requestRemoteDeviceRemoveLockout:(/*^block*/id)arg1 ;
-(void)getRemoteDeviceState:(/*^block*/id)arg1 ;
-(void)pairForUnlockWithPasscode:(id)arg1 ;
-(void)unpairForUnlock;
-(void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 ;
-(void)disableOnlyRemoteUnlock;
-(void)requestRemoteDevicePasscodeAction:(long long)arg1 type:(long long)arg2 ;
-(void)didPairForUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2 ;
-(void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(id)arg2 ;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2 ;
-(void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(id)arg4 ;
@end

