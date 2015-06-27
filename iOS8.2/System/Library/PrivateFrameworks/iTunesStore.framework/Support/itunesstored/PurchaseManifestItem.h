/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber, NSString, NSDictionary;

@interface PurchaseManifestItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSNumber * libraryPersistentIdentifier; 
@property (nonatomic,copy) NSString * relativeArtworkPath; 
@property (nonatomic,copy) NSString * relativeFeedAssetPath; 
@property (nonatomic,copy) NSString * relativeMediaAssetPath; 
@property (nonatomic,copy) NSString * relativeMetadataPath; 
@property (nonatomic,readonly) NSDictionary * manifestItemDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(NSDictionary *)manifestItemDictionary;
-(id)initWithManifestItemDictionary:(id)arg1 ;
-(NSString *)relativeMetadataPath;
-(void)setRelativeMetadataPath:(NSString *)arg1 ;
-(void)setRelativeArtworkPath:(NSString *)arg1 ;
-(void)setRelativeMediaAssetPath:(NSString *)arg1 ;
-(void)setRelativeFeedAssetPath:(NSString *)arg1 ;
-(NSString *)relativeArtworkPath;
-(NSString *)relativeMediaAssetPath;
-(NSString *)relativeFeedAssetPath;
-(NSNumber *)libraryPersistentIdentifier;
-(void)setLibraryPersistentIdentifier:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
@end
