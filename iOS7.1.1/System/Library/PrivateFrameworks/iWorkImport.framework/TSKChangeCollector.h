/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSKChangeCollector : NSObject
+(id)threadCollector;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(id)peekCollectedChanges;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
@end

