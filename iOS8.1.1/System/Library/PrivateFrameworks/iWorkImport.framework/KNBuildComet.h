/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNChunkableBuildAnimator.h>

@class NSMutableArray, NSString;

@interface KNBuildComet : KNAnimationEffect <KNChunkableBuildAnimator> {

	NSMutableArray* mLayerToOldParentArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationDidEndWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(id)p_layerWithImage:(CGImageRef)arg1 scale:(double)arg2 centeredAt:(CGPoint)arg3 ;
-(void)addLayerWithImageRef:(CGImageRef)arg1 toResultDictionary:(id)arg2 withLayer:(id)arg3 withParent:(id)arg4 duration:(double)arg5 isBuildIn:(BOOL)arg6 isVertical:(BOOL)arg7 opacity:(double)arg8 direction:(unsigned long long)arg9 ;
-(void)dealloc;
@end
