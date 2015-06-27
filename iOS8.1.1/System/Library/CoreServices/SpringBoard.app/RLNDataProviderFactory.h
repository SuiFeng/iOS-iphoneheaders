/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RLNDataProviderFactory : NSObject {

	NSMutableDictionary* _dataProvidersBySectionID;

}
+(id)sharedInstance;
-(void)_noteInstalledAppsDidChange:(id)arg1 ;
-(void)_notePushStoreAppsDidChange:(id)arg1 ;
-(void)_noteRemotePushAppsDidChange:(id)arg1 ;
-(void)reloadDataProviders;
-(id)createDataProviderWithSectionID:(id)arg1 ;
-(void)_reloadDataProviders:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
