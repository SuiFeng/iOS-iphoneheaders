/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <CoreLocation/CLLocation.h>

@class VKAttributedRouteMatch, VKMapMatch, CLLocation, NSString;

@interface MNLocation : CLLocation {

	int _state;
	VKAttributedRouteMatch* _routeMatch;
	VKMapMatch* _roadMatch;
	CLLocation* _rawLocation;
	NSString* _routeMatchRoadName;
	long long _shieldType;
	NSString* _shieldText;
	BOOL _locationUnreliable;

}

@property (nonatomic,readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * roadName; 
@property (nonatomic,readonly) BOOL hadRouteToCompare; 
@property (nonatomic,retain) VKAttributedRouteMatch * routeMatch;              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) VKMapMatch * roadMatch;                         //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) CLLocation * rawLocation;                       //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) double routeAccuracy; 
@property (nonatomic,readonly) long long shieldType;                           //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                          //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                          //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) BOOL isProjected; 
+(id)locationWithRawLocation:(id)arg1 ;
+(id)locationWithRawLocation:(id)arg1 coordinate:(SCD_Struct_Si10)arg2 course:(double)arg3 ;
+(id)locationWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(BOOL)arg6 ;
+(id)locationWithRawLocation:(id)arg1 roadMatch:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(BOOL)isProjected;
-(id)shieldText;
-(BOOL)locationUnreliable;
-(id)initWithRawLocation:(id)arg1 coordinate:(SCD_Struct_Si10)arg2 course:(double)arg3 ;
-(id)initWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(BOOL)arg6 ;
-(id)initWithRawLocation:(id)arg1 roadMatch:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(double)routeAccuracy;
-(BOOL)hadRouteToCompare;
-(id)roadMatch;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(BOOL)hasValidCourse;
-(void)dealloc;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(long long)shieldType;
-(BOOL)isStale;
-(id)routeMatch;
-(id)roadName;
-(void)setRouteMatch:(id)arg1 ;
-(id)rawLocation;
@end

