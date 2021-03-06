/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DRenderProcessor : NSObject
+(id)processor;
-(BOOL)canRenderPrefilteredLines;
-(void)geometry:(id)arg1 ;
-(void)updateRenderState;
-(void)pushRenderState;
-(void)popRenderState;
-(RenderState)renderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)normals:(id)arg1 ;
-(void)texcoords:(id)arg1 ;
-(long long)texture:(id)arg1 ;
-(id)effects;
-(void)popState;
-(void)pushState;
@end

