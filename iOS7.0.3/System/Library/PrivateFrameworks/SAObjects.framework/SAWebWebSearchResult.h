/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * imageResults; 
@property (nonatomic,copy) NSArray * newsResults; 
@property (nonatomic,copy) NSArray * relatedSearchResults; 
@property (nonatomic,copy) NSNumber * totalImageResults; 
@property (nonatomic,copy) NSNumber * totalNewsResults; 
@property (nonatomic,copy) NSNumber * totalVideoResults; 
@property (nonatomic,copy) NSNumber * totalWebResults; 
@property (nonatomic,copy) NSArray * videoResults; 
@property (nonatomic,copy) NSArray * webResults; 
+(id)webSearchResult;
+(id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)imageResults;
-(void)setImageResults:(id)arg1 ;
-(id)newsResults;
-(void)setNewsResults:(id)arg1 ;
-(id)relatedSearchResults;
-(void)setRelatedSearchResults:(id)arg1 ;
-(id)totalImageResults;
-(void)setTotalImageResults:(id)arg1 ;
-(id)totalNewsResults;
-(void)setTotalNewsResults:(id)arg1 ;
-(id)totalVideoResults;
-(void)setTotalVideoResults:(id)arg1 ;
-(id)totalWebResults;
-(void)setTotalWebResults:(id)arg1 ;
-(id)videoResults;
-(void)setVideoResults:(id)arg1 ;
-(id)webResults;
-(void)setWebResults:(id)arg1 ;
@end

