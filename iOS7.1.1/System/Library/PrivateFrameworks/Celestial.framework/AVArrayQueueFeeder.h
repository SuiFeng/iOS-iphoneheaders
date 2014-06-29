/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {

	NSMutableArray* _items;

}
-(unsigned long long)itemCount;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)numberOfPaths;
-(void)shuffleWithCurrentIndex:(unsigned)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
@end
