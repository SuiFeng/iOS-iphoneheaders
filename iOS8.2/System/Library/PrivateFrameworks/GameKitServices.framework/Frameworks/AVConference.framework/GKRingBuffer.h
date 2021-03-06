/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned long endTime;
	unsigned long capacity;
	unsigned long bytesPerFrame;

}
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned long)arg1 bytesPerFrame:(unsigned long)arg2 ;
-(void)increaseCapacity:(unsigned long)arg1 ;
-(char)store:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
-(long)needsNewNumSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2 ;
-(long)fetch:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
@end

