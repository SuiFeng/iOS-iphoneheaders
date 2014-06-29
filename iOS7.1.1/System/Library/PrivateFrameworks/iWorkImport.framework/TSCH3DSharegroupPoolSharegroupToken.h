/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSharegroupToken.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>
+(id)allocWithZone:(NSZone)arg1 ;
+(id)token;
+(id)_singletonAlloc;
-(void)releaseSharegroup:(id)arg1 ;
-(bool)isOneShot;
-(void)flushTokenSharegroup;
-(id)tokenSharegroup;
-(void)deleteTokenSharegroup;
-(bool)shouldGarbageCollect;
-(void)didRemoveAllInterests;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
@end
