/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface VKTimer : NSObject {

	NSObject*<OS_dispatch_source> _source;
	double _nextFireDate;

}

@property (nonatomic,readonly) double nextFireDate;              //@synthesize nextFireDate=_nextFireDate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 ;
-(double)nextFireDate;
-(void)fireAfter:(double)arg1 ;
-(void)disable;
@end

