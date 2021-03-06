/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class GEOTileDBWriter, GEOTileDBReader, NSString, NSMapTable, NSMutableArray, NSLock;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver> {

	GEOTileDBWriter* _dbWriter;
	GEOTileDBReader* _dbReader;
	NSString* _cacheLocation;
	NSMapTable* _providers;
	NSMutableArray* _inProgress;
	NSLock* _inProgressLock;

}
-(void)dealloc;
-(void)close;
-(id)initWithCacheLocation:(id)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)registerProvider:(Class)arg1 ;
-(void)flushPendingWrites;
-(bool)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(void)_registerBuiltInProviders;
-(void)_updateExpiringTilesets;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 forKey:(GEOTileKey)arg5 userInfo:(id)arg6 ;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)open;
@end

