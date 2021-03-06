/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {

	TSWPStorage* _storage;
	NSRange _range;
	<TSWPStyleProvider>* _styleProvider;

}

@property (nonatomic,readonly) NSRange storageRange;              //@synthesize range=_range - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 range:(NSRange)arg3 styleProvider:(id)arg4 ;
-(NSRange)storageRange;
-(void)dealloc;
-(id).cxx_construct;
@end

