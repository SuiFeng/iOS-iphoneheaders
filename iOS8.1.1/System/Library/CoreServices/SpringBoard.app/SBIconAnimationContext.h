/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBIconAnimationContext : NSObject {

	double _delay;
	double _fraction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) double delay;                 //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double fraction;              //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(void)setFraction:(double)arg1 ;
-(id)initWithNotificationIdentifier:(id)arg1 ;
-(double)fraction;
-(void)dealloc;
-(void)invalidate;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

