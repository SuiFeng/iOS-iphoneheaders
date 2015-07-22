/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <Maps/GEOResourceManifestTileGroupObserver.h>

@class GEOResourceManifestDownload, NSError, NSString;

@interface ActiveTileGroupDebugController : AuxiliaryDebugViewController <GEOResourceManifestTileGroupObserver> {

	GEOResourceManifestDownload* _resourceManifest;
	NSError* _resourceManifestError;
	char _canChangeTileGroup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationDestinationTitle;
-(void)activeTileGroupOverridesDidChange:(id)arg1 ;
-(id)initWithResourceManifest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end
