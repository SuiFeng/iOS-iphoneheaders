/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface _IMPingPacketData : NSObject {

	int _sequenceNumber;
	BOOL _timedOut;
	int _error;
	timeval _timeSent;
	double _rtt;

}

@property (nonatomic,readonly) int sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL timedOut;                   //@synthesize timedOut=_timedOut - In the implementation block
@property (nonatomic,readonly) timeval timeSent;                //@synthesize timeSent=_timeSent - In the implementation block
@property (nonatomic,readonly) int error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double rtt;                      //@synthesize rtt=_rtt - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)error;
-(int)sequenceNumber;
-(id)initWithSequeneceNumber:(int)arg1 timesent:(timeval*)arg2 error:(int)arg3 ;
-(void)_markPacketAsTimedOut:(double)arg1 ;
-(void)_returnPacketArrived;
-(timeval)timeSent;
-(double)rtt;
-(BOOL)timedOut;
@end

