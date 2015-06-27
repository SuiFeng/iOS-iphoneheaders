/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DGLContext.h>

@class EAGLContext;

@interface TSCH3DGLESContext : TSCH3DGLContext {

	EAGLContext* mContext;

}
+(BOOL)isCurrentContextValid;
+(void)clearCurrentContext;
-(void)restoreEAGLContext:(id)arg1 ;
-(id)bindReturningPreviousContext;
-(int)virtualScreen;
-(void)setVirtualScreen:(int)arg1 ;
-(id)extensionsForCurrentVirtualScreen;
-(id)capabilitiesForExtensions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)present;
-(BOOL)isBound;
@end
