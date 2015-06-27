/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDPhotoFilter : PBCodable <NSCopying> {

	SCD_Struct_GE82* _photoSizeFilters;
	unsigned _photoSizeFiltersCount;
	unsigned _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned photoSizeFiltersCount; 
@property (nonatomic,readonly) SCD_Struct_GE82* photoSizeFilters; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearPhotoSizeFilters;
-(unsigned)photoSizeFiltersCount;
-(SCD_Struct_GE82)photoSizeFilterAtIndex:(unsigned)arg1 ;
-(void)addPhotoSizeFilter:(SCD_Struct_GE82)arg1 ;
-(SCD_Struct_GE82*)photoSizeFilters;
-(void)setPhotoSizeFilters:(SCD_Struct_GE82*)arg1 count:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
