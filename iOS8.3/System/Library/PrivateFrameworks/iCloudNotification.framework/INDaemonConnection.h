/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:30:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(void)dealloc;
-(id)init;
-(char)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned)arg2 error:(id*)arg3 ;
-(char)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(char)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
@end
