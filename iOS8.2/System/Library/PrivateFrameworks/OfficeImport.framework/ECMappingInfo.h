/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ECMappingInfo : NSObject {

	NSString* mSheetName;

}

@property (nonatomic,readonly) NSString * sheetName; 
@property (nonatomic,readonly) int rowOffset; 
@property (nonatomic,readonly) int columnOffset; 
+(id)mappingInfoWithSheetName:(id)arg1 ;
-(void)dealloc;
-(int)rowOffset;
-(id)initWithSheetName:(id)arg1 ;
-(int)columnOffset;
-(NSString *)sheetName;
@end

