/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface bundleIDEntry : NSObject {

	/*^block*/id handler;
	NSMutableArray* _netres;
	long long _seq;

}

@property (assign) long long seq;                        //@synthesize seq=_seq - In the implementation block
@property (retain) NSMutableArray * netres;              //@synthesize netres=_netres - In the implementation block
@property (copy) id handler; 
-(id)init;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(long long)seq;
-(void)setSeq:(long long)arg1 ;
-(NSMutableArray *)netres;
-(void)setNetres:(NSMutableArray *)arg1 ;
@end
