/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartLayout, NSValue;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartLayout* mChartLayout;
	char mIsMutatedForSceneSettings;
	NSValue* mInfoGeometryOffset;
	char hasConstantDepth;

}

@property (assign,nonatomic) char hasConstantDepth; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS398)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(SCD_Struct_TS398)oldLayoutSettings;
-(char)hasConstantDepth;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)updateInfoGeometryIfNecessary;
-(void)setHasConstantDepth:(char)arg1 ;
-(void)dealloc;
-(void)upgrade;
@end

