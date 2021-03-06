/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavFeature.h>

@class NSString, VKLabelTile, VKLabelNavJunction, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {

	VKLabelTile* _tile;
	SCD_Struct_VK295* _data;
	unsigned _vertexIndexA;
	unsigned _vertexIndexB;
	SCD_Struct_VK446* _junctionA;
	SCD_Struct_VK446* _junctionB;
	VKLabelNavJunction* _navJunctionA;
	vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >* _simplifiedPoints;
	Matrix<float, 2, 1> _direction;
	char _isRoadLabelUnique;
	char _isOnRoute;
	char _isStartOfRoadName;
	char _isInGuidance;
	char _isGuidanceStepStart;
	char _areLabelsDisabled;
	PolylineCoordinate _routeOffset;
	float _routeCrossProduct;
	int _intraRoadPriority;
	double _length;
	NSString* _name;
	NSString* _shieldDisplayGroup;
	NSString* _shieldGroup;
	VKLabelNavRoadLabel* _roadSign;
	VKLabelNavRoadLabel* _roadShield;
	char _areNavStylesInitialized;
	char _hasVisibleSigns;
	char _hasVisibleShields;
	char _suppressRoadSignIfShieldPresent;

}

@property (nonatomic,readonly) VKLabelTile * tile;                                //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) const char* cstrName; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) NSString * shieldGroup; 
@property (nonatomic,readonly) SCD_Struct_VK446* junctionB;                       //@synthesize junctionB=_junctionB - In the implementation block
@property (nonatomic,readonly) VKLabelNavJunction * navJunctionA;                 //@synthesize navJunctionA=_navJunctionA - In the implementation block
@property (assign,nonatomic) Matrix<float direction;                              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) char isOnRoute;                                      //@synthesize isOnRoute=_isOnRoute - In the implementation block
@property (assign,nonatomic) char isStartOfRoadName;                              //@synthesize isStartOfRoadName=_isStartOfRoadName - In the implementation block
@property (assign,nonatomic) char isInGuidance;                                   //@synthesize isInGuidance=_isInGuidance - In the implementation block
@property (assign,nonatomic) char isGuidanceStepStart;                            //@synthesize isGuidanceStepStart=_isGuidanceStepStart - In the implementation block
@property (assign,nonatomic) char areLabelsDisabled;                              //@synthesize areLabelsDisabled=_areLabelsDisabled - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                      //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) float routeCrossProduct;                             //@synthesize routeCrossProduct=_routeCrossProduct - In the implementation block
@property (assign,nonatomic) int intraRoadPriority;                               //@synthesize intraRoadPriority=_intraRoadPriority - In the implementation block
@property (assign,nonatomic) char isRoadLabelUnique;                              //@synthesize isRoadLabelUnique=_isRoadLabelUnique - In the implementation block
@property (nonatomic,readonly) char isAwayFromRoute; 
@property (nonatomic,readonly) char suppressRoadSignIfShieldPresent;              //@synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent - In the implementation block
@property (nonatomic,readonly) char isRamp; 
@property (nonatomic,readonly) char isOnewayToJunction; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int roadSignAlignment; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(double)length;
-(void)setDirection:(Matrix<float)arg1 ;
-(Matrix<float)direction;
-(PolylineCoordinate)routeOffset;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(char)hasShield;
-(char)isRamp;
-(char)isAwayFromRoute;
-(void)_worldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(char)isOnRoute;
-(char)_worldPointForRoadOffset:(float)arg1 worldPoint:(VKPoint*)arg2 ;
-(id)labelWithType:(char)arg1 ;
-(float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(VKPoint)arg2 rayVector:(Matrix<float, 2, 1>)arg3 roadGraph:(id)arg4 ;
-(char)_findLabelAnchorPoint:(VKPoint*)arg1 isShieldLabel:(char)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6 ;
-(int)roadSignAlignment;
-(id)_newLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(char)arg2 worldPoint:(VKPoint)arg3 alignment:(int)arg4 ;
-(void)clearRoadSign;
-(NSString *)shieldDisplayGroup;
-(char)isStartOfRoadName;
-(char)isInGuidance;
-(int)intraRoadPriority;
-(char)isGuidanceStepStart;
-(id)initWithRoadEdge:(const SCD_Struct_VK449*)arg1 navJunctionA:(id)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(id)arg4 ;
-(const char*)cstrName;
-(void)prepareStyleVarsWithContext:(NavContext*)arg1 ;
-(int)roadClass;
-(char)isOnewayToJunction;
-(void)getRoadEdge:(SCD_Struct_VK449*)arg1 ;
-(char)matchesRoadEdge:(const SCD_Struct_VK449*)arg1 ;
-(char)matchesRoad:(id)arg1 ;
-(char)hasVisibleSigns;
-(char)hasVisibleShields;
-(NSString *)shieldGroup;
-(void)createLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(char)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 ;
-(void)recreateRoadSignWithAlignment:(int)arg1 navContext:(NavContext*)arg2 ;
-(void)appendSimplifiedWorldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(VKLabelTile *)tile;
-(void)setIsOnRoute:(char)arg1 ;
-(void)setIsStartOfRoadName:(char)arg1 ;
-(void)setIsInGuidance:(char)arg1 ;
-(void)setIsGuidanceStepStart:(char)arg1 ;
-(float)routeCrossProduct;
-(void)setRouteCrossProduct:(float)arg1 ;
-(SCD_Struct_VK446*)junctionB;
-(void)setIntraRoadPriority:(int)arg1 ;
-(char)areLabelsDisabled;
-(void)setAreLabelsDisabled:(char)arg1 ;
-(char)isRoadLabelUnique;
-(void)setIsRoadLabelUnique:(char)arg1 ;
-(VKLabelNavJunction *)navJunctionA;
-(char)suppressRoadSignIfShieldPresent;
@end

