/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SKSoundBuffer : NSObject {

	unsigned _bufferId;
	NSString* _path;
	double _duration;

}

@property (nonatomic,readonly) unsigned bufferId; 
@property (nonatomic,readonly) double duration; 
+(id)bufferWithFileNamed:(id)arg1 ;
-(unsigned)bufferId;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(void).cxx_destruct;
@end
