/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned long long _lockState;

}
+(id)sharedInstance;
-(unsigned long long)lockState;
-(id)_descriptionForLockState:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)hasAnyLockState;
-(void)_updateLockState;
@end

