/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {

	unsigned _assertion;
	double _timeout;
	NSString* _identifier;
	NSArray* _stack;

}

@property (assign,nonatomic) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(void)dealloc;
-(void)timedout;
-(void)setTimeout:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(double)timeout;
@end
