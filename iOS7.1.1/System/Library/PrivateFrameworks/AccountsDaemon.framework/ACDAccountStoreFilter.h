/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/ACDAccountStoreProtocol.h>

@class ACDAccountStore;

@interface ACDAccountStoreFilter : NSObject <ACDAccountStoreProtocol> {

	ACDAccountStore* _backingAccountStore;

}

@property (nonatomic,retain) ACDAccountStore * backingAccountStore;              //@synthesize backingAccountStore=_backingAccountStore - In the implementation block
+(id)_whiteList;
-(void).cxx_destruct;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setNotificationsEnabledNum:(bool)arg1 ;
-(void)accountsWithHandler:(/*^block*/ id)arg1 ;
-(void)accountTypesWithHandler:(/*^block*/ id)arg1 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)dataclassesWithHandler:(/*^block*/ id)arg1 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/ id)arg4 ;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)handleURL:(id)arg1 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)backingAccountStore;
-(void)setBackingAccountStore:(id)arg1 ;
-(bool)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2 ;
-(bool)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1 ;
-(id)_appPermissionsForAccountTypeIdentifier:(id)arg1 ;
-(bool)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(bool)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2 ;
-(bool)_isClientPermittedToAccessAccount:(id)arg1 ;
-(bool)_isClientPermittedToRemoveAccount:(id)arg1 ;
-(bool)_clientHasPermissionToAddAccount:(id)arg1 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(/*^block*/ id)arg4 ;
@end

