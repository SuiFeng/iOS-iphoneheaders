/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {

	TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
	TSCH3DVector* _containingViewportVector;

}

@property (nonatomic,readonly) tvec4<float> infoChartScale; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector;                               //@synthesize containingViewportVector=_containingViewportVector - In the implementation block
@property (nonatomic,readonly) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace; 
@property (nonatomic,readonly) CGSize layoutSize; 
@property (nonatomic,readonly) CGSize requestLayoutSize; 
@property (nonatomic,readonly) CGSize chartBodyLayoutSize; 
@property (nonatomic,readonly) CGSize requestChartBodyLayoutSize; 
@property (nonatomic,readonly) tvec2<int> modelSize; 
@property (nonatomic,readonly) SCD_Struct_TS398 layoutSettings; 
@property (nonatomic,readonly) char forcedValid; 
+(id)cacheWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
+(id)cacheWithInfoChartScale:(const tvec3<float>*)arg1 containingViewport:(const tvec2<int>*)arg2 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2<float>*)arg3 layoutSize:(CGSize)arg4 requestLayoutSize:(CGSize)arg5 chartBodyLayoutSize:(CGSize)arg6 requestChartBodyLayoutSize:(CGSize)arg7 layoutSettings:(SCD_Struct_TS398)arg8 ;
-(TSCH3DVector *)containingViewportVector;
-(tvec2<int>)containingViewport;
-(SCD_Struct_TS398)layoutSettings;
-(CGSize)chartBodyLayoutSize;
-(char)forcedValid;
-(tvec4<float>)infoChartScale;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
-(tvec2<int>)modelSize;
-(CGSize)requestLayoutSize;
-(CGSize)requestChartBodyLayoutSize;
-(id)initWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(void)printDebug;
-(id)init;
-(const TSCH3DChartSceneAreaLayoutItemCacheValues*)values;
-(CGSize)layoutSize;
@end

