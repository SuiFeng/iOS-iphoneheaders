/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxis.h>

@interface TSCHChartCategoryAxis : TSCHChartAxis {

	int mRangeContinuousCache;

}
+(id)axisForInfo:(id)arg1 ;
-(unsigned)indexForSelectionPathLabelIndex:(unsigned)arg1 ;
-(unsigned)selectionPathLabelIndexForIndex:(unsigned)arg1 ;
-(BOOL)isCategory;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)isRangeContinuous;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(id)g_genericToSpecificPropertyMap;
-(id)p_getGenericToCategoryPropertyMapForMultiData;
-(id)p_getGenericToCategoryPropertyMapForNonMultiData;
-(id)p_getGenericToCategoryPropertyMap;
-(void)dealloc;
-(id)defaultProperties;
@end

