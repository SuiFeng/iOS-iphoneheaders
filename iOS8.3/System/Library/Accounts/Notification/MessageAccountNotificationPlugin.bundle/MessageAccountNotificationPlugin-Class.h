/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:59:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageAccountNotificationPlugin/ACDAccountNotificationPlugin.h>

@class NSString;

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _updateAutoFetchSettingsRequestCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_accountHasLeafMailAccountType:(id)arg1 ;
+(char)_accountHasMailAccountParentType:(id)arg1 ;
+(id)_childMailAccountWithParentAccount:(id)arg1 ;
+(char)_accountHasLeafDeliveryAccountType:(id)arg1 ;
-(void)_deliveryAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_updateAutoFetchSettingsAsynchronously;
-(char)_addMailChildAccountToAppleAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_deleteDataWithMailAccount:(id)arg1 ;
-(void)_mailAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

