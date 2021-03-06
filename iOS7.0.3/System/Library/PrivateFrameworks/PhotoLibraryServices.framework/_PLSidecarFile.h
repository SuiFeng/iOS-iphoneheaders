/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset;

@interface _PLSidecarFile : PLManagedObject

@property (nonatomic,@dynamic,retain) NSString * originalFilename; 
@property (nonatomic,@dynamic,retain) NSNumber * index; 
@property (assign) short indexValue; 
@property (nonatomic,@dynamic,retain) NSDate * captureDate; 
@property (nonatomic,@dynamic,retain) NSDate * modificationDate; 
@property (nonatomic,@dynamic,retain) NSString * filename; 
@property (nonatomic,@dynamic,retain) NSString * uniformTypeIdentifier; 
@property (nonatomic,@dynamic,retain) NSNumber * compressedSize; 
@property (assign) int compressedSizeValue; 
@property (nonatomic,@dynamic,retain) PLManagedAsset * asset; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setIndexValue:(short)arg1 ;
-(short)indexValue;
-(short)primitiveIndexValue;
-(void)setPrimitiveIndexValue:(short)arg1 ;
-(int)compressedSizeValue;
-(void)setCompressedSizeValue:(int)arg1 ;
-(int)primitiveCompressedSizeValue;
-(void)setPrimitiveCompressedSizeValue:(int)arg1 ;
@end

