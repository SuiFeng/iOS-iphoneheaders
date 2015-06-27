/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderBufferStorage.h>

@class CAEAGLLayer;

@interface TSCH3DGLESEAGLLayerBufferStorage : TSCH3DRenderBufferStorage {

	CAEAGLLayer* mLayer;
	tvec2<int> mSize;

}
+(id)storageWithLayer:(id)arg1 ;
-(void)allocateStorageWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(tvec2<int>*)arg2 internalFormat:(unsigned)arg3 ;
-(void)updateSize;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
@end
