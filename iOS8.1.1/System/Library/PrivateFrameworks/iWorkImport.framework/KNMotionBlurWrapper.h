/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMapTable, TSDGLShader, TSDGLMotionBlurEffect, NSArray;

@interface KNMotionBlurWrapper : NSObject {

	NSMapTable* _objectDataBufferMapTable;
	double _duration;
	BOOL _isBackFaceCullingEnabled;
	TSDGLShader* _objectDefaultShader;
	TSDGLShader* _objectDefaultMotionBlurShader;
	BOOL _shouldDisableMotionBlurFromDefaults;
	BOOL _shouldFillBackground;
	BOOL _shouldDrawTextOnSeparatePass;
	BOOL _shouldDrawTexturesInReverseOrder;
	BOOL _shouldDrawMotionBlur;
	TSDGLMotionBlurEffect* _motionBlurEffect;
	NSArray* _textures;

}

@property (assign,nonatomic) BOOL shouldDrawTextOnSeparatePass;                       //@synthesize shouldDrawTextOnSeparatePass=_shouldDrawTextOnSeparatePass - In the implementation block
@property (nonatomic,readonly) TSDGLMotionBlurEffect * motionBlurEffect;              //@synthesize motionBlurEffect=_motionBlurEffect - In the implementation block
@property (nonatomic,readonly) TSDGLShader * objectShader; 
@property (nonatomic,retain) NSArray * textures;                                      //@synthesize textures=_textures - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawTexturesInReverseOrder;                   //@synthesize shouldDrawTexturesInReverseOrder=_shouldDrawTexturesInReverseOrder - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawMotionBlur;                               //@synthesize shouldDrawMotionBlur=_shouldDrawMotionBlur - In the implementation block
+(/*^block*/id)newDefaultTextureDrawOptionBlockWithAnimationDict:(id)arg1 pluginContext:(id)arg2 animationContext:(id)arg3 projectionTransform:(CATransform3D)arg4 animationCacheDict:(id)arg5 animationFrame:(CGRect)arg6 ;
-(void)setShouldDrawTexturesInReverseOrder:(BOOL)arg1 ;
-(void)setShouldDrawMotionBlur:(BOOL)arg1 ;
-(TSDGLMotionBlurEffect *)motionBlurEffect;
-(id)initWithFramebufferSize:(CGSize)arg1 slideSize:(CGSize)arg2 textures:(id)arg3 duration:(double)arg4 ;
-(BOOL)shouldDrawMotionBlur;
-(void)setShouldDrawTextOnSeparatePass:(BOOL)arg1 ;
-(void)drawMotionBlurWithPluginContext:(id)arg1 textureDrawOptionsBlock:(/*^block*/id)arg2 setupCustomShaderBlock:(/*^block*/id)arg3 ;
-(void)p_setupDataBuffers;
-(BOOL)shouldDrawTexturesInReverseOrder;
-(BOOL)shouldDrawTextOnSeparatePass;
-(id)p_textureDrawOptionsMapTableWithPercent:(double)arg1 isWarmingUp:(BOOL)arg2 textureDrawOptionsBlock:(/*^block*/id)arg3 ;
-(id)p_drawPassesWithTextures:(id)arg1 textureDrawOptionsMap:(id)arg2 ;
-(TSDGLShader *)objectShader;
-(void)p_setBackFaceCullingEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTextures:(NSArray *)arg1 ;
-(NSArray *)textures;
@end

