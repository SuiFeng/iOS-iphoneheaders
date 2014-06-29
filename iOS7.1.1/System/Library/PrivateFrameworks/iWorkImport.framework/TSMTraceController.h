/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSString, NSDictionary;

@interface TSMTraceController : NSObject {

	NSMutableArray* mBuffers;
	NSString* mTraceDirectory;
	long long mLastBufferID;
	NSDictionary* mBuildInfo;
	int mModuleCache[256];
	unsigned mFilterCache[256];

}

@property (nonatomic,readonly) NSString * traceDirectory; 
+(void)addBuffer:(id)arg1 ;
+(void)closeBufferWithID:(long long)arg1 ;
+(void)flushAllBuffers;
+(id)traceDirectory;
+(long long)addBufferWithTag:(id)arg1 size:(long long)arg2 synchronized:(bool)arg3 ;
+(id)bufferByID:(long long)arg1 ;
+(void)stopTracing;
+(void)startTracing;
+(long long)addBufferWithTag:(id)arg1 size:(long long)arg2 ;
+(void)shutdown;
+(bool)setup;
-(long long)addBuffer:(id)arg1 ;
-(void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned)arg3 from:(unsigned)arg4 ;
-(void)writeTraceRecord:(TSMTraceRecord_s*)arg1 withFilter:(unsigned)arg2 ;
-(void)flushAllBuffers;
-(id)traceDirectory;
-(id)bufferByID:(long long)arg1 ;
-(void)closeBuffer:(id)arg1 ;
-(void)stopTracing;
-(void)startTracing;
-(id)p_createTraceDirectory;
-(long long)p_newBufferID;
-(void)p_writeBuildInfoToFile:(id)arg1 ;
-(id)buffers;
-(void)dealloc;
-(id)init;
@end
