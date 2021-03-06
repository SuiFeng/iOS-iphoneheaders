/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/NSCopying.h>

@class NSMutableArray, NSData;

@interface RAPDirectionsRecording : PBCodable <NSCopying> {

	NSMutableArray* _directionsRequests;
	NSData* _directionsResponseID;
	NSMutableArray* _directionsResponses;
	NSData* _overviewScreenshotImageData;
	unsigned _selectedDirectionsResponseIndex;
	unsigned _selectedSuggestedRouteIndexInDirectionsResponse;
	SCD_Struct_RA4 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsRequests;                                   //@synthesize directionsRequests=_directionsRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsResponses;                                  //@synthesize directionsResponses=_directionsResponses - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned selectedDirectionsResponseIndex;                              //@synthesize selectedDirectionsResponseIndex=_selectedDirectionsResponseIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSuggestedRouteIndexInDirectionsResponse; 
@property (assign,nonatomic) unsigned selectedSuggestedRouteIndexInDirectionsResponse;              //@synthesize selectedSuggestedRouteIndexInDirectionsResponse=_selectedSuggestedRouteIndexInDirectionsResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData;                                  //@synthesize overviewScreenshotImageData=_overviewScreenshotImageData - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                         //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
-(BOOL)hasSelectedSuggestedRouteIndexInDirectionsResponse;
-(void)addDirectionsRequests:(id)arg1 ;
-(void)addDirectionsResponses:(id)arg1 ;
-(id)directionsRequestsAtIndex:(unsigned long long)arg1 ;
-(id)directionsResponsesAtIndex:(unsigned long long)arg1 ;
-(unsigned)selectedDirectionsResponseIndex;
-(void)setSelectedSuggestedRouteIndexInDirectionsResponse:(unsigned)arg1 ;
-(BOOL)hasSelectedDirectionsResponseIndex;
-(void)setSelectedDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setHasSelectedSuggestedRouteIndexInDirectionsResponse:(BOOL)arg1 ;
-(unsigned)selectedSuggestedRouteIndexInDirectionsResponse;
-(void)setHasSelectedDirectionsResponseIndex:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(unsigned long long)directionsRequestsCount;
-(void)clearDirectionsRequests;
-(unsigned long long)directionsResponsesCount;
-(void)clearDirectionsResponses;
-(NSMutableArray *)directionsRequests;
-(NSMutableArray *)directionsResponses;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(BOOL)hasOverviewScreenshotImageData;
-(NSData *)overviewScreenshotImageData;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

