/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, QLPackageChecker;

@interface QLPathTree : NSObject {

	NSString* _path;
	NSMutableDictionary* _directoryChildren;
	NSMutableArray* _packageChildren;
	QLPackageChecker* _packageChecker;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)initWithPath:(id)arg1 isPackage:(char)arg2 packageChecker:(id)arg3 ;
-(void)addPathInsidePackage:(id)arg1 ;
-(void)addPathComponents:(id)arg1 ;
-(void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 atIndex:(unsigned*)arg3 uiIndex:(unsigned*)arg4 level:(int)arg5 ;
-(id)initWithPackageChecker:(id)arg1 ;
-(void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(char)isPackage;
-(void)addPath:(id)arg1 ;
-(char)isFolder;
@end

