/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol SyncingHistoryItem <NSObject,NSCopying,MapsSynced>
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) double position; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@required
-(void)setSyncIdentifier:(id)arg1;
-(NSString *)syncIdentifier;
-(BOOL)isValid;
-(void)setPosition:(double)arg1;
-(double)position;

@end

