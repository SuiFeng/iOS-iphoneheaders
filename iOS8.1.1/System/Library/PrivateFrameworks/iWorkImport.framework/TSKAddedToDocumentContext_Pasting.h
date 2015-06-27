/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKAddedToDocumentContext.h>

@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {

	NSMutableArray* mAddedDrawables;
	CFDictionaryRef mTableIDMap;

}
-(BOOL)autoUpdateSmartFields;
-(id)addedDrawables;
-(CFDictionaryRef)tableIDMap;
-(void)setTableIDMap:(CFDictionaryRef)arg1 ;
-(BOOL)wasPasted;
-(BOOL)uniqueBookmarks;
-(BOOL)syncChanges;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addDrawable:(id)arg1 ;
@end
