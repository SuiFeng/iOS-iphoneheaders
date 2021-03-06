/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, MPMediaQuery, NSString;

@interface SUScriptMediaQuery : SUScriptObject {

	NSArray* _collections;
	NSArray* _filterPredicates;
	NSArray* _items;
	char _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaQuery * nativeQuery; 
@property (readonly) NSArray * collections; 
@property (copy) id filterPredicates; 
@property (copy) NSString * groupingType; 
@property (readonly) NSArray * items; 
@property (readonly) NSString * comparisonTypeContains; 
@property (readonly) NSString * comparisonTypeEquals; 
@property (readonly) NSString * groupingTypeAlbum; 
@property (readonly) NSString * groupingTypeAlbumArtist; 
@property (readonly) NSString * groupingTypeArtist; 
@property (readonly) NSString * groupingTypeComposer; 
@property (readonly) NSString * groupingTypeGenre; 
@property (readonly) NSString * groupingTypePlaylist; 
@property (readonly) NSString * groupingTypePodcastTitle; 
@property (readonly) NSString * groupingTypeTitle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)_resetCaches;
-(id)canFilterByProperty:(id)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(void)setFilterPredicates:(id)arg1 ;
-(NSString *)groupingType;
-(id)filterPredicates;
-(void)setGroupingType:(NSString *)arg1 ;
-(NSArray *)collections;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(MPMediaQuery *)nativeQuery;
-(NSString *)comparisonTypeContains;
-(NSString *)comparisonTypeEquals;
-(NSString *)groupingTypeAlbum;
-(NSString *)groupingTypeAlbumArtist;
-(NSString *)groupingTypeArtist;
-(NSString *)groupingTypeComposer;
-(NSString *)groupingTypeGenre;
-(NSString *)groupingTypePlaylist;
-(NSString *)groupingTypePodcastTitle;
-(NSString *)groupingTypeTitle;
@end

