/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {

	NSDictionary* mSettings;

}
+(id)p_defaultSettingsDictionary;
+(id)p_platformSettingsDictionary;
+(id)sharedInstance;
-(BOOL)buildsUseLowDetailedGeometries;
-(BOOL)buildsCanUseDynamicShadows;
-(double)buildTargetFPS;
-(unsigned long long)supersamplingTileSize;
-(unsigned long long)supersamplingSamples;
-(BOOL)useHighQualityShadows;
-(unsigned long long)highQualityShadowsSize;
-(float)prefilteredLinesFilterRadius;
-(unsigned long long)resourceCacheMemoryLimitInBytes;
-(BOOL)shouldHandleResourceCacheOutOfMemory;
-(unsigned long long)labelMaxTextureSize;
-(BOOL)skipFirstMipmapLevel;
-(BOOL)useLayoutInwardForInsertionIcons;
-(unsigned long long)interactiveCanvasMultisamples;
-(BOOL)useTiledFullSizeInteractiveLayer;
-(BOOL)backgroundLayoutUsesTiledRendering;
-(unsigned long long)insertionIconSupersamplingSamples;
-(unsigned long long)buildMultisamples;
-(BOOL)buildShouldDiscardBuffers;
-(BOOL)buildImageDefaultAntialias;
-(unsigned long long)buildImageTileSize;
-(BOOL)interactiveCanvasCanUseHighQualityRenderer;
-(BOOL)interactiveModeUsesFastPerformanceHint;
-(BOOL)knobTrackingUsesRealTimePerformanceHint;
-(double)backgroundLayoutContentsScaleFactor;
-(BOOL)useInteractiveModeWhileSelected;
-(unsigned long long)buildFramebufferMemoryLimitInBytes;
-(BOOL)buildTextureRendersAsSingleImage;
-(int)p_labelPickingSlackMethod;
-(float)p_labelPickingSlack;
-(double)printingDPI;
-(unsigned long long)printingMaxImageSize;
-(float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(const tvec2<int>*)arg2 ;
-(float)rotationTrackerSpeed;
-(BOOL)protectCachedShaders;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

