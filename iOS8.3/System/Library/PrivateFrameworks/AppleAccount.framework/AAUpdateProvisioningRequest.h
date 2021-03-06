/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:39:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest {

	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)authToken;
-(id)urlRequest;
@end

