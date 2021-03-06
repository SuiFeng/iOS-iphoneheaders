/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSURL, NSString;

@interface TSCHTracingManager : NSObject {

	BOOL mTraceLevelSet;
	unsigned mTraceLevel;
	BOOL mBufferSizeSet;
	unsigned mBufferSize;
	TSMTraceBuffer* mBuffer;
	NSURL* mLastTraceFileURL;
	NSString* mTag;

}

@property (assign) unsigned traceLevel; 
@property (assign) unsigned bufferSize; 
@property (readonly) NSURL * lastTraceFileURL; 
@property (copy) NSString * tag; 
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(unsigned)traceLevel;
-(void)setTraceLevel:(unsigned)arg1 ;
-(void)setBufferSize:(unsigned)arg1 ;
-(id)lastTraceFileURL;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setTag:(id)arg1 ;
-(id)tag;
-(unsigned)bufferSize;
-(void)teardown;
-(void)setup;
@end

