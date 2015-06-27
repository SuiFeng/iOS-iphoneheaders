/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, KNBuildCrumbleSystem, TSDGLShader, KNBuildSmokeSystem, TSDGLTextureInfo, TSDGLDataBuffer, TSDGLFrameBuffer, NSString;

@interface KNBuildCrumble : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	KNBuildCrumbleSystem* _shatterSystem;
	TSDGLShader* _shatterSystemShader;
	KNBuildSmokeSystem* _smokeSystem;
	TSDGLShader* _smokeSystemShader;
	TSDGLTextureInfo* _smokeTextureInfo;
	TSDGLShader* _fboShader;
	TSDGLDataBuffer* _fboDataBuffer;
	TSDGLDataBuffer* _blurDataBuffer;
	TSDGLFrameBuffer* _shadowFramebuffer;
	TSDGLShader* _blurShader;
	CATransform3D _projectionMatrix;
	CATransform3D _shadowFBOProjectionMatrix;
	CGRect _drawableFrame;
	CGRect _animationRect;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(char)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)p_setupMVPMatricesWithContext:(id)arg1 ;
-(void)p_setupShadersWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleSystemsWithImage:(id)arg1 animatedBuild:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(void)teardown;
@end
