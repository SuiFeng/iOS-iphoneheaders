/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock;

@interface SBResetManager : NSObject {

	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;

}
+(id)sharedInstance;
-(void)_beginReset:(id)arg1 ;
-(void)_resetThread;
-(void)_postResetEnded;
-(void)_resetFinished;
-(void)beginReset;
-(void)dealloc;
-(id)init;
-(void)setMode:(int)arg1 ;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
@end

