/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SSAccount, HSConnection;

@interface HSCloudLibrary : NSObject {

	NSString* _name;
	NSString* _uniqueIdentifier;
	SSAccount* _account;
	HSConnection* _connection;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) SSAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) HSConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(NSString *)name;
-(NSString *)uniqueIdentifier;
-(HSConnection *)connection;
-(SSAccount *)account;
-(id)initWithConnectionConfiguration:(id)arg1 ;
@end

