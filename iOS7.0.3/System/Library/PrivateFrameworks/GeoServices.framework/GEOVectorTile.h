/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData, NSData, NSMutableOrderedSet;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	SCD_Struct_GE91* _lines;
	unsigned _linesCount;
	unsigned _linesVertexCount;
	SCD_Struct_GE91* _coastlines;
	unsigned _coastlinesCount;
	SCD_Struct_GE93* _polygons;
	unsigned _polygonsCount;
	unsigned _polygonsVertexCount;
	SCD_Struct_GE92* _polygonLabelPositions;
	unsigned _polygonLabelPositionsCount;
	SCD_Struct_GE94* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned _buildingFootprintsCount;
	SCD_Struct_GE94* _hiResBuildingFootprints;
	unsigned _hiResBuildingFootprintsCount;
	SCD_Struct_GE95* _threeDBuildings;
	unsigned _threeDBuildingsCount;
	SCD_Struct_GE96* _extendedPointAttributes;
	unsigned _extendedPointAttributesCount;
	SCD_Struct_GE97* _pois;
	unsigned _poisCount;
	SCD_Struct_GE98* _overpasses;
	SCD_Struct_GE99* _junctions;
	unsigned _junctionsCount;
	BOOL _hasComputedJunctions;
	SCD_Struct_GE100* _laneConnections;
	unsigned _laneConnectionsCount;
	SCD_Struct_GE100* _pointsOnRoad;
	unsigned _pointsOnRoadCount;
	/*function pointer*/ void** _sortedPointsOnRoad;
	SCD_Struct_GE101* _laneGeometry;
	SCD_Struct_GE102* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE102* _lineVertices;
	SCD_Struct_GE102* _polygonVertices;
	SCD_Struct_GE102* _coastlineVertices;
	SCD_Struct_GE102* _footprintVertices;
	SCD_Struct_GE102* _hiResFootprintVertices;
	NSData* _labelPool;
	SCD_Struct_GE103* _labelPoolLanguages;
	unsigned _labelPoolLanguagesLength;
	NSMutableData* _localizedLabelPool;
	char* _localizedLabelsLanguage;
	SCD_Struct_GE104* _labelIndex;
	unsigned _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned _shieldIndexCount;
	SCD_Struct_GE105* _localizationTable;
	unsigned _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	SCD_Struct_GE108* _lineCharacteristicPoints;
	unsigned _lineCharacteristicPointCount;
	SCD_Struct_GE108* _polygonCharacteristicPoints;
	unsigned _polygonCharacteristicPointCount;
	SCD_Struct_GE108* _coastlineCharacteristicPoints;
	unsigned _coastlineCharacteristicPointCount;

}

@property (nonatomic,readonly) SCD_Struct_GE91* lines;                                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned linesCount;                                          //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned linesVertexCount;                                    //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE91* coastlines;                                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned coastlinesCount;                                     //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE93* polygons;                                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned polygonsCount;                                       //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned polygonsVertexCount;                                 //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE94* buildingFootprints;                          //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned buildingFootprintsCount;                             //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE94* hiResBuildingFootprints;                     //@synthesize hiResBuildingFootprints=_hiResBuildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned hiResBuildingFootprintsCount;                        //@synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE95* threeDBuildings;                             //@synthesize threeDBuildings=_threeDBuildings - In the implementation block
@property (nonatomic,readonly) unsigned threeDBuildingsCount;                                //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE97* pois;                                        //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned poisCount;                                           //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE98* overpasses;                                  //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE99* junctions;                                   //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned junctionsCount;                                      //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedJunctions;                                    //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE100* pointsOnRoad;                               //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned pointsOnRoadCount;                                   //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE100* laneConnections;                            //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned laneConnectionsCount;                                //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE108* lineCharacteristicPoints;                   //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned lineCharacteristicPointCount;                        //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE108* polygonCharacteristicPoints;                //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned polygonCharacteristicPointCount;                     //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE108* coastlineCharacteristicPoints;              //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned coastlineCharacteristicPointCount;                   //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE102* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE102* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL dataIncludesConnectivity; 
-(void)dealloc;
-(id)description;
-(id)_initWithVMP3:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(void)_attachRoadPoints;
-(void)_findJunctions;
-(void)_findOverpasses;
-(void)_trimWhitespace;
-(SCD_Struct_GE102*)curveLineVertices;
-(id)extrusionHeightsPool;
-(id)baseHeightsPool;
-(SCD_Struct_GE92*)polygonLabelPositions;
-(void)forEachPoint:(/*^block*/ id)arg1 ;
-(void)forEachPolygon:(/*^block*/ id)arg1 ;
-(void)forEachJunctionInRoad:(SCD_Struct_GE91*)arg1 visitor:(/*^block*/ id)arg2 ;
-(BOOL)dataIncludesConnectivity;
-(SCD_Struct_GE91*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(BOOL)hasComputedJunctions;
-(unsigned)pointsOnRoadCount;
-(SCD_Struct_GE100*)laneConnections;
-(unsigned)laneConnectionsCount;
-(SCD_Struct_GE108*)lineCharacteristicPoints;
-(unsigned)lineCharacteristicPointCount;
-(SCD_Struct_GE108*)polygonCharacteristicPoints;
-(unsigned)polygonCharacteristicPointCount;
-(SCD_Struct_GE108*)coastlineCharacteristicPoints;
-(unsigned)coastlineCharacteristicPointCount;
-(unsigned)_makeSpaceForLabels:(unsigned)arg1 ;
-(unsigned)_makeSpaceForShields:(unsigned)arg1 ;
-(BOOL)_readPolygons:(SCD_Struct_GE110*)arg1 ofType:(unsigned short)arg2 ;
-(BOOL)_readWrappingCoastlines:(SCD_Struct_GE112*)arg1 tile:(SCD_Struct_GE110*)arg2 ;
-(BOOL)_readSimpleCoastlines:(SCD_Struct_GE112*)arg1 tile:(SCD_Struct_GE110*)arg2 ;
-(BOOL)_addGenericPolygonWithAttributes:(int*)arg1 ;
-(BOOL)_handleGenericTile:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readInfoChapter:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readLabels:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readPois:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readLines:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readPolygons:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readCoastlines:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_read3DBuildings:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readHiResBuildings:(SCD_Struct_GE110*)arg1 ;
-(BOOL)_readExtendedPointAttributes:(SCD_Struct_GE110*)arg1 ;
-(SCD_Struct_GE91*)lines;
-(unsigned)linesCount;
-(GEOTileKey)tileKey;
-(unsigned)coastlinesCount;
-(SCD_Struct_GE91*)coastlines;
-(unsigned)polygonsCount;
-(SCD_Struct_GE93*)polygons;
-(SCD_Struct_GE94*)hiResBuildingFootprints;
-(unsigned)hiResBuildingFootprintsCount;
-(unsigned)buildingFootprintsCount;
-(unsigned)threeDBuildingsCount;
-(SCD_Struct_GE94*)buildingFootprints;
-(SCD_Struct_GE95*)threeDBuildings;
-(unsigned)poisCount;
-(SCD_Struct_GE97*)pois;
-(void)forEachJunction:(/*^block*/ id)arg1 ;
-(SCD_Struct_GE102*)lineVertices;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE99*)arg1 visitor:(/*^block*/ id)arg2 ;
-(void)forEachEdgeInRoad:(SCD_Struct_GE91*)arg1 visitTwice:(BOOL)arg2 visitor:(/*^block*/ id)arg3 ;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(SCD_Struct_GE100*)pointsOnRoad;
-(SCD_Struct_GE99*)junctions;
-(/*function pointer*/ void**)sortedPointsOnRoad;
-(SCD_Struct_GE98*)overpasses;
-(unsigned)junctionsCount;
-(unsigned)linesVertexCount;
-(unsigned)polygonsVertexCount;
-(void)forEachRoad:(/*^block*/ id)arg1 ;
@end

