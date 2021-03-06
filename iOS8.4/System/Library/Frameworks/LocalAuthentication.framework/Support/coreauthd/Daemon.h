/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <coreauthd/coreauthd-Structs.h>
#import <coreauthd/LAContextManager.h>

@interface Daemon : NSObject <LAContextManager>
+(void)logLiveContexts;
+(id)_contextMap;
+(id)logErrorSPI;
+(id)_contextForACMContext:(id)arg1 ;
+(void)_addContext:(id)arg1 ;
+(void)connectToContext:(id)arg1 uiDelegate:(id)arg2 callback:(id)arg3 hasSPIEntitlement:(BOOL)arg4 auditToken:(SCD_Struct_Ca0)arg5 pid:(int)arg6 invalidationBlock:(/*^block*/id)arg7 reply:(/*^block*/id)arg8 ;
+(void)_cleanup;
+(id)serialQueue;
-(void)connectToContext:(id)arg1 uiDelegate:(id)arg2 callback:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

