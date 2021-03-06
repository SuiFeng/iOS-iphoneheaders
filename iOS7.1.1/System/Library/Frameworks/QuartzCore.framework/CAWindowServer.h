/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) bool mirroringEnabled; 
@property (assign) unsigned rendererFlags; 
+(id)serverIfRunning;
+(id)server;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(void)removeAllDisplays;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)setMirroringEnabled:(bool)arg1 ;
-(bool)isMirroringEnabled;
-(unsigned)rendererFlags;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_init;
-(void)setRendererFlags:(unsigned)arg1 ;
-(id)displays;
@end

