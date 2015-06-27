/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsObject.h>
#import <Metal/MTLComputePipelineStateSPI.h>

@protocol MTLFunction;
@class NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {

	id<MTLFunction> _function;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned threadExecutionWidth; 
@property (readonly) unsigned staticLocalMemorySize; 
-(void)acceptVisitor:(id)arg1 ;
-(unsigned)maxTotalThreadsPerThreadgroup;
-(unsigned)threadExecutionWidth;
-(unsigned)staticLocalMemorySize;
-(id<MTLDevice>)device;
@end
