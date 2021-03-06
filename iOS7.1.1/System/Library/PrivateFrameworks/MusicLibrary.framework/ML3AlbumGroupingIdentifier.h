/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	long long _albumArtistPersisentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	long long _seasonNumber;
	bool _compilation;

}

@property (nonatomic,readonly) long long albumArtistPersisentID;              //@synthesize albumArtistPersisentID=_albumArtistPersisentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                          //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                            //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) long long seasonNumber;                        //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) bool compilation;                              //@synthesize compilation=_compilation - In the implementation block
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5 ;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5 inLibrary:(id)arg6 ;
-(long long)albumArtistPersisentID;
-(id)groupingKey;
-(id)feedURL;
-(long long)seasonNumber;
-(bool)compilation;
@end

