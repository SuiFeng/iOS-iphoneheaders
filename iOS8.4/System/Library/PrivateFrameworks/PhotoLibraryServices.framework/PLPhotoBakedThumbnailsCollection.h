/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

@interface PLPhotoBakedThumbnailsCollection : NSObject {

	NSData* _data;
	NSMutableDictionary* _bakedThumbnails;

}
+(void)setTesting:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)saveToFile:(id)arg1 ;
-(void)_parseDataWithContentsOfFile:(id)arg1 ;
-(id)availableFormats;
-(id)bakedThumbnailsForFormat:(int)arg1 ;
-(void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2 ;
@end
