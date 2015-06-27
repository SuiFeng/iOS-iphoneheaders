/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBAlertItemsSettings : _UISettings {

	BOOL _disableBBHandlers;
	long long _testItemToken;

}

@property (assign,nonatomic) BOOL disableBBHandlers;               //@synthesize disableBBHandlers=_disableBBHandlers - In the implementation block
@property (assign,nonatomic) long long testItemToken;              //@synthesize testItemToken=_testItemToken - In the implementation block
+(id)newTestItemForToken:(long long)arg1 ;
+(id)settingsControllerModule;
-(void)setTestItemToken:(long long)arg1 ;
-(long long)testItemToken;
-(BOOL)disableBBHandlers;
-(void)setDisableBBHandlers:(BOOL)arg1 ;
-(void)setDefaultValues;
@end
