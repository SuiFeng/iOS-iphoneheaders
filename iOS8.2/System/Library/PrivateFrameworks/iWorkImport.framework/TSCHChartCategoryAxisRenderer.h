/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisRenderer.h>

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer
-(char)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(char)canEditTextForSelectionPath:(id)arg1 ;
-(CGRect)frameForEditingTextForSelectionPath:(id)arg1 ;
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(id)categoryAxisLayoutItem;
-(void)p_drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned)arg5 rangePtr:(NSRange*)arg6 ;
-(unsigned)p_categoryIndexForSelectionPath:(id)arg1 ;
-(unsigned)p_seriesIndexForSelectionPath:(id)arg1 ;
-(char)p_doesSelectionPathReferToAxisLabel:(id)arg1 ;
-(char)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1 ;
@end

