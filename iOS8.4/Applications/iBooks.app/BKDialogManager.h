/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUDialogManager.h>
#import <iBooks/SUDialogDelegate.h>

@class NSString;

@interface BKDialogManager : SUDialogManager <SUDialogDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forceDisplayValue;
+(id)forceDisplayKey;
-(char)isDialogForceDisplay:(id)arg1 ;
-(char)presentDialog:(id)arg1 ;
-(char)presentDialogForError:(id)arg1 ;
@end
