/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCPasscodeManager : NSObject
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 ;
+(BOOL)isDeviceUnlocked;
+(BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg1 ;
+(BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3 ;
+(id)deviceLockedError;
+(id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 ;
+(id)generateSalt;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 ;
+(id)sharedManager;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isDeviceLocked;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2 ;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(BOOL)isPasscodeSet;
-(BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3 ;
-(void)passcodeExpiryDateCompletionBlock:(/*^block*/id)arg1 ;
-(int)currentUnlockScreenType;
-(int)newPasscodeEntryScreenType;
-(void)lockDevice;
-(id)_wrongPasscodeError;
-(id)_privatePasscodeDict;
-(id)_publicPasscodeDict;
-(BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3 ;
-(id)_passcodeCharacteristics;
-(id)localizedDescriptionOfPasscodePolicy;
-(BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1 ;
@end
