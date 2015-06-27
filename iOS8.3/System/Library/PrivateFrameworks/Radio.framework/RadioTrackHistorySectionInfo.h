/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>
#import <Radio/NSFetchedResultsSectionInfo.h>
#import <Radio/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {

	NSString* _indexTitle;
	NSString* _name;
	unsigned _numberOfObjects;
	NSArray* _objects;

}

@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                 //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
-(NSString *)indexTitle;
-(unsigned)numberOfObjects;
-(NSArray *)objects;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
