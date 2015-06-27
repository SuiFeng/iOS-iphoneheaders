/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {

	int _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) int discoverable;                          //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(id)init;
-(NSString *)applicationBundleID;
-(int)discoverable;
-(void)setDiscoverable:(int)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end
