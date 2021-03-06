/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableDictionary, VKRealisticPolygonMaker, VKStyle, NSMutableArray, VGLMesh, NSArray;

@interface VKRealisticRoadGroup : NSObject {

	VKTileKey _tileKey;
	int _renderZ;
	NSMutableDictionary* _meshDict;
	VKRealisticPolygonMaker* _roadPolygonMaker;
	float _roadZ;
	float _casingHeight;
	float _casingWidth;
	float _casingTopLift;
	float _sidewalkShadowWidth;
	float _casingShadowWidth;
	float _casingShadowLift;
	float _roadShadowRamp;
	float _roadShadowWidth;
	float _roadShadowTaperLength;
	VKStyle* _style;
	float _casingShadowRamp;
	VGLColor _sidewalkColor;
	NSMutableArray* _roadMeshes;
	VGLMesh* _roadShadows;
	VGLMesh* _casingFacades;
	VGLMesh* _casingTops;
	VGLMesh* _casingShadows;
	VGLMesh* _sidewalkShadows;

}

@property (assign,nonatomic) int renderZ;                                //@synthesize renderZ=_renderZ - In the implementation block
@property (nonatomic,readonly) float roadShadowRamp;                     //@synthesize roadShadowRamp=_roadShadowRamp - In the implementation block
@property (nonatomic,readonly) float roadShadowWidth;                    //@synthesize roadShadowWidth=_roadShadowWidth - In the implementation block
@property (nonatomic,readonly) float roadShadowTaperLength;              //@synthesize roadShadowTaperLength=_roadShadowTaperLength - In the implementation block
@property (nonatomic,retain) VKStyle * style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) float casingShadowRamp;                   //@synthesize casingShadowRamp=_casingShadowRamp - In the implementation block
@property (nonatomic,readonly) NSArray * roadMeshes;                     //@synthesize roadMeshes=_roadMeshes - In the implementation block
@property (nonatomic,readonly) VGLMesh * roadShadows;                    //@synthesize roadShadows=_roadShadows - In the implementation block
@property (nonatomic,readonly) VGLMesh * casingFacades;                  //@synthesize casingFacades=_casingFacades - In the implementation block
@property (nonatomic,readonly) VGLMesh * casingTops;                     //@synthesize casingTops=_casingTops - In the implementation block
@property (nonatomic,readonly) VGLMesh * casingShadows;                  //@synthesize casingShadows=_casingShadows - In the implementation block
@property (nonatomic,readonly) VGLMesh * sidewalkShadows;                //@synthesize sidewalkShadows=_sidewalkShadows - In the implementation block
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(id).cxx_construct;
-(unsigned long long)triangleCount;
-(id)_meshForStyle:(id)arg1 tileKey:(VKTileKey)arg2 scale:(double)arg3 ;
-(id)initWithTile:(id)arg1 ;
-(void)addRoadForPolygon:(const Vec2Imp<float>*)arg1 pointCount:(unsigned long long)arg2 characteristicPoints:(const SCD_Struct_VK129*)arg3 characteristicPointCount:(unsigned long long)arg4 withStyle:(id)arg5 ;
-(void)updateComponentsWithModelViewProjectionMatrix:(/*function pointer*/ void*)arg1 contentScale:(double)arg2 ;
-(int)renderZ;
-(void)setRenderZ:(int)arg1 ;
-(id)roadMeshes;
-(id)roadShadows;
-(id)casingFacades;
-(id)casingTops;
-(id)casingShadows;
-(id)sidewalkShadows;
-(float)roadShadowRamp;
-(float)roadShadowWidth;
-(float)roadShadowTaperLength;
-(float)casingShadowRamp;
@end

