/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPBonjourService : NSObject {

	id _bonjourServiceProperties;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(CFNetServiceRef)publishedService;
-(void)releaseNetService;
-(void)releaseSocket;
-(BOOL)createSocket;
-(BOOL)createAndPublishNetService;
-(id)clientForAddress:(CFDataRef)arg1 ;
-(int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2 ;
-(int)createPTPDIPInstanceWithAddress:(CFDataRef)arg1 fileDescriptor:(int)arg2 ;
-(id)clientForPID:(unsigned long long)arg1 ;
-(id)initWithHostPort:(unsigned)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 ;
-(void)dispatchConnectionFromSocket:(int)arg1 withAddress:(CFDataRef)arg2 ;
-(int)destroyPTPDIPInstance:(id)arg1 ;
-(int)numClients;
-(void)clientTerminated:(id)arg1 ;
-(void)handleNetServiceError:(SCD_Struct_PT2*)arg1 ;
-(void)unlockDeviceForClient:(id)arg1 ;
-(void)disconnectClient:(id)arg1 ;
-(BOOL)startService;
@end

