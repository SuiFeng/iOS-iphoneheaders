/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartSeriesTypeColumn.h>

@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn
-(unsigned)adjustLabelPosition:(unsigned)arg1 forAxisValue:(double)arg2 intercept:(double)arg3 ;
-(id)genericToSpecificPropertyMap;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(id)elementBuilder;
-(char)supportsBarGap;
-(id)legalChartLabelPositions;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(double)beginValueForSeries:(unsigned)arg1 index:(unsigned)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(char)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned)arg2 valueAxisID:(id)arg3 ;
-(unsigned)seriesIndexForDrawing:(id)arg1 ;
-(unsigned)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)init;
@end
