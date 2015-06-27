/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TUCallServicesAccountsControllerDelegate;
@class NSObject, NSSet, IDSService, NSString;

@interface TUCallServicesAccountsController : NSObject {

	NSObject*<TUCallServicesAccountsControllerDelegate> _delegate;
	NSSet* _availableOutgoingRelayCallerIDs;
	IDSService* _faceTimeService;
	IDSService* _phoneRelayService;

}

@property (assign,nonatomic) NSObject*<TUCallServicesAccountsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * availableOutgoingRelayCallerIDs;                                     //@synthesize availableOutgoingRelayCallerIDs=_availableOutgoingRelayCallerIDs - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsRegisteredForFaceTime; 
@property (nonatomic,readonly) BOOL faceTimeIDMatchesAppleID; 
@property (nonatomic,copy,readonly) NSString * outgoingRelayCallerID; 
@property (nonatomic,retain) IDSService * faceTimeService;                                              //@synthesize faceTimeService=_faceTimeService - In the implementation block
@property (nonatomic,retain) IDSService * phoneRelayService;                                            //@synthesize phoneRelayService=_phoneRelayService - In the implementation block
-(void)setFaceTimeService:(IDSService *)arg1 ;
-(void)setPhoneRelayService:(IDSService *)arg1 ;
-(void)_addFaceTimeAvailabilityListener;
-(void)_addAccountListener;
-(void)_removeFaceTimeAvailabilityListener;
-(void)_removeAccountListener;
-(void)_faceTimeAvailabilityChangedNotification:(id)arg1 ;
-(id)_sharedAvailabilityCenter;
-(id)_sharedDaemonController;
-(BOOL)deviceIsRegisteredForFaceTime;
-(id)_faceTimeAccount;
-(id)_phoneCallRelayAccount;
-(NSSet *)availableOutgoingRelayCallerIDs;
-(IDSService *)faceTimeService;
-(id)_idsAccountForService:(id)arg1 ofType:(int)arg2 ;
-(IDSService *)phoneRelayService;
-(BOOL)faceTimeIDMatchesAppleID;
-(void)setAvailableOutgoingRelayCallerIDs:(NSSet *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(NSObject*<TUCallServicesAccountsControllerDelegate>)arg1 ;
-(id)init;
-(NSObject*<TUCallServicesAccountsControllerDelegate>)delegate;
-(void)daemonControllerDidConnect;
-(void)_accountsChanged:(id)arg1 ;
-(NSString *)outgoingRelayCallerID;
@end
