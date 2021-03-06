/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:35:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMFAppSession : NSObject
+(id)sharedInstance;
-(id)_fmfAppAccountFromAOSAccount:(id)arg1 ;
-(void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(/*^block*/id)arg2 tokenHandler:(/*^block*/id)arg3 ;
-(void)stopListeningForFMFAppPush;
-(void)locationAuthorizationForShareMyLocationWithCompletion:(/*^block*/id)arg1 ;
-(id)thisDeviceId;
-(void)retrieveFMFAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)renewFMFAccountCredentialsWithCompletion:(/*^block*/id)arg1 ;
@end

