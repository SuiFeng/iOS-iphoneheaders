/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid {

	NSString* _folderID;

}

@property (copy) NSString * folderID; 
-(void)dealloc;
-(id)description;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(NSString *)folderID;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 account:(id)arg3 folderID:(id)arg4 ;
-(void)setFolderID:(NSString *)arg1 ;
-(id)_folderID;
@end

