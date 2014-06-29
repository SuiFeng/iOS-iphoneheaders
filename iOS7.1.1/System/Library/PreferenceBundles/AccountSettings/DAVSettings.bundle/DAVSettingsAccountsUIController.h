/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@interface DAVSettingsAccountsUIController : DASettingsAccountsUIController {

	bool _isReloadingProperties;
	bool _attemptedInitialValidation;

}
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(id)acAccountTypeString;
-(int)defaultDADataclassesToEnable;
-(id)settingsPlistName;
-(bool)showDeleteButton;
-(void)_updateDescriptionFromServer:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(bool)validateAccount;
-(bool)haveEnoughValues;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
-(void)didConfirmTryWithoutSSL:(bool)arg1 ;
-(bool)dismissesAfterInitialSetup;
@end
