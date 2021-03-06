/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface MCRestrictionManager : NSObject {

	NSMutableDictionary* _memberQueueRestrictions;
	NSMutableDictionary* _memberQueueClientRestrictions;
	NSMutableDictionary* _memberQueueUserSettings;
	NSMutableDictionary* _memberQueueEffectiveUserSettings;
	NSObject<OS_dispatch_queue>* _memberQueue;
	NSMutableDictionary* _memberQueueProfileRestrictions;

}

@property (nonatomic,readonly) NSDictionary * currentRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultSettings; 
@property (nonatomic,readonly) NSDictionary * userSettings; 
@property (nonatomic,readonly) NSDictionary * effectiveUserSettings; 
@property (nonatomic,readonly) NSDictionary * profileRestrictions; 
@property (nonatomic,readonly) NSDictionary * combinedProfileRestrictions; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;                                   //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueRestrictions;                               //@synthesize memberQueueRestrictions=_memberQueueRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueProfileRestrictions;                        //@synthesize memberQueueProfileRestrictions=_memberQueueProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueClientRestrictions;                         //@synthesize memberQueueClientRestrictions=_memberQueueClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserSettings;                               //@synthesize memberQueueUserSettings=_memberQueueUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueEffectiveUserSettings;                      //@synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedProfileRestrictions; 
+(id)defaultSettings;
+(id)defaultValueForSetting:(id)arg1 ;
+(int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)defaultBoolValueForSetting:(id)arg1 ;
+(id)defaultIntersectedValuesForSetting:(id)arg1 ;
+(id)defaultUnionValuesForSetting:(id)arg1 ;
+(id)defaultParametersForBoolSetting:(id)arg1 ;
+(id)defaultParametersForValueSetting:(id)arg1 ;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg1 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg1 ;
+(id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(bool)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1 ;
+(id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 ;
+(bool)isInSingleAppModeWithSettingsDictionary:(id)arg1 ;
+(bool)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(bool)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)defaultRestrictionFilePath;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(bool*)arg3 outError:(id*)arg4 ;
+(id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(bool*)arg5 outError:(id*)arg6 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg1 ;
+(id)filterUserSettingsForPublicUse:(id)arg1 ;
+(bool)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(bool)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(bool)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(bool)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2 ;
+(bool)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(bool)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(bool)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(bool)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)sharedManager;
-(int)appWhitelistState;
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(id)defaultSettings;
-(id)memberQueue;
-(void)setMemberQueue:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)invalidateRestrictions;
-(void)invalidateSettings;
-(id)defaultRestrictions;
-(int)restrictedBoolForFeature:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)currentRestrictions;
-(id)clientRestrictions;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)userSettings;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForIntersectedSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(bool)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(bool)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveIntersectedValuesForSetting:(id)arg1 ;
-(id)effectiveUnionValuesForSetting:(id)arg1 ;
-(id)effectiveUserSettings;
-(id)profileRestrictions;
-(id)combinedProfileRestrictions;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 ;
-(id)intersectedValuesForFeature:(id)arg1 ;
-(void)setMemberQueueRestrictions:(id)arg1 ;
-(void)setMemberQueueProfileRestrictions:(id)arg1 ;
-(void)setMemberQueueClientRestrictions:(id)arg1 ;
-(void)setMemberQueueUserSettings:(id)arg1 ;
-(void)setMemberQueueEffectiveUserSettings:(id)arg1 ;
-(id)memberQueueRestrictions;
-(id)memberQueueProfileRestrictions;
-(id)memberQueueCombinedProfileRestrictions;
-(id)memberQueueClientRestrictions;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg1 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg1 ;
-(id)memberQueueUserSettings;
-(id)memberQueueEffectiveUserSettings;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(bool*)arg2 outError:(id*)arg3 ;
-(id)unionValuesForFeature:(id)arg1 ;
-(id)memberQueueClientTypeForClientUUID:(id)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(void)memberQueueCommitUserSettingsToDisk;
-(id)effectiveValueForSetting:(id)arg1 ;
@end

