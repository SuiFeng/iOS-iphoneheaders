/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <GenerationalStorage/GSLibraryProtocol.h>

@class NSString, GSTemporaryStorage;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {

	GSTemporaryStorage* _ts;

}

@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSObject*<GSAdditionStoring>)storage;
-(NSString *)nameSpace;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2 ;
@end

