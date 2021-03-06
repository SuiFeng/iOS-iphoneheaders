/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {

	NSMutableArray* _deletionInfos;

}
+(void)waitForAllDelayedDeletionsToFinish;
+(void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2 ;
+(id)deletionsFromChangeHubEvent:(id)arg1 ;
+(id)filesystemDeletionQueue;
-(void)dealloc;
-(id)debugDescription;
-(void)addFilesystemDeletionInfo:(id)arg1 ;
-(void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithFilesystemDeletionInfos:(id)arg1 ;
@end

