/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mStorage;
	int mDirection;
	unsigned mCachedNumberOfGroups;
	char mCachedNumberOfGroupsValid;

}
-(void)saveToArchive:(ChartMediatorFormulaStorage*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ChartMediatorFormulaStorage*)arg1 unarchiver:(id)arg2 ;
-(unsigned)numberOfSeries;
-(char)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(CFUUIDRef)arg2 ;
-(int)seriesLabelFormulaType;
-(char)formulasOfType:(int)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(CFUUIDRef)arg3 ;
-(int)categoryLabelFormulaType;
-(id)formulaListForType:(int)arg1 ;
-(id)initWithDirection:(int)arg1 ;
-(id)initWithChartFormulaStorage:(id)arg1 ;
-(unsigned)numberOfDataFormulas;
-(id)formulaOrNilForID:(SCD_Struct_TS282)arg1 ;
-(id)formulaTypeEnumerator;
-(id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(char)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(char)isEqualToFormulaStorage:(id)arg1 ;
-(void)clearCachesForCalculationEngine:(id)arg1 ;
-(unsigned)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(CFUUIDRef)arg2 ;
-(unsigned)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(CFUUIDRef)arg2 ;
-(id)formulaForID:(SCD_Struct_TS282)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CFDictionaryRef)p_cfDictionary;
@end

