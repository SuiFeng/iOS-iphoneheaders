/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKRenderingExporter <TSKExporter>
@optional
-(void)setMaxPixels:(double)arg1;

@required
-(CGRect*)unscaledClipRect;
-(CGRect*)boundsRect;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned long long)arg1;
-(double)progressForCurrentPage;
-(BOOL)setInfosToCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)imager;
-(void)setPaginate:(BOOL)arg1;
-(BOOL)paginate;
-(BOOL)hasMoreThanOnePageToPrint;
-(unsigned long long)pageCount;
-(void)setup;
-(void)teardown;

@end

