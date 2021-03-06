/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface ASPolicyManager : NSObject {

	id _delegate;
	BOOL _updatingPolicy;

}

@property (assign) <ASPolicyManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)policyKeyChanged:(id)arg1 ;
-(BOOL)updatingPolicy;
-(void)requestPolicyUpdate;
-(id)currentPolicyKey;
-(id)initWithAccount:(id)arg1 ;
@end

