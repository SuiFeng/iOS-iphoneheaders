/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNTransitionRenderer.h>

@class NSMapTable;

@interface KNContentAwareRenderer : KNTransitionRenderer {

	NSMapTable* _layerToOldHiddenValueMap;

}
-(void)setupPluginContext;
-(char)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(char)arg2 ;
-(void)removeAnimationsAndFinish:(char)arg1 ;
-(id)initWithEffectClass:(Class)arg1 direction:(unsigned)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)teardownTransitionIsExitingShow:(char)arg1 ;
-(void)renderOutgoingSlideAndPrecacheIncomingSlide;
-(void)resetLayerTreeAfterAnimation;
-(void)dealloc;
-(void)stopAnimations;
@end
