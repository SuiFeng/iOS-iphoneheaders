/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/NSURLConnectionDelegate.h>

@protocol SynchronizedDefaultsDelegate;
@class NSString, NSArray, NSUserDefaults;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {

	char _isCelsius;
	NSString* _UUID;
	NSString* _serviceHost;
	char _serviceDebugging;
	NSArray* _lastUbiquitousWrittenDefaults;
	id<SynchronizedDefaultsDelegate> _syncDelegate;
	NSUserDefaults* _userGroupPrefs;
	char _userGroupPrefsLockedWhenInit;
	NSString* _twcURLString;

}

@property (assign,nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (nonatomic,copy) NSString * yahooWeatherURLString; 
@property (nonatomic,copy) NSString * twcURLString;                                      //@synthesize twcURLString=_twcURLString - In the implementation block
@property (assign,nonatomic) char userGroupPrefsLockedWhenInit;                          //@synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPreferences;
+(void)clearSharedPreferences;
+(id)serviceDebuggingPath;
-(void)dealloc;
-(id)init;
-(id)UUID;
-(void)resetLocale;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(id)readInternalDefaultValueForKey:(id)arg1 ;
-(char)isCelsius;
-(char)_ensurePrefsLoaded;
-(void)_synchronizedDefaultsDidChange:(id)arg1 ;
-(char)performMigration;
-(char)_checkAndPerformMigrationIfNeeded;
-(char)_getGroupDefaultsFromURLInApp:(id)arg1 ;
-(void)initOnPrefLoad;
-(void)synchronizeStateToDisk;
-(char)readTemperatureUnits;
-(void)setCelsius:(char)arg1 ;
-(void)synchronizeStateToDiskDoNotify:(char)arg1 ;
-(void)registerTemperatureUnits;
-(char)_defaultsCurrent;
-(id)cityFromPreferencesDictionary:(id)arg1 ;
-(char)isLocalWeatherEnabled;
-(id)preferencesDictionaryForCity:(id)arg1 ;
-(void)saveToDiskWithCities:(id)arg1 ;
-(id)_ppt_addFakeTestCities;
-(char)_defaultsAreValid;
-(id)_defaultCities;
-(int)loadActiveCity;
-(void)setActiveCity:(unsigned)arg1 ;
-(void)saveToUbiquitousStore;
-(NSString *)twcURLString;
-(char)_areDefaultCities:(id)arg1 ;
-(char)_legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2 ;
-(id)_cloudCityFromALCity:(id)arg1 name:(id)arg2 ;
-(id)_cloudCitiesFromLegacyCloudCities:(id)arg1 ;
-(id)loadSavedCities;
-(id)_translatedLegacyCloudCities;
-(id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(char)arg3 ;
-(void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(char)arg2 ;
-(void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned)arg2 ;
-(id)_cityArrayToCloudCityArray:(id)arg1 ;
-(void)_syncToCloudIfNotDefaultCities:(id)arg1 ;
-(void)_saveUbiquitousDefaults:(id)arg1 ;
-(void)setYahooWeatherURLString:(NSString *)arg1 ;
-(NSString *)yahooWeatherURLString;
-(id)localWeatherCity;
-(void)saveToDiskWithLocalWeatherCity:(id)arg1 ;
-(id)loadSavedCityAtIndex:(int)arg1 ;
-(void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned)arg2 ;
-(int)loadDefaultSelectedCity;
-(void)setDefaultSelectedCity:(unsigned)arg1 ;
-(id)serviceHost;
-(id)twcLogoURL;
-(id)_cacheDirectoryPath;
-(void)writeDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(id)readDefaultValueForKey:(id)arg1 ;
-(void)setLocalWeatherEnabled:(char)arg1 ;
-(char)serviceDebugging;
-(void)_clearCachedObjects;
-(void)setTwcURLString:(NSString *)arg1 ;
-(char)userGroupPrefsLockedWhenInit;
-(void)setUserGroupPrefsLockedWhenInit:(char)arg1 ;
@end

