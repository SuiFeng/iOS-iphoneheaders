/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {

	_MFMailAccountProxySource* _proxySource;
	BOOL _allowsRestrictedAccounts;

}
-(id)initWithAllowsRestrictedAccounts:(BOOL)arg1 ;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)allAccountProxies;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
@end

