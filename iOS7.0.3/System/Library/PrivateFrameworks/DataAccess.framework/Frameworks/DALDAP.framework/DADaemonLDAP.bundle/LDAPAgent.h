/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DADaemonLDAP.bundle/DADaemonLDAP
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonLDAP/DAValidityCheckConsumer.h>

@interface LDAPAgent : DAAgent <DAValidityCheckConsumer>
-(void)startMonitoring;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)_invokeCompletionBlock:(/*^block*/ id)arg1 ;
@end

