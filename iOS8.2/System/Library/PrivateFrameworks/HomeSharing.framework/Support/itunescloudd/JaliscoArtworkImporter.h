/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudArtworkImporter.h>

@interface JaliscoArtworkImporter : CloudArtworkImporter
-(void)_importOriginalItemArtwork;
-(void)_importOriginalScreenshots;
-(void)importAllItemArtworkAndScreenshots;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end
