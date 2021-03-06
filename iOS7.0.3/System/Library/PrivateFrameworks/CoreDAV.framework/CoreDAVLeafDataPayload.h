/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>

@protocol CoreDAVLeafDataPayload <NSObject>
@property (retain) NSURL * serverID; 
@property (readonly) NSData * dataPayload; 
@property (readonly) NSString * syncKey; 
@property (readonly) NSArray * childrenOrder; 
@optional
-(id)childrenOrder;

@required
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
-(id)dataPayload;
-(void)setServerID:(id)arg1;
-(id)serverID;
-(id)syncKey;
@end


@class NSURL, NSData, NSString, NSArray;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {

	NSURL* _serverID;
	NSString* _syncKey;
	NSData* _dataPayload;

}

@property (retain) NSURL * serverID;                       //@synthesize serverID=_serverID - In the implementation block
@property (readonly) NSData * dataPayload;                 //@synthesize dataPayload=_dataPayload - In the implementation block
@property (readonly) NSString * syncKey;                   //@synthesize syncKey=_syncKey - In the implementation block
@property (readonly) NSArray * childrenOrder; 
-(void)dealloc;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(id)dataPayload;
-(void)setServerID:(id)arg1 ;
-(id)serverID;
-(id)syncKey;
@end

