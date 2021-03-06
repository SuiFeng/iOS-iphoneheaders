/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderPipeline.h>
#import <iWorkImport/TSCH3DSceneObjectDelegator.h>

@class TSCH3DRayPickPipelineDelegate, NSArray, TSCH3DPickedPoint;

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {

	tvec2<float> mPickPosition;
	TSCH3DRayPickPipelineDelegate* mSceneObjectDelegate;

}

@property (nonatomic,readonly) NSArray * pickedPoints; 
@property (nonatomic,readonly) TSCH3DPickedPoint * pickedPoint; 
@property (assign,nonatomic) float slack; 
+(id)pipelineWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(TSCH3DPickedPoint *)pickedPoint;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(id)initWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(void)rayPick:(id)arg1 ;
-(id)p_renderProcessor;
-(NSArray *)pickedPoints;
-(id)p_unsortedPickedPoints;
-(float)slack;
-(void)setSlack:(float)arg1 ;
-(id)p_closestPickedPoint;
-(id)p_frontMostPickedPoint;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(void)dealloc;
-(char)run;
@end

