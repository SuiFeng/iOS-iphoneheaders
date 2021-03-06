/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLIntersiloServiceProtocol.h>

@class CLSilo, CLIntersiloInterface;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {

	BOOL _valid;
	CLSilo* _silo;
	CLIntersiloInterface* _inboundInterface;
	CLIntersiloInterface* _outboundInterface;

}

@property (nonatomic,readonly) CLSilo * silo;                                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * inboundInterface;               //@synthesize inboundInterface=_inboundInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * outboundInterface;              //@synthesize outboundInterface=_outboundInterface - In the implementation block
@property (assign,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3 ;
-(CLSilo *)silo;
-(id)initInSilo:(id)arg1 ;
-(CLIntersiloInterface *)inboundInterface;
-(CLIntersiloInterface *)outboundInterface;
-(BOOL)isHydrated;
-(id)init;
-(id)debugDescription;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
@end

