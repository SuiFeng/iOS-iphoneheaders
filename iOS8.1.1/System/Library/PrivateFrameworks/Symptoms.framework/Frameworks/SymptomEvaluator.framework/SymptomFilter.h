/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, Filter;

@interface SymptomFilter : NSObject {

	unsigned _targetSymptomId;
	NSMutableDictionary* _potentialFilters;
	Filter* _currentFilter;
	Filter* _finalFilter;

}

@property (assign,nonatomic) unsigned targetSymptomId;                              //@synthesize targetSymptomId=_targetSymptomId - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * potentialFilters;              //@synthesize potentialFilters=_potentialFilters - In the implementation block
@property (nonatomic,retain) Filter * currentFilter;                                //@synthesize currentFilter=_currentFilter - In the implementation block
@property (nonatomic,retain) Filter * finalFilter;                                  //@synthesize finalFilter=_finalFilter - In the implementation block
-(id)init;
-(id)description;
-(Filter *)finalFilter;
-(NSMutableDictionary *)potentialFilters;
-(Filter *)currentFilter;
-(void)setCurrentFilter:(Filter *)arg1 ;
-(void)setFinalFilter:(Filter *)arg1 ;
-(unsigned)targetSymptomId;
-(void)setTargetSymptomId:(unsigned)arg1 ;
-(int)configureItem:(id)arg1 ;
@end

