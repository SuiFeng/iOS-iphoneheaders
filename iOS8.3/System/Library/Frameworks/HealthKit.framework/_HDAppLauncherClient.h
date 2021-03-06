/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HDAppLauncherClient : NSObject {

	char _launching;
	char _retry;
	NSMutableDictionary* _expirationDateByRegistrationIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * expirationDateByRegistrationIdentifier;              //@synthesize expirationDateByRegistrationIdentifier=_expirationDateByRegistrationIdentifier - In the implementation block
@property (assign,nonatomic) char launching;                                                            //@synthesize launching=_launching - In the implementation block
@property (assign,nonatomic) char retry;                                                                //@synthesize retry=_retry - In the implementation block
-(void)registerIdentifier:(id)arg1 withDate:(id)arg2 ;
-(void)unregisterIdentifier:(id)arg1 ;
-(char)hasValidRegistrationByDate:(id)arg1 ;
-(char)cleanUpExpiredRegistrationsWithDate:(id)arg1 ;
-(NSMutableDictionary *)expirationDateByRegistrationIdentifier;
-(void)setExpirationDateByRegistrationIdentifier:(NSMutableDictionary *)arg1 ;
-(char)launching;
-(void)setLaunching:(char)arg1 ;
-(void)setRetry:(char)arg1 ;
-(id)init;
-(char)retry;
@end

