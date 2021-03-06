/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration> {

	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _reservedEntityDescription : 29;
	}  _managedObjectModelFlags;

}
+(id)_modelPathsFromBundles:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(id)modelByMergingModels:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(void)initialize;
+(id)mergedModelFromBundles:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(id)_entityForName:(id)arg1 ;
-(void)_removeEntity:(id)arg1 ;
-(void)_setIsEditable:(bool)arg1 ;
-(void)_flattenProperties;
-(bool)_isOptimizedForEncoding;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(id)_localizationPolicy;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
-(bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(void)_setIsEditable:(bool)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(bool)_hasPrecomputedKeyOrder;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(void)_removeEntityNamed:(id)arg1 ;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(id)_configurationsByName;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(id)_versionIdentifiersAsArray;
-(bool)isEditable;
-(id)versionHash;
-(void)_addEntity:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(id)entitiesForConfiguration:(id)arg1 ;
-(id)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(id)versionIdentifiers;
-(void)setEntities:(id)arg1 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(void)setVersionIdentifiers:(id)arg1 ;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(id)configurations;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)entityVersionHashesByName;
-(bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)entitiesByName;
-(id)entities;
@end

