/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TULogging : NSObject
+(void)initialize;
+(char)shouldLogType:(id)arg1 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(char)arg4 format:(id)arg5 ;
+(char)isWalkaboutEnabled;
+(void)enablePhoneLogging;
+(void)checkpointLoggingSession:(id)arg1 ;
+(void)pulseLoggingSession;
+(void)disablePhoneLogging;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(char)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
+(void)beginLoggingSessionAsInitiator:(char)arg1 ;
+(void)endLoggingSession;
@end
