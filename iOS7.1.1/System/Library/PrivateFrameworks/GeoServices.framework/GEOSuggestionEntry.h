/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	SCD_Struct_GE157* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,retain) NSMutableArray * displayLines;                         //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) SCD_Struct_GE157* textHighlights; 
@property (nonatomic,readonly) bool hasIconID; 
@property (nonatomic,retain) NSString * iconID;                                     //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,readonly) bool hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng;                                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,readonly) bool hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) bool hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString;                   //@synthesize searchQueryDisplayString=_searchQueryDisplayString - In the implementation block
@property (nonatomic,readonly) bool hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle;                               //@synthesize calloutTitle=_calloutTitle - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuggestionEntryMetadata:(id)arg1 ;
-(bool)hasSuggestionEntryMetadata;
-(id)suggestionEntryMetadata;
-(void)setDisplayLines:(id)arg1 ;
-(void)clearTextHighlights;
-(void)setIconID:(id)arg1 ;
-(void)setLatlng:(id)arg1 ;
-(void)setSearchQueryDisplayString:(id)arg1 ;
-(void)setCalloutTitle:(id)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)textHighlightsCount;
-(SCD_Struct_GE157)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(void)addTextHighlights:(SCD_Struct_GE157)arg1 ;
-(SCD_Struct_GE157*)textHighlights;
-(void)setTextHighlights:(SCD_Struct_GE157*)arg1 count:(unsigned long long)arg2 ;
-(bool)hasIconID;
-(bool)hasLatlng;
-(bool)hasSearchQueryDisplayString;
-(bool)hasCalloutTitle;
-(id)displayLines;
-(id)iconID;
-(id)latlng;
-(id)searchQueryDisplayString;
-(id)calloutTitle;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
