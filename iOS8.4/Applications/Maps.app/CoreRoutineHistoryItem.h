/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/HistoryItem.h>

@class SearchResult, NSString;

@interface CoreRoutineHistoryItem : NSObject <HistoryItem> {

	SearchResult* _searchResult;
	int _locationOfInterestType;

}

@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) int locationOfInterestType;               //@synthesize locationOfInterestType=_locationOfInterestType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationOfInterestType:(int)arg1 ;
-(id)initWithSearchResult:(id)arg1 andLocationOfInterestType:(int)arg2 ;
-(int)locationOfInterestType;
-(double)timestamp;
-(int)type;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(SearchResult *)searchResult;
@end

